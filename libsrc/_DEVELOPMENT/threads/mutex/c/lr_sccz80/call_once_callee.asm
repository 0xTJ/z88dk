
; void call_once_callee(once_flag *flag, void (*func)(void))

XDEF call_once_callee

call_once_callee:

   pop hl
   pop de
   ex (sp),hl
   
   INCLUDE "threads/mutex/z80/asm_call_once.asm"
