
SECTION code_fp_math48

PUBLIC mm48__ac1_3

mm48__ac1_3:

   ; Set AC = 1/3

   ld bc,$2aaa
   ld e,c
   ld d,c
   ld hl,$aa81
   ret
