
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *heap_init(void *heap, size_t size)
;
; Initialize a heap of size bytes.
; An unchecked condition is that size > 14 bytes.
;
; ===============================================================

XDEF heap_init

heap_init:

   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   
   INCLUDE "../../z80/asm_heap_init.asm"
