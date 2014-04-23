
; void im2_install_isr(uint8_t vector, void *isr)

XDEF _im2_install_isr

_im2_install_isr:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   INCLUDE "z80/z80/asm_im2_install_isr.asm"
