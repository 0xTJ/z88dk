
; void *w_vector_size(w_vector_t *v)

XDEF w_vector_size

LIB w_array_size

w_vector_size:

   jp w_array_size

   INCLUDE "adt/w_vector/z80/asm_w_vector_size.asm"
