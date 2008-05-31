; stdio_in_lb
; 05.2008 aralbrec

XLIB stdio_in_lb
LIB stdio_incommon1, stdio_incommon3, stdio_getchar, stdio_ungetchar, stdio_isbdigit

; input %lb parameter, handles both 16-bit %b and 32-bit %lb
;
; enter :     ix  = & attached file / device getchar function
;               b = width
;               c = flags [000a*WLN]
;              hl = & parameter list
;             bc' = total num chars read from stream thus far
;             de' = number of conversions done thus far
; on exit :   bc' = total num chars read from stream thus far
;             de' = number of conversions done thus far
;              hl = & parameter list
;             carry set if EOF reached

.stdio_in_lb

   call stdio_incommon1        ; leading ws, sign, int *
   ret c
   
   ; ix = & getchar function
   ;  c = flags [000a*WLN]
   ; hl = & parameter list
   ; de = int *
   ;  a = next char from stream
   
   cp '%'
   jr nz, notbasespecifier

   call stdio_getchar
   ret c

.notbasespecifier

   call stdio_isbdigit
   jr c, exit

   ; now we know we have a valid binary number on the stream
   
   call stdio_ungetchar        ; place first digit back on stream
   
   ld b,2                      ; radix = 2
   jp stdio_incommon3          ; do the rest

.exit

   call stdio_ungetchar
   scf
   ret
