
; int feof_unlocked(FILE *stream)

SECTION code_stdio

PUBLIC _feof_unlocked_fastcall

_feof_unlocked_fastcall:

   push hl
   ex (sp),ix
   
   call asm_feof_unlocked
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_feof_unlocked.asm"
