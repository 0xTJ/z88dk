
INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_ERROR
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   ; verbose mode

   SECTION seg_code_error
   
   PUBLIC error_erange_mc
   
   EXTERN __ERANGE, errno_mc
   
      pop hl
   
   error_erange_mc:
   
      ; set hl = -1
      ; set carry flag
      ; set errno = ERANGE
      
      ld l,__ERANGE
      jp errno_mc
   
   
   SECTION seg_rodata_error_strings
   
   defb __ERANGE
   defm "ERANGE - Result too large"
   defb 0

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   SECTION seg_code_error
   
   PUBLIC error_erange_mc
   
   EXTERN errno_mc
   
   defc error_erange_mc = errno_mc - 2

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
