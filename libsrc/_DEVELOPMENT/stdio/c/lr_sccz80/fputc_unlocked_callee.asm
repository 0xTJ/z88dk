
; int fputc_unlocked(int c, FILE *stream)

XDEF fputc_unlocked_callee, putc_unlocked_callee

fputc_unlocked_callee:
putc_unlocked_callee:

   pop af
   pop ix
   pop de
   push af
   
   INCLUDE "../../z80/asm_fputc_unlocked.asm"
