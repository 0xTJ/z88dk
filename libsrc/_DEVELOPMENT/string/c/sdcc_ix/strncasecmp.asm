
; int strncasecmp(const char *s1, const char *s2, size_t n)

XDEF strncasecmp

strncasecmp:

   pop af
   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm_strncasecmp.asm"
