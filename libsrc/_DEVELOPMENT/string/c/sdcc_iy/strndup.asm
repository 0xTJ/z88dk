
; char *strndup(const char *s, size_t n)

XDEF _strndup

_strndup:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "string/z80/asm_strndup.asm"
