
; int atexit(void (*func)(void))

XDEF _atexit

_atexit:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "stdlib/z80/asm_atexit.asm"
