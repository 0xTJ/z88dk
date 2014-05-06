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

Copyright (C) Paulo Custodio, 2011-2014

Assembled module, i.e. result of assembling a .asm file

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/module.h,v 1.11 2014-05-06 22:17:38 pauloscustodio Exp $
*/

#pragma once

#include "xmalloc.h"   /* before any other include */

#include "class.h"
#include "classlist.h"
#include "expr.h"
#include "strutil.h"
#include "symtab.h"
#include "types.h"

/*-----------------------------------------------------------------------------
*   Code section, one assembly instruction
*----------------------------------------------------------------------------*/
CLASS( CodeSection )
	char	*filename;				/* input file name, kept in strpool */
	int		 line_nr;				/* input line number */
	Str		*bytes;					/* bytes of this opcode */
END_CLASS;

/*-----------------------------------------------------------------------------
*   Assembly module
*----------------------------------------------------------------------------*/
CLASS( Module )
	char		*modname;			/* module name, kept in strpool*/
	char		*filename;			/* source file name, kept in strpool */
    UINT		 start_offset;		/* this module's start offset from start of code buffer */
    UINT		 origin;			/* ORG address of module, NO_ORIGIN (=0xFFFF) if not defuined */
	SymbolHash	*local_symtab;		/* module local symbols */
    ExprList	*exprs;				/* list of module expressions */
END_CLASS;

#define NO_ORIGIN 0xFFFF

CLASS_LIST( Module );

/*
* $Log: module.h,v $
* Revision 1.11  2014-05-06 22:17:38  pauloscustodio
* Made types BYTE, UINT and ULONG all-caps to avoid conflicts with /usr/include/i386-linux-gnu/sys/types.h
*
* Revision 1.10  2014/05/02 23:35:19  pauloscustodio
* Rename startoffset, add constant for NO_ORIGIN
*
* Revision 1.9  2014/05/02 21:34:58  pauloscustodio
* byte_t, uint_t and ulong_t renamed to BYTE, UINT and ULONG
*
* Revision 1.8  2014/05/02 20:24:38  pauloscustodio
* New class Module to replace struct module and struct modules
*
* Revision 1.7  2014/04/22 23:34:26  pauloscustodio
* whitespace
*
* Revision 1.6  2014/04/15 20:06:43  pauloscustodio
* Solve warning: no newline at end of file
*
* Revision 1.5  2014/01/11 01:29:40  pauloscustodio
* Extend copyright to 2014.
* Move CVS log to bottom of file.
*
* Revision 1.4  2014/01/11 00:10:39  pauloscustodio
* Astyle - format C code
* Add -Wall option to CFLAGS, remove all warnings
* 
* Revision 1.3  2013/12/30 02:05:32  pauloscustodio
* Merge dynstr.c and safestr.c into lib/strutil.c; the new Str type
* handles both dynamically allocated strings and fixed-size strings.
* Replaced g_strchomp by chomp by; g_ascii_tolower by tolower;
* g_ascii_toupper by toupper; g_ascii_strcasecmp by stricompare.
* 
* Revision 1.2  2013/12/15 13:18:34  pauloscustodio
* Move memory allocation routines to lib/xmalloc, instead of glib,
* introduce memory leak report on exit and memory fence check.
* 
* Revision 1.1  2013/06/08 22:57:13  pauloscustodio
* Embryo of Module structure
* 
*/
