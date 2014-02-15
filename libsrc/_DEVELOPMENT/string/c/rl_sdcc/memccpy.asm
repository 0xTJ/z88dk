
; void *memccpy(void * restrict s1, const void * restrict s2, int c, size_t n)

XDEF memccpy

memccpy:

   pop af
   pop de
   pop hl
   exx
   pop bc
   exx
   pop bc
   
   push bc
   exx
   push bc
   exx
   push hl
   push de
   push af
   
   exx
   ld a,c
   exx
   
   INCLUDE "../../z80/asm_memccpy.asm"
