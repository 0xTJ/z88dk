
XLIB l_divu_32_32x24
XDEF l0_divu_32_32x24

LIB l0_divu_32_32x16, l0_divu_24_24x24, l_cpl_dehl, error_divide_by_zero_mc


divu_32_32x16:

   ; dehl'/ bc

   push bc
   exx
   pop bc
   
   jp l0_divu_32_32x16

divu_32_24x24:

   ; ehl / dbc'

   push de
   push hl
   exx
   pop hl
   pop de
   
   call l0_divu_24_24x24
   
   push bc
   push de
   
   ld e,a
   xor a
   ld d,a
   
   exx
   
   pop hl
   pop de
   
   ld d,a
   
   exx
   ret

divide_by_zero:

   exx
   ld de,$ffff
   jp error_divide_by_zero_mc


l_divu_32_32x24:

   ; unsigned division of 32-bit number
   ; by a 24-bit number
   ;
   ; enter : dehl'= 32-bit dividend
   ;          dbc = 24-bit divisor
   ;
   ; exit  : success
   ;
   ;            dehl = 32-bit quotient
   ;            dehl'= 24-bit remainder
   ;
   ;         divide by zero
   ;
   ;            dehl = $ffffffff = ULONG_MAX
   ;            dehl'= dividend
   ;            carry set, errno = EDOM
   ;
   ; uses  : af, bc. de. hl, bc', de', hl', ixh

   ; test for divide by zero
   
   ld a,d
   or b
   or c
   jr z, divide_by_zero

l0_divu_32_32x24:

   ; try to reduce the division

   inc d
   dec d
   jr z, divu_32_32x16
   
   exx
   
   inc d
   dec d
   jr z, divu_32_24x24
   
   ; dehl = dividend >= $ 01 00 00 00
   ;  dbc'= divisor  >= $    01 00 00
   ;
   ; the results of the first sixteen
   ; iterations are known
   ;
   ; inside the loop the computation is
   ; dehl'/dbc, ahl = remainder
   ; so initialize as if sixteen iterations done

   push de
   ex de,hl
   ld hl,$ffff
   
   exx
   
   pop hl
   xor a

   ; unroll eight times
   
   ld ixh,2
   
   ; eliminate leading zeroes

loop_00:

   exx
   add hl,hl
   rl e
   rl d
   exx
   adc hl,hl
   
   jr c, loop_10

   exx
   add hl,hl
   inc l
   rl e
   rl d
   exx
   adc hl,hl
   
   jr c, loop_20

   exx
   add hl,hl
   inc l
   rl e
   rl d
   exx
   adc hl,hl
   
   jr c, loop_30

   exx
   add hl,hl
   inc l
   rl e
   rl d
   exx
   adc hl,hl
   
   jr c, loop_40

   exx
   add hl,hl
   inc l
   rl e
   rl d
   exx
   adc hl,hl
   
   jr c, loop_50

   exx
   add hl,hl
   inc l
   rl e
   rl d
   exx
   adc hl,hl
   
   jr c, loop_60

   exx
   add hl,hl
   inc l
   rl e
   rl d
   exx
   adc hl,hl
   
   jr c, loop_70

   scf
   jp loop_7

   ; general divide loop

loop_0:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl

loop_10:

   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_1
   add hl,bc
   adc a,d

loop_1:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl

loop_20:

   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_2
   add hl,bc
   adc a,d

loop_2:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl

loop_30:

   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_3
   add hl,bc
   adc a,d

loop_3:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl

loop_40:

   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_4
   add hl,bc
   adc a,d

loop_4:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl

loop_50:

   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_5
   add hl,bc
   adc a,d

loop_5:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl

loop_60:

   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_6
   add hl,bc
   adc a,d

loop_6:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl

loop_70:

   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_7
   add hl,bc
   adc a,d

loop_7:

   exx
   adc hl,hl
   rl e
   rl d
   exx
   adc hl,hl
   adc a,a
   
   sbc hl,bc
   sbc a,d
   jr nc, loop_8
   add hl,bc
   adc a,d

loop_8:

   dec ixh
   jp nz, loop_0

   ; dehl'=~quotient with one more shift
   ;  ahl = remainder

   ld e,a
   ld d,0
   
   exx
   
   adc hl,hl
   rl e
   rl d
   
   jp l_cpl_dehl
