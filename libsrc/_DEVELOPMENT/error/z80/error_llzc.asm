
SECTION code_clib
SECTION code_error

PUBLIC error_llzc

EXTERN error_lzc

   pop hl

error_llznc:

   ; set dehl'dehl = 0
   ; set carry flag

   call error_lzc
   exx
   jp error_lzc
