
; size_t w_vector_push_back(w_vector_t *v, int c)

XDEF w_vector_push_back

LIB w_vector_append

w_vector_push_back:

   jp w_vector_append

   INCLUDE "adt/w_vector/z80/asm_w_vector_push_back.asm"
