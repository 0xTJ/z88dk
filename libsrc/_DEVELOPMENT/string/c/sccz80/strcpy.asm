
; char *strcpy(char * restrict s1, const char * restrict s2)

SECTION seg_code_string

PUBLIC strcpy

EXTERN asm_strcpy

strcpy:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   jp asm_strcpy
