
; void *zx_saddrcleft(void *saddr)

PUBLIC _zx_saddrcleft

_zx_saddrcleft:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "arch/spectrum/display/z80/asm_zx_saddrcleft.asm"
