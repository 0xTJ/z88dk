
; void flockfile(FILE *file)

PUBLIC _flockfile

_flockfile:

   pop af
   pop bc
   
   push bc
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   
   call asm_flockfile
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_flockfile.asm"
