
; int ungetc(int c, FILE *stream)

XDEF _ungetc

_ungetc:

   pop af
   pop hl
   pop ix
   
   push ix
   push hl
   push af

   INCLUDE "stdio/z80/asm_ungetc.asm"
