
; uint16_t in_key_scancode(int c)

SECTION seg_code_input

PUBLIC in_key_scancode

in_key_scancode:

   INCLUDE "input/zx/z80/asm_in_key_scancode.asm"
