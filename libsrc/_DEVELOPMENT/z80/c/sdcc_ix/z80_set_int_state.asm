
; void z80_set_int_state(uint state)

XDEF _z80_set_int_state

_z80_set_int_state:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "z80/z80/asm_z80_set_int_state.asm"
