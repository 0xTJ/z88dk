INCLUDE "../../errorno.inc"

XLIB error_ebadf_zc

LIB errno_zc

   pop hl
   
error_ebadf_zc:

   ; set hl=0
   ; set carry flag
   ; set errno=EBADF

   ld hl,__EBADF
   jp errno_zc
