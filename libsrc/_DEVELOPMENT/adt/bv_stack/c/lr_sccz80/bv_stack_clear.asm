
; void bv_stack_clear(bv_stack_t *s)

XDEF bv_stack_clear

;defc bv_stack_clear = asm_bv_stack_clear

bv_stack_clear:

   INCLUDE "adt/bv_stack/z80/asm_bv_stack_clear.asm"
