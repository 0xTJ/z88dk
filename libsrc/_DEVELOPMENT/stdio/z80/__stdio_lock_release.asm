
XLIB __stdio_lock_release

LIB asm_mtx_unlock

__stdio_lock_release:

   ; Release the FILE lock
   ;
   ; enter : ix = FILE *
   ;
   ; exit  : ix = FILE *
   ;
   ; uses  : bc, de

   push af
   push hl
   
   ld e,ixl
   ld d,ixh                    ; de = FILE *
   
   ld hl,7
   add hl,de                   ; hl = & FILE->mtx_t
   
   call asm_mtx_unlock

   pop hl
   pop af
   
   ret
