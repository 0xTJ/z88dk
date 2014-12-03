
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; zx_01_input_kbd_inkey ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; The keyboard is read via the library's in_inkey() function.
;
;   * No ROM dependency
;   * Implements key debounce and key repeat
;   * Contains busy wait loops
;   * Very responsive
;   * Reads keyboard directly
;   * Does not return until keypress is registered
;
; This subroutine inherits the library's console_01_input
; terminal code which implements line editing and various
; other niceties.  This means this input console must be
; tied to an output terminal that understands console_01_input
; terminal messages.
;
; Driver class diagram:
;
; CONSOLE_01_INPUT_TERMINAL (root, abstract)
; ZX_01_INPUT_KBD_INKEY (concrete)
;
; Consumes the following messages from console_01_input_terminal:
;
;   * ITERM_MSG_GETC
;
;     exit : a = keyboard char after character set translation
;            carry set on error, hl = 0 (stream error) or -1 (eof)
;     uses : af, bc, de, hl
;
; Consumes the following messages from stdio:
;
;   * STDIO_MSG_FLSH
;     forwards to base class
;
;   * STDIO_MSG_ICTL
;     forwards to base class
;
; IOCTLs understood by this driver (in addition to those of base):
;
;   * IOCTL_ITERM_SET_DELAYS
;     set debounce and repeat rate times in ms.
; 
; This driver reserves extra bytes in the FDSTRUCT:
;
; offset (wrt FDSTRUCT.JP)  description
;
;   25                      getk_state
;   26                      getk_lastk
;   27                      getk_debounce_ms
;   28..29                  getk_repeatbegin_ms
;   30..31                  getk_repeatperiod_ms
;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

SECTION seg_code_fcntl

PUBLIC zx_01_input_kbd_inkey

EXTERN ITERM_MSG_GETC, STDIO_MSG_FLSH, STDIO_MSG_ICTL

EXTERN console_01_input_terminal
EXTERN zx_01_input_inkey_iterm_msg_getc
EXTERN zx_01_input_inkey_stdio_msg_flsh
EXTERN zx_01_input_inkey_stdio_msg_ictl

zx_01_input_kbd_inkey:

   cp ITERM_MSG_GETC
   jp z, zx_01_input_inkey_iterm_msg_getc
   
   cp STDIO_MSG_FLSH
   jp z, zx_01_input_inkey_stdio_msg_flsh
   
   cp STDIO_MSG_ICTL
   jp z, zx_01_input_inkey_stdio_msg_ictl
   
   jp console_01_input_terminal    ; forward to library
