
; ===============================================================
; Jan 2014
; ===============================================================
; 
; void mtx_destroy(mtx_t *m)
;
; Release resources associated with mutex.
;
; ===============================================================

;;; should we unblock any blocked threads?
;;; standard specifically says we don't need to

XLIB asm_mtx_destroy

LIB l_setmem_hl

defc asm_mtx_destroy = l_setmem_hl - 12

; zeroed structure makes mtx_type invalid
