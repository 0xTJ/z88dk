
; void dzx7_agile_rcs_callee(void *src, void *dst)

SECTION seg_code_zx7

PUBLIC dzx7_agile_rcs_callee

dzx7_agile_rcs_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "compress/zx7/z80/asm_dzx7_agile_rcs.asm"
