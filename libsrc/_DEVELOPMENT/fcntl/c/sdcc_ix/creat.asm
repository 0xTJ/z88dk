
; int creat(const char *path, mode_t mode)

SECTION code_fcntl

PUBLIC _creat

_creat:

   pop af
   pop de
   pop bc
   
   push bc
   push de
   push af
   
   push ix
   
   call asm_creat
   
   pop ix
   ret

   INCLUDE "fcntl/z80/asm_creat.asm"
