
; void p_forward_list_clear(p_forward_list_t *list)

PUBLIC _p_forward_list_clear

EXTERN _p_forward_list_init

_p_forward_list_clear:

   jp _p_forward_list_init

   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_clear.asm"
