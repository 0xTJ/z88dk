
; void call_once(once_flag *flag, void (*func)(void))

XLIB call_once

LIB asm_call_once

call_once:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   jp asm_call_once
