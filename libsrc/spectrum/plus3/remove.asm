;
;	z88dk - Spectrum +3 stdio Library
;
;	djm 10/4/2000
;
;	int remove(far char *name)
;
;	Being on a +3 we ignore the far stuff


		XLIB	remove
		XREF	dodos


.remove
	pop	bc
	pop	hl	;filename
	push	hl
	push	bc
	ld	iy,292	;DOS_DELETE
	call	dodos
	ld	hl,0
	ret	c	;OK
	dec	hl
	ret

	



