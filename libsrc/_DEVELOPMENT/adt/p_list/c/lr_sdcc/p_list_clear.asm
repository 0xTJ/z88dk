
; void p_list_clear(p_list_t *list)

XDEF p_list_clear

LIB p_list_init

defc p_list_clear = p_list_init

INCLUDE "../../z80/asm_p_list_clear.asm"
