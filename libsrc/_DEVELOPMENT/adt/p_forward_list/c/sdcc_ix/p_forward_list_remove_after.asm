
; void *p_forward_list_remove_after(void *list_item)

SECTION code_adt_p_forward_list

PUBLIC _p_forward_list_remove_after

_p_forward_list_remove_after:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_remove_after.asm"
