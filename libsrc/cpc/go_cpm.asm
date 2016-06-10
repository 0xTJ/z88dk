;
;       Amstrad CPC library
;       Boot CP/M via AMSDOS command
;
;       void go_cpm()
;
;       $Id: go_cpm.asm,v 1.3 2016-06-10 21:12:36 dom Exp $
;

        PUBLIC	go_cpm
        PUBLIC	_go_cpm

        INCLUDE "cpcfirm.def"              

.go_cpm
._go_cpm

; |CPM (no parameters)

ld hl,cmd_cpm
call firmware
defw kl_find_command
ret nc

ld (cpm_command),hl     ; store address of function
ld a,c
ld (cpm_command+2),a    ; store "rom select" of function

xor a                   ; no parameters

;rst 3                   ;; KL FAR CALL
rst  $18
defw cpm_command
ret

.cpm_command
defw 0
defb 0


.cmd_cpm
defb 'C', 'P', 'M'+$80
