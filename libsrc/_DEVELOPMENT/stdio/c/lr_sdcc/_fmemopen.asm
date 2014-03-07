
; FILE *_fmemopen(void **bufp, size_t *sizep, const char *mode)

XDEF _fmemopen

_fmemopen:

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
   
   ld a,$0c                    ; disallow undefined bits
   
   push ix
   call asm__fmemopen
   pop ix
   
   ret

   INCLUDE "../../z80/asm__fmemopen.asm"
