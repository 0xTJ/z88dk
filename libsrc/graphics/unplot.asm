;
;       Z88 Graphics Functions - Small C+ stubs
;
;       Written around the Interlogic Standard Library
;
;       Stubs Written by D Morris - 30/9/98
;
;


;Usage: plot(struct *pixel)


                INCLUDE "grafix.inc"    /* Contains fn defs */

                XLIB    unplot
                LIB     swapgfxbk

                LIB     respixel



.unplot
		ld	ix,0
		add	ix,sp
		ld	l,(ix+2)
		ld	h,(ix+4)
                call    swapgfxbk
                call    respixel
                jp      swapgfxbk

