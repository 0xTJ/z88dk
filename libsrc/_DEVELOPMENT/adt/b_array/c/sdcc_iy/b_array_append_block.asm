
; void *b_array_append_block(b_array_t *a, size_t n)

PUBLIC _b_array_append_block

EXTERN error_enomem_zc

_b_array_append_block:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   call asm_b_array_append_block
   ret nc
   
   jp error_enomem_zc
   
   INCLUDE "adt/b_array/z80/asm_b_array_append_block.asm"

