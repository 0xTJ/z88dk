
; void *zx_saddr2aaddr(void *saddr)

XDEF _zx_saddr2aaddr

_zx_saddr2aaddr:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "arch/spectrum/display/z80/asm_zx_saddr2aaddr.asm"
