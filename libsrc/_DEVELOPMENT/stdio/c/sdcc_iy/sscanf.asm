
; int sscanf(const char *s, const char *format, ...)

SECTION seg_code_stdio

PUBLIC _sscanf

_sscanf:

   INCLUDE "stdio/z80/asm_sscanf.asm"
