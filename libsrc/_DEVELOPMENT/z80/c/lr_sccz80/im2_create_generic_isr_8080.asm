
; void *im2_create_generic_isr_8080(uint8_t num_callback, void *address)

XLIB im2_create_generic_isr_8080

LIB asm_im2_create_generic_isr_8080

im2_create_generic_isr_8080:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   ld a,l
   jp asm_im2_create_generic_isr_8080
