
; ===============================================================
; Jan 2014
; ===============================================================
; 
; int feof(FILE *stream)
;
; Return non-zero if eof indicator is set on stream.
;
; ===============================================================

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_feof

LIB asm_feof_unlocked
LIB __stdio_lock_acquire, __stdio_lock_release, error_enolck_zc

asm_feof:

   ; enter : ix = FILE *
   ;
   ; exit  : ix = FILE *
   ;
   ;         success
   ;
   ;            hl = 0 and Z flag set if not eof
   ;            hl = non-zero and NZ flag set if eof
   ;            carry reset
   ;
   ;         fail
   ;
   ;            hl = 0
   ;            carry set, errno = enolck
   ;
   ; uses  : af, bc, de, hl

   call __stdio_lock_acquire
   jp c, error_enolck_zc
   
   call asm_feof_unlocked
   jp __stdio_lock_release

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_feof

LIB asm_feof_unlocked

asm_feof:

   jp asm_feof_unlocked

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
