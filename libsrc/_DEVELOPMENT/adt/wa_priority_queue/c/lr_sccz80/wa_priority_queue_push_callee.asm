
; int wa_priority_queue_push(wa_priority_queue_t *q, void *item)

XDEF wa_priority_queue_push_callee

wa_priority_queue_push_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "../../z80/asm_wa_priority_queue_push.asm"
