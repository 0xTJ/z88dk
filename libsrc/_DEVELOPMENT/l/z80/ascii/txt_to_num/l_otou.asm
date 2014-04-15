
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; l_otou
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

INCLUDE "clib_cfg.asm"

XLIB l_otou

l_otou:

   ; ascii octal string to unsigned integer
   ; whitespace is not skipped
   ; char consumption stops on overflow
   ;
   ; enter : de = char *buffer
   ;
   ; exit  : de = & next char to interpret in buffer
   ;         hl = unsigned result (0 on invalid input)
   ;         carry set on unsigned overflow
   ;
   ; uses  : af, bc, de, hl

;; IF __CLIB_OPT_TXT2NUM ....

   LIB l_fast_otou
   jp l_fast_otou

;; ENDIF
