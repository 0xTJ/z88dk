
; void *w_vector_size(w_vector_t *v)

XDEF w_vector_size

LIB w_array_size

defc w_vector_size = w_array_size

INCLUDE "../../z80/asm_w_vector_size.asm"
