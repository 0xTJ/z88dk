
; void __CALLEE__ sp1_InsertCharStruct_callee(struct sp1_update *u, struct sp1_cs *cs)
; 05.2007 aralbrec, Sprite Pack v3.0
; sinclair spectrum version

PUBLIC sp1_InsertCharStruct_callee

sp1_InsertCharStruct_callee:

   pop hl
   pop de
   ex (sp),hl
   ex de,hl

   INCLUDE "temp/sp1/spectrum/sprites/asm_sp1_InsertCharStruct.asm"
