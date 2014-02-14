
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *aligned_alloc_unlocked(size_t alignment, size_t size)
;
; Allocate size bytes from the thread's default heap at an
; address that is an integer multiple of alignment.
; Returns 0 with carry set on failure.
;
; If alignment is not an exact power of 2, it will be rounded up
; to the next power of 2.
;
; Returns 0 if size == 0 without indicating error.
;
; ===============================================================

XDEF aligned_alloc_unlocked

aligned_alloc_unlocked:

   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   
   INCLUDE "../../z80/asm_aligned_alloc_unlocked.asm"
