


#ifndef _ARCH_SPECTRUM_H
#define _ARCH_SPECTRUM_H

#include <stddef.h>
#include <rect.h>

// COMMON CONSTANTS

#define INK_BLACK                   0x00
#define INK_BLUE                    0x01
#define INK_RED                     0x02
#define INK_MAGENTA                 0x03
#define INK_GREEN                   0x04
#define INK_CYAN                    0x05
#define INK_YELLOW                  0x06
#define INK_WHITE                   0x07

#define PAPER_BLACK                 0x00
#define PAPER_BLUE                  0x08
#define PAPER_RED                   0x10
#define PAPER_MAGENTA               0x18
#define PAPER_GREEN                 0x20
#define PAPER_CYAN                  0x28
#define PAPER_YELLOW                0x30
#define PAPER_WHITE                 0x38

#define BRIGHT                      0x40
#define FLASH                       0x80

// misc

extern void __LIB__ __FASTCALL__ zx_border(uint16_t colour);


extern void __LIB__ __FASTCALL__ zx_cls(uint16_t attr);


extern void __LIB__ zx_cls_wc(struct r_Rect8 *r,uint16_t attr);
extern void __LIB__ __CALLEE__ zx_cls_wc_callee(struct r_Rect8 *r,uint16_t attr);
#define zx_cls_wc(a,b) zx_cls_wc_callee(a,b)


extern void __LIB__ zx_scroll_up(uint16_t rows,uint16_t attr);
extern void __LIB__ __CALLEE__ zx_scroll_up_callee(uint16_t rows,uint16_t attr);
#define zx_scroll_up(a,b) zx_scroll_up_callee(a,b)


extern void __LIB__ zx_scroll_wc_up(struct r_Rect8 *r,uint16_t rows,uint16_t attr);
extern void __LIB__ __CALLEE__ zx_scroll_wc_up_callee(struct r_Rect8 *r,uint16_t rows,uint16_t attr);
#define zx_scroll_wc_up(a,b,c) zx_scroll_wc_up_callee(a,b,c)



// display

// In the following, screen address refers to a pixel address within the display file while
// attribute address refers to the attributes area.
//
// Function names are constructed from the following atoms:
//
// saddr = screen address
// aaddr = attribute address
// 
// px    = pixel x coordinate (0..255)
// py    = pixel y coordinate (0..191)
// pxy   = pixel (x,y) coordinate
//
// cx    = character x coordinate (0..31)
// cy    = character y coordinate (0..23)
// cyx   = character (y,x) coordinate - ordering borrowed from Sinclair Basic
//
// So for example:
//
// zx_saddr2cy(saddr) will return the character y coordinate corresponding to the given screen address
// zx_saddr2aaddr(saddr) will return the attribute address corresponding to the given screen address
// zx_pxy2aaddr(px,py) will return the attribute address corresponding to the given (x,y) pixel coordinate
//
// Some functions will return with carry flag set if coordinates or addresses move out of
// bounds.  In these cases the special z88dk keywords iferror() and ifnerror() can be used
// to test the carry flag and determine if invalid results are returned.  Check with the
// wiki documentation or the asm source files to see which functions support this.  If
// comments in the asm source file do not mention this, it is not supported.

extern int __LIB__ __FASTCALL__ zx_aaddr2cx(void *aaddr);


extern int __LIB__ __FASTCALL__ zx_aaddr2cy(void *aaddr);


extern int __LIB__ __FASTCALL__ zx_aaddr2px(void *aaddr);


extern int __LIB__ __FASTCALL__ zx_aaddr2py(void *aaddr);


extern void __LIB__ __FASTCALL__ *zx_aaddr2saddr(void *aaddr);


extern void __LIB__ __FASTCALL__ *zx_aaddrcdown(void *aaddr);


extern void __LIB__ __FASTCALL__ *zx_aaddrcleft(void *aaddr);


extern void __LIB__ __FASTCALL__ *zx_aaddrcright(void *aaddr);


extern void __LIB__ __FASTCALL__ *zx_aaddrcup(void *aaddr);


extern int __LIB__ __FASTCALL__ zx_bitmask2px(int bitmask);


extern void __LIB__ __FASTCALL__ *zx_cy2aaddr(int row);


extern void __LIB__ __FASTCALL__ *zx_cy2saddr(int row);


extern void __LIB__ *zx_cyx2aaddr(int row,int col);
extern void __LIB__ __CALLEE__ *zx_cyx2aaddr_callee(int row,int col);
#define zx_cyx2aaddr(a,b) zx_cyx2aaddr_callee(a,b)


extern void __LIB__ *zx_cyx2saddr(int row,int col);
extern void __LIB__ __CALLEE__ *zx_cyx2saddr_callee(int row,int col);
#define zx_cyx2saddr(a,b) zx_cyx2saddr_callee(a,b)


extern int __LIB__ __FASTCALL__ zx_px2bitmask(int x);


extern void __LIB__ *zx_pxy2aaddr(int x,int y);
extern void __LIB__ __CALLEE__ *zx_pxy2aaddr_callee(int x,int y);
#define zx_pxy2aaddr(a,b) zx_pxy2aaddr_callee(a,b)


extern void __LIB__ *zx_pxy2saddr(int x,int y);
extern void __LIB__ __CALLEE__ *zx_pxy2saddr_callee(int x,int y);
#define zx_pxy2saddr(a,b) zx_pxy2saddr_callee(a,b)


extern void __LIB__ __FASTCALL__ *zx_py2aaddr(int y);


extern void __LIB__ __FASTCALL__ *zx_py2saddr(int y);


extern void __LIB__ __FASTCALL__ *zx_saddr2aaddr(void *saddr);


extern int __LIB__ __FASTCALL__ zx_saddr2cx(void *saddr);


extern int __LIB__ __FASTCALL__ zx_saddr2cy(void *saddr);


extern int __LIB__ __FASTCALL__ zx_saddr2px(void *saddr);


extern int __LIB__ __FASTCALL__ zx_saddr2py(void *saddr);


extern void __LIB__ __FASTCALL__ *zx_saddrcdown(void *saddr);


extern void __LIB__ __FASTCALL__ *zx_saddrcleft(void *saddr);


extern void __LIB__ __FASTCALL__ *zx_saddrcright(void *saddr);


extern void __LIB__ __FASTCALL__ *zx_saddrcup(void *saddr);


extern void __LIB__ __FASTCALL__ *zx_saddrpdown(void *saddr);


extern void __LIB__ *zx_saddrpleft(void *saddr,int bitmask);
extern void __LIB__ __CALLEE__ *zx_saddrpleft_callee(void *saddr,int bitmask);
#define zx_saddrpleft(a,b) zx_saddrpleft_callee(a,b)


extern void __LIB__ *zx_saddrpright(void *saddr,int bitmask);
extern void __LIB__ __CALLEE__ *zx_saddrpright_callee(void *saddr,int bitmask);
#define zx_saddrpright(a,b) zx_saddrpright_callee(a,b)


extern void __LIB__ __FASTCALL__ *zx_saddrpup(void *saddr);



// graphics

extern int __LIB__ zx_pattern_fill(int x,int y,void *pattern,int depth);
extern int __LIB__ __CALLEE__ zx_pattern_fill_callee(int x,int y,void *pattern,int depth);
#define zx_pattern_fill(a,b,c,d) zx_pattern_fill_callee(a,b,c,d)



#endif