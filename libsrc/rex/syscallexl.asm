;
;	System Call for REX6000
;
;
; extern LONG SYSCALLEXL( int, ... );
;
; 

		XLIB	syscallexl

; we supply a pointer to a pointer to the args push'd
;
; We need to repush our arguments in the correct order (well, correct for
; the SDK)
; 

.syscallexl
	ld	b,a	;number of parameters give
	add	a,a	
	ld	e,a
	ld	d,0
	ld	ix,0
	ld	hl,sp
	add	ix,de	;hl now points to first given parameter i.e. syscall
	ld	e,(ix+0)
	ld	d,(ix+1)
	ld	($c002),de	;store the actual syscall we want
	dec	ix
	dec	ix
	dec	b		;now holds number of parameters left
; Now we have to get the parameters in the correct order
	ld	c,b		;number of parameters - keep it safe!
.sycallexl1
	ld	l,(ix+0)
	ld	h,(ix+1)
	push	hl
	dec	ix	
	dec	ix
	djnz	syscallexl1
	ld	b,0
	push	bc
	pop	ix		;get number of stack
	ld	hl,0
	add	hl,sp		;address of our parameters
	ld	($c004),hl
	ld	hl,$00ce	;DS_SYSCALL_EXTENDED
	ld	($c000),hl
	rst	$10		;ix survives the call
	ld	b,ixl		;terrible inefficient, but I'm lazy
.syscallexl2
	pop	de
	djnz	syscallexl2
	ld	hl,($c00e)
	ld	de,($c010)	;who knows
	ret



IF INCORRECT
; A holds the number arguments
.syscallexl
	ld	b,a
	add	a,a
	ld	e,a
	ld	d,0
	ld	hl,0
	add	hl,sp
	add	hl,de	;now points to top parameter
	ld	ix,$c000	;start of variables
.lp1
	ld	e,(hl)
	inc	hl
	ld	d,(hl)
	dec	hl
	dec	hl
	dec	hl
	ld	(ix+0),e
	ld	(ix+1),d
	inc	ix
	inc	ix
	djnz	lp1	;loop round till we have to params
	rst	$10	;call the stuff
	ld	hl,($c00e)
	ld	de,($c010)	;who knows
	ret
ENDIF


