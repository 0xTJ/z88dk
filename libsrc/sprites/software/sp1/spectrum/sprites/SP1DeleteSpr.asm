
; SP1DeleteSpr
; 03.2006 aralbrec, Sprite Pack v3.0
; sinclair spectrum version

XLIB SP1DeleteSpr
XREF _u_free

; Delete the sprite, freeing any memory that was allocated in its
; creation.  Sprite must not be display on screen (move off-screen
; first).
;
; enter : de = struct sp1_ss *
; uses  : af, bc, de, hl

.SP1DeleteSpr

   ld hl,15
   add hl,de                 ; hl = & struct sp1_ss.first

.loop

   ld b,(hl)
   inc hl
   ld c,(hl)                 ; bc = next struct sp1_cs to delete
   push bc
   ex de,hl
   call _u_free              ; free current struct sp1_cs
   pop de
   ld l,e
   ld h,d                    ; de = hl = next struct sp1_cs to delete

   inc h
   dec h
   jp nz, loop

   ret
