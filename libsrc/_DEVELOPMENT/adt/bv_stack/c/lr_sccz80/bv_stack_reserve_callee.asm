
; int bv_stack_reserve(bv_stack_t *s, size_t n)

XDEF bv_stack_reserve_callee

LIB b_vector_reserve_callee

;defc bv_stack_reserve_callee = b_vector_reserve_callee

bv_stack_reserve_callee:

   jp b_vector_reserve_callee

INCLUDE "adt/bv_stack/z80/asm_bv_stack_reserve.asm"
