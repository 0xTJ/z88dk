
; int ispunct(int c)

XLIB _ispunct

LIB asm_ispunct, error_zc

_ispunct:

   pop af
   pop hl
   
   push hl
   push af

   inc h
   dec h
   jp nz, error_zc

   ld a,l
   call asm_ispunct
   
   ld l,h
   ret c
   
   inc l
   ret
