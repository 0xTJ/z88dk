
; void *w_array_data(w_array_t *a)

XDEF w_array_data

LIB b_array_data

w_array_data:

   jp b_array_data

   INCLUDE "adt/w_array/z80/asm_w_array_data.asm"
