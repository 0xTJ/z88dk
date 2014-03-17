
; ===============================================================
; Jan 2014
; ===============================================================
; 
; void *p_list_pop_front(p_list_t *list)
;
; Pop item from the front of the list.
;
; ===============================================================

XLIB asm_p_list_pop_front

LIB asm_p_list_remove, error_einval_zc

asm_p_list_pop_front:

   ; enter : hl = p_list_t *list
   ;
   ; exit  : bc = p_list_t *list
   ;
   ;         success
   ;
   ;            hl = void *item (item at front)
   ;            carry reset
   ;
   ;         fail if list is empty
   ;
   ;            hl = 0
   ;            carry set, errno = EINVAL
   ;
   ; uses  : af, bc, de, hl
   
   ld c,l
   ld b,h
   
   ld a,(hl)
   inc hl
   ld h,(hl)
   ld l,a
   
   or h
   jp nz, asm_p_list_remove
   
   jp error_einval_zc
