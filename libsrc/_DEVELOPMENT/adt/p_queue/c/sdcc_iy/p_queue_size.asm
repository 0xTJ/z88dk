
; size_t p_queue_size(p_queue_t *q)

SECTION seg_code_p_queue

PUBLIC _p_queue_size

EXTERN _p_forward_list_size

defc _p_queue_size = _p_forward_list_size

INCLUDE "adt/p_queue/z80/asm_p_queue_size.asm"
