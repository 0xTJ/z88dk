
; void *zx_aaddrcright(void *attraddr)

XDEF zx_aaddrcright

zx_aaddrcright:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "../../z80/asm_zx_aaddrcright.asm"
