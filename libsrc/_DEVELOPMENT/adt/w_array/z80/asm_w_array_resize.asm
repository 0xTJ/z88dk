
; ===============================================================
; Mar 2014
; ===============================================================
; 
; int w_array_resize(w_array_t *a, size_t n)
;
; Attempt to resize the array to n words.
;
; If n <= array.size, array.size = n and any elements in
; array.data at positions >= n are ignored.
;
; If n > array.size and n <= array.capacity, new elements
; are zeroed. 
;
; Carry set on failure.
;
; ===============================================================

XLIB asm_w_array_resize

LIB asm_b_array_resize, error_enomem_zc

asm_w_array_resize:

   ; enter : hl = array *
   ;         de = n = desired size in words
   ;
   ; exit  : success
   ;
   ;            hl = non-zero
   ;            carry reset
   ;
   ;         fail if array is too small
   ;
   ;            hl = 0
   ;            carry set, errno = ENOMEM
   ;
   ; uses  : af, bc, de, hl

   sla e
   rl d
   jp nc, asm_b_array_resize

   jp error_enomem_zc
