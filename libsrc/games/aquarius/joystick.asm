;
;	Generic game device library - Aquarius port
;	Stefano Bodrato - 2017
;
;	$Id: joystick.asm $
;


        SECTION code_clib
	PUBLIC    joystick
	PUBLIC    _joystick
	EXTERN	getk

.joystick
._joystick
	;__FASTALL__ : joystick no. in HL
		
	;ld	a,l

	call	getk
	ld	a,l
	ld	l,0
	cp	'm'
	jr	nz,no_fire1_a
	set	4,l
	jr	j_done
.no_fire1_a
	cp	'n'
	jr	nz,no_fire2_a
	set	5,l
	jr	j_done
.no_fire2_a
	cp	'q'
	jr	nz,no_up_a
	set	3,l
	jr	j_done
.no_up_a
	cp	'a'
	jr	nz,no_down_a
	set	2,l
	jr	j_done
.no_down_a
	cp	'o'
	jr	nz,no_left_a
	set	1,l
	jr	j_done
.no_left_a
	cp	'p'
	jr	nz,no_right_a
	set	0,l
.no_right_a

.j_done

	ret

	
