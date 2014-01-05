
XLIB __stdio_printf_x
XDEF __stdio_printf_X

LIB __stdio_printf_number_tail, __stdio_printf_number_zero, l_utoh

__stdio_printf_x:
__stdio_printf_X:

   ; %x, %X converter called from vfprintf()
   ;
   ; enter : ix = FILE *
   ;         hl = void *stack_param
   ;         de = void *buffer_digits
   ;         stack = buffer_digits, width, precision
   ;
   ; exit  : carry set if stream error
   ;
   ; NOTE: (buffer_digits - 3) points at buffer space of three free bytes

   ; read uint to convert
   
   ld a,(hl)
   inc hl
   ld h,(hl)
   ld l,a                      ; hl = uint to convert
   
   or h
   jp z, __stdio_printf_number_zero  ; if uint is zero
   
   ; convert uint to ascii buffer
   
   push de                     ; save buffer_digits
   
   call l_utoh                 ; convert uint in hl to ascii digits in buffer at de
   
   pop hl
   ex de,hl                    ; de = buffer_digits
   
   or a
   sbc hl,de
   ld c,l
   ld b,h                      ; bc = num_sz = number of digits in ascii string
      
   ; ix = FILE *
   ; bc = num_sz
   ; stack = buffer_digits, width, precision
   
   jp __stdio_printf_number_tail
