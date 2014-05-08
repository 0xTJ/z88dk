
; ===============================================================
; Nov 2013
; ===============================================================
; 
; int abs(int j)
;
; Return absolute value of j.
;
; ===============================================================

PUBLIC asm_abs
PUBLIC _l_neg_hl_

asm_abs:

   ; enter : hl = int j
   ;
   ; exit  : hl = abs(j)
   ;
   ; uses  : af, hl, carry unaffected
   
   bit 7,h
   ret z

_l_neg_hl_:

   ; negate hl
   ;
   ; enter : hl = int
   ;
   ; exit  : hl = -hl
   ;
   ; uses  : af, hl, carry unaffected

   ld a,l
   cpl
   ld l,a
   
   ld a,h
   cpl
   ld h,a
   
   inc hl
   ret
