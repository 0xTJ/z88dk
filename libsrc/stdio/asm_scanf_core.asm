


	EXTERN asm_isspace
	EXTERN asm_isdigit
	EXTERN asm_isxdigit
	EXTERN asm_isodigit
	EXTERN asm_isbdigit
	EXTERN asm_toupper
	EXTERN l_long_mult

; int vfscanf1(FILE *fp, void __CALLEE__ ungetc_func(int c, FILE *fp), void __CALLEE__ (*getchar_fn)(FILE *fp), int sccz80, unsigned char *fmt,void *ap)

	ld	ix,0
	add	ix,sp		; Now the frame pointer
				; ix+2, ix+3 = arg pointer
	ld	hl,-10		; make some space on the stack
	add	hl,sp
	ld	sp,hl

	; -1, -2 = conversions done
        ; -3 = flags [000a*WL0]
	; -4 = width
	; -5, -6 = bytes read from stream
	xor	a
	ld	(ix-1),a
	ld	(ix-2),a
	ld	(ix-4),a
	ld	(ix-5),a

        ld      l,(ix+4)        ;format pointer
        ld      h,(ix+5)

loop:
	ld	(ix-3),0	;reset flags for each loop
	ld	a,(hl)
	and	a
	jr	z,scanf_exit

	inc	hl
	cp	'%'
	jr	z,is_percent
	ld	c,a		;save character
	call	asm_isspace
	jr	nz, scanf_ordinary_char
	call	consume_whitespace
	jr	loop

; It's an ordinary char
scanf_ordinary_char:
	call	scanf_getchar
	jr	c,scanf_exit
	cp	c
	jr	z,loop
	call	scanf_ungetchar
scanf_exit:
   ; ISO C has us exit with # conversions done
   ; or -1 if no chars were read from the input stream
	ld	a,(ix-1)
	ld	hl,10
	add	hl,sp
	ld	sp,hl
	ld	l,a
	ld	h,0
	ret

consume_whitespace:
	call	scanf_getchar
	ret	c
	call	asm_isspace
	jr	z,consume_whitespace
	call	scanf_ungetchar		;push back the non-matching character
	and	a
	ret
	
is_percent:
	; % {flags} [*] [width] [l] "[diouxXeEfFscpPbn"


	; Consider those that aren't affected by a long modifier first
	ld	a,(hl)
	cp	'c'
	jp	z,handle_c_fmt
	cp	's'
	jp	z,handle_s_fmt
;	cp	'n'
;	jr	z,handle_n_fmt
	cp	'l'
	jr	nz, not_long_specifier
	inc	hl
	set	1,(ix-3)
not_long_specifier:
	ld	a,(hl)
	inc	hl
	cp	'd'
	jr	z,handle_d_fmt
	cp	'x'
	jr	z,handle_x_fmt
	cp	'X'
	jr	z,handle_x_fmt
	cp	'p'
	jr	z,handle_x_fmt
	cp	'P'
	jr	z,handle_x_fmt
	cp	'o'
	jr	z,handle_o_fmt
	cp	'b'
	jr	z,handle_b_fmt
	cp	'u'
	jp	nz,loop			;unrecognised format
handle_d_fmt:
	call	scanf_common_start	;de=argument as necessary
	jr	c,scanf_exit
	call	asm_isdigit
	jr	c,scanf_exit
	; So there's a decimal number on the stream
	ld	b,10			;radix
parse_number:
	call	scanf_ungetchar
	call	scanf_get_number
	jp	loop

handle_o_fmt:
	call	scanf_common_start	;de=argument
	jr	c,scanf_exit
	call	asm_isodigit		;is it actually octal?
	jr	c,scanf_exit
	ld	b,8
	jr	parse_number

handle_b_fmt:
	call	scanf_common_start
	jr	c,scanf_exit
	cp	'%'
	jr	nz,handle_b_fmt_nobase
	call	scanf_getchar
	jp	c,scanf_exit
handle_b_fmt_nobase:
	call	asm_isbdigit
	jp	c,scanf_exit
	ld	b,2	
	jr	parse_number

handle_x_fmt:
	call	scanf_common_start	;de=argument as necessary
	jp	c,scanf_exit
	cp	'0'
	jr	nz,handle_x_fmt_nobase
	call	scanf_getchar
	jr	c,only_0_on_stream	;there's only a 0 on the stream
	cp	'x'
	jr	z,handle_x_fmt_leader_found
	cp	'X'
	jr	z,handle_x_fmt_leader_found
	call	asm_isxdigit		;is it a hex digit?
	ld	b,16			;radix
	jr	nc,parse_number		;So parse it in - we can ignore the leading
					;0 since it doesn't change the value
only_0_on_stream:
	; There's only a zero on the stream, but we've read two characters from
	; it and we can't push back two, so fudge it a little
        bit     3,(ix-3)
	jp	nz,loop			;carry on
	inc	(ix-1)			;number of converted arguments
	xor	a	
	ld	(de),a
	inc	de
	ld	(de),a
	bit	1,(ix-3)
	jp	z,loop
	inc	de
	ld	(de),a
	inc	de
	ld	(de),a
	jp	loop

handle_x_fmt_leader_found:	
	call	scanf_getchar
	jp	c,scanf_exit
handle_x_fmt_nobase:
	call	asm_isxdigit
	jp	c,scanf_exit		;it wasn't a hex digit
	ld	b,16
	jr	parse_number


handle_c_fmt:
	ld	b,1		;width
	bit	2,(ix-3)	;is there a width specified?
	jr	z,c_fmt_get_buf
	ld	b,(ix-4)	;width
c_fmt_get_buf:
	call	scanf_nextarg	;de = destination
c_fmt_loop:
	call	scanf_getchar
	jp	c,scanf_exit	;error occurred
	ld	(de),a
	inc	de
	djnz	c_fmt_loop
	inc	(ix-1)		;increment number of conversions done
	jp	loop

handle_s_fmt:
	bit	3,(ix-3)
	call	z,scanf_nextarg		;de=destination
	ld	b,(ix-4)		;b=width
scanf_fmt_s_width_specified:
	call	consume_whitespace
	jp	c,scanf_exit
	call	scanf_getchar
	jr	nc,scanf_fmt_s_join
	jp	scanf_exit
scanf_fmt_s_loop:
	call	scanf_getchar
	jr	c,scanf_fmt_s_done
	call	asm_isspace
	jr	z,scanf_fmt_s_success
scanf_fmt_s_join:
	bit	3,(ix-3)	;we're not setting
	jr	nz,scanf_fmt_s_suppress
	ld	(de),a
	inc	de
scanf_fmt_s_suppress:
	bit	2,(ix-3)	;if no width specifier just loop
	jr	z,scanf_fmt_s_loop
	djnz	scanf_fmt_s_loop
scanf_fmt_s_done:
	xor	a
	bit	3,(ix-1)	;suppress setting
	jp	nz,loop		
	ld	(de),a		;terminating \0
	inc	(ix-1)		;increase number of conversions done
	jp	loop
scanf_fmt_s_success:	
	call	scanf_ungetchar
	jr	scanf_fmt_s_done



; Common start code for formats
scanf_common_start:
	bit	3,(ix-3)	; suppressing assignment
	call	z,scanf_nextarg
	call	consume_whitespace
	ret	c
	call	consume_sign
	ret	c
	jp	scanf_getchar

consume_sign:
	call	scanf_getchar
	ret	c
	cp	'-'
	jr	nz,notneg
	set	0,(ix-3)	; set sign flag
	ret
notneg:
	cp	'+'
	ret	z
	jp	scanf_ungetchar


scanf_nextarg:
	push	hl	;hl=fmt, save it
	ld	l,(ix+2)
	ld	h,(ix+3)
	ld	e,(hl)
	inc	hl
	ld	d,(hl)		;de = buffer, hl=ap+1
	bit	0,(ix+6)	;sccz80 flag
	jr	nz,scanf_nextarg_decrement
	inc	hl
scanf_nextarg_exit:
	ld	(ix+2),l
	ld	(ix+3),h
	pop	hl	;restore fmt
	ret
scanf_nextarg_decrement:
	dec	hl
	dec	hl
	dec	hl
	jr	scanf_nextarg_exit

	
scanf_getchar:
	push	bc		;save callers
	push	de		;save dest
	push	hl		;fmt
	push	ix		;frame pointer
	ld	c,(ix+12)	;fp
	ld	b,(ix+13)
	push	bc
	ld	bc,scanf_getchar_return
	push	bc
	ld	l,(ix+8)
	ld	h,(ix+9)
	jp	(hl)
scanf_getchar_return:
	ld	a,h	
	or	l
	inc	a	; if eof then 0
	ld	a,l	; set the return value
	scf
	jr	z,scanf_getchar_return1
	and	a	;reset carry
scanf_getchar_return1:
	pop	ix
	pop	hl
	pop	de
	pop	bc
	ret

; a=char to unget
scanf_ungetchar:
	push	bc
	push	de
	push	hl		;fmt
	push	ix		;frame pointer
	ld	c,a		;character to unget
	ld	b,0
	push	bc
	ld	c,(ix+12)	;fp
	ld	b,(ix+13)
	push	bc
	ld	bc,scanf_getchar_return1
	push	bc
	ld	l,(ix+10)
	ld	h,(ix+11)
	jp	(hl)

; hl = fmt
; de = destination
;  b = radix
scanf_get_number:
	push	hl		;save fmt
	push	de		;save destination
	call	scanf_atoul
scanf_get_number_store:
	and	a		;clear carry
	bit	0,(ix-3)	;assignment suppressed?
	jr	nz,scanf_getnumber_suppressed
	ex	de,hl		;long is hlde (i.e. reversed)
	ex	(sp),hl		;*sp =top16, hl=destination
	ld	(hl),e
	inc	hl
	ld	(hl),d
	pop	de		;de= most sig word of long

	bit	1,(ix-3)
	jr	z,scanf_getnumber_notlong
	inc	hl
	ld	(hl),e
	inc	hl
	ld	(hl),d
scanf_getnumber_notlong:
	pop	hl		;fmt
	inc	(ix-1)		;number of conversions done
	ret
scanf_getnumber_suppressed:
	pop	hl		;rubbish
	pop	hl		;fmt	
	ret




scanf_atoul:
	ld	de,0		;dehl = result = 0
	ld	l,e
	ld	h,d

scanf_atoul_loop:
	call	scanf_getchar
	ret	c
	ld	c,a
	sub	'0'
	jr	c,scanf_atoul_exit
	cp	10
	jr	c,scanf_atoul_isdigit
	ld	a,c	
	call	asm_toupper
	sub	'A'
	jr	c,scanf_atoul_exit
	add	10
scanf_atoul_isdigit:
	cp	b		;no good if digit exceeds radix
	jr	nc,scanf_atoul_exit
	ld	c,a
	push	bc		;save digit and radix
	push	de		; result on stack
	push	hl
	ld	de,0		; arg2 = radix
	ld	h,d
	ld	l,b		; radix
	call	l_long_mult	; dehl = result * radix
	pop	bc		; b = radix, c = digit
	ld	a,c		; and add on our digit
	add	l
	ld	l,a
	jr	nc,scanf_atoul_loop
	inc	h
	jr	nz,scanf_atoul_loop
	inc	de
	jr	scanf_atoul_loop
scanf_atoul_exit:
	ld	a,c		;get character back
	jr	scanf_ungetchar


	
