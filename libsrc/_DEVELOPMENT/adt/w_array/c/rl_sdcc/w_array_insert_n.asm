
; size_t w_array_insert_n(w_array_t *a, size_t idx, size_t n, void *item)

XDEF w_array_insert

w_array_insert:

   exx
   pop bc
   exx
   pop hl
   pop bc
   pop de
   pop af
   
   push af
   push de
   push bc
   push hl
   exx
   push bc
   exx
   
   INCLUDE "../../z80/asm_w_array_insert.asm"
