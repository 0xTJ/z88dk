
; size_t fread_unlocked(void *ptr, size_t size, size_t nmemb, FILE *stream)

XDEF fread_unlocked

fread_unlocked:

   pop af
   exx
   pop bc
   exx
   pop hl
   pop bc
   pop de
   
   push de
   push bc
   push hl
   exx
   push bc
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   exx
   
   call asm_fread_unlocked
   
   pop ix
   ret
   
   INCLUDE "../../z80/asm_fread_unlocked.asm"
