
; int strcasecmp(const char *s1, const char *s2)

XDEF strcasecmp_callee, stricmp_callee

strcasecmp_callee:
stricmp_callee:

   pop af
   pop hl
   pop de
   push af
   
   INCLUDE "../../z80/asm_strcasecmp.asm"
