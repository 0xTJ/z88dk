
; int ba_stack_pop(ba_stack_t *s)

SECTION seg_code_ba_stack

PUBLIC _ba_stack_pop

EXTERN _b_array_pop_back

defc _ba_stack_pop = _b_array_pop_back

INCLUDE "adt/ba_stack/z80/asm_ba_stack_pop.asm"
