
; void _ldiv_(ldiv_t *ld, long numer, long denom)

XLIB _ldiv_

LIB asm__ldiv

_ldiv_:

   pop af
   pop hl
   pop de
   exx
   pop hl
   pop de
   exx
   pop bc
   
   push bc
   exx
   push de
   push hl
   exx
   push de
   push hl
   push af
   
   jp asm__ldiv
