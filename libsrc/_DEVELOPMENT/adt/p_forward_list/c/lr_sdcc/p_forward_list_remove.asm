
; void *p_forward_list_remove(p_forward_list_t *list, void *item)

XDEF p_forward_list_remove

p_forward_list_remove:

   pop af
   pop bc
   pop hl
   
   push hl
   push bc
   push af
   
   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_remove.asm"
