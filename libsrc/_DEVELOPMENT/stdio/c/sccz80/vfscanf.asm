
; int vfscanf(FILE *stream, const char *format, void *arg)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC vfscanf

EXTERN asm_vfscanf

vfscanf:

   pop af
   pop bc
   pop de
   pop ix

   push ix
   push de
   push bc
   push af
   
   jp asm_vfscanf

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC vfscanf

EXTERN vfscanf_unlocked

vfscanf:

   jp vfscanf_unlocked

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
