
INCLUDE "config_private.inc"

SECTION code_driver
SECTION code_driver_terminal_output

PUBLIC vgl_01_output_char_oterm_msg_scroll

EXTERN vgl_01_output_char_refresh

vgl_01_output_char_oterm_msg_scroll:
    ;   enter  :   c = number of rows to scroll
    ;   can use:  af, bc, de, hl
    
    ;   Scroll the window upward 'C' character rows.
    
    ; Move everything up by one row
    ;@TODO: Implement scrolling by C rows
    ld	bc, __VGL_DISPLAY_COLS*(__VGL_DISPLAY_ROWS-1)	;(_screen_scrollSize)
    ld	hl, __VGL_VRAM_ADDRESS_START + 1*__VGL_DISPLAY_COLS	;_LCD_VRAM_ROW1
    ld	de, __VGL_VRAM_ADDRESS_START + 0*__VGL_DISPLAY_COLS	;_LCD_VRAM_ROW0
    ldir	; Copy BC chars from (HL) to (DE)
    
    ; Now fill the last row with spaces
    ld hl, __VGL_VRAM_ADDRESS_START + (__VGL_DISPLAY_ROWS-1)*__VGL_DISPLAY_COLS
    ld de, __VGL_VRAM_ADDRESS_START + (__VGL_DISPLAY_ROWS-1)*__VGL_DISPLAY_COLS + 1
    
    ld (hl), 0x20	; Character to use
    ld bc, __VGL_DISPLAY_COLS-1	; columns-1
    ldir	; Copy BC bytes from (HL) to (DE)
    
    jp vgl_01_output_char_refresh
    ;ret
