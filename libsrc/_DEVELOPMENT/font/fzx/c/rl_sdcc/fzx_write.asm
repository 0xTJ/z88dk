
; int fzx_write(void *buf, uint len)

XDEF fzx_write

fzx_write:

   pop af
   pop de
   pop bc
   
   push bc
   push de
   push af
   
   push ix
   
   call asm_fzx_write
   
   pop ix
   ret
   
   INCLUDE "../../z80/asm_fzx_write.asm"
