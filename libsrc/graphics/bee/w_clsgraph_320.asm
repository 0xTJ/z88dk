;
;       MicroBEE pseudo graphics routines
;		High Resolution version
;
;       cls ()  -- clear screen
;
;       Stefano Bodrato - 2016
;
;
;       $Id: w_clsgraph_320.asm,v 1.1 2016-11-23 14:01:13 stefano Exp $
;

			SECTION   code_clib
			PUBLIC    cleargraphics

			EXTERN	swapgfxbk
			EXTERN	swapgfxbk1

			INCLUDE	"graphics/grafix.inc"


.cleargraphics

	call swapgfxbk

	ld	a,64
	out (8),a
	;ld  d,15	;
	ld  d,7*16	; black on white
	call setattr
	xor a
	out (8),a

	; clean PCG characters (16K): 8 banks x 128 characters x 16 bytes.. (11 bytes used only)
	ld	d,0		; zero for PCG data
	ld	b,8
.pcg_loop
;	inc d
	ld	a,b
	dec a
	or 128		; premium graphics on
	out ($1c),a
	call setattr
	djnz pcg_loop
	

	jp	swapgfxbk1


.setattr
		push bc
		ld	hl,0
		ld	e,d
		ld	b,64
		add	hl,sp
		ld	sp, 65535
.clgloop
		push	de
		push	de
		push	de
		push	de

		push	de
		push	de
		push	de
		push	de

		push	de
		push	de
		push	de
		push	de

		push	de
		push	de
		push	de
		push	de

		djnz	clgloop

		ld	sp,hl
		pop bc
		ret


;	push bc
;	ld	hl,$F800
;	ld	bc,2048
;.clean
;	inc	hl
;	ld	a,d
;	ld	(hl),a
;	dec	bc
;	ld	a,b
;	or	c
;	jr	nz,clean
;	pop bc
;	ret