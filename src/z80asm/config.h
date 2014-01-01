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

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/Attic/config.h,v 1.30 2014-01-01 21:23:48 pauloscustodio Exp $
*/

#pragma once

#include "xmalloc.h"   /* before any other include */

/* Pick up the default installation path */
#ifndef WIN32
#include "../config.h"
#endif

/* MSDOS definitions: */
#ifdef MSDOS
#define OS_ID "MSDOS"
#define MSDOS 1
#define DEFLIBDIR "c:\\z88dk\\lib\\"
#endif

/* UNIX definitions: */
#ifdef UNIX
#define OS_ID "UNIX"
#ifdef PREFIX
#define DEFLIBDIR PREFIX "/lib/"
#else
#define DEFLIBDIR "/usr/local/lib/z88dk/lib/"
#endif
#endif

/* QDOS definitions:  */
#ifdef QDOS
#define OS_ID "QDOS"
#define QDOS 1
#define DEFLIBDIR ""
#endif

/* AMIGA definitions: */
#ifdef AMIGA
#define OS_ID "AMIGA"
#define AMIGA 1
#define DEFLIBDIR "zcc:lib/"
#endif

/* WIN32 definitions: */
#ifdef WIN32
#define OS_ID "WIN32"
#define WIN32 1
#define DEFLIBDIR "c:\\z88dk\\lib\\"
#endif

#ifdef MSDOS
#define MAXCODESIZE 65532       /* MSDOS 64K heap boundary */
#else
#define MAXCODESIZE 65536
#endif

/* snprintf is _snprintf in _MSC_VER */
#ifdef _MSC_VER
#define snprintf _snprintf
#define vsnprintf _vsnprintf
#endif

/* io.h required to use low-level file io in MSC */
#ifdef _MSC_VER
#include <io.h>
#endif


/*
* $Log: config.h,v $
* Revision 1.30  2014-01-01 21:23:48  pauloscustodio
* Move generic file utility functions to lib/fileutil.c
*
* Revision 1.29  2013/12/15 19:01:07  pauloscustodio
* Move platform specific defines from types.h to config.h.
* Remove dependency of types.h from glib.h.
* Use NUM_ELEMS() instead of glib G_N_ELEMENTS().
*
* Revision 1.28  2013/12/15 13:18:33  pauloscustodio
* Move memory allocation routines to lib/xmalloc, instead of glib,
* introduce memory leak report on exit and memory fence check.
*
* Revision 1.27  2013/09/01 11:59:05  pauloscustodio
* Force xmalloc to be the first include, to be able to use MSVC memory debug tools
*
* Revision 1.26  2013/08/30 21:50:43  pauloscustodio
* By suggestion of Philipp Klaus Krause: rename LEGACY to __LEGACY_Z80ASM_SYNTAX,
* as an identifier reserved by the C standard for implementation-defined behaviour
* starting with two underscores.
*
* Revision 1.25  2013/08/30 01:06:08  pauloscustodio
* New C-like expressions, defined when __LEGACY_Z80ASM_SYNTAX is not defined. Keeps old
* behaviour under -D__LEGACY_Z80ASM_SYNTAX (defined in legacy.h)
*
* BACKWARDS INCOMPATIBLE CHANGE, turned OFF by default (-D__LEGACY_Z80ASM_SYNTAX)
* - Expressions now use more standard C-like operators
* - Object and library files changed signature to
*   "Z80RMF02", "Z80LMF02", to avoid usage of old
*   object files with expressions inside in the old format
*
* Detail:
* - String concatenation in DEFM: changed from '&' to ',';  '&' will be AND
* - Power:                        changed from '^' to '**'; '^' will be XOR
* - XOR:                          changed from ':' to '^';
* - AND:                          changed from '~' to '&';  '~' will be NOT
* - NOT:                          '~' added as binary not
*
* Revision 1.24  2013/04/21 22:57:53  pauloscustodio
* ENDIAN not used and logic to define it was causing Deprecated warnings - removed
*
* Revision 1.23  2013/03/02 23:48:55  pauloscustodio
* New __LEGACY_Z80ASM_SYNTAX define to mark code that should be removed but is kept
* to keep backwards compatibility
*
* Revision 1.22  2013/02/19 22:52:40  pauloscustodio
* BUG_0030 : List bytes patching overwrites header
* BUG_0031 : List file garbled with input lines with 255 chars
* New listfile.c with all the listing related code
*
* Revision 1.21  2013/02/16 09:43:55  pauloscustodio
* BUG_0029 : Incorrect alignment in list file with more than 4 bytes opcode
* Need to define the EOL_SIZE per platform
*
* Revision 1.20  2013/01/20 21:24:28  pauloscustodio
* Updated copyright year to 2013
*
* Revision 1.19  2012/05/24 17:09:27  pauloscustodio
* Unify copyright header
*
* Revision 1.18  2012/05/11 19:29:49  pauloscustodio
* Format code with AStyle (http://astyle.sourceforge.net/) to unify brackets, spaces instead of tabs, indenting style, space padding in parentheses and operators. Options written in the makefile, target astyle.
*         --mode=c
*         --lineend=linux
*         --indent=spaces=4
*         --style=ansi --add-brackets
*         --indent-switches --indent-classes
*         --indent-preprocessor --convert-tabs
*         --break-blocks
*         --pad-oper --pad-paren-in --pad-header --unpad-paren
*         --align-pointer=name
*
* Revision 1.17  2011/08/21 20:19:47  pauloscustodio
* Define FILEEXT_SEPARATOR as ".", or "_" on QDOS
*
* Revision 1.16  2011/07/09 18:25:35  pauloscustodio
* Log keyword in checkin comment was expanded inside Log expansion... recursive
* Added Z80asm banner to all source files
*
* Revision 1.15  2011/07/09 17:36:09  pauloscustodio
* Copied cvs log into Log history
*
* Revision 1.14  2011/07/09 01:46:00  pauloscustodio
* Added Log keyword
*
* Revision 1.13  2011/07/09 01:38:02  pauloscustodio
* *** empty log message ***
*
* Revision 1.12  2011/07/09 01:16:47  pauloscustodio
* added RCS keywords
*
* Revision 1.11  2007/06/24 16:41:41  dom
* Don't use config.h for win32
*
* Revision 1.10  2002/12/09 18:49:46  dom
* simplified the makefiles somewhat, allow cross building for Amiga on linux
*
* Revision 1.9  2002/12/01 15:47:17  dom
* local install on unix resolved
*
* Revision 1.8  2002/12/01 15:11:51  dom
* OS-X compile trickery
*
* Revision 1.7  2002/11/05 11:45:56  dom
* powerpc endian detection
*
* fix for 64 bit machines, sizeof(long) != 4
*
* Revision 1.6  2002/10/03 21:17:17  dom
* change the amiga default dir to zcc: to match with zcc
*
* Revision 1.5  2002/07/15 16:30:03  dom
* changed default path
*
* Revision 1.4  2001/04/20 10:44:26  dom
* *** empty log message ***
*
* Revision 1.3  2001/03/12 13:37:44  dom
* *** empty log message ***
*
* Revision 1.2  2001/01/23 10:00:09  dom
* Changes by x1cygnus:
*
* just added a harcoded macro Invoke, similar to callpkg except that the
* instruction 'Invoke' resolves to a call by default (ti83) and to a RST if
* the parameter -plus is specified on the command line.
*
* Changes by dom:
* Added in a rudimentary default directory set up (Defined at compile time)
* a bit kludgy and not very nice!
*
* Revision 1.1  2000/07/04 15:33:29  dom
* branches:  1.1.1;
* Initial revision
*
* Revision 1.1.1.1  2000/07/04 15:33:29  dom
* First import of z88dk into the sourceforge system <gulp>
*
*/
