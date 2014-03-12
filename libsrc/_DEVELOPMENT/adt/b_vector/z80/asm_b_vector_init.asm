
; ===============================================================
; Feb 2014
; ===============================================================
; 
; b_vector_t *b_vector_init(void *p, size_t capacity, size_t max_size)
;
; Initialize a byte vector structure at address p and allocate
; an array of capacity bytes to begin with.  The vector's array
; will not be allowed to grow beyond max_size bytes.
;
; Returns p on success or 0 on failure.
;
; ===============================================================

XLIB asm_b_vector_init

LIB l_setmem_hl, l_ltu_hl_bc, asm_realloc, error_einval_zc

asm_b_vector_init:

   ; enter : de = void *p
   ;         bc = capacity
   ;         hl = max_size
   ;
   ; exit  : success
   ;
   ;            hl = vector *
   ;            carry reset
   ;
   ;         fail if max_size < capacity
   ;
   ;            hl = 0
   ;            carry set, errno = EINVAL
   ;
   ;         fail if unsuccessful realloc
   ;
   ;            hl = 0
   ;            carry set, errno set
   ;
   ; uses  : af, bc, de, hl
   
   call l_ltu_hl_bc
   jp c, error_einval_zc       ; if hl < bc, max_size < capacity
   
   push hl                     ; save max_size
   push bc                     ; save capacity
   push de                     ; save p
   
   ld hl,0
   call asm_realloc            ; initial array size is capacity bytes

   ld c,l
   ld b,h                      ; bc = new vector.data
   
   pop hl                      ; hl = void *p
   
   jp c, error_zc - 2          ; if realloc failed
   
   ld e,l
   ld d,h                      ; de = void *p = vector *
   
   ld (hl),c
   inc hl
   ld (hl),b                   ; vector.data = new vector.data
   inc hl
   
   xor a
   
   ld (hl),a
   inc hl
   ld (hl),a                   ; vector.size = 0
   inc hl
   
   pop bc
   
   ld (hl),c
   inc hl
   ld (hl),b                   ; set vector capacity
   inc hl
   
   pop bc
   
   ld (hl),c
   inc hl
   ld (hl),b                   ; set vector max_size
   
   ex de,hl                    ; hl = b_vector_t *
   ret
