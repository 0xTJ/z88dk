
; size_t b_array_erase_range(b_array_t *a, size_t idx_first, size_t idx_last)

SECTION seg_code_b_array

PUBLIC _b_array_erase_range

_b_array_erase_range:

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
   
   INCLUDE "adt/b_array/z80/asm_b_array_erase_range.asm"
