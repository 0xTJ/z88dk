
; void bv_priority_queue_clear(bv_priority_queue_t *q)

XDEF bv_priority_queue_clear

LIB ba_priority_queue_clear

bv_priority_queue_clear:

   jp ba_priority_queue_clear

   INCLUDE "adt/bv_priority_queue/z80/asm_bv_priority_queue_clear.asm"
