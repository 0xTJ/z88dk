
; size_t fread_unlocked(void *ptr, size_t size, size_t nmemb, FILE *stream)

XDEF fread_unlocked

fread_unlocked:

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
   
   push ix
   
   exx
   ld ixl,c
   ld ixh,b
   exx
   
   call asm_fread_unlocked
   
   pop ix
   ret
   
   INCLUDE "../../z80/asm_fread_unlocked.asm"
