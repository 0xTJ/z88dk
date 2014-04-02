
; int vscanf_unlocked(const char *format, void *arg)

XDEF _vscanf_unlocked

_vscanf_unlocked:

   pop af
   pop de
   pop bc
   
   push bc
   push de
   push af
   
   push ix
   
   call asm_vscanf_unlocked
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_vscanf_unlocked.asm"
