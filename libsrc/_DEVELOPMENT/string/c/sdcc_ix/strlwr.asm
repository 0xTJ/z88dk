
; char *strlwr(char *s)

XDEF _strlwr

_strlwr:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "string/z80/asm_strlwr.asm"
