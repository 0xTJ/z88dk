
; int b_array_resize(b_array_t *a, size_t n)

XDEF b_array_resize_callee

b_array_resize_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "../../z80/asm_b_array_resize.asm"
