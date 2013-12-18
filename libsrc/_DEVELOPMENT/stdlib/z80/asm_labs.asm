
; ===============================================================
; Nov 2013
; ===============================================================
; 
; long labs(long j)
;
; Return absolute value of j.
;
; ===============================================================

XLIB asm_labs

LIB l_neg_dehl

asm_labs:

   ; enter : dehl = long
   ;
   ; exit  : dehl = abs(dehl)
   ;
   ; uses  : af, de, hl
   
   bit 7,d
   ret z
   
   jp l_neg_dehl
