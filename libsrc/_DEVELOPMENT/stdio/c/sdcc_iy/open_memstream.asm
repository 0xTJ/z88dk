
; FILE *open_memstream(char **bufp, size_t *sizep)

XDEF open_memstream

open_memstream:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "stdio/z80/asm_open_memstream.asm"
