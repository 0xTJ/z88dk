;
;       Z80 ANSI Library
;
;---------------------------------------------------
;       A different fputc_cons with ANSI support
;
;	Stefano Bodrato - 21/4/2000
;
;	$Id: fputc_cons.asm,v 1.5 2016-03-30 10:28:01 dom Exp $
;

          PUBLIC  fputc_cons
          PUBLIC  _fputc_cons
	  EXTERN	f_ansi

;
; Entry:        hl = points to char
;
.fputc_cons
._fputc_cons
	ld      hl,2
	add     hl,sp
	ld      de,1	; one char buffer (!)
	jp      f_ansi
