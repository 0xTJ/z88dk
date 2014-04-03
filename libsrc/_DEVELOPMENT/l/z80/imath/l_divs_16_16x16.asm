
; l_divs_16_16x16
; called by asm__div

; compute:  hl = hl / de, de = hl %de
; test for divide by zero
; can alter:  af, bc, de, hl

XLIB l_divs_16_16x16

INCLUDE "clib_cfg.asm"

l_divs_16_16x16:

;; IF __CLIB_OPT_IMATH > 50

   LIB l_fast_divs_16_16x16

   jp l_fast_divs_16_16x16

;; ENDIF
