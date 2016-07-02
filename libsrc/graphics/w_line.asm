	INCLUDE	"graphics/grafix.inc"
	
        SECTION code_clib
	PUBLIC	w_line

	EXTERN	w_line_r

	EXTERN	__gfx_coords

;
;	$Id: w_line.asm,v 1.7 2016-07-02 09:01:35 dom Exp $
;

; ******************************************************************************
;
;	Draw a pixel line from (x0,y0) defined in COORDS (word,word) - the starting point coordinate,
;	to the end point (HL,DE).
;
;       Wide resolution (WORD based parameters) version by Stefano Bodrato
;

.w_line
		ex	de,hl
		ld	bc,(__gfx_coords+2)
		or	a
		sbc	hl,bc
		ex	de,hl

		ld	bc,(__gfx_coords)
		or	a
		sbc	hl,bc
.nocrossx
		jp	w_line_r
