
; char *_memstrcpy_(void *p, char *s, size_t n)

SECTION seg_code_string

PUBLIC _memstrcpy__callee

_memstrcpy__callee:

   pop af
   pop bc
   pop hl
   pop de
   push af
   
   INCLUDE "string/z80/asm__memstrcpy.asm"
