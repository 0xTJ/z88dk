
SECTION code_fcntl

PUBLIC console_01_input_stdio_msg_seek

EXTERN console_01_input_proc_getc
EXTERN STDIO_MSG_CUR, l_decu_dehl, error_lzc

console_01_input_stdio_msg_seek:

   ;    C = STDIO_SEEK_SET (0), STDIO_SEEK_CUR (1), STDIO_SEEK_END (2)
   ; DEHL'= file offset
   ;    C'= STDIO_SEEK_SET (0), STDIO_SEEK_CUR (1), STDIO_SEEK_END (2)
   ;
   ; return:
   ;
   ; DEHL = updated file position
   ; carry set on error (file position out of range)
   ; 
   ; note: stdio stages with buffers must flush first when
   ; this message is received.

   exx
   
   ld a,c
   
   cp STDIO_MSG_CUR
   jp nz, error_lznc           ; if not seeking forward do nothing
   
   bit 7,d
   jp nz, error_lznc           ; if negative offset do nothing

seek_loop:

   ; dehl = number of chars remaining to consume
   
   ld a,d
   or e
   or h
   or l
   ret z                       ; if done
   
   call l_decu_dehl

   call console_01_input_proc_getc  ; a = hl = char
   jr nc, seek_loop                 ; if no error
   
   jp error_lzc                ; if driver error
