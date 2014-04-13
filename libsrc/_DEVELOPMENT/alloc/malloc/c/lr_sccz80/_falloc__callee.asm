
; void *_falloc_(void *p, size_t size)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $01
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _falloc__callee

_falloc__callee:

   pop af
   pop hl
   pop bc
   push af

   INCLUDE "alloc/malloc/z80/asm__falloc.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _falloc__callee

LIB _falloc__unlocked_callee

_falloc__callee:

   jp _falloc__unlocked_callee
   
   INCLUDE "alloc/malloc/z80/asm__falloc.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
