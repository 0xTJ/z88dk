
; int p_forward_list_empty(p_forward_list_t *list)

XDEF p_forward_list_empty

p_forward_list_empty:

   pop af
   pop hl
   
   push hl
   push af
   
   jp asm_p_forward_list_empty

   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_empty.asm"
