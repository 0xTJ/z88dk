
; size_t strcspn(const char *s1, const char *s2)

SECTION code_string

PUBLIC strcspn_callee

strcspn_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "string/z80/asm_strcspn.asm"
