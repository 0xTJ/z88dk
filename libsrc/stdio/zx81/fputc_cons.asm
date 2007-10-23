;
; 	Basic video handling for the ZX81
;
;	(HL)=char to display
;
;	$Id: fputc_cons.asm,v 1.4 2007-10-23 06:03:56 stefano Exp $
;

	XLIB	fputc_cons
	LIB	asctozx81
	
	DEFC	ROWS=24
	DEFC	COLUMNS=32


.ROW	defb	0
.COLUMN	defb	0


.fputc_cons
	ld	hl,2
	add	hl,sp
	ld	(charpos+1),hl
	ld	a,(hl)

	cp	12
	jr	nz,nocls
	xor	a
	ld	(ROW),a
 	ld	(COLUMN),a
	jp	2602	; CLS
.nocls
	cp 13		; CR
	jr	z,isLF
	cp     10	; LF?
	jr     nz,NoLF
.isLF

	xor a
	ld (COLUMN),a   ; automatic CR
	ld a,(ROW)
	inc a
	ld (ROW),a
	cp ROWS		; Out of screen?
	ret nz		; no, return
	ld a,ROWS-1
	ld (ROW),a
; scroll up
	ld	hl,(16396)
	inc	hl
	ld	d,h
	ld	e,l
	ld	bc,33
	add	hl,bc
	ld	bc,33*23-1
	ldir
	ld	de,32
	sbc	hl,de	; clean last line
	ld	(hl),0
	ld	d,h
	ld	e,l
	inc	de
	ld	bc,31
	ldir
	ret
.NoLF

	cp     8   ; BackSpace

	jr	nz,NoBS
	ld	a,(COLUMN)
	and	a
	jr	z,firstc ; are we in the first column?
	dec	a
	ld	(COLUMN),a
	ret

.firstc
	ld	a,(ROW)
	and	a
	ret	z
	dec	a
	ld	(ROW),a
	ld	a,COLUMNS-1
	ld     (COLUMN),a
 	ret
.NoBS
.charpos
	ld	hl,0
	call	asctozx81

	push	af
	ld	hl,(16396)
	inc	hl
	ld	a,(ROW)
	and	a
	jr	z,r_zero
	ld	b,a
	ld	de,33	; 32+1. Every text line ends with an HALT
.r_loop
	add	hl,de
	djnz	r_loop
.r_zero
	ld	a,(COLUMN)
	ld	d,0
	ld	e,a
	add	hl,de
	pop	af
	ld	(hl),a

	ld	a,(COLUMN)
	inc	a
	ld	(COLUMN),a
	cp	COLUMNS		; last column ?
	ret	nz		; no, return
 	jp	isLF
