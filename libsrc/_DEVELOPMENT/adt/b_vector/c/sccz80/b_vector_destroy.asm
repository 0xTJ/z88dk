
; void b_vector_destroy(b_vector_t *v)

SECTION seg_code_b_vector

PUBLIC b_vector_destroy

defc b_vector_destroy = asm_b_vector_destroy

INCLUDE "adt/b_vector/z80/asm_b_vector_destroy.asm"
