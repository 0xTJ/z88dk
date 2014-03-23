
; ===============================================================
; Jan 2014
; ===============================================================
; 
; void perror(const char *s)
;
; Write error message to stderr.
;
; ===============================================================

XLIB asm_perror

XREF __stdio_file_stderr, _errno

LIB asm_strerror, asm_fputs_unlocked, asm_fputc_unlocked
LIB __stdio_lock_acquire, __stdio_lock_release, error_mc

asm_perror:

   ; enter : hl = char *s
   ;
   ; exit  : ix = FILE *stderr
   ;         carry set on error
   ;
   ; uses  : all except ix
   
   ld ix,(__stdio_file_stderr)
   
   call __stdio_lock_acquire   ; so that output is contiguous
   jp c, error_mc              ; if lock could not be acquired, do not overwrite errno
   
   ld a,h
   or l
   jr z, errno_string          ; if no user string
   
   ld a,(hl)
   or a
   jr z, errno_string          ; if no user string

   ; output user string
   
   call asm_fputs_unlocked
   
   ld hl,separator_s
   call asm_fputs_unlocked

errno_string:
   
   ; output errno string
   
   ld hl,(_errno)
   call asm_strerror
   call asm_fputs_unlocked
   
   ld e,13                     ; '\n'
   call asm_fputc_unlocked
   
   jp __stdio_lock_release

separator_s:

   defm ": "
   defb 0
