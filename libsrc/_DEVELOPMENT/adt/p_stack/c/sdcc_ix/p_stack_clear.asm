
; void p_stack_clear(p_stack_t *s)

XDEF _p_stack_clear

LIB _p_forward_list_init

_p_stack_clear:

   jp _p_forward_list_init

   INCLUDE "adt/p_stack/z80/asm_p_stack_clear.asm"
