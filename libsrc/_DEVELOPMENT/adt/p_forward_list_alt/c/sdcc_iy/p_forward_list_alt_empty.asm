
; int p_forward_list_alt_empty(p_forward_list_alt_t *list)

SECTION seg_code_p_forward_list_alt

PUBLIC _p_forward_list_alt_empty

EXTERN _p_forward_list_empty

defc _p_forward_list_alt_empty = _p_forward_list_empty

INCLUDE "adt/p_forward_list_alt/z80/asm_p_forward_list_alt_empty.asm"
