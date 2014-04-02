
; int isupper(int c)

XLIB _isupper

LIB asm_isupper, error_zc

_isupper:

   pop af
   pop hl
   
   push hl
   push af

   inc h
   dec h
   jp nz, error_zc

   ld a,l
   call asm_isupper
   
   ld l,h
   ret c
   
   inc l
   ret
