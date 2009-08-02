; int __FASTCALL__ fclose(FILE *stream)
; 07.2009 aralbrec

XLIB fclose
XDEF ASMDISP_FCLOSE, LIBDISP_FCLOSE, LIBDISP2_FCLOSE

LIB fflush, close, stdio_free, l_jpix
LIB stdio_findfilestruct, stdio_error_ebadf_mc
XREF LIBDISP_CLOSE, ASMDISP_FFLUSH

INCLUDE "../stdio.def"

.fclose

   push hl
   pop ix

.asmentry

   ; 1. ensure FILE* is valid
   ;
   ; ix = FILE *
   
   ld a,ixl
   or ixh
   jp z, stdio_error_ebadf_mc  ; FILE* == 0 is invalid
   
   call stdio_findfilestruct
   jp c, stdio_error_ebadf_mc  ; FILE* is invalid
   
   ; 2. remove FILE* from open file list
   ;
   ; hl = & stdio_filetbl[FILEentry] + 1
   ; ix = FILE *

.libentry2

   ld (hl),0
   dec hl
   ld (hl),0
   
   ; 3. flush the stream
   ; 
   ; ix = FILE *

.libentry

   call fflush + ASMDISP_FFLUSH
   
   ; 4. send high level close message
   ;    high level structures in stdio chain should be deallocated
   ;
   ; ix = FILE *
   
   ld a,STDIO_MSG_FCLS
   call l_jpix
   
   ; 5. find first low level fd in the stdio chain
   ; 6.  deallocate malloced memory of high level FILEs on the way
   ; 
   ; ix = FILE *
      
.loop

   push ix                     ; save FILE*
   
   ld e,(ix+1)
   ld d,(ix+2)
   ld ixl,e
   ld ixh,d                    ; ix = next FILE* struct in chain
   
   pop hl                      ; hl = FILE*
   call stdio_free
   
   bit 3,(ix+3)                ; is FILE* flag set?
   jr nz, loop                 ; if so continue into stdio chain
      
   ; 7. close low level fdstruct
   ;
   ; ix = first fdstruct in stdio chain
   
   jp close + LIBDISP_CLOSE
   
defc ASMDISP_FCLOSE = asmentry - fclose
defc LIBDISP_FCLOSE = libentry - fclose
defc LIBDISP2_FCLOSE = libentry2 - fclose
