
; void *heap_destroy(void *heap)

XDEF heap_destroy

LIB mtx_destroy

defc heap_destroy = mtx_destroy

INCLUDE "alloc/malloc/z80/asm_heap_destroy.asm"
