
SECTION code_fcntl

PUBLIC zx_01_output_char_32_tty_z88dk_oterm_msg_tty

EXTERN l_offset_ix_de, zx_tty_z88dk_state_table
EXTERN asm_tty_execute_action, l_jphl

zx_01_output_char_32_tty_z88dk_oterm_msg_tty:

   ;   implement tty emulation
   ;
   ;   enter  :  c = char to output
   ;   exit   :  c = char to output (possibly modified)
   ;             carry reset if tty emulation absorbs char
   ;   can use:  af, bc, de, hl

   ld hl,26
   call l_offset_ix_de         ; hl = & tty_state
   
   ; hl = & tty
   ;  c = ascii char
   
   ld de,zx_tty_z88dk_state_table
   
   call l_jphl                 ; execute tty
   ret c                       ; if producing a char for the terminal
   
   ;  a = action code
   ; de = & parameters

   ld hl,action_table
   jp asm_tty_execute_action

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; ACTION TABLE FOR TTY_Z88DK
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   EXTERN error_einval_znc
   EXTERN zx_01_output_char_32_tty_02_font_address
   EXTERN zx_01_output_char_32_tty_08_backspace
   EXTERN zx_01_output_char_32_tty_09_tab
   EXTERN zx_01_output_char_32_tty_11_scroll
   EXTERN zx_01_output_char_32_tty_12_cls
   EXTERN zx_01_output_char_32_tty_14_foreground_mask
   EXTERN zx_01_output_char_32_tty_15_background_attr
   EXTERN zx_01_output_char_32_tty_16_ink
   EXTERN zx_01_output_char_32_tty_17_paper
   EXTERN zx_01_output_char_32_tty_18_flash
   EXTERN zx_01_output_char_32_tty_19_bright
   EXTERN zx_01_output_char_32_tty_20_inverse
   EXTERN zx_01_output_char_32_tty_22_at
   EXTERN zx_01_output_char_32_tty_23_atr
   EXTERN zx_01_output_char_32_tty_27_escape
   EXTERN zx_01_output_char_32_tty_28_left
   EXTERN zx_01_output_char_32_tty_29_right
   EXTERN zx_01_output_char_32_tty_30_up
   EXTERN zx_01_output_char_32_tty_31_down
   
action_table:

   defw error_einval_znc
   defw zx_01_output_char_32_tty_02_font_address
   defw error_einval_znc
   defw error_einval_znc
   defw error_einval_znc
   defw error_einval_znc
   defw error_einval_znc
   defw zx_01_output_char_32_tty_08_backspace
   defw zx_01_output_char_32_tty_09_tab
   defw error_einval_znc
   defw zx_01_output_char_32_tty_11_scroll
   defw zx_01_output_char_32_tty_12_cls
   defw error_einval_znc
   defw zx_01_output_char_32_tty_14_foreground_mask   ; [ 14 = foreground mask ]
   defw zx_01_output_char_32_tty_15_background_attr   ; [ 15 = background attr ]
   defw zx_01_output_char_32_tty_16_ink               ; [ 16 = ink '0'..'7' ]
   defw zx_01_output_char_32_tty_17_paper             ; [ 17 = paper '0'..'7' ]
   defw zx_01_output_char_32_tty_18_flash             ; [ 18 = flash '0'..'1' ]
   defw zx_01_output_char_32_tty_19_bright            ; [ 19 = bright '0'..'1' ]
   defw zx_01_output_char_32_tty_20_inverse           ; [ 20 = inverse '0'..'1' ]
   defw error_einval_znc
   defw zx_01_output_char_32_tty_22_at
   defw zx_01_output_char_32_tty_23_atr
   defw error_einval_znc
   defw error_einval_znc
   defw error_einval_znc
   defw zx_01_output_char_32_tty_27_escape
   defw zx_01_output_char_32_tty_28_left
   defw zx_01_output_char_32_tty_29_right
   defw zx_01_output_char_32_tty_30_up
   defw zx_01_output_char_32_tty_31_down
