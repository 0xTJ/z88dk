
; ===============================================================
; Mar 2014
; ===============================================================
; 
; int b_vector_at(b_vector_t *v, size_t idx)
;
; Return char stored in vector at index idx.
; If idx is outside the vector's range, return -1.
;
; ===============================================================

XLIB asm_b_vector_at

LIB asm_b_array_at

asm_b_vector_at:

   jp asm_b_array_at

;defc asm_b_vector_at = asm_b_array_at

   ; enter : hl = vector *
   ;         bc = idx
   ;
   ; exit  : bc = idx
   ;
   ;         success
   ;
   ;            de = & vector.data[idx]
   ;            hl = vector.data[idx]
   ;            carry reset
   ;
   ;         fail if idx out of range
   ;
   ;            de = vector.size
   ;            hl = -1
   ;            carry set, errno = EINVAL
   ;
   ; uses  : af, de, hl
