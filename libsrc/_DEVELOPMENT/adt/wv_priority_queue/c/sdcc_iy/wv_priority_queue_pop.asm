
; void *wv_priority_queue_pop(wv_priority_queue_t *q)

SECTION seg_code_wv_priority_queue

PUBLIC _wv_priority_queue_pop

EXTERN _wa_priority_queue_pop

defc _wv_priority_queue_pop = _wa_priority_queue_pop

INCLUDE "adt/wv_priority_queue/z80/asm_wv_priority_queue_pop.asm"
