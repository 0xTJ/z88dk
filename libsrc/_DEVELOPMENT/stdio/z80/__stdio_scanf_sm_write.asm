
XLIB __stdio_scanf_sm_write

__stdio_scanf_sm_write:

   ; some common code used by the number state machines to write to the buffer
   
   inc c
   dec c
   jr z, b_0                   ; do not write to buffer unless there is space

w_0:

   ld (de),a                   ; write char to buffer
   inc de
   
   dec bc                      ; space remaining--
   ret

b_0:

   inc b
   djnz w_0
   
   ret
