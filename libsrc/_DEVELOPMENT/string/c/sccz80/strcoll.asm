
; int strcoll(const char *s1, const char *s2)

SECTION seg_code_string

PUBLIC strcoll

EXTERN asm_strcoll

strcoll:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   jp asm_strcoll
