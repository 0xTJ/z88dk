
; size_t b_vector_capacity(b_vector_t *v)

XDEF b_vector_capacity

LIB b_array_capacity

defc b_vector_capacity = b_array_capacity

INCLUDE "../../z80/asm_b_vector_capacity.asm"
