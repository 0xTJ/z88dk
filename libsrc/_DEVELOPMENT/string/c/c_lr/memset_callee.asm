
XDEF memset_callee

memset_callee:

   pop hl
   pop bc
   pop de
   ex (sp),hl

INCLUDE "../../z80/asm_memset.asm"
