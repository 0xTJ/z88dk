;
;       TI Gray Library Functions
;
;       Written by Stefano Bodrato - Mar 2001
;
;
;	$Id: g_drawr.asm,v 1.4 2014-04-18 09:30:31 stefano Exp $
;

;Usage: g_drawr(int px, int py, int GrayLevel)

                XLIB    g_drawr

		XREF	coords

                LIB     line_r
                LIB     plotpixel
                LIB     respixel
                LIB     graypage


.g_drawr
		ld	ix,0
		add	ix,sp
		ld	a,(ix+2)	;GrayLevel
		ld	e,(ix+4)	;py
		ld	d,(ix+5)
		ld	l,(ix+6)	;px
		ld	h,(ix+7)

		ld	bc,(coords)
		push	bc
		push	af
		xor	a
		call	graypage
		pop	af
		
                ld	ix,plotpixel
		rra
		jr	nc,set1
                ld	ix,respixel
.set1
		push	af
		push	hl
		push	de
                call	line_r
                pop	de
		pop	hl
		pop	af

		pop	bc
		ld	(coords),bc
		push	af
		ld	a,1
		call	graypage
		pop	af
		
                ld	ix,plotpixel
		rra
		jr	nc,set2
                ld	ix,respixel
.set2
                jp	line_r
