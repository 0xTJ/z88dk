
; size_t b_vector_push_back(b_vector_t *v, int c)

PUBLIC _b_vector_push_back

EXTERN _b_vector_append

_b_vector_push_back:

   jp _b_vector_append

   INCLUDE "adt/b_vector/z80/asm_b_vector_push_back.asm"
