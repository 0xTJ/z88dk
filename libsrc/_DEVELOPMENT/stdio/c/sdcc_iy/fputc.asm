
; int fputc(int c, FILE *stream)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _fputc

_fputc:

   pop af
   pop de
   pop ix
   
   push ix
   push de
   push af
   
   INCLUDE "stdio/z80/asm_fputc.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _fputc

EXTERN _fputc_unlocked

_fputc:

   jp _fputc_unlocked
   
   INCLUDE "stdio/z80/asm_fputc.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
