;
; 	ANSI Video handling for the Jupiter ACE
;
;	Stefano Bodrato - Feb. 2001
;
; 	Handles colors referring to current PAPER/INK/etc. settings
;
;	Scrollup
;

	XLIB	ansi_SCROLLUP


.ansi_SCROLLUP
	ld	hl,$2420
	ld	de,$2400
	ld	bc,(32*24)-32
	ldir
	ld	hl,$2400+(32*24)-32
	ld	(hl),32 ;' '
	ld	d,h
	ld	e,l
	inc	de
	ld	bc,31
	ldir
	ret
