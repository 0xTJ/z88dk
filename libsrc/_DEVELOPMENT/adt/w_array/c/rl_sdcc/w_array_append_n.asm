
; size_t w_array_append_n(w_array_t *a, size_t n, void *item)

XDEF w_array_append_n

w_array_append_n:

   pop af
   pop hl
   pop de
   pop bc
   
   push bc
   push de
   push hl
   push af
   
   INCLUDE "../../z80/asm_w_array_append_n.asm"
