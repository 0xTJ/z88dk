
; void *memchr(const void *s, int c, size_t n)

PUBLIC memchr_callee

memchr_callee:

   pop hl
   pop bc
   pop de
   ex (sp),hl
   
   ld a,e
   
   INCLUDE "string/z80/asm_memchr.asm"
