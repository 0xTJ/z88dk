
XLIB ltoa

LIB asm_ltoa

ltoa:

   pop af
   pop bc
   pop ix
   pop hl
   pop de
   
   push de
   push hl
   push ix
   push bc
   push af
   
   jp asm_ltoa
