
; ===============================================================
; Jan 2014
; ===============================================================
; 
; void p_list_clear(p_list_t *list)
;
; Clear list to empty.
;
; ===============================================================

XLIB asm_p_list_clear

LIB asm_p_list_init

defc asm_p_list_clear = asm_p_list_init

   ; enter : hl = p_list_t *
   ;
   ; exit  : de = p_list_t *
   ;
   ; uses  : af, de, hl
