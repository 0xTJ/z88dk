;
;	MSX specific routines
;
;	GFX - a small graphics library 
;	Copyright (C) 2004  Rafael de Oliveira Jannone
;
;	extern void msx_vwrite(void *source, u_int dest, u_int count)
;
;	Transfer count bytes from RAM to VRAM (current memory page)
;
;	$Id: msx_vwrite_direct.asm,v 1.1 2009-01-13 21:24:29 stefano Exp $
;


	XLIB	msx_vwrite_direct
	
	LIB     msxbios
	
        INCLUDE "#msxbios.def"


msx_vwrite_direct:

        ld      ix,2
        add     ix,sp

	ld c, (ix+0)	; count
	ld b, (ix+1)

	ld l, (ix+2)	; dest
	ld h, (ix+3)

	ld e, (ix+4)	; source
	ld d, (ix+5)

	ld	ix,SETWRT
	call	msxbios

wrtloop:
	ld	a,(de)
	out	($98),a
	inc	de
	dec	bc
	ld	a,c
	or	b
	jr	nz,wrtloop
	ret

