
; void *wv_stack_top(wv_stack_t *s)

XDEF wv_stack_top

LIB w_array_back

wv_stack_top:

   jp w_array_back

   INCLUDE "adt/wv_stack/z80/asm_wv_stack_top.asm"
