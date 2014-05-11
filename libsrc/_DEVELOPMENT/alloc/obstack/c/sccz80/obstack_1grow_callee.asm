
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *obstack_1grow(struct obstack *ob, char c)
;
; Append char c to the growing object.
;
; ===============================================================

PUBLIC obstack_1grow_callee

obstack_1grow_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "alloc/obstack/z80/asm_obstack_1grow.asm"
