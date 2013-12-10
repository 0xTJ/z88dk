
XLIB l_htoul
LIB l_htou, l_char2num

l_htoul:

   ; ascii hex string to unsigned long
   ; whitespace is not skipped, leading 0x not consumed
   ; char consumption stops on overflow
   ;
   ; enter : de = char *buffer
   ;
   ; exit  : bc = & next char to interpret in buffer
   ;         dehl = unsigned result (0 on invalid input, adehl result on overflow)
   ;         carry set on unsigned overflow
   ;
   ; uses  : af, bc, de, hl

   call l_htou                 ; try to do it in 16 bits
   
   ld c,e
   ld b,d
   
   ld de,0
   ret nc                      ; was 16-bit
   
   ; ahl is the 20 bit result so far
   
   ld e,a
   
   ; 32 bit loop

loop:

   ld a,(bc)
   
   call l_char2num
   jr c, done
   cp 16
   jr nc, done
   inc bc
   
   add a,a
   add a,a
   add a,a
   add a,a
   push af
   
   ld a,(bc)
   
   call l_char2num
   jr c, done_shift
   cp 16
   jr nc, done_shift
   inc bc
   
   ex (sp),hl
   add a,h
   pop hl
   
   push de
   ld d,e
   ld e,h
   ld h,l
   ld l,a
   pop af
   
   or a
   jp z, loop

unsigned_overflow:

   scf
   ret

done_shift:

   pop af
   
   add a,a
   adc hl,hl
   rl e
   rl d
   
   adc a,a
   adc hl,hl
   rl e
   rl d
   
   adc a,a
   adc hl,hl
   rl e
   rl d
   
   adc a,a
   adc hl,hl
   rl e
   rl d
   
   adc a,a
   jr nz, unsigned_overflow
   
done:

   xor a
   ret
