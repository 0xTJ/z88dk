
; void zx_scroll(uchar rows, uchar attr)

SECTION seg_code_arch

PUBLIC zx_scroll

EXTERN asm_zx_scroll

zx_scroll:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   jp asm_zx_scroll
