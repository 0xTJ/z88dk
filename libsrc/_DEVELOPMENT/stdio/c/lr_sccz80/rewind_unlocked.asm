
; void rewind_unlocked(FILE *stream)

PUBLIC rewind_unlocked

rewind_unlocked:

   push hl
   pop ix
   
   INCLUDE "stdio/z80/asm_rewind_unlocked.asm"
