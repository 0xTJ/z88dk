
; void *bv_priority_queue_data(bv_priority_queue_t *q)

SECTION seg_code_bv_priority_queue

PUBLIC _bv_priority_queue_data

EXTERN _ba_priority_queue_data

defc _bv_priority_queue_data = _ba_priority_queue_data

INCLUDE "adt/bv_priority_queue/z80/asm_bv_priority_queue_data.asm"
