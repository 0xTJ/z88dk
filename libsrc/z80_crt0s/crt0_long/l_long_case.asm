;       Small C+ Z80 Run time library
;       The new case statement..maybe things will work now!
;       13/10/98

        XLIB    l_long_case


;Case statement for longs
;Enter with dehl=number to check against..


.l_long_case
        pop     ix              ;switch table
.swloop
        ld      c,(ix+0)
        inc     ix
        ld      b,(ix+1)
        inc     ix
        ld      a,b
        or      c
        jr      z,swend         ;enod of table
;Now, have to check our values
        ld      bc,4
        add     ix,bc           ;points to next entry,,
        ld      a,(ix-4)
        cp      l
        jr      nz,swloop
        ld      a,(ix-3)
        cp      h
        jr      nz,swloop
        ld      a,(ix-2)
        cp      e
        jr      nz,swloop
        cp      d
        jr      nz,swloop
;Have had a match here...so, load up address, and get there
        ld      a,(ix-6)        ;low byte
        ld      ixh,(ix-5)
        ld      ixl,a
.swend
        jp      (ix)
        
