
; void *fzx_buffer_partition_ww(void *buf, uint len, uint width)

XDEF fzx_buffer_partition_ww

fzx_buffer_partition_ww:

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
   
   INCLUDE "font/fzx/z80/asm_fzx_buffer_partition_ww.asm"
