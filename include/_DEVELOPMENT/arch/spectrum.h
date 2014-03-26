
#ifndef _SPECTRUM_H
#define _SPECTRUM_H

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

// SCCZ80

extern void   __LIB__ __FASTCALL__  zx_border(uchar colour);

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

extern uint   __LIB__ __FASTCALL__  zx_aaddr2cx(void *aaddr);
extern uint   __LIB__ __FASTCALL__  zx_aaddr2cy(void *aaddr);
extern uint   __LIB__ __FASTCALL__  zx_aaddr2px(void *aaddr);
extern uint   __LIB__ __FASTCALL__  zx_aaddr2py(void *aaddr);
extern void   __LIB__ __FASTCALL__ *zx_aaddr2saddr(void *aaddr);
extern void   __LIB__ __FASTCALL__ *zx_aaddrcdown(void *aaddr);
extern void   __LIB__ __FASTCALL__ *zx_aaddrcleft(void *aaddr);
extern void   __LIB__ __FASTCALL__ *zx_aaddrcright(void *aaddr);
extern void   __LIB__ __FASTCALL__ *zx_aaddrcup(void *aaddr);
extern uint   __LIB__ __FASTCALL__  zx_bitmask2px(uchar bitmask);
extern void   __LIB__ __FASTCALL__ *zx_cy2aaddr(uchar row);
extern void   __LIB__ __FASTCALL__ *zx_cy2saddr(uchar row);
extern void   __LIB__              *zx_cyx2aaddr(uchar row, uchar col);
extern void   __LIB__              *zx_cyx2saddr(uchar row, uchar col);
extern uint   __LIB__ __FASTCALL__  zx_px2bitmask(uchar x);
extern void   __LIB__              *zx_pxy2aaddr(uchar x, uchar y);
extern void   __LIB__              *zx_pxy2saddr(uchar x, uchar y);
extern void   __LIB__ __FASTCALL__ *zx_py2aaddr(uchar y);
extern void   __LIB__ __FASTCALL__ *zx_py2saddr(uchar y);
extern void   __LIB__ __FASTCALL__ *zx_saddr2aaddr(void *saddr);
extern uint   __LIB__ __FASTCALL__  zx_saddr2cx(void *saddr);
extern uint   __LIB__ __FASTCALL__  zx_saddr2cy(void *saddr);
extern uint   __LIB__ __FASTCALL__  zx_saddr2px(void *saddr);
extern uint   __LIB__ __FASTCALL__  zx_saddr2py(void *saddr);
extern void   __LIB__ __FASTCALL__ *zx_saddrcdown(void *saddr);
extern void   __LIB__ __FASTCALL__ *zx_saddrcleft(void *saddr);
extern void   __LIB__ __FASTCALL__ *zx_saddrcright(void *saddr);
extern void   __LIB__ __FASTCALL__ *zx_saddrcup(void *saddr);
extern void   __LIB__ __FASTCALL__ *zx_saddrpdown(void *saddr);
extern void   __LIB__              *zx_saddrpleft(void *saddr, uchar bitmask);
extern void   __LIB__              *zx_saddrpright(void *saddr, uchar bitmask);
extern void   __LIB__ __FASTCALL__ *zx_saddrpup(void *saddr);

// graphics

extern int    __LIB__               zx_pattern_fill(uint x, uint y, void *pattern, uint depth);

// SCCZ80 CALLEE LINKAGE

// display

extern void   __LIB__ __CALLEE__   *zx_cyx2aaddr_callee(uchar row, uchar col);
extern void   __LIB__ __CALLEE__   *zx_cyx2saddr_callee(uchar row, uchar col);
extern void   __LIB__ __CALLEE__   *zx_pxy2aaddr_callee(uchar x, uchar y);
extern void   __LIB__ __CALLEE__   *zx_pxy2saddr_callee(uchar x, uchar y);
extern void   __LIB__ __CALLEE__   *zx_saddrpleft_callee(void *saddr, uchar bitmask);
extern void   __LIB__ __CALLEE__   *zx_saddrpright_callee(void *saddr, uchar bitmask);

// graphics

extern int    __LIB__ __CALLEE__    zx_pattern_fill_callee(uint x, uint y, void *pattern, uint depth);

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#define zx_cyx2aaddr(a,b)           zx_cyx2aaddr_callee(a,b)
#define zx_cyx2saddr(a,b)           zx_cyx2saddr_callee(a,b)
#define zx_pxy2aaddr(a,b)           zx_pxy2aaddr_callee(a,b)
#define zx_pxy2saddr(a,b)           zx_pxy2saddr_callee(a,b)
#define zx_saddrpleft(a,b)          zx_saddrpleft_callee(a,b)
#define zx_saddrpright(a,b)         zx_saddrpright_callee(a,b)

#define zx_pattern_fill(a,b,c,d)    zx_pattern_fill_callee(a,b,c,d)

#endif
