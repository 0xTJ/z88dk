
; int atexit(void (*func)(void))

SECTION seg_code_stdlib

PUBLIC _atexit

_atexit:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "stdlib/z80/asm_atexit.asm"
