
; int ffs(int i)

XDEF ffs

ffs:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "../../z80/asm_ffs.asm"
