
XLIB __stdio_varg_2
XDEF __stdio_varg_3

LIB __stdio_nextarg_de

; __stdio_varg_n
;
; n = number of return addresses on stack

__stdio_varg_3:

   inc a
   
__stdio_varg_2:

   ; return pointer to the second argument of the argument list
   ; return the first 16-bit argument
   
   ; enter :  a = number of arguments pushed in var_arg list
   ;          stack = arg_list, return, return from this function
   ;
   ; exit  : hl = void *arg (pointer to second argument)
   ;         de = first 16-bit argument in list
   ;
   ; uses  : af, de, hl
   
   inc a
   add a,a
   inc a
   
   ld l,a
   ld h,0
   add hl,sp
   
   jp __stdio_nextarg_de
