
; C Wrapper
; 05.2006 aralbrec, Sprite Pack v3.0
; Sinclair Spectrum version

XLIB sp1_MakeRect8Pix
LIB SP1MakeRect8Pix

; void sp1_MakeRect8Pix(struct sp1_ss *s, struct r_Rect8 *r)

.sp1_MakeRect8Pix

   ld hl,2
   add hl,sp
   ld e,(hl)
   inc hl
   ld d,(hl)
   inc hl
   ld a,(hl)
   inc hl
   ld h,(hl)
   ld l,a
   jp SP1MakeRect8Pix
