
; int bv_priority_queue_shrink_to_fit(bv_priority_queue_t *q)

SECTION seg_code_bv_priority_queue

PUBLIC _bv_priority_queue_shrink_to_fit

_bv_priority_queue_shrink_to_fit:

   pop af
   pop hl
   
   push hl
   push af
   
   jp asm_bv_priority_queue_shrink_to_fit
   
   INCLUDE "adt/bv_priority_queue/z80/asm_bv_priority_queue_shrink_to_fit.asm"
