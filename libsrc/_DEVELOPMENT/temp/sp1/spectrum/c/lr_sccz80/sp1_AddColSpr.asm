; uint sp1_AddColSpr(struct sp1_ss *s, uchar type, int graphic, uchar plane)

XLIB sp1_AddColSpr

LIB asm_sp1_AddColSpr

sp1_AddColSpr:

   pop af
   pop hl
   ld h,l
   pop bc
   pop de
   ld l,e
   pop de
   pop ix

   push hl
   push hl
   push de
   push bc
   push hl
   push af
   
   jp asm_sp1_AddColSpr
