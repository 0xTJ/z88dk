
; size_t b_array_erase_block(b_array_t *a, size_t idx, size_t n)

XDEF b_array_erase_block

b_array_erase_block:

   pop af
   pop hl
   pop bc
   pop de
   
   push de
   push bc
   push hl
   push af
   
   INCLUDE "adt/b_array/z80/asm_b_array_erase_block.asm"
