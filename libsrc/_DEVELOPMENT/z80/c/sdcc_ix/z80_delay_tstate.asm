
; void z80_delay_tstate(uint tstates)

SECTION seg_code_z80

PUBLIC _z80_delay_tstate

_z80_delay_tstate:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "z80/z80/asm_z80_delay_tstate.asm"
