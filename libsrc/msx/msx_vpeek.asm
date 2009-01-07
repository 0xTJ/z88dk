;
;	MSX specific routines
;
;	Improved functions by Rafael de Oliveira Jannone
;	Originally released in 2004 for GFX - a small graphics library
;
;	int msx_vpeek(int address);
;
;	Read the MSX video memory
;
;	$Id: msx_vpeek.asm,v 1.3 2009-01-07 09:50:15 stefano Exp $
;

	XLIB	msx_vpeek
	LIB	msxbios
	
        ;INCLUDE "#msxbios.def"
        INCLUDE "#msx.def"


msx_vpeek:
	; (FASTCALL) -> HL = address

	;ld	ix,RDVRM
	;call	msxbios
	
	; enter vdp address pointer
	ld a,l
	di
	out (VDP_CMD), a
	ld a,h
	and 00111111B
	ei
	out (VDP_CMD), a

	; read data
	in a, (VDP_DATA)
	
	ld	h,0
	ld	l,a
	ret

