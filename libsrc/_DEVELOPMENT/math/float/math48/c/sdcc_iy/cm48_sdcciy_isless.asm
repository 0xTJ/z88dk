
; int isless(float x, float y) __z88dk_callee

SECTION code_fp_math48

PUBLIC cm48_sdcciy_isless

EXTERN am48_isless, cm48_sdcciyp_dcallee2

cm48_sdcciy_isless:

   call cm48_sdcciyp_dcallee2
   
   ; AC'= y
   ; AC = x

   jp am48_isless
