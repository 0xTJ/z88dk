
; size_t ba_stack_size(ba_stack_t *s)

PUBLIC ba_stack_size

;defc ba_stack_size = asm_ba_stack_size

ba_stack_size:

   INCLUDE "adt/ba_stack/z80/asm_ba_stack_size.asm"
