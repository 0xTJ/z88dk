
; void *zx_saddrcleft(void *saddr)

XDEF zx_saddrcleft

zx_saddrcleft:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "arch/spectrum/display/z80/asm_zx_saddrcleft.asm"
