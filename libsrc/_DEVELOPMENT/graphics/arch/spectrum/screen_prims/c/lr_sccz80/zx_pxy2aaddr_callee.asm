
; void *zx_pxy2aaddr_callee(uchar x, uchar y)

XDEF zx_pxy2aaddr_callee

zx_pxy2aaddr_callee:

   pop hl
   pop de
   ex (sp),hl
   
   ld h,e
   
   INCLUDE "../../z80/asm_zx_pxy2aaddr.asm"
