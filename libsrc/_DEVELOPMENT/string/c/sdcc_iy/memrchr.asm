
; void *memrchr(const void *s, int c, size_t n)

SECTION seg_code_string

PUBLIC _memrchr

_memrchr:

   pop af
   pop hl
   pop de
   pop bc
   
   push bc
   push de
   push hl
   push af
   
   ld a,e
   
   INCLUDE "string/z80/asm_memrchr.asm"
