
; FILE *fopen_unlocked(const char *filename, const char *mode)

SECTION seg_code_stdio

PUBLIC _fopen_unlocked

_fopen_unlocked:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "stdio/z80/asm_fopen_unlocked.asm"
