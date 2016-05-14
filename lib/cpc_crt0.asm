;       CRT0 for the Amstrad CPC family
;
;       Stefano Bodrato 8/6/2000
;
;       $Id: cpc_crt0.asm,v 1.26 2016-05-14 03:36:03 aralbrec Exp $
;

        MODULE  cpc_crt0


;--------
; Include zcc_opt.def to find out some info
;--------
        INCLUDE "zcc_opt.def"

;--------
; Some scope definitions
;--------

        EXTERN    _main           ;main() is always external to crt0 code

        PUBLIC    cleanup         ;jp'd to by exit()
        PUBLIC    l_dcal          ;jp(hl)

        PUBLIC    exitsp          ;atexit() variables
        PUBLIC    exitcount

        PUBLIC    heaplast        ;Near malloc heap variables
        PUBLIC    heapblocks

        PUBLIC    __sgoioblk      ;stdio info block

        PUBLIC    base_graphics   ;Graphical variables
        PUBLIC    coords          ;Current xy position

        PUBLIC    snd_tick        ;Sound variable
        PUBLIC	bit_irqstatus	; current irq status when DI is necessary

        PUBLIC    firmware_bc     ;Needed by the firmware interposer
        PUBLIC    firmware_af     ;Needed by the firmware interposer

;--------
; Set an origin for the application (-zorg=) default to $6000
;--------

        IF      !myzorg
                defc    myzorg  = $6000
        ENDIF   
                org     myzorg


;--------
; REAL CODE
;--------

start:

        di
		
		; take over interrupts
		
		ld      hl,($0039)              ; original interrupt service routine
		ld      (oldint_0),hl
		ld      (oldint_1),hl
		
		ld      hl,newint               ; new interrupt service routine
		ld      ($0039),hl

        ld      (start1+1),sp
		
        ld      hl,-6530   ; que??
		;;ld      hl,-64             ; reserve space for 32 entries on the exit stack
        add     hl,sp
        ld      sp,hl
        ld      (exitsp),sp
		
		call    cpc_save_fw_exx_set     ; save firmware exx set
		
		ei

; Optional definition for auto MALLOC init
; it assumes we have free space between the end of 
; the compiled program and the stack pointer
	IF DEFINED_USING_amalloc
		INCLUDE "amalloc.def"
	ENDIF

IF !DEFINED_nostreams
IF DEFINED_ANSIstdio
; Set up the std* stuff so we can be called again
        ld      hl,__sgoioblk+2
        ld      (hl),19 ;stdin
        ld      hl,__sgoioblk+6
        ld      (hl),21 ;stdout
        ld      hl,__sgoioblk+10
        ld      (hl),21 ;stderr
ENDIF
ENDIF


; INIT math identify platform
IF NEED_floatpack
        EXTERN     init_floatpack
        call    init_floatpack
ENDIF

        call    _main

cleanup:
;
;       Deallocate memory which has been allocated here!
;

IF !DEFINED_nostreams
IF DEFINED_ANSIstdio
        EXTERN     closeall
        call    closeall
ENDIF
ENDIF

        di
		
		ld      hl,(oldint_0)
		ld      ($0039),hl              ; restore original interrupt routine

		call    cpc_load_fw_exx_set     ; restore firmware exx set
        
start1: ld      sp,0

        ei
        ret

l_dcal: jp      (hl)

; Now, define some values for stdin, stdout, stderr

__sgoioblk:
IF DEFINED_ANSIstdio
        INCLUDE "stdio_fp.asm"
ELSE
        defw    -11,-12,-10
ENDIF


; Now, which of the vfprintf routines do we need?
	PUBLIC	asm_vfprintf
IF DEFINED_floatstdio
	EXTERN	asm_vfprintf_level3
	defc	asm_vfprintf = asm_vfprintf_level3
ELSE
	IF DEFINED_complexstdio
	        EXTERN	asm_vfprintf_level2
		defc	asm_vfprintf = asm_vfprintf_level2
	ELSE
	       	EXTERN	asm_vfprintf_level1
		defc	asm_vfprintf = asm_vfprintf_level1
	ENDIF
ENDIF

        

exitsp:         defw    0       ;  atexit       
exitcount:      defb    0
base_graphics:
                defw    $C000
coords:         defw    0
firmware_bc:    defw    0
firmware_af:    defw    0

heaplast:       defw    0       ; Address of last block on heap
heapblocks:     defw    0       ; Number of blocks

IF DEFINED_USING_amalloc
EXTERN ASMTAIL
PUBLIC _heap
; The heap pointer will be wiped at startup,
; but first its value (based on ASMTAIL)
; will be kept for sbrk() to setup the malloc area
_heap:
                defw ASMTAIL	; Location of the last program byte
                defw 0
ENDIF

IF DEFINED_NEED1bitsound
snd_tick:       defb	0	; Sound variable
bit_irqstatus:	defw	0
ENDIF

                defm    "Small C+ CPC"
                defb    0

IF NEED_floatpack
        INCLUDE         "float.asm"
;init_floatpack:
;       ret

;seed for random number generator - not used yet..
fp_seed:        defb    $80,$80,0,0,0,0
;Floating point registers...
extra:          defs    6
fa:             defs    6
fasign:         defb    0

ENDIF


; interposer interrupt routine

newint:

   push af
   
   ld a,(__fw_exx_set_active__)
   or a
   jr z, process_set_active

firmware_set_active:
   
   pop af
   
   ; jump to old interrupt service routine

   defb 195
oldint_0:
   defw 0

process_set_active:

   pop af   

   ; save process exx set
   ; load fw exx set
   
   exx
   ex af,af'

   ld (__process_exx_set_hl__),hl
   ld (__process_exx_set_de__),de
   ld (__process_exx_set_bc__),bc
   push af
   pop hl
   ld (__process_exx_set_af__),hl
   
   ld a,1
   ld (__fw_exx_set_active__),a
   
   ld hl,(__fw_exx_set_af__)
   push hl
   pop af
   ld bc,(__fw_exx_set_bc__)
   ld de,(__fw_exx_set_de__)
   ld hl,(__fw_exx_set_hl__)
   
   ex af,af'
   exx

   ; call old interrupt service routine

   defb 205
oldint_1:
   defw 0

   ; save fw exx set
   ; load process exx set
   
   di
   
   exx
   ex af,af'

   ld (__fw_exx_set_hl__),hl
   ld (__fw_exx_set_de__),de
   ld (__fw_exx_set_bc__),bc
   push af
   pop hl
   ld (__fw_exx_set_af__),hl
   
   xor a
   ld (__fw_exx_set_active__),a

   ld hl,(__process_exx_set_af__)
   push hl
   pop af
   ld bc,(__process_exx_set_bc__)
   ld de,(__process_exx_set_de__)
   ld hl,(__process_exx_set_hl__)
   
   ex af,af'
   exx
   
   ei
   ret


; interrupts must be disabled when these routines run

PUBLIC cpc_load_fw_exx_set
   
cpc_load_fw_exx_set:

   exx
   ex af,af'

   ld a,1
   ld (__fw_exx_set_active__),a
   
   ld hl,(__fw_exx_set_af__)
   push hl
   pop af
   ld bc,(__fw_exx_set_bc__)
   ld de,(__fw_exx_set_de__)
   ld hl,(__fw_exx_set_hl__)
   
   ex af,af'
   exx
   
   ret
   

PUBLIC cpc_save_fw_exx_set

cpc_save_fw_exx_set:

   exx
   ex af,af'

   ld (__fw_exx_set_hl__),hl
   ld (__fw_exx_set_de__),de
   ld (__fw_exx_set_bc__),bc
   push af
   pop hl
   ld (__fw_exx_set_af__),hl
   
   xor a
   ld (__fw_exx_set_active__),a

   ex af,af'
   exx
   
   ret


__fw_exx_set_active__:    defb 1

__fw_exx_set_af__:        defs 2
__fw_exx_set_bc__:        defs 2
__fw_exx_set_de__:        defs 2
__fw_exx_set_hl__:        defs 2

__process_exx_set_af__:   defs 2
__process_exx_set_bc__:   defs 2
__process_exx_set_de__:   defs 2
__process_exx_set_hl__:   defs 2
