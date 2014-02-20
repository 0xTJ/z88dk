
; ===============================================================
; Feb 2014
; ===============================================================
; 
; int b_vector_shrink_to_fit(b_vector_t *v)
;
; Release any excess memory allocated for the vector's array.
;
; After calling, vector.capacity == vector.size
;
; ===============================================================

XLIB asm_b_vector_shrink_to_fit

LIB asm_realloc, error_mc, error_znc

asm_b_vector_shrink_to_fit:

   ; enter : hl = b_vector_t *
   ;
   ; exit  : success
   ;
   ;            hl = 0
   ;            carry reset
   ;
   ;         fail on realloc not getting lock
   ;
   ;            hl = -1
   ;            carry set, errno set
   ;
   ; uses  : af, bc, de, hl
   
   ld e,(hl)
   inc hl
   ld d,(hl)                   ; de = vector.array
   inc hl
   
   ld c,(hl)
   inc hl
   ld b,(hl)                   ; bc = vector.size
   inc hl
   
   push hl                     ; save & vector.capacity
   push bc                     ; save vector.size

   ex de,hl                    ; hl = vector.array

   call asm_realloc

   pop bc                      ; bc = vector.size
   pop hl                      ; hl = & vector.capacity

   jp c, error_mc              ; if realloc fails
   
   ld (hl),c
   inc hl
   ld (hl),b                   ; vector.capacity = vector.size
   
   jp error_znc
