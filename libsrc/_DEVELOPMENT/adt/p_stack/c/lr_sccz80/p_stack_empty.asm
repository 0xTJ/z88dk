
; int p_stack_empty(p_stack_t *s)

XDEF p_stack_empty

;defc p_stack_empty = asm_p_stack_empty

p_stack_empty:

   INCLUDE "adt/p_stack/z80/asm_p_stack_empty.asm"
