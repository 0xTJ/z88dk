
; int bv_stack_pop(bv_stack_t *s)

XDEF _bv_stack_pop

LIB _b_array_pop_back

_bv_stack_pop:

   jp _b_array_pop_back

   INCLUDE "adt/bv_stack/z80/asm_bv_stack_pop.asm"
