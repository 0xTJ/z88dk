;
; 	ANSI Video handling for the ZX81
;	By Stefano Bodrato - Apr. 2000
;
; 	Clean a text line
;
; in:	A = text row number
;


	XLIB	ansi_del_line


.ansi_del_line
	ld	hl,(16396)
	inc	hl
	and	a
	jr	z,isz
	ld	de,33
	ld	b,a
.gorow
	add	hl,de
	djnz	gorow
.isz
	ld	b,32
.filler
	ld	(hl),128
	inc	hl
	djnz	filler
	ret
