
; size_t b_vector_read_block(void *dst, size_t n, b_vector_t *v, size_t idx)

XDEF _b_vector_read_block

LIB _b_array_read_block

_b_vector_read_block:

   jp _b_array_read_block

   INCLUDE "adt/b_vector/z80/asm_b_vector_read_block.asm"
