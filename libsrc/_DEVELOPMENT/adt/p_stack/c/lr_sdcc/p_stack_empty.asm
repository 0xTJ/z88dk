
; int p_stack_empty(p_stack_t *s)

XDEF p_stack_empty

LIB p_forward_list_empty

defc p_stack_empty = p_forward_list_empty

INCLUDE "../../z80/asm_p_stack_empty.asm"
