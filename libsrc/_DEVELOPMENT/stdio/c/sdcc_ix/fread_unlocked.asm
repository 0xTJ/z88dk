
; size_t fread_unlocked(void *ptr, size_t size, size_t nmemb, FILE *stream)

SECTION code_stdio

PUBLIC _fread_unlocked

_fread_unlocked:

   pop af
   pop de
   pop bc
   pop hl
   exx
   pop bc
   
   push bc
   exx
   push hl
   push bc
   push de
   push af
   
   exx
   push bc
   exx
   
   ex (sp),ix
   
   call asm_fread_unlocked
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_fread_unlocked.asm"
