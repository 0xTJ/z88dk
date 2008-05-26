; stdio_in_i
; 05.2008 aralbrec

XLIB stdio_in_i
LIB stdio_incommon1, stdio_incommon2, stdio_ungetchar
LIB stdioisxdigit, stdioisodigit, stdio_isbdigit, stdio_zeroonstream

; input %i parameter, read a binary / octal / hex / decimal number
;
; enter :     ix  = & attached file / device getchar function
;               b = width
;               c = flags [000a*WLN]
;              hl = & parameter list
;             bc' = total num chars read from stream thus far
;             de' = number of conversions done thus far
;             carry flag reset (important for %x, %lx)
; on exit :   bc' = total num chars read from stream thus far
;             de' = number of conversions done thus far
;              hl = & parameter list
;             carry set if EOF reached

.stdio_in_i

   call stdio_incommon1        ; leading ws, sign, int *
   ret c
   
   ; ix = & getchar function
   ;  c = flags [000a*WLN]
   ; hl = & parameter list
   ; de = int *
   ;  a = next char from stream
   
   ; first determine the radix
   
   cp '0'                      ; leading 0 means octal or hex
   jr z, octalorhex
   
   cp '%'
   jr nz, decimal

   ; should be binary...make sure next digit is valid
   
   call stdio_getchar
   ret c
   
   call stdio_isbdigit
   jr c, exit
      
   ld b,2                      ; radix = 2
   jr join   

.decimal

   ; should be decimal...make sure the digit is valid

   call stdio_isdigit
   jr c, exit
   
   ld b,10                     ; radix = 10
   jr join

.octalorhex

   call stdio_getchar          ; examine next digit to see if hex or octal
   jp c, stdio_zeroonstream

   cp 'x'
   jr z, hex
   cp 'X'
   jr z, hex
   
   ; octal number

   ld b,8
   call isodigit
   jr nc, join                 ; this digit is an octal digit so join number loop

   call stdio_ungetchar        ; otherwise return it
   jp stdio_zeroonstream

 .hex  
   
   call stdio_getchar          ; get first hex digit after '0x'
   ret c

   call stdio_isxdigit         ; is first char a hexadecimal digit?
   jr c, exit

   ld b,16                     ; radix = 16
   
.join

   call stdio_ungetchar        ; place first digit back on stream
   jp stdio_incommon2          ; do the rest

.exit

   call stdio_ungetchar
   scf
   ret
