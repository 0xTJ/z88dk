;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; vgl_00_output_char ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; Output via V-Chip
;
; ;;;;;;;;;;;;;;;;;;;;
; DRIVER CLASS DIAGRAM
; ;;;;;;;;;;;;;;;;;;;;
;
; CHARACTER_00_OUTPUT (root, abstract)
; VGL_00_OUTPUT_CHAR (concrete)
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; MESSAGES CONSUMED FROM STDIO
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; * STDIO_MSG_PUTC
; * STDIO_MSG_WRIT
; * STDIO_MSG_SEEK
; * STDIO_MSG_FLSH
; * STDIO_MSG_ICTL
; * STDIO_MSG_CLOS
;
; Others result in enotsup_zc.
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; MESSAGES CONSUMED FROM CHARACTER_00_OUTPUT
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;   * OCHAR_MSG_PUTC
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; IOCTLs UNDERSTOOD BY THIS DRIVER
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; * IOCTL_OCHAR_CRLF
;   enable / disable crlf processing
;
; ;;;;;;;;;;;;;;;;;;;;;;;;;;
; BYTES RESERVED IN FDSTRUCT
; ;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; offset (wrt FDSTRUCT.JP)  description
;
;  8..13                    mutex

SECTION code_driver
SECTION code_driver_character_output

PUBLIC vgl_00_output_char

EXTERN OCHAR_MSG_PUTC
EXTERN character_00_output

vgl_00_output_char:

   cp OCHAR_MSG_PUTC
   jp nz, character_00_output  ; forward other messages to library

vgl_00_output_char_ochar_msg_putc:

   ;   enter   :  c = char
   ;   exit    : carry set if error
   ;   can use : af, bc, de, hl, af'

	; Put to VRAM
	;ld a,c
	;ld hl,0xdca0
	
	;@FIXME: This is just a proof-of-concept!
	; Get cursor pos
	ld hl, 0xc000 + 20	; cursor_ofs variable of hello.c
	ld a, (hl)
	inc a
	; wrap/scroll
	ld (hl), a
	
	; Into VRAM at 0xdca0
	add 0xa0
	ld l, a
	ld h, 0xdc
	
	ld a,c
	ld (hl),a
	
	
	; Refresh row(s)
	ld hl,0xdcf0
	ld a,0x01
	ld (hl),a
	inc l
	ld (hl),a
	inc l
	ld (hl),a
	inc l
	ld (hl),a
	
	
;	; Output via ports 0x0b and 0x0a
;	ld a,c
;	out(0x0b),a
;	
;	
;	;Delay 1fff
;	;call _delay_1fff
;	push	hl
;	ld	hl, 1fffh
;	vgl_00_output_char_delay_1fff_loop:
;	dec	l
;	jr	nz, vgl_00_output_char_delay_1fff_loop
;	dec	h
;	jr	nz, vgl_00_output_char_delay_1fff_loop
;	pop	hl
;	


   ret                         ; carry is reset
