
; void *zx_aaddrcup(void *aaddr)

XDEF zx_aaddrcup

zx_aaddrcup:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "../../z80/asm_zx_aaddrcup.asm"
