
; int ungetc_unlocked(int c, FILE *stream)

SECTION code_stdio

PUBLIC _ungetc_unlocked

_ungetc_unlocked:

   pop af
   pop hl
   pop ix
   
   push hl
   push hl
   push af
   
   INCLUDE "stdio/z80/asm_ungetc_unlocked.asm"
