;
; Fast background save
;
; TI calculators version
;

	XLIB    bksave
	LIB	pixeladdress

	INCLUDE	"grafix.inc"

.bksave
        ld      hl,2   
        add     hl,sp
        ld      e,(hl)
        inc     hl
        ld      d,(hl)  ;sprite address
	push	de
	pop	ix

        inc     hl
        ld      e,(hl)  
 	inc	hl
        inc     hl
        ld      d,(hl)	; x and y coords

	ld	h,d
	ld	l,e

	call	pixeladdress
	xor	7

	ld	h,d
	ld	l,e

	ld	(ix+2),h	; we save the current sprite position
	ld	(ix+3),l

	ld	a,(ix+0)
	ld	b,(ix+1)
	cp	9
	jr	nc,bksavew

._sloop
	push	bc
	push	hl
	ld	a,(hl)
	ld	(ix+4),a
	inc	hl
	ld	a,(hl)
	ld	(ix+5),a
	inc	ix
	inc	ix

	pop	hl
	ld      bc,row_bytes      ;Go to next line
	add     hl,bc
	
	pop	bc
	
	djnz	_sloop
	ret

.bksavew
	push	bc
	push	hl
	ld	a,(hl)
	ld	(ix+4),a
	inc	hl
	ld	a,(hl)
	ld	(ix+5),a
	inc	hl
	ld	a,(hl)
	ld	(ix+6),a
	inc	ix
	inc	ix
	inc	ix

	pop	hl
	ld	bc,row_bytes      ;Go to next line
	add	hl,bc
	
	pop	bc
	
	djnz	bksavew
	ret
