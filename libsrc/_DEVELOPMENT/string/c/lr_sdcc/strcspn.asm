
; size_t strcspn(const char *s1, const char *s2)

XDEF strcspn

strcspn:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "../../z80/asm_strcspn.asm"
