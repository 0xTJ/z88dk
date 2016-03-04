

#ifndef __SYS_COMPILER_H__
#define __SYS_COMPILER_H__

#define __VA_ARGS__ ;

/* Temporary fix to turn off features not supported by sdcc */
#ifdef Z88DK_USES_SDCC
#define __FASTCALL__
#define __CALLEE__
#define __SMALLCCALLEE __z88dk_callee
#define __SMALLCFASTCALL __z88dk_fastcall
#define __LIB__
#define __SMALLCDECL __smallc
#define far
#else
#define __SMALLCDECL
#define __SMALLCCALLEE
#define __SMALLCFASTCALL
#endif

#endif
