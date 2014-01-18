
XLIB __stdio_scanf_s

LIB l_saturated_inc_hl
LIB __stdio_recv_input_eat_ws_repeat, __stdio_recv_input_eatc, __stdio_scanf_sm_string

__stdio_scanf_s:

   ; %s converter called from vfscanf()
   ;
   ; enter : ix = FILE *
   ;         bc = field width (0 means default)
   ;         hl = void *p (0 means assignment suppression)
   ;
   ; exit  : carry set if error
   ;
   ; uses  : all except ix

   ; CONSUME LEADING WHITESPACE
   
   push bc
   push hl
   
   call __stdio_recv_input_eat_ws_repeat
   
   ; stack = field width, void *buffer
   
   ; READ STREAM CHARS INTO BUFFER
   
   pop bc                         ; bc = void *buffer
   ld hl,__stdio_scanf_sm_string  ; hl = string state machine
   
   exx
   
   pop bc                      ; bc = field width
   
   ld a,b
   or c
   jr nz, width_specified      ; if field width was supplied
   
   ld bc,$ffff                 ; otherwise consume all string chars from stream

width_specified:

   call __stdio_recv_input_eatc
   
   exx
   jr c, stream_error

zero_terminate:

   ; ZERO TERMINATE THE STRING

   ; if bc != 0 (assignment not suppressed), terminate the string
   
   ld a,b
   or c
   ret z                       ; if assignment suppressed

   exx
   
   ld a,b
   or c
   call nz, l_saturated_inc_hl ; if at least one char written, num items assigned++

   exx
   
   xor a
   ld (bc),a                   ; zero terminate string

   ret

stream_error:

   push af                     ; save error type and carry set

   call zero_terminate         ; always zero terminate string

   pop af
   ret
