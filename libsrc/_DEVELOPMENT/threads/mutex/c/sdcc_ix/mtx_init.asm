
; int mtx_init(mtx_t *mtx, int type)

XDEF _mtx_init

_mtx_init:

   pop af
   pop hl
   pop bc
   
   push bc
   push hl
   push af
   
   INCLUDE "threads/mutex/z80/asm_mtx_init.asm"
