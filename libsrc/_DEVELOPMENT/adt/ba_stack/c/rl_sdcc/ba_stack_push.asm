
; int ba_stack_push(ba_stack_t *s, int c)

XDEF ba_stack_push

LIB b_array_append

defc ba_stack_push = b_array_append

INCLUDE "adt/ba_stack/z80/asm_ba_stack_push.asm"
