
; size_t p_forward_list_size(p_forward_list_t *list)

XDEF _p_forward_list_size

_p_forward_list_size:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_size.asm"
