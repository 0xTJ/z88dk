
; void mtx_destroy(mtx_t *m)

SECTION seg_code_mutex

PUBLIC mtx_destroy

defc mtx_destroy = asm_mtx_destroy

INCLUDE "threads/mutex/z80/asm_mtx_destroy.asm"
