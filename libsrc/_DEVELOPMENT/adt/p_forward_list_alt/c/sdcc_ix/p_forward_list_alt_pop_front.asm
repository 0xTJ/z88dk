
; void *p_forward_list_alt_pop_front(p_forward_list_alt_t *list)

SECTION seg_code_p_forward_list_alt

PUBLIC _p_forward_list_alt_pop_front

_p_forward_list_alt_pop_front:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "adt/p_forward_list_alt/z80/asm_p_forward_list_alt_pop_front.asm"
