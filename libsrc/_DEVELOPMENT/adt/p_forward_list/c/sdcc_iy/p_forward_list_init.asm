
; void p_forward_list_init(void *p)

SECTION code_adt_p_forward_list

PUBLIC _p_forward_list_init

_p_forward_list_init:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "adt/p_forward_list/z80/asm_p_forward_list_init.asm"
