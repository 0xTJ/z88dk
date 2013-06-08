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

One symbol from the assembly code - label or constant.

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/sym.c,v 1.4 2013-06-08 23:08:38 pauloscustodio Exp $
$Log: sym.c,v $
Revision 1.4  2013-06-08 23:08:38  pauloscustodio
comments

Revision 1.3  2013/06/01 01:21:02  pauloscustodio
Symbol references were being created twice

Revision 1.2  2013/05/23 22:22:23  pauloscustodio
Move symbol to sym.c, rename to Symbol

Revision 1.1  2013/05/16 23:39:48  pauloscustodio
Move struct node to sym.c, rename to Symbol
Move SymbolRef to symref.c

*/

#include "memalloc.h"   /* before any other include */

#include "listfile.h"
#include "options.h"
#include "strpool.h"
#include "sym.h"

/*-----------------------------------------------------------------------------
*   Symbol
*----------------------------------------------------------------------------*/
DEF_CLASS( Symbol )

void Symbol_init( Symbol *self ) 
{
    /* force init strpool to make sure ErrFile is destroyed before StrPool */
	strpool_init();
	
	self->references = OBJ_NEW(SymbolRefList);
	OBJ_AUTODELETE(self->references) = FALSE;
}

void Symbol_copy( Symbol *self, Symbol *other ) 
{
	self->references = SymbolRefList_clone(other->references);
}

void Symbol_fini( Symbol *self ) 
{
	OBJ_DELETE(self->references);
}

/*-----------------------------------------------------------------------------
*   create a new symbol, needs to be deleted by OBJ_DELETE()
*	adds a reference to the page were referred to
*----------------------------------------------------------------------------*/
Symbol *Symbol_create( char *name, long value, byte_t type, struct module *owner )
{
    Symbol *self 	= OBJ_NEW(Symbol);

    self->name 		= strpool_add( name );			/* name in strpool, not freed */
    self->value 	= value;
    self->type 		= type;
    self->owner 	= owner;
	
	/* add reference */
    if ( option_symtable && option_list )
		add_symbol_ref( self->references, list_get_page_nr(), FALSE );

    return self;              						/* pointer to new symbol */
}



