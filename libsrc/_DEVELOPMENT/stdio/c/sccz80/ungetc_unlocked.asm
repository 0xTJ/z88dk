
; int ungetc_unlocked(int c, FILE *stream)

SECTION seg_code_stdio

PUBLIC ungetc_unlocked

EXTERN asm_ungetc_unlocked

ungetc_unlocked:

   pop af
   pop ix
   pop hl
   
   push hl
   push ix
   push af
   
   jp asm_ungetc_unlocked
