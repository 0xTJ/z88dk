
; void bv_stack_clear(bv_stack_t *s)

SECTION seg_code_bv_stack

PUBLIC _bv_stack_clear

EXTERN _b_vector_clear

defc _bv_stack_clear = _b_vector_clear

INCLUDE "adt/bv_stack/z80/asm_bv_stack_clear.asm"
