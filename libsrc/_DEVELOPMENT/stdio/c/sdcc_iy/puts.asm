
; int puts(const char *s)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _puts

_puts:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "stdio/z80/asm_puts.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XDEF _puts

LIB _puts_unlocked

_puts:

   jp _puts_unlocked
   
   INCLUDE "stdio/z80/asm_puts.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
