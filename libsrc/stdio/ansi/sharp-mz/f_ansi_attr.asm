;
;       Spectrum C Library
;
; 	ANSI Video handling for The Sharp MZ
;
; 	Text Attributes
;	m - Set Graphic Rendition
;	
;	The most difficult thing to port:
;	Be careful here...
;
;	Most of the code is commented, at the moment
;	Colors change but aren't mapped correctly
;
;	Stefano Bodrato - Maj 2000
;

	XLIB	ansi_attr

	XDEF	current_attr

.current_attr	defb	$70 ; White text on blak background

.ansi_attr
        and     a
        jr      nz,noreset
        ld      a,$70
        ld      (current_attr),a
        ret
.noreset

;        cp      1
;        jr      nz,nobold
;        ld      a,(current_attr)
;        or      @01000000
;        ld      (current_attr),a
;        ret
;.nobold
;        cp      2
;        jr      z,dim
;        cp      8
;        jr      nz,nodim
;.dim
;        ld      a,(current_attr)
;        and     @10111111
;        ld      (current_attr),a
;        ret
;.nodim

;        cp      4
;        jr      nz,nounderline
;        ld      a,32
;        ld      (INVRS+2),a   ; underline 1
;        ret
;.nounderline
;        cp      24
;        jr      nz,noCunderline
;        ld      a, 24
;        ld      (INVRS+2),a   ; underline 0
;        ret
;.noCunderline
;        cp      5
;        jr      nz,noblink
;        ld      a,(current_attr)
;        or      @10000000
;        ld      (current_attr),a
;        ret

;.noblink
;        cp      25
;        jr      nz,nocblink
;        ld      a,(current_attr)
;        and     @01111111
;        ld      (current_attr),a
;        ret
;.nocblink
        cp      7
        jr      nz,noreverse
        ld      a,(current_attr)
        ld      (current_attr),a
;        ld      a,47
;        ld      (INVRS),a     ; inverse 1
        ret
.noreverse
        cp      27
        jr      nz,noCreverse
        ld      a,(current_attr)
        ld      (current_attr),a
;        xor     a
;        ld      (INVRS),a      ; inverse 0
        ret
.noCreverse
        cp      8
        jr      nz,noinvis
        ld      a,(current_attr)
        ld      (oldattr),a
        and     7
        ld      e,a
        rla
        rla
        rla
	rla
        or      e
        ld      (current_attr),a
        ret
.oldattr
        defb     0
.noinvis
        cp      28
        jr      nz,nocinvis
        ld      a,(oldattr)
        ld      (current_attr),a
        ret
.nocinvis
        cp      30
        jp      m,nofore
        cp      37+1
        jp      p,nofore
        sub     30

;'' Palette Handling ''
        rla
        bit     3,a
        jr      z,ZFR
        set     0,a
        and     7
.ZFR
;''''''''''''''''''''''
        rla
        rla
        rla
	rla
	rla
        ld      e,a
        ld      a,(current_attr)
        and     @00011111
        or      e
        ld      (current_attr),a 
	ret
.nofore

        cp      40
        jp      m,noback
        cp      47+1
        jp      p,noback
        sub     40

;'' Palette Handling ''
        rla
        bit     3,a
        jr      z,ZBK
        set     0,a
        and     7
.ZBK
;''''''''''''''''''''''
        ld      e,a
        ld      a,(current_attr)
        and     @11111000
        or      e
        ld      (current_attr),a
.noback
        ret
