;
;	System Call for REX6000
;
;	$Id: RexPrintf.asm,v 1.1 2001-06-29 14:37:24 dom Exp $
;
;	RexPrintf (int, int, int, char*)
;
;	Written by Damjan Marion <dmarion@iskon.hr>

		XLIB	RexPrintf
		LIB	syscallex

.RexPrintf
        ld      ix,$08
        add     ix,sp

        ld	hl,$0330
	push 	hl
	
        ld      l,(ix+0)        ; x
        ld      h,(ix+1)
        push 	hl

 	dec	ix
	dec	ix
        ld      l,(ix+0)        ; y
        ld      h,(ix+1)
	push 	hl

	ld 	hl,$FFFF	; dummy
	push 	hl
	
        dec     ix
        dec     ix
        ld      l,(ix+0)        ; font
        ld      h,(ix+1)
        push    hl

        dec     ix
        dec     ix
        ld      l,(ix+0)        ; string
        ld      h,(ix+1)
        push    hl

        ld      a,h
        ld      hl,0
        and     a,$e0           ; compare if points to $8000-$9FFF
        add     a,$80           
        jp      NZ,RexPrintf_1 
        in      a,(1)           ; load mem page of addin code
        ld      l,a
.RexPrintf_1
	push	hl
	ld	a,7
	call	syscallex
      	ld      hl,14
        add     hl,sp
        ld      sp,hl
	ret

