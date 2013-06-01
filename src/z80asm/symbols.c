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
Copyright (C) Paulo Custodio, 2011-2013
*/

/* $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/Attic/symbols.c,v 1.32 2013-06-01 01:07:46 pauloscustodio Exp $ */
/* $Log: symbols.c,v $
/* Revision 1.32  2013-06-01 01:07:46  pauloscustodio
/* Moved to sym.c and symtab.c
/*
/* Revision 1.31  2013/05/23 22:22:23  pauloscustodio
/* Move symbol to sym.c, rename to Symbol
/*
/* Revision 1.30  2013/03/04 23:37:09  pauloscustodio
/* Removed pass1 that was used to skip creating page references of created
/* symbols in pass2. Modified add_symbol_ref() to ignore pages < 1,
/* modified list_get_page_nr() to return -1 after the whole source is
/* processed.
/*
/* Revision 1.29  2013/02/26 02:11:32  pauloscustodio
/* New model_symref.c with all symbol cross-reference list handling
/*
/* Revision 1.28  2013/02/22 17:26:33  pauloscustodio
/* Decouple assembler from listfile handling
/*
/* Revision 1.27  2013/02/19 22:52:40  pauloscustodio
/* BUG_0030 : List bytes patching overwrites header
/* BUG_0031 : List file garbled with input lines with 255 chars
/* New listfile.c with all the listing related code
/*
/* Revision 1.26  2013/01/20 21:24:28  pauloscustodio
/* Updated copyright year to 2013
/*
/* Revision 1.25  2012/11/03 17:39:36  pauloscustodio
/* astyle, comments
/*
/* Revision 1.24  2012/05/26 18:51:10  pauloscustodio
/* CH_0012 : wrappers on OS calls to raise fatal error
/* CH_0013 : new errors interface to decouple calling code from errors.c
/*
/* Revision 1.23  2012/05/24 17:09:27  pauloscustodio
/* Unify copyright header
/*
/* Revision 1.22  2012/05/20 06:39:27  pauloscustodio
/* astyle
/*
/* Revision 1.21  2012/05/20 06:02:09  pauloscustodio
/* Garbage collector
/* Added automatic garbage collection on exit and simple fence mechanism
/* to detect buffer underflow and overflow, to memalloc functions.
/* No longer needed to call init_malloc().
/* No longer need to try/catch during creation of memory structures to
/* free partially created data - all not freed data is freed atexit().
/* Renamed xfree0() to xfree().
/*
/* Revision 1.20  2012/05/20 05:31:18  pauloscustodio
/* Solve signed/unsigned mismatch warnings in symboltype, libtype: changed to char.
/*
/* Revision 1.19  2012/05/18 00:28:45  pauloscustodio
/* astyle
/*
/* Revision 1.18  2012/05/18 00:23:14  pauloscustodio
/* define_symbol() and define_def_symbol() defined as void, a fatal error is always raised on error.
/*
/* Revision 1.17  2012/05/17 17:49:20  pauloscustodio
/* astyle
/*
/* Revision 1.16  2012/05/17 17:42:14  pauloscustodio
/* define_symbol() and define_def_symbol() defined as void, a fatal error is
/* always raised on error.
/*
/* Revision 1.15  2012/05/11 19:29:49  pauloscustodio
/* Format code with AStyle (http://astyle.sourceforge.net/) to unify brackets, spaces instead of tabs, indenting style, space padding in parentheses and operators. Options written in the makefile, target astyle.
/*         --mode=c
/*         --lineend=linux
/*         --indent=spaces=4
/*         --style=ansi --add-brackets
/*         --indent-switches --indent-classes
/*         --indent-preprocessor --convert-tabs
/*         --break-blocks
/*         --pad-oper --pad-paren-in --pad-header --unpad-paren
/*         --align-pointer=name
/*
/* Revision 1.14  2011/08/15 17:12:31  pauloscustodio
/* Upgrade to Exceptions4c 2.8.9 to solve memory leak.
/*
/* Revision 1.13  2011/08/05 20:02:32  pauloscustodio
/* CH_0004 : Exception mechanism to handle fatal errors
/* Replaced all ERR_NO_MEMORY/return sequences by an exception, captured at main().
/* Replaced all the memory allocation functions malloc, calloc, ... by corresponding
/* macros xmalloc, xcalloc, ... that raise an exception if the memory cannot be allocated,
/* removing all the test code after each memory allocation.
/* Replaced all functions that allocated memory structures by the new xcalloc_struct().
/* Replaced all free() by xfree0() macro which only frees if the pointer in non-null, and
/* sets the poiter to NULL afterwards, to avoid any used of the freed memory.
/* Created try/catch sequences to clean-up partially created memory structures and rethrow the
/* exception, to cleanup memory leaks.
/*
/* Revision 1.12  2011/07/18 00:48:25  pauloscustodio
/* Initialize MS Visual Studio DEBUG build to show memory leaks on exit
/*
/* Revision 1.11  2011/07/14 01:32:08  pauloscustodio
/*     - Unified "Integer out of range" and "Out of range" errors; they are the same error.
/*     - Unified ReportIOError as ReportError(ERR_FILE_OPEN)
/*     CH_0003 : Error messages should be more informative
/*         - Added printf-args to error messages, added "Error:" prefix.
/*     BUG_0006 : sub-expressions with unbalanced parentheses type accepted, e.g. (2+3] or [2+3)
/*         - Raise ERR_UNBALANCED_PAREN instead
/*
/* Revision 1.10  2011/07/12 22:47:59  pauloscustodio
/* - Moved all error variables and error reporting code to a separate module errors.c,
/*   replaced all extern declarations of these variables by include errors.h,
/*   created symbolic constants for error codes.
/* - Added test scripts for error messages.
/*
/* Revision 1.9  2011/07/11 16:07:16  pauloscustodio
/* Moved all option variables and option handling code to a separate module options.c,
/* replaced all extern declarations of these variables by include options.h.
/*
/* Revision 1.8  2011/07/09 18:25:35  pauloscustodio
/* Log keyword in checkin comment was expanded inside Log expansion... recursive
/* Added Z80asm banner to all source files
/*
/* Revision 1.7  2011/07/09 17:36:09  pauloscustodio
/* Copied cvs log into Log history
/*
/* Revision 1.6  2011/07/09 01:46:00  pauloscustodio
/* Added Log keyword
/*
/* Revision 1.5  2011/07/09 01:30:14  pauloscustodio
/* added casts to clean up warnings
/*
/* Revision 1.4  2011/06/08 22:03:35  dom
/* Vile hack
/*
/* Revision 1.3  2010/04/16 17:34:37  dom
/* Make line number an int - 32768 lines isn't big enough...
/*
/* Revision 1.2  2007/07/13 09:03:10  dom
/* allow multiple LIB/XDEF/XREF as necessary
/*
/* Revision 1.1  2000/07/04 15:33:29  dom
/* branches:  1.1.1;
/* Initial revision
/*
/* Revision 1.1.1.1  2000/07/04 15:33:29  dom
/* First import of z88dk into the sourceforge system <gulp>
/*
/* */

/* $History: SYMBOLS.C $ */
/*  */
/* *****************  Version 9  ***************** */
/* User: Gbs          Date: 6-06-99    Time: 12:13 */
/* Updated in $/Z80asm */
/* Added Ascii Art "Z80asm" at top of source file. */
/*  */
/* *****************  Version 7  ***************** */
/* User: Gbs          Date: 6-06-99    Time: 11:31 */
/* Updated in $/Z80asm */
/* "config.h" included before "symbol.h" */
/*  */
/* *****************  Version 6  ***************** */
/* User: Gbs          Date: 2-05-99    Time: 18:09 */
/* Updated in $/Z80asm */
/* declare_global_symbol() and declare_extern_symbol() functions improved to handle scope */
/* resolution of identifers even after the actual identifiers have been */
/* created (typically re-declaring a local symbol to a global symbol). */
/*  */
/* *****************  Version 4  ***************** */
/* User: Gbs          Date: 17-04-99   Time: 0:30 */
/* Updated in $/Z80asm */
/* New GNU programming style C format. Improved ANSI C coding style */
/* eliminating previous compiler warnings. New -o option. Asm sources file */
/* now parsed even though any line feed standards (CR,LF or CRLF) are */
/* used. */
/*  */
/* *****************  Version 2  ***************** */
/* User: Gbs          Date: 20-06-98   Time: 15:10 */
/* Updated in $/Z80asm */
/* SourceSafe Version History Comment Block added. */

#include "memalloc.h"   /* before any other include */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"
#include "errors.h"
#include "listfile.h"
#include "model.h"
#include "options.h"
#include "strpool.h"
#include "sym.h"
#include "symbol.h"




