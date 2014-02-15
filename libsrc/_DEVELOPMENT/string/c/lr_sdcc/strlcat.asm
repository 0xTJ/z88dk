
; size_t strlcat(char * restrict s1, const char * restrict s2, size_t n)

XDEF strlcat

strlcat:

   pop af
   pop bc
   pop de
   pop hl
   
   push hl
   push de
   push bc
   push af
   
   INCLUDE "../../z80/asm_strlcat.asm"
