/*
 * Headerfile for ZX81 specific stuff
 *
 * $Id: zx81.h,v 1.4 2007-10-12 14:49:16 stefano Exp $
 */

#ifndef __ZX81_H__
#define __ZX81_H__

#include <sys/types.h>


/////////////
// CONSTANTS
/////////////

// Basic Tokens

#define TK_PRINT       245



/////////////////////////////////
// HIGH RESOLUTION RELATED STUFF
/////////////////////////////////

// graphics page
extern int base_graphics;

// direct call for "clear graphics page"
extern void __LIB__ _clg_hr();

// Copies text to HRG screen
extern void __LIB__ __FASTCALL__ copytxt(int ovmode);

// modes for copytxt
#define txt_inv  47          // AND (HL)
#define txt_and  47+166*256  // AND (HL) - CPL
#define txt_or   182         // OR (HL)
#define txt_xor  174         // XOR (HL)
#define txt_or_r 31+182*256  // RRA - OR (HL)
#define txt_or_l 23+182*256  // RLA - OR (HL)



//////////////////
// MISC FUNCTIONS
//////////////////

// Invert screen in text mode
extern void __LIB__ invtxt();

// Mirror screen in text mode
extern void __LIB__ mirrortxt();


///////////////////////////////
// INTERFACE FOR CALLING BASIC
///////////////////////////////

/*
extern int  __LIB__ __FASTCALL__ zx_goto(int line);
extern int  __LIB__              zx_getstr(char variable, char *value);
extern void __LIB__              zx_setstr(char variable, char *value);
extern int  __LIB__ __FASTCALL__ zx_getint(char *variable);
extern void __LIB__              zx_setint(char *variable, int value);

extern int  __LIB__ __CALLEE__   zx_getstr_callee(char variable, char *value);
extern void __LIB__ __CALLEE__   zx_setstr_callee(char variable, char *value);
extern void __LIB__ __CALLEE__   zx_setint_callee(char *variable, int value);

#define zx_getstr(a,b)           zx_getstr_callee(a,b)
#define zx_setstr(a,b)           zx_setstr_callee(a,b)
#define zx_setint(a,b)           zx_setint_callee(a,b)
*/



#endif
