
; l_mulu_24_16x8
; called by __strtou

; compute: ahl = hl * e
; can alter: af, bc, de, hl

XLIB l_mulu_24_16x8

INCLUDE "clib_cfg.asm"

l_mulu_24_16x8:

;; IF __CLIB_OPT_IMATH > 50

   LIB l_fast_mulu_24_16x8
   
   jp l_fast_mulu_24_16x8

;; ENDIF
