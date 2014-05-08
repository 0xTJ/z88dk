
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; l_mulu_16_16x8
; called by asm_bit_play
;
; compute: hl = hl * e
; can alter: af, bc, de, hl
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

INCLUDE "clib_cfg.asm"

PUBLIC l_mulu_16_16x8

l_mulu_16_16x8:

IF __CLIB_OPT_IMATH <= 50

   EXTERN l0_small_mul_16_16x16
   
   ex de,hl
   ld h,0
   
   jp l0_small_mul_16_16x16

ENDIF

IF __CLIB_OPT_IMATH > 50

   EXTERN l_fast_mulu_24_16x8
   jp l_fast_mulu_24_16x8

ENDIF
