
INCLUDE "../../errorno.inc"

XLIB error_eoverflow_zc

LIB errno_zc

   pop hl
   
error_eoverflow_zc:

   ; set hl = 0
   ; set carry flag
   ; set errno=EOVERFLOW
   
   ld hl,__EOVERFLOW
   jp errno_zc
