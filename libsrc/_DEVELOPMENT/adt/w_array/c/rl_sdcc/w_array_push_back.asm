
; size_t w_array_push_back(w_array_t *a, void *item)

XDEF w_array_push_back

LIB w_array_append

defc w_array_push_back = w_array_append

INCLUDE "../../z80/asm_w_array_push_back.asm"
