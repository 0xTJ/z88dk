
; size_t obstack_object_size(struct obstack *ob)

SECTION seg_code_obstack

PUBLIC _obstack_object_size

_obstack_object_size:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "alloc/obstack/z80/asm_obstack_object_size.asm"
