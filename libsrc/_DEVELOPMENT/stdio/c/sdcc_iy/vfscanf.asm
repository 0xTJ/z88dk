
; int vfscanf(FILE *stream, const char *format, void *arg)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _vfscanf

_vfscanf:

   pop af
   pop ix
   pop de
   pop bc
   
   push bc
   push de
   push ix
   push af
   
   INCLUDE "stdio/z80/asm_vfscanf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _vfscanf

LIB _vfscanf_unlocked

_vfscanf:

   jp _vfscanf_unlocked
   
   INCLUDE "stdio/z80/asm_vfscanf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
