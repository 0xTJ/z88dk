
; ===============================================================
; Jan 2014
; ===============================================================
; 
; size_t fwrite(void *ptr, size_t size, size_t nmemb, FILE *stream)
;
; Write nmemb records of size bytes pointed at by ptr.  Output
; one record at a time and return the number of records
; successfully transmitted.
;
; ===============================================================

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_fwrite

LIB asm0_fwrite_unlocked, __stdio_lock_release

asm_fwrite:

   ; enter : ix = FILE *
   ;         hl = char *ptr
   ;         bc = size
   ;         de = nmemb
   ;
   ; exit  : ix = FILE *
   ;         hl = number of records successfully transmitted
   ;
   ;         success
   ;
   ;            de = char *p = ptr following all records
   ;            bc = size
   ;            carry reset
   ;
   ;         fail
   ;
   ;            de = char *p (ptr to current record not transmitted completely)
   ;            bc = number of bytes in last incomplete record transmitted
   ;            carry set, errno set
   ;
   ; uses  : all except ix

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_STDIO & $01

   LIB __stdio_verify_valid_lock, fwrite_immediate_error_ebadf

   push hl
   call __stdio_verify_valid_lock
   pop hl
   
   jp c, fwrite_immediate_error_ebadf

ELSE

   LIB __stdio_lock_acquire, fwrite_immediate_error_enolck

   call __stdio_lock_acquire
   jp c, fwrite_immediate_error_enolck

ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   call asm0_fwrite_unlocked
   jp __stdio_lock_release

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_fwrite

LIB asm_fwrite_unlocked

asm_fwrite:

   jp asm_fwrite_unlocked

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
