
; unsigned long strtoul( const char * restrict nptr, char ** restrict endptr, int base)

SECTION code_stdlib

PUBLIC strtoul_callee

strtoul_callee:

   pop hl
   pop bc
   pop de
   ex (sp),hl
   
   INCLUDE "stdlib/z80/asm_strtoul.asm"
