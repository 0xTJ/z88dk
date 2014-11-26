
; ssize_t read(int fd, void *buf, size_t nbyte)

SECTION seg_code_fcntl

PUBLIC _read

_read:

   pop af
   pop hl
   pop de
   pop bc
   
   push bc
   push de
   push hl
   push af
   
   push ix
   
   call asm_read
   
   pop ix
   ret
   
   INCLUDE "fcntl/z80/asm_read.asm"
