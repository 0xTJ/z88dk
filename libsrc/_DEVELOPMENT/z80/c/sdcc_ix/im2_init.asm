
; void im2_init(void *im2_table)

XDEF im2_init

im2_init:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "z80/z80/asm_im2_init.asm"
