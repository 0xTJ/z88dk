
; void in_mouse_amx_init_callee(uint8_t x_vector, uint8_t y_vector)

XDEF in_mouse_amx_init_callee

in_mouse_amx_init_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   ld b,l
   INCLUDE "input/spectrum/z80/asm_in_mouse_amx_init.asm"
