
; void zx_scroll_wc_up(struct r_Rect8 *r, uchar rows, uchar attr)

SECTION seg_code_arch

PUBLIC zx_scroll_wc_up

EXTERN asm_zx_scroll_wc_up

zx_scroll_wc_up:

   pop af
   pop hl
   pop de
   pop ix
   
   push ix
   push de
   push hl
   push af
   
   jp asm_zx_scroll_wc_up
