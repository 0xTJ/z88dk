
; void bit_beepfx_di(void *effect)

PUBLIC _bit_beepfx_di

_bit_beepfx_di:

   pop af
   pop ix
   
   push ix
   push af
   
   INCLUDE "sound/bit/z80/asm_bit_beepfx_di.asm"
