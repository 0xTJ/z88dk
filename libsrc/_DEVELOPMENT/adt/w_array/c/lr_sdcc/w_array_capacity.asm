
; size_t w_array_capacity(w_array_t *a)

XDEF w_array_capacity

w_array_capacity:

   pop af
   pop hl
   
   push hl
   push af
   
   jp asm_w_array_capacity

   INCLUDE "../../z80/asm_w_array_capacity.asm"
