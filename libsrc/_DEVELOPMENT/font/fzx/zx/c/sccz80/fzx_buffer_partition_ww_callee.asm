
; void *fzx_buffer_partition_ww(void *buf, uint len, uint width)

SECTION seg_code_fzx

PUBLIC fzx_buffer_partition_ww_callee

fzx_buffer_partition_ww_callee:

   pop af
   pop hl
   pop bc
   pop de
   push af
   
   INCLUDE "font/fzx/common/z80/asm_fzx_buffer_partition_ww.asm"
