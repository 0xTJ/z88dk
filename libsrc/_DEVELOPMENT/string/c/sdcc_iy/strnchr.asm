
; char *strnchr(const char *s, size_t n, int c)

XDEF _strnchr

_strnchr:

   pop af
   pop hl
   pop bc
   pop de
   
   push de
   push bc
   push hl
   push af
   
   INCLUDE "string/z80/asm_strnchr.asm"
