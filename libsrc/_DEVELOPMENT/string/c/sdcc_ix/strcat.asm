
; char *strcat(char * restrict s1, const char * restrict s2)

XDEF _strcat

_strcat:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm_strcat.asm"
