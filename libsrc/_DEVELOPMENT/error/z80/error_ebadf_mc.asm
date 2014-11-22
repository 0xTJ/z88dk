
INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_ERROR
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   ; verbose mode

   SECTION seg_code_error
   
   PUBLIC error_ebadf_mc
   
   EXTERN __EBADF, errno_mc
   
      pop hl
   
   error_ebadf_mc:
   
      ; set hl = -1
      ; set carry flag
      ; set errno = EBADF
      
      ld l,__EBADF
      jp errno_mc
   
   
   SECTION seg_rodata_error_strings
   
   defb __EBADF
   defm "EBADF - Invalid stream"
   defb 0

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   SECTION seg_code_error
   
   PUBLIC error_ebadf_mc
   
   EXTERN errno_mc
   
   defc error_ebadf_mc = errno_mc - 2

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
