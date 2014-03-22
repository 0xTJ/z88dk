
; int vprintf_unlocked(const char *format, void *arg)

XDEF vprintf_unlocked

vprintf_unlocked:

   pop af
   pop de
   pop bc
   
   push bc
   push de
   push af
   
   push ix
   
   call asm_vprintf_unlocked
   
   pop ix
   ret
   
   INCLUDE "../../z80/asm_vprintf_unlocked.asm"
