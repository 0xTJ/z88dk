
; void *p_list_front(p_list_t *list)

XDEF p_list_front

LIB p_forward_list_front

p_list_front:

   jp p_forward_list_front

   INCLUDE "adt/p_list/z80/asm_p_list_front.asm"
