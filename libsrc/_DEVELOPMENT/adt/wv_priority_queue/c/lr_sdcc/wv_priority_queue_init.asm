
; wv_priority_queue_t *
; wv_priority_queue_init(void *p, size_t capacity, size_t max_size, int (*compar)(const void *, const void *))

XDEF wv_priority_queue_init

wv_priority_queue_init:

   pop af
   exx
   pop bc
   exx
   pop hl
   pop bc
   pop de
   
   push de
   push bc
   push hl
   exx
   push bc
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   exx
   
   call asm_wv_priority_queue_init
   
   pop ix
   ret

   INCLUDE "adt/wv_priority_queue/z80/asm_wv_priority_queue_init.asm"
