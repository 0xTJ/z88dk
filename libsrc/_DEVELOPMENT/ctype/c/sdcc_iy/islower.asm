
; int islower(int c)

SECTION code_ctype

PUBLIC _islower

EXTERN asm_islower, error_zc

_islower:

   pop af
   pop hl
   
   push hl
   push af

   inc h
   dec h
   jp nz, error_zc

   ld a,l
   call asm_islower
   
   ld l,h
   ret c
   
   inc l
   ret
