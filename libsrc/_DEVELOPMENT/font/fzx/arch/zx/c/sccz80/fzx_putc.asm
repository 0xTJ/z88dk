
; int fzx_putc(uchar c)

PUBLIC fzx_putc

fzx_putc:

   ld a,l
   
   INCLUDE "font/fzx/arch/zx/z80/asm_fzx_putc.asm"
