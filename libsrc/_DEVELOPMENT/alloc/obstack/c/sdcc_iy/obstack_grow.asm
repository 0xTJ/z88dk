
; int obstack_grow(struct obstack *ob, void *data, size_t size)

XDEF obstack_grow

obstack_grow:

   pop af
   pop hl
   pop de
   pop bc
   
   push bc
   push de
   push hl
   push af
   
   INCLUDE "alloc/obstack/z80/asm_obstack_grow.asm"
