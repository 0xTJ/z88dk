
; void *balloc_addmem(unsigned char q, size_t num, size_t size, void *addr)

XDEF balloc_addmem

balloc_addmem:

   pop af
   pop ix
   pop bc
   pop hl
   pop de
   
   push de
   push hl
   push bc
   push ix
   push af

   ld a,ixl
   
   INCLUDE "alloc/balloc/z80/asm_balloc_addmem.asm"
