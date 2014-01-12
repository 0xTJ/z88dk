
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *memswap_callee(void *s1, void *s2, size_t n)
;
; Swap n bytes pointed at by s1 and s2.
;
; ===============================================================

XLIB asm_memswap
XDEF asm0_memswap

asm_memswap:

   ; enter : bc = size_t n
   ;         de = void *s2
   ;         hl = void *s1
   ;
   ; exit  : hl = void *s1
   ;         de = ptr in s2 to byte after last one written
   ;         bc = 0
   ;         carry reset
   ;
   ; uses  : af, bc, de

   ld a,b
   or c
   ret z

asm0_memswap:

   push hl

loop:
   
   ld a,(de)
   ldi
   dec hl
   ld (hl),a
   inc hl
   
   jp pe, loop

   pop hl
   ret
