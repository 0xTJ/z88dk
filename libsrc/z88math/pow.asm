;
;
;       Z88 Maths Routines
;
;       C Interface for Small C+ Compiler
;
;       7/12/98 djm


;double pow(double x,double y)  
;y is in the FA
;x is on the stack +8 (+2=y) 

                INCLUDE  "#fpp.def"

                XLIB    pow

                XREF    fsetup
                XREF    stkequ2
                XREF    fa


.pow
        ld      ix,8
        add     ix,sp
        ld      l,(ix+1)
        ld      h,(ix+2)
        ld      de,(fa+1)
        exx                     ;main set
        ld      c,(ix+5)
        ld      l,(ix+3)
        ld      h,(ix+4)
        ld      de,(fa+3)
        ld      a,(fa+5)
        ld      b,a
        fpp(FP_PWR)
        jp      stkequ2

