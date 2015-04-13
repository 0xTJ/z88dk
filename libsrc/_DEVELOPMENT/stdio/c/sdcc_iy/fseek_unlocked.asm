
; int fseek_unlocked(FILE *stream, long offset, int whence)

SECTION code_stdio

PUBLIC _fseek_unlocked

_fseek_unlocked:

   pop af
   pop ix
   pop hl
   pop de
   pop bc
   
   push bc
   push de
   push hl
   push hl
   push af
   
   INCLUDE "stdio/z80/asm_fseek_unlocked.asm"
