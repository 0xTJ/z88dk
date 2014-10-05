
; int fzx_write(void *buf, uint len)

SECTION seg_code_fzx

PUBLIC _fzx_write

_fzx_write:

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
   
   INCLUDE "font/fzx/common/z80/asm_fzx_write.asm"
