;
;	MSX specific routines
;
;	GFX - a small graphics library 
;	Copyright (C) 2004  Rafael de Oliveira Jannone
;
;	extern void msx_vwrite(void *source, u_int dest, u_int count)
;
;	Transfer count bytes from RAM to VRAM (BIOS paged version)
;
;	$Id: msx_vwrite.asm,v 1.5 2009-04-15 21:00:58 stefano Exp $
;


	XLIB	msx_vwrite
	
	LIB     msxbios
	
        INCLUDE "#msxbios.def"


msx_vwrite:

        ld      ix,2
        add     ix,sp

	ld c, (ix+0)	; count
	ld b, (ix+1)

	ld e, (ix+2)	; dest
	ld d, (ix+3)
	
	ld l, (ix+4)	; source
	ld h, (ix+5)
	
	ld	ix,LDIRVM
	jp	msxbios
	
