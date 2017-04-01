; **************************************************
; SMSlib - C programming library for the SMS/GG
; ( part of devkitSMS - github.com/sverx/devkitSMS )
; **************************************************

SECTION code_lib
PUBLIC asm_SMS_getMDKeysHeld

EXTERN _MDKeysStatus, _PreviousMDKeysStatus

asm_SMS_getMDKeysHeld:

   ; unsigned int SMS_getMDKeysHeld (void)
   ;
   ; exit : hl = MD keys held
   ;
   ; uses : af, hl

   ld hl,(_MDKeysStatus)
   
   ld a,(_PreviousMDKeysStatus)
   and l
   ld l,a
   
   ld a,(_PreviousMDKeysStatus+1)
   and h
   ld h,a
   
   ret
