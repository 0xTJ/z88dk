
; void p_queue_clear(p_queue_t *q)

SECTION seg_code_p_queue

PUBLIC _p_queue_clear

EXTERN _p_forward_list_alt_init

defc _p_queue_clear = _p_forward_list_alt_init

INCLUDE "adt/p_queue/z80/asm_p_queue_clear.asm"
