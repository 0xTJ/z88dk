
; void *realloc(void *p, size_t size)

XDEF realloc

realloc:

   pop af
   pop bc
   pop hl
   
   push hl
   push bc
   push af
   
   INCLUDE "../../z80/asm_realloc.asm"
