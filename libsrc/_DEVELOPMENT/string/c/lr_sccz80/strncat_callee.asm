
; char *strncat(char * restrict s1, const char * restrict s2, size_t n)

XDEF strncat_callee

strncat_callee:

   pop af
   pop bc
   pop hl
   pop de
   push af
   
   INCLUDE "../../z80/asm_strncat.asm"
