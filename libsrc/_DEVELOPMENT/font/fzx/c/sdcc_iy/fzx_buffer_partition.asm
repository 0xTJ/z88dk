
; void *fzx_buffer_partition(void *buf, uint len, uint width)

XDEF _fzx_buffer_partition

_fzx_buffer_partition:

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
   
   INCLUDE "font/fzx/z80/asm_fzx_buffer_partition.asm"
