
; ===============================================================
; Mar 2014
; ===============================================================
; 
; void *w_array_pop_back(w_array_t *a)
;
; Pop item from end of array.
;
; ===============================================================

XLIB asm_w_array_pop_back

LIB __array_info, error_einval_mc

asm_w_array_pop_back:

   ; enter : hl = array *
   ;
   ; exit  : success
   ;
   ;            hl = last word, popped
   ;            carry reset
   ;
   ;         fail if array is empty
   ;
   ;            hl = -1
   ;            carry set, errno = EINVAL
   ;
   ; uses  : af, bc, de, hl

   call __array_info
   jp z, error_einval_mc       ; if array is empty

   ; bc = array.size in bytes
   ; hl = & array.size + 1b
   ; de = array.data

   dec bc
   dec bc                      ; size--
   
   ld (hl),b
   dec hl
   ld (hl),c                   ; write new size
   
   ex de,hl                    ; hl = array.data
   add hl,bc                   ; hl = & array.data[size - 2]
   
   ld a,(hl)
   inc hl
   ld h,(hl)
   ld l,a
   
   ret
