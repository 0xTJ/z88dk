
; void *realloc_unlocked(void *p, size_t size)

XDEF realloc_unlocked_callee

realloc_unlocked_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "../../z80/asm_realloc_unlocked.asm"
