; uint sp1_AddColSpr(struct sp1_ss *s, void *drawf, uchar type, int graphic, uchar plane)

XDEF _sp1_AddColSpr

_sp1_AddColSpr:

   exx
   pop bc
   pop de
   exx
   pop de
   pop hl
   pop bc
   ld a,l
   pop hl
   ld h,l
   ld l,a

   push hl
   push bc
   push hl
   push de
   exx
   push de
   push bc

   push ix

   ld ixl,e
   ld ixh,d
   
   exx
   
   call asm_sp1_AddColSpr
   
   pop ix
   ret

   INCLUDE "temp/sp1/spectrum/sprites/asm_sp1_AddColSpr.asm"
