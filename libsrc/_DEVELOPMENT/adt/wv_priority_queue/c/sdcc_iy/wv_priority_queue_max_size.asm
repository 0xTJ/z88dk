
; size_t wv_priority_queue_max_size(wv_priority_queue_t *q)

SECTION seg_code_wv_priority_queue

PUBLIC _wv_priority_queue_max_size

_wv_priority_queue_max_size:

   pop af
   pop hl
   
   push hl
   push af

   jp asm_wv_priority_queue_max_size

   INCLUDE "adt/wv_priority_queue/z80/asm_wv_priority_queue_max_size.asm"
