
; int fzx_write(void *buf, uint len)

XDEF fzx_write

fzx_write:

   pop af
   pop bc
   pop de
   
   push de
   push bc
   push af
   
   push ix
   
   call asm_fzx_write
   
   pop ix
   ret
   
   INCLUDE "font/fzx/z80/asm_fzx_write.asm"
