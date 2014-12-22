
SECTION code_fcntl

PUBLIC zx_01_output_char_32_tty_z88dk_09_tab

zx_01_output_char_32_tty_z88dk_09_tab:

   ; tab to next multiple of eight column
   
   ; should we be printing spaces to the next tab ??
   
   ld a,(ix+14)                ; a = x coord
   
   and $f8
   add a,$08
   
   ld (ix+14),a                ; store new x coord
   
   cp (ix+17)
   ret c                       ; if x < width
   
   ; move to next line
   
   ld (ix+14),0                ; x = 0
   inc (ix+15)                 ; ++y
   
   ret
