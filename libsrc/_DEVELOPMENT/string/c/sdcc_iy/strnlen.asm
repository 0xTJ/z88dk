
; size_t strnlen(const char *s, size_t maxlen)

XDEF _strnlen

_strnlen:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "string/z80/asm_strnlen.asm"
