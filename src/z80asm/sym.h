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

One symbol from the assembly code - label or constant.

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/sym.h,v 1.11 2014-03-03 14:09:20 pauloscustodio Exp $
*/

#pragma once

#include "xmalloc.h"   /* before any other include */

#include "class.h"
#include "symref.h"
#include "types.h"

/*-----------------------------------------------------------------------------
*   Symbol
*----------------------------------------------------------------------------*/
CLASS( Symbol )
	char		   *name;				/* name, kept in strpool */
	long			value;				/* computed value of symbol */
	byte_t			sym_type;			/* type of symbol */
	SymbolRefList  *references;			/* pointer to all found references of symbol */
	struct module  *owner;				/* weak pointer to module which owns symbol */
END_CLASS;

/*-----------------------------------------------------------------------------
*   Special symbols
*----------------------------------------------------------------------------*/
#define ASMPC_KW	"ASMPC"
#define ASMSIZE_KW	"ASMSIZE"
#define ASMTAIL_KW	"ASMTAIL"

/*-----------------------------------------------------------------------------
*   Symbol API
*----------------------------------------------------------------------------*/

/* create a new symbol, needs to be deleted by OBJ_DELETE()
   adds a reference to the page were referred to */
extern Symbol *Symbol_create( char *name, long value, byte_t type, struct module *owner );

/* return full symbol name NAME@MODULE stored in strpool */
extern char *Symbol_fullname( Symbol *sym );


/*
* $Log: sym.h,v $
* Revision 1.11  2014-03-03 14:09:20  pauloscustodio
* Renamed symbol type attribute
*
* Revision 1.10  2014/02/17 22:48:28  pauloscustodio
* Symbol types and Expression types need to be in sync
* Move from sym.h and symbol.h to model.h
*
* Revision 1.9  2014/01/11 01:29:40  pauloscustodio
* Extend copyright to 2014.
* Move CVS log to bottom of file.
*
* Revision 1.8  2014/01/11 00:10:39  pauloscustodio
* Astyle - format C code
* Add -Wall option to CFLAGS, remove all warnings
* 
* Revision 1.7  2013/12/15 13:18:34  pauloscustodio
* Move memory allocation routines to lib/xmalloc, instead of glib,
* introduce memory leak report on exit and memory fence check.
* 
* Revision 1.6  2013/06/16 16:49:20  pauloscustodio
* Symbol_fullname() to return full symbol name NAME@MODULE
* 
* Revision 1.5  2013/06/08 23:37:32  pauloscustodio
* Replace define_def_symbol() by one function for each symbol table type: define_static_def_sym(),
*  define_global_def_sym(), define_local_def_sym(), encapsulating the symbol table used.
* Define keywords for special symbols ASMPC, ASMSIZE, ASMTAIL
* 
* Revision 1.4  2013/06/08 23:08:38  pauloscustodio
* comments
* 
* Revision 1.3  2013/06/01 01:24:22  pauloscustodio
* CH_0022 : Replace avltree by hash table for symbol table
* 
* Revision 1.2  2013/05/23 22:22:23  pauloscustodio
* Move symbol to sym.c, rename to Symbol
* 
* Revision 1.1  2013/05/16 23:39:48  pauloscustodio
* Move struct node to sym.c, rename to Symbol
* Move SymbolRef to symref.c
* 
*/
