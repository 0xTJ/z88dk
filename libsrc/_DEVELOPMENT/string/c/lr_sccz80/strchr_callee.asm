
; char *strchr(const char *s, int c)

XDEF strchr_callee

strchr_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "../../z80/asm_strchr.asm"
