
XLIB l_divu_24_24x16
XDEF l0_divu_24_24x16

LIB l0_divu_16_16x16, l00_divu_24_24x8, error_divide_by_zero_mc


divu_24_16x16:

   ; hl / bc

   ld e,c
   ld d,b
   
   jp l0_divu_16_16x16

divide_by_zero:

   ld c,e
   ex de,hl
   
   ld a,$ff
   jp error_divide_by_zero_mc

l_divu_24_24x16:

   ; unsigned division of 24-bit number by 16-bit number
   ;
   ; enter : ehl = 24-bit dividend
   ;          bc = 16-bit divisor
   ;
   ; exit  : success
   ;
   ;            ahl = ehl / bc
   ;             de = ehl % bc
   ;            carry reset
   ;
   ;         divide by zero
   ;
   ;            ahl = $fffff = UINT_MAX
   ;            cde = dividend
   ;            carry set, errno = EDOM
   ;
   ; uses  : af, bc, de, hl, ixh

   ; test for divide by zero
   
   ld a,b
   or c
   jr z, divide_by_zero

l0_divu_24_24x16:

   ; try to reduce the division
   
   inc e
   dec e
   jr z, divu_24_16x16

   inc b
   dec b
   jp z, l00_divu_24_24x8

   ; ehl >= $ 01 00 00
   ;  bc >= $    01 00
   ;
   ; this means the results of the first eight
   ; iterations of the division loop are known
   ;
   ; inside the loop the computation is
   ; abc / de, hl = remainder
   ; so initialize as if eight iterations done
   
   ld d,b
   ld b,l
   ld l,e
   ld e,c
   ld a,h
   ld h,0
   ld c,$ff   

   ; unroll divide eight times

   ld ixh,2
   
   ; eliminating leading zeroes
   
   scf

   rl c
   rl b
   rla
   adc hl,hl
   inc h
   dec h
   jr nz, loop_00

   rl c
   inc c
   rl b
   rla
   adc hl,hl
   inc h
   dec h
   jr nz, loop_11
   
   rl c
   inc c
   rl b
   rla
   adc hl,hl
   inc h
   dec h
   jr nz, loop_22
   
   rl c
   inc c
   rl b
   rla
   adc hl,hl
   inc h
   dec h
   jr nz, loop_33
   
   rl c
   inc c
   rl b
   rla
   adc hl,hl
   inc h
   dec h
   jr nz, loop_44
   
   rl c
   inc c
   rl b
   rla
   adc hl,hl
   inc h
   dec h
   jr nz, loop_55   
   
   rl c
   inc c
   rl b
   rla
   adc hl,hl
   inc h
   dec h
   jr nz, loop_66

   scf
   jp loop_7

   ; general divide loop

loop_0:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_000

loop_00:

   sbc hl,de
   jr nc, loop_1
   add hl,de

loop_1:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_111

loop_11:

   sbc hl,de
   jr nc, loop_2
   add hl,de

loop_2:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_222

loop_22:

   sbc hl,de
   jr nc, loop_3
   add hl,de

loop_3:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_333

loop_33:

   sbc hl,de
   jr nc, loop_4
   add hl,de

loop_4:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_444

loop_44:

   sbc hl,de
   jr nc, loop_5
   add hl,de

loop_5:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_555

loop_55:

   sbc hl,de
   jr nc, loop_6
   add hl,de

loop_6:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_666

loop_66:

   sbc hl,de
   jr nc, loop_7
   add hl,de

loop_7:

   rl c
   rl b
   rla
   adc hl,hl
   jr c, loop_777

loop_77:

   sbc hl,de
   jr nc, loop_8
   add hl,de

loop_8:

   dec ixh
   jr nz, loop_0

exit_loop:

   rl c
   rl b
   rla
   
   ; abc = ~quotient, hl = remainder
   
   ex de,hl

   scf
   ld hl,0
   sbc hl,bc                   ; hl = ~bc
   
   cpl
   
   or a
   ret

loop_000:

   or a
   sbc hl,de
   or a
   jp loop_1

loop_111:

   or a
   sbc hl,de
   or a
   jp loop_2

loop_222:

   or a
   sbc hl,de
   or a
   jp loop_3

loop_333:

   or a
   sbc hl,de
   or a
   jp loop_4

loop_444:

   or a
   sbc hl,de
   or a
   jp loop_5

loop_555:

   or a
   sbc hl,de
   or a
   jp loop_6

loop_666:

   or a
   sbc hl,de
   or a
   jp loop_7

loop_777:

   or a
   sbc hl,de
   or a
   jp loop_8
