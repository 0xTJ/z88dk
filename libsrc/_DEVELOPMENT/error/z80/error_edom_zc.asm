
XLIB error_edom_zc

XREF __EDOM

LIB errno_zc

   pop hl
   
error_edom_zc:

   ; set hl=0
   ; set carry flag
   ; set errno=EDOM

   ld hl,__EDOM
   jp errno_zc
