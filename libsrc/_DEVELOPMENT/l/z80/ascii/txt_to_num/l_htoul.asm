
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; l_htoul
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

INCLUDE "clib_cfg.asm"

XLIB l_htoul

l_htoul:

   ; ascii hex string to unsigned long
   ; whitespace is not skipped, leading 0x not interpretted
   ; char consumption stops on overflow
   ;
   ; enter : de = char *buffer
   ;
   ; exit  : bc = & next char to interpret in buffer
   ;         dehl = unsigned result (0 on invalid input)
   ;         carry set on unsigned overflow
   ;
   ; uses  : af, bc, de, hl

IF __CLIB_OPT_TXT2NUM_SELECT & $08

   LIB l_fast_htoul
   jp l_fast_htoul

ELSE

   LIB l_small_htoul
   jp l_small_htoul

ENDIF

