
; int bv_stack_top(bv_stack_t *s)

PUBLIC _bv_stack_top

EXTERN _b_array_back

_bv_stack_top:

   jp _b_array_back

   INCLUDE "adt/bv_stack/z80/asm_bv_stack_top.asm"
