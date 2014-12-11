
; void heap_info(void *heap, void *callback)

INCLUDE "clib_cfg.asm"

SECTION code_alloc_malloc

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $01
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC heap_info

heap_info:

   pop af
   pop de
   pop bc
   
   push bc
   push de
   push af
   
   push ix
   
   ld ixl,c
   ld ixh,b
   
   call asm_heap_info
   
   pop ix
   ret

   INCLUDE "alloc/malloc/z80/asm_heap_info.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC heap_info

EXTERN heap_info_unlocked

defc heap_info = heap_info_unlocked
   
INCLUDE "alloc/malloc/z80/asm_heap_info.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
