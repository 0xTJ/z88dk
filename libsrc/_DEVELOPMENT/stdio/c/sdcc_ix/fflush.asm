
; int fflush(FILE *stream)

XDEF _fflush

_fflush:

   pop af
   pop bc
   
   push bc
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   
   call asm_fflush
   
   pop ix
   ret

   INCLUDE "stdio/z80/asm_fflush.asm"
