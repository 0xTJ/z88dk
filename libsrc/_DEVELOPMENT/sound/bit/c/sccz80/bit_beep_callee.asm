
; void bit_beep_callee(uint16_t duration_ms, uint16_t frequency_hz)

SECTION code_sound_bit

PUBLIC bit_beep_callee

bit_beep_callee:

   pop af
   pop hl
   pop de
   push af
   
   INCLUDE "sound/bit/z80/asm_bit_beep.asm"
