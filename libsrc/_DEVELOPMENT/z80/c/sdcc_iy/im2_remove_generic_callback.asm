
; int im2_remove_generic_callback(uint8_t vector, void *callback)

PUBLIC _im2_remove_generic_callback

_im2_remove_generic_callback:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   INCLUDE "z80/z80/asm_im2_remove_generic_callback.asm"
