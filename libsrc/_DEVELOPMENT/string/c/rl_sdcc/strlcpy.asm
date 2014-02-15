
; size_t strlcpy(char * restrict s1, const char * restrict s2, size_t n)

XDEF strlcpy

strlcpy:

   pop af
   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   push af
   
   INCLUDE "../../z80/asm_strlcpy.asm"
