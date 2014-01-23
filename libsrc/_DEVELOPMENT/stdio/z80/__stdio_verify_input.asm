
XLIB __stdio_verify_input

LIB error_eacces_mc, error_mc, asm0_fflush

__stdio_verify_input:

   ; Verify input from stream is possible
   ;
   ; enter : ix = FILE *
   ;
   ; exit  : ix = FILE *
   ;         carry set if problem with hl=-1
   ;
   ; uses  : all except bc, de, hl, ix
   
   ; check for stream error and read mode
   
   ld a,(ix+3)                 ; a = state_flags_0
   
   and $98                     ; keep read, error, eof flags
   cp $80                      ; compare R=1, ERR=0, EOF=0
   
   jr nz, errors
   
   ; check if last operation on stream was a write
   
   bit 1,(ix+4)
   jr nz, last_read
   
   push bc
   push de
   push hl
   
   call asm0_fflush_unlocked
   
   pop hl
   pop de
   pop bc

last_read:

   set 1,(ix+4)                ; indicate last operation is read
   
   or a
   ret

errors:

   and $18
   jp nz, error_mc             ; if ERR or EOF, do not alter errno

   jp error_eacces_mc          ; if not open for reading
