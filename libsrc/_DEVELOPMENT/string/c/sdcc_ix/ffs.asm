
; int ffs(int i)

SECTION seg_code_string

PUBLIC _ffs

_ffs:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "string/z80/asm_ffs.asm"
