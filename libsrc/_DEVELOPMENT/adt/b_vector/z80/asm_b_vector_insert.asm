
; ===============================================================
; Feb 2014
; ===============================================================
; 
; size_t b_vector_insert(b_vector_t *v, size_t idx, int c)
;
; Insert char c before vector.array[idx], returns index of
; char inserted.
;
; ===============================================================

XLIB asm_b_vector_insert

LIB asm_b_vector_insert_block, error_mc

asm_b_vector_insert:

   ; enter : hl = b_vector_t *
   ;         de = int c
   ;         bc = size_t idx
   ;
   ; exit  : success
   ;
   ;            de = & vector.array[idx]
   ;            hl = idx of char inserted
   ;            carry reset
   ;
   ;         fail
   ;
   ;            hl = -1
   ;            carry set, errno set
   ;
   ; uses  : af, bc, de, hl

   push bc                     ; save idx
   push de                     ; save int c
   
   ld de,1
   call asm_b_vector_insert_block
   
   pop de                      ; de = int c
   jp c, error_mc - 1          ; if error in insert_block

   ld (hl),e                   ; write inserted char
   ex de,hl

   pop hl                      ; hl = idx
   ret
