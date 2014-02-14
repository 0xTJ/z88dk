
; int isxdigit(int c)

XLIB isxdigit

LIB asm_isxdigit, error_zc

isxdigit:

   pop af
   pop hl
   
   push hl
   push af

   inc h
   dec h
   jp nz, error_zc

   ld a,l
   call asm_isxdigit
   
   ld l,h
   ret c
   
   inc l
   ret
