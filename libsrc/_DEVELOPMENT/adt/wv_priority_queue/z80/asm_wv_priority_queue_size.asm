
; ===============================================================
; Mar 2014
; ===============================================================
; 
; size_t wv_priority_queue_size(wv_priority_queue_t *q)
;
; Return the size of the queue in words.
;
; ===============================================================

XLIB asm_wv_priority_queue_size

LIB l_readword_2_hl

asm_wv_priority_queue_size:

   jp l_readword_2_hl - 4

;defc asm_wv_priority_queue_size = l_readword_2_hl - 4

   ; enter : hl = priority_queue *
   ;
   ; exit  : hl = size in words
   ;
   ; uses  : a, hl
