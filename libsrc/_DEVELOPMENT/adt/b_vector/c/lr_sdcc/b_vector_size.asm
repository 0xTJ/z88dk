
; void *b_vector_size(b_vector_t *v)

XDEF b_vector_size

LIB b_array_size

defc b_vector_size = b_array_size

INCLUDE "../../z80/asm_b_vector_size.asm"
