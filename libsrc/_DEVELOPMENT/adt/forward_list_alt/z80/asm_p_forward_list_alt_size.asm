
*** DO NOT ADD TO LIBRARY
*** THIS FUNCTION IS EXPORTED AS PART OF ASM_P_FORWARD_LIST_SIZE

; ===============================================================
; Feb 2014
; ===============================================================
; 
; size_t p_forward_list_alt_size(p_forward_list_alt_t *list)
;
; Return number of items in list.  O(n).
;
; ===============================================================

asm_p_forward_list_alt_size:

   ; enter : hl = p_forward_list_alt_t *list
   ;
   ; exit  : hl = number of items in list
   ;
   ; uses  : af, de, hl
