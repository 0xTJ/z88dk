
; char *_memupr_(void *p, size_t n)

SECTION seg_code_string

PUBLIC __memupr_

__memupr_:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "string/z80/asm__memupr.asm"

