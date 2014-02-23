
; ===============================================================
; Jan 2014
; ===============================================================
; 
; char *fgets(char *s, int n, FILE *stream)
;
; Read up to n-1 chars into array s from the stream.  Terminate
; the string with a '\0'.  Stop reading from the stream if '\n'
; or EOF is encountered.  '\n' is written to s.
;
; If no chars could be read from the stream or a stream error
; occurs, 0 is returned.  Otherwise s is returned.
;
; ===============================================================

XLIB asm_fgets_unlocked
XDEF asm0_fgets_unlocked

LIB error_zc
LIB __stdio_verify_input, __stdio_input_sm_fgets, __stdio_recv_input_raw_eatc

asm_fgets_unlocked:

   ; enter : ix = FILE *
   ;         bc = size_t n
   ;         de = char *s
   ;
   ; exit  : ix = FILE *
   ;         bc'= number of chars written to s
   ;
   ;         if success
   ;
   ;            hl = char *s
   ;            de = address of terminating '\0'
   ;            s terminated
   ;            carry reset
   ;
   ;         if s == 0 or n == 0
   ;
   ;            hl = 0
   ;            s not terminated
   ;            carry set
   ;
   ;         if stream at EOF or stream in error state
   ;
   ;            hl = 0
   ;            s not terminated
   ;            carry set
   ;
   ;         if stream error or EOF occurs and no chars were read
   ;
   ;            hl = 0
   ;            s not terminated
   ;            carry set, errno set
   ;
   ; uses  : all except ix

   ld hl,__stdio_input_sm_fgets  ; use the fgets state machine to qualify stream chars

asm0_fgets_unlocked:             ; entry for gets()

   push hl
   
   call __stdio_verify_input   ; check that input from stream is ok
   jp c, error_zc - 1
   
   ld a,d
   or e
   jp z, error_zc - 1          ; if s == 0
   
   ld a,b
   or c
   jp z, error_zc - 1          ; if n == 0
   
   dec bc                      ; make room for '\0'
   pop hl                      ; hl = state machine
   
   push de                     ; save char *s

   push bc
   exx
   pop hl                      ; hl = max num chars to consume
   
   call __stdio_recv_input_raw_eatc
   
   exx
   jr c, stream_error

success:

   xor a
   ld (de),a                   ; terminate s
   
   pop hl
   ret

stream_error:

   exx
   ld a,b
   or c
   exx

   jr nz, success              ; if at least one char was written to s
   jp error_zc - 1
