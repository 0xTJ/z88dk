
; void *p_list_push_front(p_list_t *list, void *item)

XDEF p_list_push_front_callee

p_list_push_front_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "../../z80/asm_p_list_push_front.asm"
