
; int getc_unlocked(FILE *stream)

PUBLIC getc_unlocked

EXTERN fgetc_unlocked

;defc getc_unlocked = fgetc_unlocked

getc_unlocked:

   jp fgetc_unlocked

INCLUDE "stdio/z80/asm_getc_unlocked.asm"
