
; wv_stack_t *wv_stack_init(void *p, size_t capacity, size_t max_size)

SECTION seg_code_wv_stack

PUBLIC _wv_stack_init

EXTERN _w_vector_init

defc _wv_stack_init = _w_vector_init

INCLUDE "adt/wv_stack/z80/asm_wv_stack_init.asm"
