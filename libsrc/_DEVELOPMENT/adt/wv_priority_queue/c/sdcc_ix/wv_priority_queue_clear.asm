
; void wv_priority_queue_clear(wv_priority_queue_t *q)

PUBLIC _wv_priority_queue_clear

EXTERN _wa_priority_queue_clear

_wv_priority_queue_clear:

   jp _wa_priority_queue_clear

   INCLUDE "adt/wv_priority_queue/z80/asm_wv_priority_queue_clear.asm"
