
; size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _fread

_fread:

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
   
   INCLUDE "stdio/z80/asm_fread.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _fread

LIB _fread_unlocked

_fread:

   jp _fread_unlocked
   
   INCLUDE "stdio/z80/asm_fread.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
