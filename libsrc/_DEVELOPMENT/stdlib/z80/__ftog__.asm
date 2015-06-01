
SECTION code_stdlib

PUBLIC __ftog__

EXTERN __ftoa_preamble, asm_fpclassify, __ftoa_special_form, __ftoa_prune
EXTERN __ftoa_base10, __ftoa_join, __ftoe_join

; math library supplies asm_fpclassify, __ftoa_base10, __ftoa_digits, __ftoa_sgnabs

__ftog__:

   ; enter :  c = flags (bit 4=#, bits 7 and 0 will be modified)
   ;         de = precision (clipped at 255)
   ;         hl = buffer *
   ;         exx set contains float
   ;
   ; exit  : if carry reset
   ;
   ;            bc = buffer length
   ;            de = buffer *
   ;           (IX-5) = flags, bit 7='N', bit 4='#', bit 0=(precision==0), others unaffected
   ;           (IX-4) = tz (number of zeroes to append)
   ;           (IX-3) = fz (number of zeroes to insert after .)
   ;           (IX-2) = iz (number of zeroes to insert before .)
   ;           (IX-1) = ignore
   ;
   ;         if carry set, special form just output buffer with sign
   ;
   ; used  : af, bc, de, hl, ix, af', bc', de', hl'

   ld a,d
   or e
   jr nz, preamble

   inc e                       ; if precision == 0, set precision = 1

preamble:

   call __ftoa_preamble
   set 0,(ix-5)                ; ensure trailing decimal point is removed

   ; EXX    = float x
   ;  E     = precision
   ; HL     = buffer_dst *
   ; IX     = buffer *
   ; (IX-5) = flags, bit 7 = 'N', bit 4 = '#', bit 0 = precision==0
   ; (IX-4) = tz (number of zeroes to append)
   ; (IX-3) = fz (number of zeroes to insert after .)
   ; (IX-2) = iz (number of zeroes to insert before .)
   ; (IX-1) = '0' marks start of buffer

   call asm_fpclassify         ; supplied by math library

   or a
   jr z, normal_form           ; if not inf, nan or zero

   dec e                       ; precision--
   call __ftoa_special_form
   
   jp nc, __ftoa_prune         ; if zero, prune like ftoa()
   ret                         ; return with carry set if inf or nan
   
normal_form:

   ld (hl),e                   ; save precision
   push hl                     ; save buffer *

   ; EXX    = float x
   ; IX     = buffer *
   ; STACK  = buffer *
   ; (IX-5) = flags, bit 7 = 'N', bit 4 = '#', bit 0 = precision==0
   ; (IX-4) = tz (number of zeroes to append)
   ; (IX-3) = fz (number of zeroes to insert after .)
   ; (IX-2) = iz (number of zeroes to insert before .)
   ; (IX-1) = '0' marks start of buffer
   
   call __ftoa_base10          ; supplied by math library

   pop hl                      ; hl = buffer *
   ld e,(hl)                   ; e = precision

   ; EXX   = float in form b(*10^e), 1 <= b < 10 mantissa only
   ;  C    = remaining significant digits
   ;  D    = base 10 exponent e
   ;  E    = remaining precision
   ; HL    = buffer_dst *
   ; IX    = buffer *
   ; (IX-5) = flags, bit 4 = '#', bit 0 = precision==0
   ; (IX-4) = tz (number of zeroes to append)
   ; (IX-3) = fz (number of zeroes to insert after .)
   ; (IX-2) = iz (number of zeroes to insert before .)
   ; (IX-1) = '0' marks start of buffer

   ld a,d
   cp -4
   jp m, style_e               ; if exponent < -4
   
   cp e
   jp p, style_e               ; if precision <= exponent

style_f:

   cpl
   add a,e
   ld e,a                      ; precision -= (exponent + 1)
   
   jp __ftoa_join

style_e:

   dec e                       ; precision--
   jp __ftoe_join
