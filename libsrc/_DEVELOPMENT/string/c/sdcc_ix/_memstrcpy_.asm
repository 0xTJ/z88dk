
; char *_memstrcpy_(void *p, char *s, size_t n)

SECTION seg_code_string

PUBLIC __memstrcpy_

__memstrcpy_:

   pop af
   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm__memstrcpy.asm"

