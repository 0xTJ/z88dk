
; void ba_priority_queue_destroy(ba_priority_queue_t *q)

XDEF _ba_priority_queue_destroy

_ba_priority_queue_destroy:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "adt/ba_priority_queue/z80/asm_ba_priority_queue_destroy.asm"
