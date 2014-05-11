
; int vfscanf(FILE *stream, const char *format, void *arg)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC vfscanf_callee

vfscanf_callee:

   pop af
   pop bc
   pop de
   pop ix
   push af
   
   INCLUDE "stdio/z80/asm_vfscanf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC vfscanf_callee

EXTERN vfscanf_unlocked_callee

vfscanf_callee:

   jp vfscanf_unlocked_callee
   
   INCLUDE "stdio/z80/asm_vfscanf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
