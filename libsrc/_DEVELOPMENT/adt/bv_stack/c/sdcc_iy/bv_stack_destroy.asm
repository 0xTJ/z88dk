
; void bv_stack_destroy(bv_stack_t *s)

PUBLIC _bv_stack_destroy

EXTERN _b_vector_destroy

_bv_stack_destroy:

   jp _b_vector_destroy

   INCLUDE "adt/bv_stack/z80/asm_bv_stack_destroy.asm"
