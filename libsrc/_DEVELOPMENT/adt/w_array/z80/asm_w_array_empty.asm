
; ===============================================================
; Mar 2014
; ===============================================================
; 
; int w_array_empty(b_array_t *a)
;
; Return non-zero if the array is empty.
;
; ===============================================================

XLIB asm_w_array_empty

LIB l_testword_hl

defc asm_w_array_empty = l_testword_hl - 2

   ; enter : hl = array *
   ;
   ; exit  : if array is empty
   ;
   ;           hl = 1
   ;           z flag set
   ;
   ;         if array is not empty
   ;
   ;           hl = 0
   ;           nz flag set
   ;
   ; uses  : af, hl
