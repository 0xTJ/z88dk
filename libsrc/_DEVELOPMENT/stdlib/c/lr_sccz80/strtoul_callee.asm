
; unsigned long strtoul( const char * restrict nptr, char ** restrict endptr, int base)

XDEF strtoul_callee

strtoul_callee:

   pop hl
   pop bc
   pop de
   ex (sp),hl
   
   INCLUDE "../../z80/asm_strtoul.asm"
