;       Z88 Small C+ Run time Library
;       Moved functions over to proper libdefs
;       To make startup code smaller and neater!
;
;	Quicky to make network progs quicker

                XLIB    l_ghtonsint


.l_ghtonsint
        ld a,(hl)
        inc     hl
        ld l,(hl)
        ld h,a
        ret
