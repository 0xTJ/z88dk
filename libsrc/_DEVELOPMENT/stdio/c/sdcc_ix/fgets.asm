
; char *fgets(char *s, int n, FILE *stream)

XDEF _fgets

_fgets:

   pop af
   pop hl
   pop bc
   pop de
   
   push de
   push bc
   push hl
   push af
   
   push ix
   
   ld ixl,e
   ld ixh,d
   
   ex de,hl
   call asm_fgets
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_fgets.asm"
