
; void *heap_alloc_unlocked(void *heap, size_t size)

XLIB heap_alloc_unlocked

LIB asm_heap_alloc_unlocked

heap_alloc_unlocked:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   jp asm_heap_alloc_unlocked
