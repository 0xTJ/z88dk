;       Stub for the TI 86 calculator
;
;       Stefano Bodrato - Dec 2000
;


                MODULE  z88_crt0

;
; Initially include the zcc_opt.def file to find out lots of lovely
; information about what we should do..
;

                INCLUDE "zcc_opt.def"

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
	XDEF	cpygraph

; Now, getting to the real stuff now!

	org	$801F	; "Large asm block". To be loaded with "LASM"
	; You need LASM 0.8 Beta by Patrick Wong for this (www.ticalc.org)
	; - First wipe TI86 RAM (InstLASM is simply a memory cleaner)
	; - Load LargeLd
	; - Load you compiled and converted .86p code
	; - run asm(LargeLd
	; It will run you program. Loading order is important.
	
	ret ; this line must be commented if standard asm() call is used instead.
        
        ;org     $D748	; TI 86 standard asm() entry point.

;zap2000 format
; nop
; jp start
; .dw Description
; .dw Icon
;.start

   nop		;Identifies the table
   jp	start
   defw	1	;Version # of Table. Release 0 has no icon (Title only)
   defw	title	;Absolute pointer to program description
   defw	icon	;pointer to icon

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
        call    _main
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

.base_graphics
		defw	$FC00	;TI86
.coords		defw	0
.cpygraph	ret


.title
         defm  "Small C+ compiled program"&0
 
.icon
 defb @0000000    ;icon (some shell could like it)
 defb @0011000
 defb @0100010
 defb @0100111
 defb @0100010
 defb @0011000
 defb @0000000

 defb @00000000	; These two bytes probably aren't necessary;
 defb 255	; TI83 shells use them, so I'm leaving both here for now.

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

