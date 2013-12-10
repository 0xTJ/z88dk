
; ===============================================================
; Dec 2013
; ===============================================================
; 
; char *strncat(char * restrict s1, const char * restrict s2, size_t n)
;
; Append at most n chars from string s2 to the end of string s1,
; return s1.  s1 is always terminated with a 0.
;
; The maximum length of s1 will be strlen(s1) + n + 1
;
; ===============================================================

XLIB strncat_callee
XDEF asm_strncat, asm0_strncat

LIB __str_locate_nul

strncat_callee:

   pop af
   pop bc
   pop hl
   pop de
   push af

asm_strncat:

   ; enter : hl = char *s2 = src
   ;         de = char *s1 = dst
   ;         bc = size_t n
   ;
   ; exit  : hl = char *s1 = dst
   ;         de = ptr in s1 to terminating 0
   ;         carry set if all of s2 not appended
   ;
   ; uses  : af, bc, de, hl

   ld a,b
   or c
   jr z, zero_n

asm0_strncat:

   push de                     ; save dst
   
   ex de,hl
   call __str_locate_nul
   ex de,hl

loop:                          ; append src to dst

   ld a,(hl)
   or a
   jr z, done
   
   ldi
   jp pe, loop

   xor a
   scf

done:                          ; terminate dst

   ld (de),a
   
   pop hl
   ret

zero_n:

   ld l,e
   ld h,d
   
   scf
   ret
