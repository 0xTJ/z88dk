
; size_t b_array_append(b_array_t *a, int c)

XDEF b_array_append

b_array_append:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "../../z80/asm_b_array_append.asm"
