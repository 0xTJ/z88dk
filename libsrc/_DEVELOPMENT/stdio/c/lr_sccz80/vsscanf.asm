
; int vsscanf(const char *s, const char *format, va_list arg)

PUBLIC vsscanf

EXTERN asm_vsscanf

vsscanf:

   pop af
   pop bc
   pop de
   pop hl
   
   push hl
   push de
   push bc
   push af
   
   jp asm_vsscanf
