SECTION code_clib
SECTION code_math

PUBLIC l_small_mul_32_16x16

l_small_mul_32_16x16:

   ; multiplication of two 16-bit numbers into a 32-bit product
   ;
   ; enter : de = 16-bit multiplicand = y
   ;         hl = 16-bit multiplicand = x
   ;
   ; exit  : dehl = 32-bit product
   ;         carry reset
   ;
   ; uses  : af, bc, de, hl

   ld b,l                      ; xl
   ld c,d                      ; yh
   ld d,l                      ; xl
   ld l,c
   push hl                     ; xh yh
   ld l,e                      ; yl

   ; bc = xl yh
   ; de = xl yl
   ; hl = xh yl
   ; stack = xh yh

   mlt de                      ; xl * yl

   mlt bc                      ; xl * yh
   mlt hl                      ; xh * yl

   add hl,bc                   ; sum cross products

   sbc a,a
   and $01
   ld b,a                      ; carry from cross products
   ld c,h                      ; LSB of MSW from cross products
   
   ld a,d
   add a,l
   ld d,a                      ; de = final LSW

   pop hl
   mlt hl                      ; xh * yh

   adc hl,bc                   ; hl = final MSW
   ex de,hl
   
   ret
