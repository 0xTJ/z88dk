
; void clearerr_unlocked(FILE *stream)

XDEF _clearerr_unlocked

_clearerr_unlocked:

   pop af
   pop ix
   
   push ix
   push af
   
   INCLUDE "stdio/z80/asm_clearerr_unlocked.asm"
