
; void bit_beep_raw_di(uint_16t num_cycles, uint16_t tone_period_T)

XDEF _bit_beep_raw_di

_bit_beep_raw_di:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af

   push ix
   
   call asm_bit_beep_raw_di
   
   pop ix
   ret
   
   INCLUDE "sound/bit/z80/asm_bit_beep_raw_di.asm"
