
; w_array_t *w_array_init(void *p, void *data, size_t capacity)

SECTION code_adt_w_array

PUBLIC _w_array_init

_w_array_init:

   pop af
   pop hl
   pop de
   pop bc
   
   push bc
   push de
   push hl
   push af
   
   INCLUDE "adt/w_array/z80/asm_w_array_init.asm"
