
; void *fzx_buffer_partition_ww(void *buf, uint len, uint width)

PUBLIC fzx_buffer_partition_ww

EXTERN asm_fzx_buffer_partition_ww

fzx_buffer_partition_ww:

   pop af
   pop hl
   pop bc
   pop de
   
   push de
   push bc
   push hl
   push af
   
   jp asm_fzx_buffer_partition_ww
