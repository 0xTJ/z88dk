
; int vfprintf_unlocked(FILE *stream, const char *format, void *arg)

XDEF vfprintf_unlocked_callee

vfprintf_unlocked_callee:

   pop af
   pop bc
   pop de
   pop ix
   push af
   
   INCLUDE "../../z80/asm_vfprintf_unlocked.asm"
