
; bv_priority_queue_t *
; bv_priority_queue_init(void *p, size_t capacity, size_t max_size, int (*compar)(const void *, const void *))

XDEF bv_priority_queue_init

bv_priority_queue_init:

   pop af
   pop de
   pop bc
   pop hl
   pop ix
   
   push ix
   push hl
   push bc
   push de
   push af

   INCLUDE "adt/bv_priority_queue/z80/asm_bv_priority_queue_init.asm"
