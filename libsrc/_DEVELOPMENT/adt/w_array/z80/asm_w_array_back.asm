
; ===============================================================
; Mar 2014
; ===============================================================
; 
; void *w_array_back(w_array_t *a)
;
; Return word stored at the end of the array.
; If the array is empty, return -1.
;
; ===============================================================

XLIB asm_w_array_back

LIB __array_info, error_einval_mc

asm_w_array_back:

   ; enter : hl = array *
   ;
   ; exit  : success
   ;
   ;            de = & last word in array
   ;            hl = last word in array
   ;            carry reset
   ;
   ;         fail if array is empty
   ;
   ;            hl = -1
   ;            carry set, errno = EINVAL
   ;
   ; uses  : af, bc, de, hl
   
   call __array_info
   jp z, error_einval_mc

   ex de,hl                    ; hl = array.data
   
   dec hl
   add hl,bc                   ; hl = array.data + array.size - 1b
   
   ld d,(hl)
   dec hl
   ld e,(hl)
   
   ex de,hl
   ret
