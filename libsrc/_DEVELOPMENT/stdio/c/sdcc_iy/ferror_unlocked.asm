
; int ferror_unlocked(FILE *stream)

PUBLIC _ferror_unlocked

_ferror_unlocked:

   pop af
   pop ix
   
   push ix
   push af
   
   INCLUDE "stdio/z80/asm_ferror_unlocked.asm"
