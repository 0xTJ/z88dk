
; int isspace(int c)

XLIB _isspace

LIB asm_isspace, error_zc

_isspace:

   pop af
   pop hl
   
   push hl
   push af

   inc h
   dec h
   jp nz, error_zc

   ld a,l
   call asm_isspace
   
   ld l,h
   ret c
   
   inc l
   ret
