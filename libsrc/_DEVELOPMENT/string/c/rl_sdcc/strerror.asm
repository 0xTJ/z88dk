
; char *strerror(int errnum)

XDEF strerror

strerror:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "../../z80/asm_strerror.asm"
