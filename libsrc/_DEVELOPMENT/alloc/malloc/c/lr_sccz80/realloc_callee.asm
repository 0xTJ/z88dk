
; void *realloc(void *p, size_t size)

XDEF realloc_callee

realloc_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "../../z80/asm_realloc.asm"
