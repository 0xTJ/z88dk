
; int strcoll(const char *s1, const char *s2)

XDEF _strcoll

_strcoll:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm_strcoll.asm"
