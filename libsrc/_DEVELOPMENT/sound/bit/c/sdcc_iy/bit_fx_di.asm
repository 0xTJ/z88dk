
; void bit_fx_di(void *effect)

SECTION code_sound_bit

PUBLIC _bit_fx_di

_bit_fx_di:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "sound/bit/z80/asm_bit_fx_di.asm"
