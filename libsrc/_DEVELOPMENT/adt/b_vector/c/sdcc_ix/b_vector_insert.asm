
; size_t b_vector_insert(b_vector_t *v, size_t idx, int c)

XDEF _b_vector_insert

_b_vector_insert:

   pop af
   pop hl
   pop bc
   pop de
   
   push de
   push bc
   push hl
   push af
   
   INCLUDE "adt/b_vector/z80/asm_b_vector_insert.asm"
