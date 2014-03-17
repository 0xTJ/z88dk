
; ===============================================================
; Feb 2014
; ===============================================================
; 
; int wv_priority_queue_reserve(wv_priority_queue_t *q, size_t n)
;
; Allocate at least n words for the priority_queue.
;
; If the priority_queue is already larger, do nothing.
;
; ===============================================================

XLIB asm_wv_priority_queue_reserve

LIB asm_w_vector_reserve

defc asm_wv_priority_queue_reserve = asm_w_vector_reserve - 2

   ; enter : hl = priority_queue *
   ;         bc = n
   ;
   ; exit  : bc = n * 2 bytes
   ;         de = & priority_queue.capacity + 1b
   ;
   ;         success
   ;
   ;            hl = -1
   ;            carry reset
   ;
   ;         fail if max_size exceeded
   ;
   ;            hl = 0
   ;            carry set, errno = EINVAL
   ;
   ;         fail if realloc failed
   ;
   ;            hl = 0
   ;            carry set, errno = ENOMEM or ENOLCK
   ;
   ; uses  : af, de, hl
