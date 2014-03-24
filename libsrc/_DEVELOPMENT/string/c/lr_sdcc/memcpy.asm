
; void *memcpy(void * restrict s1, const void * restrict s2, size_t n)

XDEF memcpy

memcpy:

   pop af
   pop bc
   pop hl
   pop de
   
   push de
   push hl
   push bc
   push af
   
   INCLUDE "string/z80/asm_memcpy.asm"
