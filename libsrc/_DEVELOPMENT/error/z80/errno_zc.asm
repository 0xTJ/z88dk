
XLIB errno_zc

INCLUDE "../../crt_vars.inc"
LIB error_zc

errno_zc:

   ; set errno=hl
   ; set hl=0
   ; set carry flag

   ld (_errno),hl
   jp error_zc
