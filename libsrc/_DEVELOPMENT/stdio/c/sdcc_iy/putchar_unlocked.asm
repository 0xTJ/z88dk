
; int putchar_unlocked(int c)

SECTION code_stdio

PUBLIC _putchar_unlocked

_putchar_unlocked:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "stdio/z80/asm_putchar_unlocked.asm"
