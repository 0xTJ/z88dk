
*** DO NOT ADD TO LIBRARY
*** THIS FUNCTION IS EXPORTED AS PART OF ASM_GETDELIM

asm_getdelim_unlocked:

   ; enter : ix = FILE *
   ;         bc = int delimiter
   ;         de = size_t *n
   ;         hl = char **lineptr
   ;
   ; exit  : ix = FILE *
   ;
   ;         success
   ;
   ;            *lineptr = address of buffer
   ;            *n       = size of buffer in bytes, including '\0'
   ;
   ;            hl = number of chars written to buffer (not including '\0')
   ;            carry reset
   ;
   ;         fail
   ;
   ;            hl = -1
   ;            carry set
   ;
   ; uses  : all except ix
