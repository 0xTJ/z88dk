
; int putchar_unlocked(int c)

XDEF _putchar_unlocked

_putchar_unlocked:

   pop af
   pop hl
   
   push hl
   push af

   push ix
   
   call asm_putchar_unlocked
   
   pop ix
   ret

   INCLUDE "stdio/z80/asm_putchar_unlocked.asm"
