
; int wv_priority_queue_empty(wv_priority_queue_t *q)

PUBLIC _wv_priority_queue_empty

EXTERN _wa_priority_queue_empty

_wv_priority_queue_empty:

   jp _wa_priority_queue_empty

   INCLUDE "adt/wv_priority_queue/z80/asm_wv_priority_queue_empty.asm"
