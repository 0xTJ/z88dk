
; void *wa_stack_pop(wa_stack_t *s)

XDEF wa_stack_pop

LIB w_array_pop_back

defc wa_stack_pop = w_array_pop_back

INCLUDE "adt/wa_stack/z80/asm_wa_stack_pop.asm"
