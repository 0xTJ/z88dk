
; void *balloc_alloc(unsigned int queue)

XDEF _balloc_alloc

_balloc_alloc:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "alloc/balloc/z80/asm_balloc_alloc.asm"
