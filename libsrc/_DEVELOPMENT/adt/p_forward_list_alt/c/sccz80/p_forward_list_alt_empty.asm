
; int p_forward_list_alt_empty(p_forward_list_alt_t *list)

SECTION seg_code_p_forward_list_alt

PUBLIC p_forward_list_alt_empty

defc p_forward_list_alt_empty = asm_p_forward_list_alt_empty

INCLUDE "adt/p_forward_list_alt/z80/asm_p_forward_list_alt_empty.asm"
