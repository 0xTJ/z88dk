
; void zx_cls_wc(struct r_Rect8 *r, uchar attr)

SECTION code_arch

PUBLIC _zx_cls_wc

_zx_cls_wc:

   pop af
   pop bc
   pop hl
   
   push hl
   push bc
   push af
   
   push bc
   ex (sp),ix
   
   call asm_zx_cls_wc
   
   pop ix
   ret
   
   INCLUDE "arch/zx/misc/z80/asm_zx_cls_wc.asm"
