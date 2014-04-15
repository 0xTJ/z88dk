
; FILE *freopen(char *filename, char *mode, FILE *stream)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB freopen

LIB asm_freopen

freopen:

   pop af
   pop ix
   pop de
   pop hl
   
   push hl
   push de
   push ix
   push af
   
   jp asm_freopen

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB freopen

LIB freopen_unlocked

freopen:

   jp freopen_unlocked

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
