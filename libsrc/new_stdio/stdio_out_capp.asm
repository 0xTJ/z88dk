; stdio_out_capp
; 05.2008 aralbrec

XLIB stdio_out_capp
LIB stdio_out_x

; output %p parameter
;
; enter :    ix  = & attached file / device output function
;             a = precision
;             b = width
;             c = flags [-+ O#PLN]
;            de = void *
;            hl = & parameter list
;           bc' = total num chars output on stream thus far
;           carry flag set = want capitals
; exit  :   bc' = total num chars output on stream thus far
;            hl = & parameter list
;         carry set if error on stream, ERRNO set appropriately
; uses  : af, bc, de, hl, exx

.stdio_out_capp

   set 3,c
   scf
   jp stdio_out_x

