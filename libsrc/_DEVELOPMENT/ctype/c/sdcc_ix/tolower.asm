
; int tolower(int c)

PUBLIC _tolower

EXTERN asm_tolower

_tolower:

   pop af
   pop hl
   
   push hl
   push af

   inc h
   dec h
   ret nz

   ld a,l
   call asm_tolower
   
   ld l,a
   ret
