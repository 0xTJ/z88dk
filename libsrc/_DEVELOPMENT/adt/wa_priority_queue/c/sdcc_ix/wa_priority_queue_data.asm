
; void *wa_priority_queue_data(wa_priority_queue_t *q)

XDEF wa_priority_queue_data

LIB ba_priority_queue_data

wa_priority_queue_data:

   jp ba_priority_queue_data

   INCLUDE "adt/wa_priority_queue/z80/asm_wa_priority_queue_data.asm"
