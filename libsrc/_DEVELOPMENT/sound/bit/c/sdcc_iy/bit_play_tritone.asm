
; void *bit_play_tritone(void *song)

SECTION smc_sound_bit

PUBLIC _bit_play_tritone

_bit_play_tritone:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "sound/bit/z80/asm_bit_play_tritone.asm"
