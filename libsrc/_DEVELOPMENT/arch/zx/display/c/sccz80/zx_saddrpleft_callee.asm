
; void *zx_saddrpleft(void *saddr, uchar bitmask)

SECTION seg_code_arch

PUBLIC zx_saddrpleft_callee

zx_saddrpleft_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "arch/zx/display/z80/asm_zx_saddrpleft.asm"
