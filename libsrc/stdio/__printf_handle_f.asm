
	MODULE	__printf_handle_f
	PUBLIC	__printf_handle_f
	PUBLIC	__printf_handle_e

	EXTERN	l_jphl
	EXTERN	dldpsh
	EXTERN	__printf_get_buffer_address
	EXTERN	__printf_print_the_buffer
	EXTERN	ftoa
	EXTERN	ftoe
	EXTERN	strlen

__printf_handle_e:
	set	5,(ix-4)
__printf_handle_f:
        push    hl              ;save fmt
; If we've got %f then lets assume we've got sccz80 rather than sdcc
        dec     de
        dec     de
        dec     de
        dec     de              ;long starts here
        dec     de
        dec     de
        push    de              ;save ap next
        inc     de
        inc     de

        push    ix              ;save ix - ftoa will corrupt it
        ex      de,hl
        call    dldpsh
        ld      c,(ix-8)
        ld      b,(ix-7)
        ld      a,b
        and     c
        inc     a
        jr      nz,set_prec
        ld      bc,6
set_prec:
        push    bc
        call    __printf_get_buffer_address
        push    hl
        ;ftoa(double number, int prec, char *buf)
        ld      hl,ftoa
        bit     5,(ix-4)
        jr      z,call_fp_converter
        ld      hl,ftoe
call_fp_converter:
        call    l_jphl
        pop     bc              ;the buffer
        pop     bc
        pop     bc
        pop     bc
        pop     bc
        pop     ix              ;get ix back
        call    __printf_get_buffer_address
        call    strlen          ;get the length of it
	ld	(ix-10),l
	jp	__printf_print_the_buffer


