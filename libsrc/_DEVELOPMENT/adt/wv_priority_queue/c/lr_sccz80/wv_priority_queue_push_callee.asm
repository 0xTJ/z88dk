
; int wv_priority_queue_push(wv_priority_queue_t *q, void *item)

XDEF wv_priority_queue_push_callee

wv_priority_queue_push_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "../../z80/asm_wv_priority_queue_push.asm"
