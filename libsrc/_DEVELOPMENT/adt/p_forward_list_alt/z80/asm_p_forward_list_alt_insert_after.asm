
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *p_forward_list_alt_insert_after(p_forward_list_alt_t *list, void *list_item, void *item)
;
; Insert item after list_item in the list, return item.
;
; ===============================================================

XLIB asm_p_forward_list_alt_insert_after

LIB asm_p_forward_list_insert_after

asm_p_forward_list_alt_insert_after:

   ; enter : bc = p_forward_list_alt_t *list
   ;         hl = void *list_item (insert after this item)
   ;         de = void *item (item to be added to list)
   ;
   ; exit  : bc = p_forward_list_alt_t *list
   ;         hl = void *item
   ;         de = void *list_item
   ;         z flag set if item is new end of list
   ;
   ; uses  : af, de, hl
   
   call asm_p_forward_list_insert_after
   
   ret nz                      ; if new item is not new end of list
   
   ; new item is now the list's tail
   
   inc bc
   inc bc
   
   ld a,l
   ld (bc),a
   inc bc
   ld a,h
   ld (bc),a                   ; list->tail = & item
   
   dec bc
   dec bc
   dec bc
   
   ret
