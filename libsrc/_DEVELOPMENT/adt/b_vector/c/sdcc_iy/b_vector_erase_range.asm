
; size_t b_vector_erase_range(b_vector_t *v, size_t idx_first, size_t idx_last)

XDEF _b_vector_erase_range

LIB _b_array_erase_range

_b_vector_erase_range:

   jp _b_array_erase_range

   INCLUDE "adt/b_vector/z80/asm_b_vector_erase_range.asm"
