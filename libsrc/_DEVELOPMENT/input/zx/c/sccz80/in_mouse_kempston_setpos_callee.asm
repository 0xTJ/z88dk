
; void in_mouse_kempston_setpos_callee(uint16_t x, uint16_t y)

SECTION seg_code_input

PUBLIC in_mouse_kempston_setpos_callee

in_mouse_kempston_setpos_callee:

   pop af
   pop bc
   pop de
   push af
   
   INCLUDE "input/zx/z80/asm_in_mouse_kempston_setpos.asm"
