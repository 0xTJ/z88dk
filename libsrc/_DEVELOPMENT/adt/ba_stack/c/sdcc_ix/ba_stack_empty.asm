
; int ba_stack_empty(ba_stack_t *s)

XDEF ba_stack_empty

LIB b_array_empty

ba_stack_empty:

   jp b_array_empty

   INCLUDE "adt/ba_stack/z80/asm_ba_stack_empty.asm"
