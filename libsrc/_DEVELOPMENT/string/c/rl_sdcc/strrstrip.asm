
; char *strrstrip(char *s)

XDEF strrstrip

strrstrip:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "../../z80/asm_strrstrip.asm"
