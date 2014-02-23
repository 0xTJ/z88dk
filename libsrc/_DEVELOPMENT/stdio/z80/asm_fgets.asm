
; ===============================================================
; Jan 2014
; ===============================================================
; 
; char *fgets(char *s, int n, FILE *stream)
;
; Read up to n-1 chars into array s from the stream.  Terminate
; the string with a '\0'.  Stop reading from the stream if '\n'
; or EOF is encountered.  '\n' is written to s.
;
; If no chars could be read from the stream or a stream error
; occurs, 0 is returned.  Otherwise s is returned.
;
; ===============================================================

XLIB asm_fgets

LIB asm_fgets_unlocked
LIB __stdio_lock_acquire, __stdio_lock_release, error_enlock_zc

asm_fgets:

   ; enter : ix = FILE *
   ;         bc = size_t n
   ;         de = char *s
   ;
   ; exit  : ix = FILE *
   ;         bc'= number of chars written to s
   ;
   ;         if success
   ;
   ;            hl = char *s
   ;            de = address of terminating '\0'
   ;            s terminated
   ;            carry reset
   ;
   ;         if s == 0 or n == 0
   ;
   ;            hl = 0
   ;            s not terminated
   ;            carry set
   ;
   ;         if stream at EOF or stream in error state
   ;
   ;            hl = 0
   ;            s not terminated
   ;            carry set
   ;
   ;         if stream error or EOF occurs and no chars were read
   ;
   ;            hl = 0
   ;            s not terminated
   ;            carry set, errno set
   ;
   ; uses  : all except ix

   call __stdio_lock_acquire
   jp c, error_enolck_zc
   
   call asm_fgets_unlocked
   jp __stdio_lock_release
