
; void zx_cls(uchar attr)

SECTION seg_code_arch

PUBLIC _zx_cls

_zx_cls:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "arch/zx/misc/z80/asm_zx_cls.asm"
