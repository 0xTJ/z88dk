
; void im2_init(void *im2_table)

SECTION seg_code_z80

PUBLIC _im2_init

_im2_init:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "z80/z80/asm_im2_init.asm"
