
; int _strtoi(const char *nptr, char **endptr, int base)

XDEF _strtoi_callee

_strtoi_callee:

   pop hl
   pop bc
   pop de
   ex (sp),hl
   
   INCLUDE "stdlib/z80/asm__strtoi.asm"
