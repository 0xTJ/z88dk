;
;       Z88 Graphics Functions - Small C+ stubs
;
;       Written around the Interlogic Standard Library
;
;       Stubs Written by D Morris - 30/9/98
;
;
;	$Id: drawb.asm,v 1.3 2001-04-18 13:21:37 stefano Exp $
;


                XLIB    drawb

                LIB     drawbox
                LIB     plotpixel
                LIB     swapgfxbk
		XREF	swapgfxbk1


.drawb
		ld	ix,0
		add	ix,sp
		ld	b,(ix+2)
		ld	c,(ix+4)
		ld	l,(ix+6)
		ld	h,(ix+8)
                ld      ix,plotpixel
                call    swapgfxbk
                call    drawbox
                jp      swapgfxbk1

