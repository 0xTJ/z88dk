
; size_t b_array_insert(b_array_t *a, size_t idx, int c)

XLIB b_array_insert

LIB asm_b_array_insert

b_array_insert:

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
   
   jp asm_b_array_insert
