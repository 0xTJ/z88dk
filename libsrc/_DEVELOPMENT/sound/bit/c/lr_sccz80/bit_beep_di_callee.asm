
; void bit_beep_di_callee(uint16_t duration_ms, uint16_t frequency_hz)

XDEF bit_beep_di_callee

bit_beep_di_callee:

   pop af
   pop hl
   pop de
   push af
   
   INCLUDE "sound/bit/z80/asm_bit_beep_di.asm"
