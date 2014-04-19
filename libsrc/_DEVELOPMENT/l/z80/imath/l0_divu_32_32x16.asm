
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; l0_divu_32_32x16
; called by asm_bit_beep
;
; compute:  dehl = dehl / bc, dehl' = dehl % bc
; test for divide by zero unnecessary
; can alter: af, bc, de, hl, bc', de', hl', ix
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

INCLUDE "clib_cfg.asm"

XLIB l0_divu_32_32x16

l0_divu_32_32x16:

;; IF __CLIB_OPT_IMATH > 50

   LIB l0_fast_divu_32_32x16
   jp l0_fast_divu_32_32x16

;; ENDIF
