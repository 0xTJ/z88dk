
; void wa_stack_destroy(wa_stack_t *s)

XDEF wa_stack_destroy

LIB w_array_destroy

wa_stack_destroy:

   jp w_array_destroy

   INCLUDE "adt/wa_stack/z80/asm_wa_stack_destroy.asm"
