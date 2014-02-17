
XLIB l_muls_16_16x16

LIB l_mulu_16_16x16, l_neg_de, l_neg_hl, error_mulu_overflow_mc

l_muls_16_16x16:

   ; signed multiply of two 16-bit signed numbers
   ;
   ; error reported on overflow
   ;
   ; enter : de = 16-bit signed number
   ;         hl = 16-bit signed number
   ;
   ; exit  : success
   ;
   ;            hl = signed product
   ;            carry reset
   ;
   ;         signed overflow
   ;
   ;            hl = INT_MAX or INT_MIN
   ;            carry set, errno = ERANGE
   ;
   ; uses  : af, c, de, hl

   ; determine sign of result

   ld a,d
   xor h
   push af
   
   ; make multiplicands positive
   
   bit 7,d
   call nz, l_neg_de
   
   bit 7,h
   call nz, l_neg_hl

   ; multiply & check for overflow
   
   call l_mulu_16_16x16
   jr c, unsigned_overflow

   bit 7,h
   jr nz, signed_overflow
   
   ; correct sign of result
   
   pop af
   ret p
   
   jp l_neg_hl

signed_overflow:

   call error_mulu_overflow_mc

unsigned_overflow:

   ; hl = $ffff
   ; stack = sign of result

   ld h,$7f                    ; hl = $7fff
   pop af
   
   scf                         ; indicate oveflow
   ret p                       ; if result is positive return INT_MAX
   
   inc hl                      ; return INT_MIN
   ret
