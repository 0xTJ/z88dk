
; char *strcpy(char * restrict s1, const char * restrict s2)

SECTION seg_code_string

PUBLIC _strcpy

_strcpy:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm_strcpy.asm"
