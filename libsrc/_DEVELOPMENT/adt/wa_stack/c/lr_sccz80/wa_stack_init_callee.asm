
; wa_stack_t *wa_stack_init(void *p, void *data, size_t capacity)

XDEF wa_stack_init_callee

LIB w_array_init_callee

defc wa_stack_init_callee = w_array_init_callee

INCLUDE "../../z80/asm_wa_stack_init.asm"
