
; void *p_forward_list_remove_after(void *list_item)

XDEF p_forward_list_remove_after

p_forward_list_remove_after:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_remove_after.asm"
