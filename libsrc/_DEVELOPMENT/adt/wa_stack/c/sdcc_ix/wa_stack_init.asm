
; wa_stack_t *wa_stack_init(void *p, void *data, size_t capacity)

PUBLIC _wa_stack_init

EXTERN _w_array_init

_wa_stack_init:

   jp _w_array_init

   INCLUDE "adt/wa_stack/z80/asm_wa_stack_init.asm"
