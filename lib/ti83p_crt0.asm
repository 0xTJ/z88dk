;       Stub for the TI 83+ calculator
;
;       Stefano Bodrato - Dec 2000
;                         Feb 2000 - Speeded up the cpygraph
;
;       $Id: ti83p_crt0.asm,v 1.7 2001-05-11 07:58:59 stefano Exp $
;


                MODULE  z88_crt0

; No matter what set up we have, main is always, always external to
; this file

                XREF    _main

;
; Some variables which are needed for both app and basic startup
;

        XDEF    cleanup
        XDEF    l_dcal

; Integer rnd seed

        XDEF    int_seed

; vprintf is internal to this file so we only ever include one of the set
; of routines

	XDEF	_vfprintf

;Exit variables

        XDEF    exitsp
        XDEF    exitcount

;For stdin, stdout, stder

        XDEF    __sgoioblk

; Graphics stuff
	XDEF	base_graphics
	XDEF	coords

; TI calc specific stuff
	XDEF	cpygraph
	XDEF	tidi
	XDEF	tiei

; Now, getting to the real stuff now!

; ION shell ( Bin2Var conversion utility )
IF !DEFINED_startup | (startup=1)
	org	$9D95
ENDIF

; Other conversion tools - ION shell 
IF (startup=2)
	org	$9D93	; TI 83+ (9d95-2)
	defb 	$BB, $6D
ENDIF

	ret
	jr	nc,start ; not detectable until INSTALL is run

	DEFINE NEED_name	; The next time we'll include zcc_opt.def
				; it will put (defm) the program's namestring
				; if "#pragma string name xxxx" is been declared
;
; Initially include the zcc_opt.def file to find out lots of lovely
; information about what we should do..
;
	INCLUDE "zcc_opt.def"
	UNDEFINE NEED_name

 IF DEFINED_NEED_name
	; If namestring is provided, add small compiler ident
	defm	" - Small C+"&0
 ELSE
	; If no namestring provided, display full compiler ident
	defm	"Z88DK Small C+ Program"&0
 ENDIF

.start
        ld      hl,0
        add     hl,sp
        ld      (start1+1),hl
        ld      hl,-64
        add     hl,sp
        ld      sp,hl
        ld      (exitsp),sp

IF !DEFINED_nostreams
IF DEFINED_ANSIstdio
; Set up the std* stuff so we can be called again
	ld	hl,__sgoioblk+2
	ld	(hl),19	;stdin
	ld	hl,__sgoioblk+6
	ld	(hl),21	;stdout
	ld	hl,__sgoioblk+10
	ld	(hl),21	;stderr
ENDIF
ENDIF

IF DEFINED_GRAYlib
	INCLUDE	"#graylib83p.asm"
ENDIF

	call	tidi
        call    _main
        call	tiei
.cleanup
;
;       Deallocate memory which has been allocated here!
;
	push	hl
IF !DEFINED_nostreams
IF DEFINED_ANSIstdio
	LIB	closeall
	call	closeall
ENDIF
ENDIF
	pop	bc
.start1
        ld      sp,0
        ret

.l_dcal
        jp      (hl)


.tiei
	exx
	ld	hl,(hl1save)
	ld	bc,(bc1save)
	ld	de,(de1save)
	exx
	ld	iy,(iysave)
IF DEFINED_GRAYlib
	im	1
ELSE
	ei
ENDIF
	ret

.tidi
IF DEFINED_GRAYlib
	im	2
ELSE
	di
ENDIF
	exx
	ld	(hl1save),hl
	ld	(bc1save),bc
	ld	(de1save),de
	exx
	ld	(iysave),iy
	ret

.hl1save defw	0
.de1save defw	0
.bc1save defw	0
.iysave defw	0

; Now, define some values for stdin, stdout, stderr

.__sgoioblk
IF DEFINED_ANSIstdio
	INCLUDE	"#stdio_fp.asm"
ELSE
        defw    -11,-12,-10
ENDIF


; Now, which of the vfprintf routines do we need?


._vfprintf
IF DEFINED_floatstdio
	LIB	vfprintf_fp
	jp	vfprintf_fp
ELSE
	IF DEFINED_complexstdio
		LIB	vfprintf_comp
		jp	vfprintf_comp
	ELSE
		IF DEFINED_ministdio
			LIB	vfprintf_mini
			jp	vfprintf_mini
		ENDIF
	ENDIF
ENDIF


;Seed for integer rand() routines

.int_seed       defw    0

;Atexit routine

.exitsp
                defw    0
.exitcount
                defb    0

; Heap stuff

.heaplast	defw	0
.heapblocks	defw	0

; mem stuff

.base_graphics	defw	$9340	;TI83+
.coords		defw	0
.cpygraph
IF DEFINED_GRAYlib
		ret
ELSE
		;call	$50	;ION bjump call
		;defw	$486A
		jp	$966e+80+15 ; ION FastCopy call
ENDIF


;All the float stuff is kept in a different file...for ease of altering!
;It will eventually be integrated into the library
;
;Here we have a minor (minor!) problem, we've no idea if we need the
;float package if this is separated from main (we had this problem before
;but it wasn't critical..so, now we will have to read in a file from
;the directory (this will be produced by zcc) which tells us if we need
;the floatpackage, and if so what it is..kludgey, but it might just work!
;
;Brainwave time! The zcc_opt file could actually be written by the
;compiler as it goes through the modules, appending as necessary - this
;way we only include the package if we *really* need it!

IF NEED_floatpack
        INCLUDE         "#float.asm"

;seed for random number generator - not used yet..
.fp_seed        defb    $80,$80,0,0,0,0
;Floating point registers...
.extra          defs    6
.fa             defs    6
.fasign         defb    0

ENDIF


