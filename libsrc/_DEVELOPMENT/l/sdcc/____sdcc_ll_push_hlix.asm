
SECTION code_clib
SECTION code_l_sdcc

PUBLIC ____sdcc_ll_push_hlix
PUBLIC ____sdcc_ll_push_hlix_0

____sdcc_ll_push_hlix:

   push ix
   pop de
   
   add hl,de
   
____sdcc_ll_push_hlix_0:
   
   ex de,hl
   
   ld hl,-6
   add hl,sp
   
   pop af
   ld sp,hl
   push af
   push bc
   
   ex de,hl
   
   ld bc,8
   ldir
   
   pop bc
   ret
