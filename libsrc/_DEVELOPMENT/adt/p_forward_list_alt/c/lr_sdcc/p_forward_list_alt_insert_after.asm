
; void *p_forward_list_alt_insert_after(p_forward_list_alt_t *list, void *list_item, void *item)

XDEF p_forward_list_alt_insert_after

p_forward_list_alt_insert_after:

   pop af
   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   push af

   INCLUDE "adt/p_forward_list_alt/z80/asm_p_forward_list_alt_insert_after.asm"
