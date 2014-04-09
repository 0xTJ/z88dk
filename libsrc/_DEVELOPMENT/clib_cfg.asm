
IF !_CLIB_CFG_ASM_
defc _CLIB_CFG_ASM_ = 1

;;;;;;;;;;;;;;;;;;;;
; CLIB CONFIGURATION
;;;;;;;;;;;;;;;;;;;;

; Set these flags prior to making libraries

;;;;;;;;;;;;;;;;;
; multi-threading
;;;;;;;;;;;;;;;;;

; Setting to non-zero enables the multi-threading version of
; the library to be built.

defc __CLIB_OPT_MULTITHREAD = 0

; This means:
; 
; * All FILEs are protected by recursive locks.
; * The process heap is protected by a mutex.
;
; Setting to zero will reduce code size and slightly speed
; up execution.
;
; When multi-threading is enabled, the program can still
; bypass locking by calling the _unlocked versions of functions
; but you do so at your own risk if there are synchronization
; issues.
;
; When multi-threading is disabled, there is no difference
; between the _unlocked and regular function entry points.
; However, the locks are still present in the data structures
; and, for example, FILEs can still be locked via flockfile()
; and family.  Note that the stdio functions will not be
; blocked by a lock but the user program can perform its own
; synchronization by using flockfile() and family appropriately.


;;;;;;;;;;;;;;;;;;;;;;
; integer math options
;;;;;;;;;;;;;;;;;;;;;;

; This option affects how multiplications and divisions
; of integers and longs are performed by the compiler
; and the library.

; Setting the value of this flag appropriately allows
; selection of an integer math lib that ranges from
; very fast and very large to very slow and very small.

defc __CLIB_OPT_IMATH = $00

; ALL = selects fast integer math lib


; The specific integer math library selected above
; can be further tailored by choosing options below.

; FAST INTEGER MATH LIB OPTIONS

defc __CLIB_OPT_IMATH_FAST = $00

; bit 0 = enable loop unrolling in division
; bit 1 = enable leading zero elimination in division
; bit 2 = enable loop unrolling in multiplication
; bit 3 = enable leading zero elimination in multiplication


;;;;;;;;;;;;;;;;;;;;;;;;;;;
; text to number conversion
;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Specialized functions are available for fast conversion
; of binary, octal, decimal and hex numbers.
;
; Setting the appropriate bits in this flag will enable
; use of those specialized functions by the library.
;
; Library functions affected:
;
;    _strtoi, _strtou, strtol, strtoul, scanf
;

defc __CLIB_OPT_TXT2NUM = $00

; bit 0 = $01 = enable specialized binary conversion for integers
; bit 1 = $02 = enable specialized octal conversion for integers
; bit 2 = $04 = enable specialized decimal conversion for integers
; bit 3 = $08 = enable specialized hex conversion for integers
;
; bit 4 = $10 = enable specialized binary conversion for longs
; bit 5 = $20 = enable specialized octal conversion for longs
; bit 6 = $40 = enable specialized decimal conversion for longs
; bit 7 = $80 = enable specialized hex conversion for longs

; Note: Normally, enabling specialized long functions will also
; cause their integer counterparts to be pulled into the user code.
; This is because the specialized long functions will try to
; perform the conversion using faster 16-bit code when it can.
; In these cases, the library will also use the specialized
; integer function when it is already there even if it is not
; explicitly enabled here.
;
; Note: Some library functions such as printf and scanf may
; use the specialized integer text to decimal conversion
; function directly, in which case enabling that bit will
; result in no additional code size.


;;;;;;;;;;;;;;;;;;;;;;;;;;;
; number to text conversion
;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Specialized functions are available for fast conversion
; of binary, octal, decimal and hex numbers.
;
; Setting the appropriate bits in this flag will enable
; use of those specialized functions by the library.
;
; Library functions affected:
;
;    itoa, utoa, ltoa, ultoa, printf
;

defc __CLIB_OPT_NUM2TXT = $00

; bit 0 = $01 = enable specialized binary conversion for integers
; bit 1 = $02 = enable specialized octal conversion for integers
; bit 2 = $04 = enable specialized decimal conversion for integers
; bit 3 = $08 = enable specialized hex conversion for integers
;
; bit 4 = $10 = enable specialized binary conversion for longs
; bit 5 = $20 = enable specialized octal conversion for longs
; bit 6 = $40 = enable specialized decimal conversion for longs
; bit 7 = $80 = enable specialized hex conversion for longs

; Note: Normally, enabling specialized long functions will also
; cause their integer counterparts to be pulled into the user code.
; This is because the specialized long functions will try to
; perform the conversion using faster 16-bit code when it can.
; In these cases, the library will also use the specialized
; integer function when it is already there even if it is not
; explicitly enabled here.


;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; printf converter selection
;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; You can select which printf converters are included in
; the library.  Omitting unused ones can reduce code size.
; Note the bit assignments are the same as for scanf.

defc __CLIB_OPT_PRINTF = $ffffffff

; bit 0 =  $    01 = enable %d
; bit 1 =  $    02 = enable %u
; bit 2 =  $    04 = enable %x
; bit 3 =  $    08 = enable %X
; bit 4 =  $    10 = enable %o
; bit 5 =  $    20 = enable %n
; bit 6 =  $    40 = enable %i
; bit 7 =  $    80 = enable %p
; bit 8 =  $   100 = enable %B
; bit 9 =  $   200 = enable %s
; bit 10 = $   400 = enable %c
; bit 11 = $   800 = enable %I
; bit 12 = $  1000 = enable %ld
; bit 13 = $  2000 = enable %lu
; bit 14 = $  4000 = enable %lx
; bit 15 = $  8000 = enable %lX
; bit 16 = $ 10000 = enable %lo
; bit 17 = $ 20000 = enable %ln
; bit 18 = $ 40000 = enable %li
; bit 19 = $ 80000 = enable %lp
; bit 20 = $100000 = enable %lB
; bit 21 = $200000 = ignored
;
; Setting to zero will remove the % logic from printf
; entirely, meaning printf can only be used to output
; format text to the stream.


;;;;;;;;;;;;;;;;;;;;;;;;;;;
; scanf converter selection
;;;;;;;;;;;;;;;;;;;;;;;;;;;

; You can select which scanf converters are included in
; the library.  Omitting unused ones can reduce code size.
; Note the bit assignments are the same as for printf.

defc __CLIB_OPT_SCANF = $ffffffff

; bit 0 =  $    01 = enable %d
; bit 1 =  $    02 = enable %u
; bit 2 =  $    04 = enable %x
; bit 3 =  $    08 = enable %x (duplicate)
; bit 4 =  $    10 = enable %o
; bit 5 =  $    20 = enable %n
; bit 6 =  $    40 = enable %i
; bit 7 =  $    80 = enable %p
; bit 8 =  $   100 = enable %B
; bit 9 =  $   200 = enable %s
; bit 10 = $   400 = enable %c
; bit 11 = $   800 = enable %I
; bit 12 = $  1000 = enable %ld
; bit 13 = $  2000 = enable %lu
; bit 14 = $  4000 = enable %lx
; bit 15 = $  8000 = enable %lx (duplicate)
; bit 16 = $ 10000 = enable %lo
; bit 17 = $ 20000 = enable %ln
; bit 18 = $ 40000 = enable %li
; bit 19 = $ 80000 = enable %lp
; bit 20 = $100000 = enable %lB
; bit 21 = $200000 = enable %[
;
; Setting to zero will remove the % logic from scanf
; entirely, meaning scanf can only be used to match
; format text against the stream.

ENDIF
