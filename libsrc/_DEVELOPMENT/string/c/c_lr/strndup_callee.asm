
XDEF strndup_callee

strndup_callee:

   pop hl
   pop bc
   ex (sp),hl

INCLUDE "../../z80/asm_strndup.asm"

