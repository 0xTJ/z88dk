; Substitute for z80 cpir instruction
; aralbrec 02.2008
; flag-perfect emulation of cpir

SECTION code_crt0_sccz80
PUBLIC __z80asm__cpir

.__z80asm__cpir
 
   jr nc, enterloop
 
   call enterloop
   
; scf clears N and H - must set carry the hard way
   push af
   ex (sp),hl
   set 0,l 			; set carry
   jr retflags

.loop

   inc hl

.enterloop

   dec bc
   cp (hl)			; compare, set flags
   jr z, match
   
   inc c
   dec c
   jr nz, loop
  
   inc b
   djnz loop
   
; .nomatch

   cp (hl)			; compare, set flags
   inc hl
   push af
 
.joinbc0
 
   ex (sp),hl
   res 0,l 			; clear carry
   res 2,l			; clear P/V -> BC == 0
   jr retflags

.match

   inc hl
   push af

   ld a,b
   or c
   jr z, joinbc0
  
   ex (sp),hl
   res 0,l 			; clear carry
   set 2,l			; set P/V -> BC != 0

.retflags
   ex (sp),hl
   pop af
   ret
