
; void *obstack_base(struct obstack *ob)

XDEF obstack_base

obstack_base:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "alloc/obstack/z80/asm_obstack_base.asm"
