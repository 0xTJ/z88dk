
; void p_forward_list_push_back(p_forward_list_t *list, void *item)

SECTION seg_code_p_forward_list

PUBLIC _p_forward_list_push_back

_p_forward_list_push_back:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_push_back.asm"
