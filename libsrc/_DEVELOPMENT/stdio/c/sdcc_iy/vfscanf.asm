
; int vfscanf(FILE *stream, const char *format, void *arg)

INCLUDE "clib_cfg.asm"

SECTION code_stdio

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _vfscanf

_vfscanf:

   pop af
   pop ix
   pop de
   pop bc
   
   push bc
   push de
   push hl
   push af
   
   INCLUDE "stdio/z80/asm_vfscanf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _vfscanf

EXTERN _vfscanf_unlocked

defc _vfscanf = _vfscanf_unlocked
   
INCLUDE "stdio/z80/asm_vfscanf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
