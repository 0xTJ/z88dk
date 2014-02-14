
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *obstack_int_grow_fast(struct obstack *ob, int data)
;
; Append int to the growing object, no bounds check is made.
;
; ===============================================================

XDEF obstack_int_grow_fast

obstack_int_grow_fast:

   pop af
   pop bc
   pop hl
   
   push hl
   push bc
   push af
   
   INCLUDE "../../z80/asm_obstack_int_grow_fast.asm"
