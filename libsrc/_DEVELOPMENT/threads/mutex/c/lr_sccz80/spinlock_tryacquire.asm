
; int spinlock_tryacquire(char *spinlock)

XDEF spinlock_tryacquire

spinlock_tryacquire:

   scf
   rr (hl)
    
   ld hl,1
   ret nc
    
   dec l
   ret
    
   INCLUDE "threads/mutex/z80/asm_spinlock_tryacquire.asm"
