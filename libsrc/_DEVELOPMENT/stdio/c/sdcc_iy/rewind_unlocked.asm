
; void rewind_unlocked(FILE *stream)

XDEF rewind_unlocked

rewind_unlocked:

   pop af
   pop ix
   
   push ix
   push af
   
   INCLUDE "stdio/z80/asm_rewind_unlocked.asm"
