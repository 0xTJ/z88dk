
; void *wv_stack_pop(wv_stack_t *s)

XDEF _wv_stack_pop

LIB _w_array_pop_back

_wv_stack_pop:

   jp _w_array_pop_back

   INCLUDE "adt/wv_stack/z80/asm_wv_stack_pop.asm"
