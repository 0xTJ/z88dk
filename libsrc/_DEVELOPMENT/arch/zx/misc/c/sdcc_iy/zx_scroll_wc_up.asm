
; void zx_scroll_wc_up(struct r_Rect8 *r, uchar rows, uchar attr)

SECTION seg_code_arch

PUBLIC _zx_scroll_wc_up

_zx_scroll_wc_up:

   pop af
   pop ix
   pop de
   pop hl
   
   push hl
   push de
   push ix
   push af
   
   INCLUDE "arch/zx/misc/z80/asm_zx_scroll_wc_up.asm"
