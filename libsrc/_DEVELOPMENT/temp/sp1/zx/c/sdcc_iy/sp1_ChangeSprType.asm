; void sp1_ChangeSprType(struct sp1_cs *c, void *drawf)

PUBLIC _sp1_ChangeSprType

_sp1_ChangeSprType:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   INCLUDE "temp/sp1/zx/sprites/asm_sp1_ChangeSprType.asm"
