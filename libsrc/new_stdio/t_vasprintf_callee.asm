; int __CALLEE__ t_vasprintf_callee(char **s, const char *fmt, void *arg_ptr)
; 05.2008 aralbrec

XLIB t_vasprintf_callee
XDEF ASMDISP_VASPRINTF_CALLEE

LIB t_vsnprintf_callee, malloc
XREF ASMDISP_VSNPRINTF_CALLEE

LIB t_vsprintf_callee
XREF ASMDISP_VSPRINTF_CALLEE

.t_vasprintf_callee

   pop hl
   pop bc
   pop de
   exx
   pop hl
   ld de,0
   exx
   push hl

.asmentry

   ; enter : de  = format string
   ;         bc  = & parameter list (arg_ptr)
   ;         hl' = char **s
   ;         de' = 0
   ; exit  : hl  = number of chars written to destination string not incl \0, -1 if error

   push bc                     ; save & parameter list
   push de                     ; save format string
   
   call t_vsnprintf_callee + ASMDISP_VSNPRINTF_CALLEE
   inc hl                      ; size of buffer required for output string
   
   call malloc                 ; try to allocate it
   pop de                      ; format string
   pop bc                      ; & parameter list
   jr nc, fail                 ; if allocation failed...
   
   push hl                     ; malloced buffer address
   exx
   pop de
   ld (hl),e                   ; write buffer address into char**s
   inc hl
   ld (hl),d
   ex de,hl                    ; hl = destination buffer address
   exx
   
   jp t_vsprintf_callee + ASMDISP_VSPRINTF_CALLEE   ; at a cost of 20 bytes the faster sprintf is called

.fail

   ; de' = 0
   
   exx
   ld (hl),e                   ; write 0 into char**s
   inc hl
   ld (hl),d
   exx
   
   ld hl,-1                    ; return -1 indicating malloc failed
   ret
   
defc ASMDISP_VASPRINTF_CALLEE = asmentry - t_vasprintf_callee
