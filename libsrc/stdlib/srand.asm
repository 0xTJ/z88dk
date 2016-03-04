;
;       Small C+ Runtime Library
;
;       Random number generator
;
;       void srand(int) - seed "random" number
;
; -----
; $Id: srand.asm,v 1.7 2016-03-04 23:48:13 dom Exp $

PUBLIC srand
PUBLIC _srand
EXTERN _std_seed
PUBLIC ASMDISP_SRAND

; FASTCALL

; you must declare an integer named "std_seed" in your
; main.c file to hold the seed.
;
; int std_seed;

.srand
._srand

   ld (_std_seed),hl
   ret

DEFC ASMDISP_SRAND = 0
