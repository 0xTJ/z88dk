
; void *p_forward_list_prev(forward_list_t *list, void *item)

SECTION seg_code_p_forward_list

PUBLIC _p_forward_list_prev

_p_forward_list_prev:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_prev.asm"
