
; size_t wv_stack_size(wv_stack_t *s)

XDEF wv_stack_size

LIB w_vector_size

wv_stack_size:

   jp w_vector_size

   INCLUDE "adt/wv_stack/z80/asm_wv_stack_size.asm"
