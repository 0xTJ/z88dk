
; =============================================================
; May 2015
; =============================================================
;
; size_t ftog(float x, char *buf, uint16_t prec, uint16_t flag)
;
; Use either %f or %e format depending on rules in standard.
;
; Write zero-terminated floating point number to buffer and
; return number of characters written not including '\0'
;
; If buf == 0, number of chars returned not incl '\0'
;
; =============================================================

SECTION code_stdlib

PUBLIC asm_ftog

EXTERN __ftog__, __ftoa_print, __ftoa_count, __ftoa_stack_restore

asm_ftog:

   ; enter :  c = flag (bit 6='+', bit 5=' ', bit 4='#')
   ;         de = precision (clipped at 255)
   ;         hl = char *buf (0 = no write to buffer)
   ;        EXX = float x
   ;
   ; exit  : hl = number of characters written not incl '\0'
   ;         de = char *buf
   ;
   ; uses  : af, bc, de, hl, ix, af', bc', de', hl'

   ld a,c

   ld c,l
   ld b,h
   
   ld hl,-32
   add hl,sp
   ld sp,hl                    ; create 32 bytes of workspace
   
   push bc                     ; save buf
   
   ld c,a
   call __ftog__

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
   ;            stack = char *buf

   ex af,af'
   
   pop hl                      ; hl = char *buf
   
   ld a,h
   or l
   jr z, count_it

print_it:

   call __ftoa_print

restore_it:

   jp __ftoa_stack_restore
   
count_it:

   call __ftoa_count
   jr restore_it
