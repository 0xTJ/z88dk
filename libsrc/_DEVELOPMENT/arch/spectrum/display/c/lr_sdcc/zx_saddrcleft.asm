
; void *zx_saddrcleft(saddr)

XDEF zx_saddrcleft

zx_saddrcleft:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "../../z80/asm_zx_saddrcleft.asm"
