
; void in_mouse_amx_setpos(uint16_t x, uint16_t y)

XDEF _in_mouse_amx_setpos

_in_mouse_amx_setpos:

   pop af
   pop de
   pop bc
   
   push bc
   push de
   push af
   
   INCLUDE "input/spectrum/z80/asm_in_mouse_amx_setpos.asm"
