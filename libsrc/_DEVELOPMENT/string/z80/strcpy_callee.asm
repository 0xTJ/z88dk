
; ===============================================================
; Dec 2013
; ===============================================================
; 
; char *strcpy(char * restrict s1, const char * restrict s2)
;
; Copy string s2 to s1, return s1.
;
; ===============================================================

XLIB strcpy_callee
XDEF asm_strcpy

strcpy_callee:

   pop bc
   pop hl
   pop de
   push bc

asm_strcpy:
   
   ; enter : hl = char *s2 = src
   ;         de = char *s1 = dst
   ;
   ; exit  : hl = char *s1 = dst
   ;         de = ptr to terminating NUL in s1
   ;
   ; uses  : af, bc, de, hl

   push de

loop:

   ld a,(hl)
   ldi
   
   or a
   jp nz, loop
   
   pop hl
   dec de
   ret
