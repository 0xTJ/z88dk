
; int ftrylockfile (FILE *stream)

XDEF _ftrylockfile

_ftrylockfile:

   pop af
   pop bc
   
   push bc
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   
   call asm_ftrylockfile
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_ftrylockfile.asm"
