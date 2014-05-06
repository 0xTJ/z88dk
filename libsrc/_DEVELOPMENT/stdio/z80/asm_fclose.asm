
; ===============================================================
; Apr 2014
; ===============================================================
; 
; int fclose(FILE *stream)
;
; Close the file.
;
; ===============================================================

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_fclose

LIB asm0_fclose_unlocked, __stdio_lock_acquire, error_enolck_mc

asm_fclose:

   ; enter : ix = FILE *
   ; 
   ; exit  : ix = FILE *
   ;
   ;         success
   ;
   ;            hl = 0
   ;            carry reset
   ;
   ;         fail
   ;
   ;            hl = -1
   ;            carry set, errno set
   ;
   ; uses  : all except ix

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $04

   LIB __stdio_lock_file_list, __stdio_unlock_file_list
   
   call __stdio_lock_file_list
   
   call __stdio_lock_acquire
   jp nc, asm0_fclose_unlocked
   
   call __stdio_unlock_file_list
   jp error_enolck_mc

ELSE

   call __stdio_lock_acquire
   jp nc, asm0_fclose_unlocked
   
   jp error_enolck_mc

ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_fclose

LIB asm_fclose_unlocked

asm_fclose:

   jp asm_fclose_unlocked

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   