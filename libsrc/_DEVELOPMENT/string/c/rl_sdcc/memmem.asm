
; void *memmem(const void *big, size_t big_len, const void *little, size_t little_len)

XDEF memmem

memmem:

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
   exx
   push af
   
   push ix
   
   exx
   ld ixl,c
   ld ixh,b
   exx
   
   call asm_memmem
   
   pop ix
   ret

   INCLUDE "../../z80/asm_memmem.asm"
