
XLIB asm_heap_calloc_unlocked

LIB l_mulu_16_16x16, asm_heap_alloc_unlocked, asm_memset

asm_heap_calloc_unlocked:

   ; Allocate zero-initialized memory from a heap without locking
   ;
   ; enter : hl = uint nmemb
   ;         bc = uint size
   ;         de = void *heap
   ;
   ; exit  : success
   ;
   ;            hl = address of allocated memory, 0 if size == 0
   ;            carry reset
   ;
   ;         fail on insufficient memory
   ;
   ;            hl = 0
   ;            carry set, errno = ENOMEM
   ;
   ;         fail on lock acquisition
   ;
   ;            hl = 0
   ;            carry set, errno = ENOLCK
   ;
   ; uses  : af, bc, de, hl

   push de                     ; save heap
   
   ld e,c
   ld d,b
   call l_mulu_16_16x16        ; hl = nmemb * size = request size

   pop de                      ; de = void *heap
   push hl                     ; save request size
   
   call asm_heap_alloc_unlocked

   pop bc                      ; bc = request size
   ret c                       ; if allocation failed
   
   ; hl = void *p
   ; bc = request size
   
   ld e,0
   jp asm_memset               ; zero the allocated memory
