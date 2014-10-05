
; void im2_install_isr_callee(uint8_t vector, void *isr)

SECTION seg_code_z80

PUBLIC im2_install_isr_callee

im2_install_isr_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "z80/z80/asm_im2_install_isr.asm"
