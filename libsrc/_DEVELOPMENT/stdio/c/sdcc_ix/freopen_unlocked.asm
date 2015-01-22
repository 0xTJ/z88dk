
; FILE *freopen_unlocked(char *filename, char *mode, FILE *stream)

SECTION code_stdio

PUBLIC _freopen_unlocked

_freopen_unlocked:

   pop af
   pop bc
   pop de
   pop hl
   
   push hl
   push de
   push bc
   push af
   
   push bc
   ex (sp),ix
   
   call asm_freopen_unlocked
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_freopen_unlocked.asm"
