
; char *_memlwr_(void *p, size_t n)

XDEF __memlwr_

__memlwr_:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
      
   INCLUDE "string/z80/asm__memlwr.asm"

