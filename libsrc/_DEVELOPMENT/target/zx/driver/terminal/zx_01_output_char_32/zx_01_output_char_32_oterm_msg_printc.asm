
SECTION seg_code_fcntl

PUBLIC zx_01_output_char_32_oterm_msg_printc

EXTERN asm_zx_cyx2saddr, asm_zx_saddr2aaddr

zx_01_output_char_32_oterm_msg_printc:

   ;   enter  :  c = ascii code >= 32
   ;             b = parameter (foreground colour = 255 if none specified)
   ;             l = absolute x coordinate
   ;             h = absolute y coordinate
   ;   can use:  af, bc, de, hl

   call asm_zx_cyx2saddr
   ex de,hl                    ; de = screen coordinates

   ld a,b                      ; a = colour
   
   ld l,c
   ld h,0
   
   add hl,hl
   add hl,hl
   add hl,hl                   ; hl = 8 * ascii code
   
   ld c,(ix+20)
   ld b,(ix+21)                ; bc = font address
   
   add hl,bc                   ; hl = & character definition
   
   ; print character pixels
   
   ld b,7
   ld c,a                      ; c = colour

__print_loop:

   ld a,(hl)
   ld (de),a
   
   inc hl
   inc d
   
   djnz print_loop
   
   ld a,(hl)
   ld (de),a                   ; final pixel row
   
   ex de,hl                    ; hl = screen address at bottom of char
   
   ; put colour
   
   call asm_zx_saddr2aaddr     ; hl = attribute address
   
   ld a,c
   inc a

   jr nz, colour_supplied      ; if colour != 255
   
   ld c,(ix+23)                ; c = foreground colour

colour_supplied:

   ld b,(ix+24)                ; b = foreground colour mask
   
   ld a,b
   cpl
   and c
   ld c,a
   
   ld a,b
   and (hl)
   or c

   ld (hl),a
   ret
