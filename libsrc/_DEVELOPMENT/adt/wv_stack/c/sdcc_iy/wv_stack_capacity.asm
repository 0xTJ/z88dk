
; size_t wv_stack_capacity(wv_stack_t *s)

XDEF wv_stack_capacity

LIB w_vector_capacity

wv_stack_capacity:

   jp w_vector_capacity

   INCLUDE "adt/wv_stack/z80/asm_wv_stack_capacity.asm"
