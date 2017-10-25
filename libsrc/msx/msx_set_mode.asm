;
;	MSX specific routines
;
;	GFX - a small graphics library 
;	Copyright (C) 2004  Rafael de Oliveira Jannone
;
;	extern bool __FASTCALL__ msx_set_mode(unsigned char id);
;
;	set screen mode
;
;	$Id: msx_set_mode.asm $
;

        SECTION code_clib
	PUBLIC	msx_set_mode
	PUBLIC	_msx_set_mode
	
	EXTERN	msxbios

IF FORsvi
    INCLUDE	"msx/vdp.inc"
    INCLUDE "svibios.def"
ENDIF

msx_set_mode:
_msx_set_mode:
IF FORsvi
	ld	a,h
	or	l
	jr	z,txt32
ENDIF
setmode:
	push	ix
	push	hl
	pop	ix
	call	msxbios
	pop	ix
	ret

IF FORsvi
txt32:
	ld    hl,INIGRP		; (Graphics 2)
	call  setmode
	; Now bend the configuration to Graphics 1 (change reg#0)
	xor   a
	di
	out  (VDP_CMD),a
	xor   a
	ei
	out (VDP_CMD),a
	ret
ENDIF

