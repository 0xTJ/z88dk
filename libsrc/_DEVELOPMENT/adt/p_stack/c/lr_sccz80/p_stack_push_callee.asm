
; void p_stack_push(p_stack_t *s, void *item)

XDEF p_stack_push_callee

LIB p_forward_list_insert_after_callee

defc p_stack_push_callee = p_forward_list_insert_after_callee

INCLUDE "../../z80/asm_p_stack_push.asm"
