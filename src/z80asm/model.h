/*
     ZZZZZZZZZZZZZZZZZZZZ    8888888888888       00000000000
   ZZZZZZZZZZZZZZZZZZZZ    88888888888888888    0000000000000
                ZZZZZ      888           888  0000         0000
              ZZZZZ        88888888888888888  0000         0000
            ZZZZZ            8888888888888    0000         0000       AAAAAA         SSSSSSSSSSS   MMMM       MMMM
          ZZZZZ            88888888888888888  0000         0000      AAAAAAAA      SSSS            MMMMMM   MMMMMM
        ZZZZZ              8888         8888  0000         0000     AAAA  AAAA     SSSSSSSSSSS     MMMMMMMMMMMMMMM
      ZZZZZ                8888         8888  0000         0000    AAAAAAAAAAAA      SSSSSSSSSSS   MMMM MMMMM MMMM
    ZZZZZZZZZZZZZZZZZZZZZ  88888888888888888    0000000000000     AAAA      AAAA           SSSSS   MMMM       MMMM
  ZZZZZZZZZZZZZZZZZZZZZ      8888888888888       00000000000     AAAA        AAAA  SSSSSSSSSSS     MMMM       MMMM

Copyright (C) Gunther Strube, InterLogic 1993-99
Copyright (C) Paulo Custodio, 2011-2014

Global data model.

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/model.h,v 1.10 2014-04-13 11:54:01 pauloscustodio Exp $
*/

#pragma once

#include "xmalloc.h"   /* before any other include */

#include "list.h"
#include "types.h"

/*-----------------------------------------------------------------------------
*   Symbol type bitmasks - bits 3 to 6 same as Expression type bitmasks
*----------------------------------------------------------------------------*/
#define SYM_DEFINED		1       	/* 00000001 symbol is defined */
#define SYM_TOUCHED		2       	/* 00000010 symbol was used, e.g. returned by 
									   a symbol table search */
#define SYM_DEFINE		4       	/* 00000100 DEFINE, -D, ASMPC, OS_ID, LIB, XLIB, 
									   global library; not output in sym list */

#define SYM_TYPE		120     	/* 01111000 */

#define SYM_ADDR		8       	/* 00001000 symbol is address */
#define SYM_LOCAL		16      	/* 00010000 symbol is local */
#define SYM_PUBLIC		32      	/* 00100000 symbol is PUBLIC */
#define SYM_EXTERN		64      	/* 01000000 symbol is EXTERN */

#define SYM_NOTDEFINED  0

/*-----------------------------------------------------------------------------
*   Expression expr_type bitmasks - bits 3 to 6 same as Symbol type bitmasks
*----------------------------------------------------------------------------*/
#define RANGE           7			/* 00000111 Range types are 0 - 4 */

#define RANGE_JROFFSET  0			/* relative jump argument */
#define RANGE_8UNSIGN   1			/* 8-bit immediate */
#define RANGE_8SIGN     2			/* (ix+d) */
#define RANGE_16CONST   3			/* 16-bit immediate */
#define RANGE_32SIGN    4			/* 32-bit immediate */

/* return 1, 2 or 4 for a expr_type */
#define RANGE_SIZE(x)	(((x) & RANGE) == RANGE_32SIGN  ? 4 : \
						 ((x) & RANGE) == RANGE_16CONST ? 2 : \
														  1 )

#define EXPR_ADDR		SYM_ADDR	/* 00001000 Expression contains reloc. address label */
#define EXPR_LOCAL		SYM_LOCAL  	/* 00010000 Expression contains local symbol */
#define EXPR_PUBLIC		SYM_PUBLIC 	/* 00100000 Expression contains global symbol */
#define EXPR_EXTERN		SYM_EXTERN	/* 01000000 Expression contains extern symbol */

#define NOT_EVALUABLE	128     	/* 10000000 Expression is not evaluable */

/*-----------------------------------------------------------------------------
*   Initialize data structures
*----------------------------------------------------------------------------*/
extern void model_init(void);

/*-----------------------------------------------------------------------------
*   Singleton interfaces
*----------------------------------------------------------------------------*/

/* interface to SrcFile singleton */
extern void  src_open( char *filename, List *dir_list );
extern char *src_getline( void );
extern void  src_ungetline( char *lines );
extern char *src_filename( void );
extern int   src_line_nr( void );	

extern void  src_push( void );
extern BOOL  src_pop( void );

/*
* $Log: model.h,v $
* Revision 1.10  2014-04-13 11:54:01  pauloscustodio
* CH_0025: PUBLIC and EXTERN instead of LIB, XREF, XDEF, XLIB
* Use new keywords PUBLIC and EXTERN, make the old ones synonyms.
* Remove 'X' scope for symbols in object files used before for XLIB -
* all PUBLIC symbols have scope 'G'.
* Remove SDCC hack on object files trating XLIB and XDEF the same.
* Created a warning to say XDEF et.al. are deprecated, but for the
* momment keep it commented.
*
* Revision 1.9  2014/03/15 14:35:51  pauloscustodio
* Add interface to lookup current file name and line number
*
* Revision 1.8  2014/03/03 13:43:50  pauloscustodio
* Renamed symbol and expression type attributes
*
* Revision 1.7  2014/03/03 13:27:07  pauloscustodio
* Rename symbol type constants
*
* Revision 1.6  2014/02/17 23:10:39  pauloscustodio
* Define EXPR_ADDR as SYM_ADDR, ...
*
* Revision 1.5  2014/02/17 22:48:28  pauloscustodio
* Symbol types and Expression types need to be in sync
* Move from sym.h and symbol.h to model.h
*
* Revision 1.4  2014/02/08 18:30:49  pauloscustodio
* lib/srcfile.c to read source files and handle recursive includes,
* used to read @lists, removed opts.files;
* model.c to hold global data model
*
*
*/
