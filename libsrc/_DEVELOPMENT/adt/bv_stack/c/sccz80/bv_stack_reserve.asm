
; int bv_stack_reserve(bv_stack_t *s, size_t n)

PUBLIC bv_stack_reserve

EXTERN b_vector_reserve

;defc bv_stack_reserve = b_vector_reserve

bv_stack_reserve:

   jp b_vector_reserve
