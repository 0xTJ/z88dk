
; void *wv_priority_queue_data(wv_priority_queue_t *q)

PUBLIC _wv_priority_queue_data

EXTERN _wa_priority_queue_data

_wv_priority_queue_data:

   jp _wa_priority_queue_data

   INCLUDE "adt/wv_priority_queue/z80/asm_wv_priority_queue_data.asm"
