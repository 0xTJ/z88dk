
; int printf(const char *format, ...)

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _printf

_printf:

   push ix
   
   call asm_printf
   
   pop ix
   ret

   INCLUDE "stdio/z80/asm_printf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _printf

EXTERN _printf_unlocked

_printf:

   jp _printf_unlocked
   
   INCLUDE "stdio/z80/asm_printf.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
