; ----------------------------------------------------------------
; Z88DK INTERFACE LIBRARY FOR NIRVANA+ ENGINE - by Einar Saukas
;
; See "nirvana+.h" for further details
; ----------------------------------------------------------------

; void NIRVANA_stop(void)

SECTION code_lib
SECTION code_nirvanap

PUBLIC NIRVANA_stop

EXTERN asm_NIRVANA_stop

defc NIRVANA_stop = asm_NIRVANA_stop
