
; char *strrstrip(char *s)

XDEF _strrstrip

_strrstrip:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "string/z80/asm_strrstrip.asm"
