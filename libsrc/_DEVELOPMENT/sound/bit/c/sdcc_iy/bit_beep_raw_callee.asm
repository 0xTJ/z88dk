
; void bit_beep_raw_callee(uint16_t num_cycles, uint16_t tone_period_T)

SECTION code_sound_bit

PUBLIC _bit_beep_raw_callee

_bit_beep_raw_callee:

   pop af
   pop hl
   pop de
   push af
      
   INCLUDE "sound/bit/z80/asm_bit_beep_raw.asm"
