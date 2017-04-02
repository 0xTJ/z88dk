; **************************************************
; SMSlib - C programming library for the SMS/GG
; ( part of devkitSMS - github.com/sverx/devkitSMS )
; **************************************************

INCLUDE "SMSlib_private.inc"

SECTION code_clib
SECTION code_SMSlib

PUBLIC asm_SMSlib_getKeysHeld

EXTERN _KeysStatus, _PreviousKeysStatus

asm_SMSlib_getKeysHeld:

   ; unsigned int SMS_getKeysHeld (void)
   ;
   ; exit : hl = keys held
   ;
   ; uses : af, hl

   ld hl,(_KeysStatus)
   
   ld a,(_PreviousKeysStatus)
   and l
   ld l,a
   
   ld a,(_PreviousKeysStatus+1)
   and h
   ld h,a
   
   ret
