
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; divsint_rrx_s
;
; sdcc signed divison of two ints
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

INCLUDE "clib_cfg.asm"

XLIB __divsint_rrx_s

__divsint_rrx_s:

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
   
   LIB l_small_divs_16_16x16
   jp l_small_divs_16_16x16

ENDIF
   
IF __CLIB_OPT_IMATH > 50

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   LIB l_fast_divs_16_16x16
   jp l_fast_divs_16_16x16     ; hl = hl / de, de = hl % de

ENDIF
