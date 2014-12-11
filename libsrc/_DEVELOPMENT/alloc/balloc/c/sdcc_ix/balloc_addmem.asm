
; void *balloc_addmem(unsigned char q, size_t num, size_t size, void *addr)

SECTION code_alloc_balloc

PUBLIC _balloc_addmem

_balloc_addmem:

   pop af
   exx
   pop bc
   exx
   pop bc
   pop hl
   pop de
   
   push de
   push hl
   push bc
   exx
   push bc
   push af
   
   ld a,c
   exx

   INCLUDE "alloc/balloc/z80/asm_balloc_addmem.asm"
