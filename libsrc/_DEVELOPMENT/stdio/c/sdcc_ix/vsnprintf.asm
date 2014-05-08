
; int vsnprintf(char *s, size_t n, const char *format, void *arg)

PUBLIC _vsnprintf

_vsnprintf:

   pop af
   exx
   pop de
   pop bc
   exx
   pop de
   pop bc
   
   push bc
   push de
   exx
   push bc
   push de
   exx
   push af
   
   push ix
   
   call asm_vsnprintf
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_vsnprintf.asm"
