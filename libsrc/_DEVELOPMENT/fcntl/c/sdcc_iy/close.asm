
; int close(int fd)

SECTION seg_code_fcntl

PUBLIC _close

_close:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "fcntl/z80/asm_close.asm"
