
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; simple keyboard driver ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC __cons_input_kbd_A_00

; keyboard driver reads LASTK for key input
; ROM independent, other than reliant on something updating LASTK

EXTERN __cons_output_echo, l_jphl
EXTERN error_enotsup_zc, error_znc, error_lznc

EXTERN STDIO_SEEK_CUR
EXTERN STDIO_MSG_GETC, STDIO_MSG_EATC, STDIO_MSG_READ
EXTERN STDIO_MSG_SEEK, STDIO_MSG_FLSH, STDIO_MSG_CLOS

defc LASTK = 23560

__cons_input_kbd_A_00:

   cp STDIO_MSG_GETC
   jr z, __kbd_getc
   
   cp STDIO_MSG_EATC
   jr z, __kbd_eatc
   
   cp STDIO_MSG_READ
   jr z, __kbd_read
   
   cp STDIO_MSG_SEEK
   jr z, __kbd_seek
   
   cp STDIO_MSG_FLSH
   jr z, __kbd_flsh
   
   cp STDIO_MSG_CLOS
   jp z, error_znc             ; do nothing, report no error
   
   jp error_enotsup_zc         ; hl = 0 puts stream in error state

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

__kbd_getc:

   ; read a single char from the stream
   ;
   ; return: HL = char
   ; carry set on error or eof: if HL=0 stream error, HL=-1 on eof
   
   call __kbd_getchar          ; read one char

   push hl
   call __kbd_echo             ; local echo function
   pop hl
   
   ld h,0
   or a
   ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

__kbd_eatc:

   ; read chars from the stream until one is disqualified
   ; disqualified char should be 'ungot'
   ;
   ; HL'= int (*qualify)(char c)
   ; BC'= optional
   ; DE'= optional
   ; HL = max_length = max number of stream chars to consume
   ; 
   ; return: BC = number of bytes consumed from stream
   ;         HL = next unconsumed (unmatching) char or EOF
   ;         BC'= unchanged by driver
   ;         DE'= unchanged by driver
   ;         HL'= unchanged by driver

   ld c,l
   ld b,h                      ; bc = max num chars to consume
   
   ld de,-1                    ; de = num chars consumed - 1
   
__kbd_eatc_loop:

   call __kbd_getchar          ; l = char
   inc de                      ; de = num chars consumed
   
   ld a,b
   or c
   jr z, __kbd_eatc_exit       ; if max num reached
   
   ld a,l                      ; a = char
   exx
   call l_jphl                 ; qualify(a)
   exx
   
   jr c, __kbd_eatc_exit       ; if char is disqualified
   
   push bc
   push de
   
   ld a,l
   call __kbd_echo             ; local echo function
   
   pop de
   pop bc
   
   dec bc                      ; num chars remaining to consume -= 1
   jr __kbd_eatc_loop

__kbd_eatc_exit:

   ; de = num chars consumed from stream
   ;  l = next unconsumed char

   xor a
   ld h,a                      ; hl = next consumed char
   
   ld a,l
   ld (LASTK),a                ; shove unconsumed char back into LASTK

   ld c,e
   ld b,d                      ; bc = num chars consumed

   ret                         ; carry reset

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

__kbd_read:

   ; DE'= void *buffer = byte destination
   ; BC'= max_length > 0
   ; HL = max_length > 0
   ;
   ; return BC = number of bytes successfully read
   ;        DE'= void *buffer_ptr = address of byte following last written
   ;        carry set on error with HL=0 for stream error, -1 for eof

   ; we never have stream errors or eof from a keyboard
   
   exx
   
__kbd_read_loop:

   ld a,b
   or c
   jr z, __kbd_read_exit       ; if no more chars to read
   
   dec bc
   call __kbd_getchar
   
   ld (de),a                   ; write char to buffer
   inc de
   
   push bc
   push de
   
   call __kbd_echo             ; local echo function
   
   pop de
   pop bc
   
   jr __kbd_read_loop

__kbd_read_exit:

   exx
   
   ld c,l
   ld b,h                      ; bc = max_length
   
   ret                         ; carry is reset

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

__kbd_seek:

   ; stdio uses seek forward to ignore input chars for %*[n]c
 
   ;    C = STDIO_SEEK_SET (0), STDIO_SEEK_CUR (1), STDIO_SEEK_END (2)
   ; DEHL'= file offset
   ;    C'= STDIO_SEEK_SET (0), STDIO_SEEK_CUR (1), STDIO_SEEK_END (2)
   ;
   ; return DEHL = current position, carry on error

   exx
   
   ld a,c
   
   CP STDIO_SEEK_CUR
   jp nz, error_lznc           ; if not seeking forward, do nothing

   bit 7,d
   jp nz, error_lznc           ; if negative offset, do nothing
   
   ; dehl = number of chars to seek past
   ; if de != 0 the universe will be over before we are done so ignore it

   ex de,hl                    ; de = number of chars to consume

__kbd_seek_loop:

   ld a,d
   or e
   jp z, error_lznc            ; if num chars == 0

   dec de
   call __kbd_getchar
   
   push de
   call __kbd_echo             ; local echo function
   pop de
   
   jr __kbd_seek_loop
   
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

__kbd_flsh:

   ; just zero LASTK
   
   xor a
   ld (LASTK),a
   
   ret                         ; carry reset

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

__kbd_getchar:

   ld a,(LASTK)                ; LASTK
   
   or a
   jr z, __kbd_getchar         ; if no keypress

   ld l,a
   
   xor a
   ld (LASTK),a                ; consume the keypress
   
   ld a,l
   ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

__kbd_echo:
   
   bit 7,(ix+13)
   ret z                       ; if echo is off
   
   cp 13
   jp z, __cons_output_echo
   
   bit 6,(ix+13)
   jp z, __cons_output_echo    ; if not password mode
   
   ld a,'*'
   jp __cons_output_echo

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
