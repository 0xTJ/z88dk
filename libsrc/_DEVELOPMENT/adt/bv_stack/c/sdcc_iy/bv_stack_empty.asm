
; int bv_stack_empty(bv_stack_t *s)

XDEF bv_stack_empty

LIB b_vector_empty

bv_stack_empty:

   jp b_vector_empty

   INCLUDE "adt/bv_stack/z80/asm_bv_stack_empty.asm"
