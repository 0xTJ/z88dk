
; char *_memupr_(void *p, size_t n)

SECTION code_string

PUBLIC _memupr__callee

_memupr__callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "string/z80/asm__memupr.asm"
