
; size_t b_array_size(b_array_t *a)

XDEF b_array_size

b_array_size:

   pop af
   pop hl
   
   push hl
   push af
   
   jp asm_b_array_size
   
   INCLUDE "../../z80/asm_b_array_size.asm"
