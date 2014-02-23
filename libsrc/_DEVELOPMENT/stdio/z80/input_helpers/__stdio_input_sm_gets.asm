
XLIB __stdio_input_sm_gets

__stdio_input_sm_gets:

   ; GETS STATE MACHINE
   ;
   ; Qualify function for STDIO_MSG_EATC
   ; Accepts all chars up to but not including '\n'
   ;
   ; set-up: hl = state machine function address
   ;         de = char *s = destination array
   ;
   ; return: de = void *s_ptr (address past last byte written)

   cp '\n'
   jr z, state_1t
   
   ld (de),a                   ; write char to buffer
   inc de
   
   or a                        ; indicate accepted
   ret

state_1t:

   ; seen the last char '\n'

   ld hl,state_1               ; next time reject
   ret

state_1:

   scf                         ; reject to end
   ret
