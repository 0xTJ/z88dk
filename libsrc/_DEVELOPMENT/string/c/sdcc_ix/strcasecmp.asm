
; int strcasecmp(const char *s1, const char *s2)

SECTION seg_code_string

PUBLIC _strcasecmp

_strcasecmp:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm_strcasecmp.asm"
