
; void *w_vector_at(b_vector_t *v, size_t idx)

XDEF _w_vector_at

LIB _w_array_at

_w_vector_at:

   jp _w_array_at

   INCLUDE "adt/w_vector/z80/asm_w_vector_at.asm"
