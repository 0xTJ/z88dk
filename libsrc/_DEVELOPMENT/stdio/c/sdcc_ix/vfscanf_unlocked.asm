
; int vfscanf_unlocked(FILE *stream, const char *format, void *arg)

XDEF _vfscanf_unlocked

_vfscanf_unlocked:

   pop af
   exx
   pop bc
   exx
   pop de
   pop bc
   
   push bc
   push de
   exx
   push bc
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   exx
   
   call asm_vfscanf_unlocked
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_vfscanf_unlocked.asm"
