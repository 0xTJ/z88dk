
; char *strpbrk(const char *s1, const char *s2)

SECTION seg_code_string

PUBLIC strpbrk_callee

strpbrk_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "string/z80/asm_strpbrk.asm"
