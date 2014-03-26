
#ifndef _Z80_H
#define _Z80_H

// SCCZ80

extern void   __LIB__ __FASTCALL__  z80_delay_ms(uint ms);
extern void   __LIB__ __FASTCALL__  z80_delay_tstate(uint tstates);
extern void   __LIB__               z80_pop_di(void);
extern void   __LIB__               z80_pop_ei(void);
extern void   __LIB__               z80_push_di(void);
extern void   __LIB__               z80_push_ei(void);

// SCCZ80 CALLEE LINKAGE

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#endif
