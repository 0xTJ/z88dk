
; void *b_array_append_block(b_array_t *a, size_t n)

PUBLIC b_array_append_block_callee
PUBLIC b_array_append_block_entry

EXTERN error_enomem_zc

b_array_append_block_callee:

   pop hl
   pop de
   ex (sp),hl

b_array_append_block_entry:

   call asm_b_array_append_block
   ret nc
   
   jp error_enomem_zc

   INCLUDE "adt/b_array/z80/asm_b_array_append_block.asm"
