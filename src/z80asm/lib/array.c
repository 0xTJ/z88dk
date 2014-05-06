/*
Template array that grows on request. Items may move in memory on reallocation.
Uses strutil.h for implementation.

Copyright (C) Paulo Custodio, 2011-2014

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/lib/array.c,v 1.5 2014-05-06 22:17:38 pauloscustodio Exp $
*/

#include "xmalloc.h"		/* before any other include */

#include "array.h"

DEF_ARRAY( BYTE );
DEF_ARRAY( int );
DEF_ARRAY( long );

/*
* $Log: array.c,v $
* Revision 1.5  2014-05-06 22:17:38  pauloscustodio
* Made types BYTE, UINT and ULONG all-caps to avoid conflicts with /usr/include/i386-linux-gnu/sys/types.h
*
* Revision 1.4  2014/05/02 21:34:58  pauloscustodio
* byte_t, uint_t and ulong_t renamed to BYTE, UINT and ULONG
*
* Revision 1.3  2014/05/02 21:13:54  pauloscustodio
* Add byte array to default types
*
* Revision 1.2  2014/04/15 20:06:44  pauloscustodio
* Solve warning: no newline at end of file
*
* Revision 1.1  2014/04/12 15:18:05  pauloscustodio
* Add intArray and longArray to array.c
*
*
*/
