
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; divuint_rrx_s
; 
; sdcc unsigned division of two ints
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

INCLUDE "clib_cfg.asm"

PUBLIC __divuint_rrx_s

__divuint_rrx_s:

   ; enter : stack = divisor, dividend, ret
   ;
   ; exit  : hl = quotient
   ;         de = remainder
   ;
   ; uses  : af, bc, de, hl

IF __CLIB_OPT_IMATH <= 50

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   EXTERN l_small_divu_16_16x16
   jp l_small_divu_16_16x16

ENDIF

IF __CLIB_OPT_IMATH > 50

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   EXTERN l_fast_divu_16_16x16
   jp l_fast_divu_16_16x16     ; hl = hl / de, de = hl % de

ENDIF
