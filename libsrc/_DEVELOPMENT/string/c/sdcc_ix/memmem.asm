
; void *memmem(const void *big, size_t big_len, const void *little, size_t little_len)

SECTION code_string

PUBLIC _memmem

_memmem:

   pop af
   exx
   pop bc
   exx
   pop hl
   pop de
   pop bc
   
   push bc
   push de
   push hl
   exx
   push bc
   push af
   
   push bc
   exx
   
   ex (sp),ix
   
   call asm_memmem
   
   pop ix
   ret

   INCLUDE "string/z80/asm_memmem.asm"
