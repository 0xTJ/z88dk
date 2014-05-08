
; ===============================================================
; Mar 2014
; ===============================================================
; 
; size_t wv_stack_size(wv_stack_t *s)
;
; Return number of words in stack.
;
; ===============================================================

PUBLIC asm_wv_stack_size

EXTERN l_readword_2_hl

asm_wv_stack_size:

   jp l_readword_2_hl - 2

;defc asm_wv_stack_size = l_readword_2_hl - 2

   ; enter : hl = stack *
   ;
   ; exit  : hl = number of words in stack
   ;
   ; uses  : a, hl
