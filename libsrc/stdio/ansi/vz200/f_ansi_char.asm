;
; 	ANSI Video handling for the VZ200
;
;	set it up with:
;	.text_cols	= max columns
;	.text_rows	= max rows
;
;	Display a char in location (ansi_ROW),(ansi_COLUMN)
;	A=char to display
;

	XLIB	ansi_CHAR
	
	XDEF	text_cols
	XDEF	text_rows

	XREF	ansi_ROW
	XREF	ansi_COLUMN
	
	XREF	vz_inverse

.text_cols   defb 32
.text_rows   defb 16


.ansi_CHAR

; 193 Inverse characters starting from "@".
; 64  "@" char (as normal).
; 127-192 Pseudo-Graphics Chars (like ZX81)

	; Some undercase text?  Transform in UPPER !
	cp	97
	jr	c,isupper
	sub	32
.isupper
	and	@00111111
	ld	hl,vz_inverse
	or	(hl)

.setout
	push	af
	ld	hl,$7000
	ld	a,(ansi_ROW)
	and	a
	jr	z,r_zero
	ld	b,a
	ld	de,32
.r_loop
	add	hl,de
	djnz	r_loop
.r_zero
	ld	a,(ansi_COLUMN)
	ld	d,0
	ld	e,a
	add	hl,de
	pop	af
	ld	(hl),a
	ret

