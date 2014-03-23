
; ===============================================================
; Mar 2014
; ===============================================================
; 
; size_t w_array_size(w_array_t *a)
;
; Return the array's current size in words.
;
; ===============================================================

XLIB asm_w_array_size

LIB l_readword_2_hl

asm_w_array_size:

   jp l_readword_2_hl - 2

;defc asm_w_array_size = l_readword_2_hl - 2

   ; enter : hl = array *
   ;
   ; exit  : hl = size in words
   ;
   ; uses  : a, hl
