
; char *_memstrcpy(void *p, char *s, size_t n)

XDEF _memstrcpy

_memstrcpy:

   pop af
   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm__memstrcpy.asm"

