
; int posix_memalign_unlocked(void **memptr, size_t alignment, size_t size)

SECTION seg_code_malloc

PUBLIC _posix_memalign_unlocked

_posix_memalign_unlocked:

   pop af
   pop de
   pop bc
   pop hl
   
   push hl
   push bc
   push de
   push af
   
   INCLUDE "alloc/malloc/z80/asm_posix_memalign_unlocked.asm"
