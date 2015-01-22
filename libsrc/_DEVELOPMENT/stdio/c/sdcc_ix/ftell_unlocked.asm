
; unsigned long ftell_unlocked(FILE *stream)

SECTION code_stdio

PUBLIC _ftell_unlocked

_ftell_unlocked:

   pop af
   pop bc
   
   push bc
   push af
   
   push bc
   ex (sp),ix
   
   call asm_ftell_unlocked
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_ftell_unlocked.asm"
