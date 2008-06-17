; stdio_parseperm
; 06.2008 aralbrec

XLIB stdio_parseperm

LIB strchr_callee
XREF ASMDISP_STRCHR_CALLEE

; parse file permissions
;
; flags   0000 CIOA
;         CA = 00, do not create, file must exist
;         CA = 01, create file if nec but no truncate if exists 
;         CA = 10, create and/or truncate file
;         CA = 11, create and/or truncate file
;          I =  1, file open for reading
;          O =  1, file open for writing
;          A =  1, writes append to end of file
;
; "r"     0000 0100
; "rb"    0000 0100
;
; "r+"    0000 0110
; "rb+"   0000 0110
; "r+b"   0000 0110
;
; "rw"    0000 1110
; "rw+"   0000 1110
; "rwb+"  0000 1110
;
; "w"     0000 1010
; "wb"    0000 1010
;
; "w+"    0000 1110
; "wb+"   0000 1110
; "w+b"   0000 1110
;
; "a"     0000 0011
; "ab"    0000 0011
;
; "a+"    0000 0111
; "ab+"   0000 0111
; "a+b"   0000 0111
;
; enter : hl = string of file permissions
; exit  :  a = b = flags, Z flag if problem
; uses  : af, bc, de, hl

.stdio_parseperm

   ld b,0
   ld de,permtbl

.loop

   ld a,(de)
   or a
   jr z, exit
   inc de
   
   ld c,a
   push hl
   call strchr_callee + ASMDISP_STRCHR_CALLEE
   pop hl
   jr c, notpresent

   ld a,(de)
   or b
   ld b,a

.notpresent

   inc de
   jp loop

.exit

   ld a,b
   or a
   ret

.permtbl

   defb 'r', $04
   defb 'w', $0a
   defb 'a', $03
   defb '+', $06
   defb 0
