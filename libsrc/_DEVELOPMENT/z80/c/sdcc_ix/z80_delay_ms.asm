
; void z80_delay_ms(uint ms)

XDEF _z80_delay_ms

_z80_delay_ms:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "z80/z80/asm_z80_delay_ms.asm"
