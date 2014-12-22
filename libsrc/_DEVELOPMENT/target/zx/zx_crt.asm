;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; SELECT CRT0 FROM -STARTUP=N COMMANDLINE OPTION ;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

INCLUDE "zcc_opt.def"

IFNDEF startup

   ; startup undefined so select a default
   
   defc startup = 0

ENDIF

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

IF startup = 0

   ; standard 32 column display
   ;
   ; stdin  = zx_01_input_kbd_inkey
   ; stdout = zx_01_output_char_32 full screen
   ; stderr = dup(stdin)

   INCLUDE "startup/zx_crt_0.asm"

ENDIF

IF startup = 1

   ; standard 32 column display tty_z88dk terminal
   ;
   ; stdin  = zx_01_input_kbd_inkey
   ; stdout = zx_01_output_char_32_tty_z88dk full screen
   ; stderr = dup(stdout)

   INCLUDE "startup/zx_crt_1.asm"

ENDIF

IF startup = 4

   ; 64 column display using fixed width 4x8 font
   ;
   ; stdin  = zx_01_input_kbd_inkey
   ; stdout = zx_01_output_char_64 full screen
   ; stderr = dup(stdout)
   
   INCLUDE "startup/zx_crt_4.asm"

ENDIF

IF startup = 5

   ; 64 column display using fixed width 4x8 font tty_z88dk terminal
   ;
   ; stdin  = zx_01_input_kbd_inkey
   ; stdout = zx_01_output_char_64_tty_z88dk full screen
   ; stderr = dup(stdout)

   INCLUDE "startup/zx_crt_5.asm"

ENDIF

; testing purposes

IF startup = 100

   ; three terminal windows on screen
   ;
   ; stdin  = zx_01_input_kbd_inkey (connected to edit)
   ; stdout = zx_01_output_char_64 window (2, 44, 1, 18)
   ; stderr = dup(stdout)
   ; edit   = zx_01_output_char_32 window (1, 30, 20 ,3)
   ; sidebar= zx_01_output_char_64 window (48, 14, 1, 18)
   
   INCLUDE "startup/zx_crt_100.asm"

ENDIF
