
; void *zx_aaddr2saddr(void *attraddr)

XDEF zx_aaddr2saddr

zx_aaddr2saddr:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "arch/spectrum/display/z80/asm_zx_aaddr2saddr.asm"
