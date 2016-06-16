; $Id: bit_open_di.asm,v 1.5 2016-06-16 19:33:59 dom Exp $
;
; VZ 200 - 1 bit sound functions
;
; void bit_open();
;
; Stefano Bodrato - 31/3/2008
;

    PUBLIC     bit_open_di
    EXTERN     __snd_tick
    EXTERN     __bit_irqstatus

.bit_open_di

        ld a,i		; get the current status of the irq line
        di
        push af
        
        ex (sp),hl
        ld (__bit_irqstatus),hl
        pop hl

          ld    a,($783b)
          ld   (__snd_tick),a
          ret
