
; void *calloc(size_t nmemb, size_t size)

XDEF calloc

calloc:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "alloc/malloc/z80/asm_calloc.asm"
