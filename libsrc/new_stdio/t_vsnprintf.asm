; wrapper for function pointers

XLIB t_vsnprintf

LIB t_vsnprintf_callee
XREF ASMDISP_VSNPRINTF_CALLEE

.t_vsnprintf

   pop hl
   pop bc
   pop de
   exx
   pop de
   pop hl
   push hl
   push de
   exx
   push de
   push bc
   push hl
   
   jp t_vsnprintf_callee + ASMDISP_VSNPRINTF_CALLEE
