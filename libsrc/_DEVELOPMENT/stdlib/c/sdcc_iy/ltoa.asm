
; char *ltoa(unsigned long num, char *buf, int radix)

SECTION seg_code_stdlib

PUBLIC _ltoa

_ltoa:

   pop af
   pop hl
   pop de
   pop ix
   pop bc
   
   push bc
   push ix
   push de
   push hl
   push af
   
   INCLUDE "stdlib/z80/asm_ltoa.asm"
