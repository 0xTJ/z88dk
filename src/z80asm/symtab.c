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

Symbol table
Replaced avltree from original assembler by hash table because:
a) code simplicity
b) performance - avltree 50% slower when loading the symbols from the ZX 48 ROM assembly,
   see t\developer\benchmark_symtab.t

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/symtab.c,v 1.24 2014-04-05 22:07:32 pauloscustodio Exp $
*/

#include "xmalloc.h"   /* before any other include */

#include "errors.h"
#include "listfile.h"
#include "options.h"
#include "symbol.h"
#include "symtab.h"
#include "z80asm.h"

#include <assert.h>

/*-----------------------------------------------------------------------------
*   Global Symbol Tables
*----------------------------------------------------------------------------*/
SymbolHash *global_symtab = NULL;
SymbolHash *static_symtab = NULL;

/*-----------------------------------------------------------------------------
*   Symbol Table
*----------------------------------------------------------------------------*/
DEF_CLASS_HASH( Symbol, FALSE );			/* defines SymbolHash */

/*-----------------------------------------------------------------------------
*   join two symbol tables, adding all symbols from source to the target
*   symbol table; if symbols with the same name exist, the one from source
*   overwrites the one at target
*----------------------------------------------------------------------------*/
void SymbolHash_cat( SymbolHash **ptarget, SymbolHash *source )
{
    SymbolHashElem *iter;
    Symbol         *sym;

    for ( iter = SymbolHash_first( source ); iter; iter = SymbolHash_next( iter ) )
    {
        sym = ( Symbol * )iter->value;
        SymbolHash_set( ptarget, sym->name, Symbol_clone( sym ) );
    }
}

/*-----------------------------------------------------------------------------
*   return pointer to found symbol in a symbol tree, otherwise NULL if not found
*	marks looked-up symbol as SYM_TOUCHED
*----------------------------------------------------------------------------*/
Symbol *find_symbol( char *name, SymbolHash *symtab )
{
    Symbol *sym;

    sym = SymbolHash_get( symtab, name );

    /* Bodge for handling underscores (sdcc hack) */
    if ( sym == NULL && opts.sdcc && name[0] == '_' )
        sym = SymbolHash_get( symtab, name + 1 );

    if ( sym != NULL )
        sym->sym_type |= SYM_TOUCHED;

    return sym;
}

Symbol *find_local_symbol( char *name )
{
    return find_symbol( name, CURRENTMODULE->local_symtab );
}

Symbol *find_global_symbol( char *name )
{
    return find_symbol( name, global_symtab );
}

/*-----------------------------------------------------------------------------
*   create a symbol in the given table, error if already defined
*----------------------------------------------------------------------------*/
Symbol *_define_sym( char *name, long value, byte_t type,
                     struct module *owner, SymbolHash **psymtab )
{
    Symbol *sym;

    sym = find_symbol( name, *psymtab );

    if ( sym == NULL )						/* new symbol */
    {
        sym = Symbol_create( name, value, type | SYM_DEFINED, owner );
        SymbolHash_set( psymtab, name, sym );
    }
    else if ( !( sym->sym_type & SYM_DEFINED ) )	/* already declared but not defined */
    {
        sym->value = value;
        sym->sym_type |= type | SYM_DEFINED;
        sym->owner = owner;
    }
    else									/* already defined */
    {
        if ( sym->owner && sym->owner != owner && sym->owner->mname )
            error_symbol_redefined_module( name, sym->owner->mname );
        else
            error_symbol_redefined( name );
    }

    /* add symbol references if listing */
    add_symbol_ref( sym->references, list_get_page_nr(), TRUE );

    return sym;
}

/*-----------------------------------------------------------------------------
*   refer to a symbol in an expression
*   search for symbol in either local tree or global table,
*   create undefined symbol if not found, return symbol
*----------------------------------------------------------------------------*/
Symbol *get_used_symbol( char *name )
{
    Symbol     *sym;

    sym = find_symbol( name, CURRENTMODULE->local_symtab );	/* search in local tab */

    if ( sym == NULL )
    {
        /* not local */
        sym = find_symbol( name, global_symtab );			/* search in global tab */

        if ( sym == NULL )
        {
            sym = Symbol_create( name, 0, SYM_NOTDEFINED, CURRENTMODULE );
            SymbolHash_set( & CURRENTMODULE->local_symtab, name, sym );
        }
    }

    /* add page references */
    add_symbol_ref( sym->references, list_get_page_nr(), FALSE );

    return sym;
}

/*-----------------------------------------------------------------------------
*   define a static symbol (from -D command line)
*----------------------------------------------------------------------------*/
Symbol *define_static_def_sym( char *name, long value )
{
    return _define_sym( name, value, SYM_DEFINE, NULL, &static_symtab );
}

/*-----------------------------------------------------------------------------
*   define a global symbol (e.g. ASMPC)
*----------------------------------------------------------------------------*/
Symbol *define_global_def_sym( char *name, long value )
{
    return _define_sym( name, value, SYM_DEFINE, NULL, &global_symtab );
}

/*-----------------------------------------------------------------------------
*   define a local DEF symbol (e.g. DEFINE)
*----------------------------------------------------------------------------*/
Symbol *define_local_def_sym( char *name, long value )
{
    return _define_sym( name, value, SYM_DEFINE, CURRENTMODULE, & CURRENTMODULE->local_symtab );
}

/*-----------------------------------------------------------------------------
*   define a new symbol in the local, global or global lib tabs
*----------------------------------------------------------------------------*/
Symbol *define_local_sym( char *name, long value, byte_t type )
{
    return _define_sym( name, value, type | SYM_LOCAL, CURRENTMODULE, & CURRENTMODULE->local_symtab );
}

Symbol *define_global_sym( char *name, long value, byte_t type )
{
    return _define_sym( name, value, type | SYM_GLOBAL, CURRENTMODULE, &global_symtab );
}

Symbol *define_library_sym( char *name, long value, byte_t type )
{
    return _define_sym( name, value, type | SYM_GLOBAL | SYM_DEFINE, CURRENTMODULE, &global_symtab );
}

/*-----------------------------------------------------------------------------
*   copy all SYM_ADDR symbols to target, replacing NAME by NAME@MODULE
*----------------------------------------------------------------------------*/
static void copy_full_sym_names( SymbolHash **ptarget, SymbolHash *source,
                                 byte_t type_mask, byte_t type_value )
{
    SymbolHashElem *iter;
    Symbol         *sym;

    for ( iter = SymbolHash_first( source ); iter; iter = SymbolHash_next( iter ) )
    {
        sym = ( Symbol * )iter->value;

        if ( ( sym->sym_type & type_mask ) == ( type_value & type_mask ) )
            SymbolHash_set( ptarget, Symbol_fullname( sym ), Symbol_clone( sym ) );
    }
}

/*-----------------------------------------------------------------------------
*   get the list of symbols that match the given type mask,
*   mapped NAME@MODULE -> Symbol, needs to be deleted by OBJ_DELETE()
*   Selects symbols where (type & type_mask) == type_value
*----------------------------------------------------------------------------*/
SymbolHash *get_all_syms( byte_t type_mask, byte_t type_value )
{
    SymbolHash *all_syms = OBJ_NEW( SymbolHash );
    struct module *cmodule;

    for ( cmodule = modulehdr->first; cmodule != NULL; cmodule = cmodule->nextmodule )
    {
        copy_full_sym_names( &all_syms, cmodule->local_symtab, type_mask, type_value );
    }

    copy_full_sym_names( &all_syms, global_symtab, type_mask, type_value );

    return all_syms;
}

/*-----------------------------------------------------------------------------
*   copy the static symbols to CURRENTMODULE->local_symtab
*----------------------------------------------------------------------------*/
void copy_static_syms( void )
{
    SymbolHashElem *iter;
    Symbol         *sym;

    for ( iter = SymbolHash_first( static_symtab ); iter; iter = SymbolHash_next( iter ) )
    {
        sym = ( Symbol * )iter->value;
        _define_sym( sym->name, sym->value, sym->sym_type, CURRENTMODULE, & CURRENTMODULE->local_symtab );
    }
}

/*-----------------------------------------------------------------------------
*   delete the static and global symbols
*----------------------------------------------------------------------------*/
void remove_all_local_syms( void )
{
    SymbolHash_remove_all( CURRENTMODULE->local_symtab );
}
void remove_all_static_syms( void )
{
    SymbolHash_remove_all( static_symtab );
}
void remove_all_global_syms( void )
{
    SymbolHash_remove_all( global_symtab );
}

/*-----------------------------------------------------------------------------
*   create a local symbol:
*   a) if not yet in the local table (CURRENTMODULE), create it
*   b) if in the local table but not yet defined, create now (was a reference)
*   c) else error REDEFINED
*----------------------------------------------------------------------------*/
static void define_local_symbol( char *name, long value, byte_t type )
{
    Symbol *sym;

    sym = find_symbol( name, CURRENTMODULE->local_symtab );

    if ( sym == NULL )					/* Symbol not declared as local */
    {
        /* create symbol */
        sym = Symbol_create( name, value, type | SYM_LOCAL | SYM_DEFINED, CURRENTMODULE );
        SymbolHash_set( & CURRENTMODULE->local_symtab, name, sym );

        /* First element in list is definition of symbol */
        add_symbol_ref( sym->references, list_get_page_nr(), TRUE );
    }
    else if ( sym->sym_type & SYM_DEFINED )	/* local symbol already defined */
    {
        error_symbol_redefined( name );
    }
    else								/* symbol declared local, but not yet defined */
    {
        sym->value = value;
        sym->sym_type |= type | SYM_LOCAL | SYM_DEFINED;	/* local symbol type set to address label or constant */
        sym->owner = CURRENTMODULE;					/* owner of symbol is always creator */

        /* First element in list is definition of symbol */
        add_symbol_ref( sym->references, list_get_page_nr(), TRUE );
    }
}

/*-----------------------------------------------------------------------------
*   create a symbol in the local or global tree:
*   a) if not already global/extern, create in the local (CURRENTMODULE) symbol table
*   b) if declared global/extern and not defined, define now
*   c) if declared global/extern and defined -> error REDEFINED
*   d) if in global table and not global/extern -> define a new local symbol
*----------------------------------------------------------------------------*/
void define_symbol( char *name, long value, byte_t type )
{
    Symbol     *sym;

    sym = find_symbol( name, global_symtab );

    if ( sym == NULL )					/* Symbol not declared as global/extern */
    {
        define_local_symbol( name, value, type );
    }
    else if ( sym->sym_type & SYM_GLOBAL )		/* symbol declared global */
    {
        if ( sym->sym_type & SYM_DEFINED )	/* global symbol already defined */
        {
            error_symbol_redefined( name );
        }
        else							/* symbol declared global, but not yet defined */
        {
            sym->value = value;
            sym->sym_type |= type | SYM_DEFINED;	/* defined, and typed as address label or constant */
            sym->owner = CURRENTMODULE;		/* owner of symbol is always creator */

            /* First element in list is definition of symbol */
            add_symbol_ref( sym->references, list_get_page_nr(), TRUE );
        }
    }
    else								/* Extern declaration of symbol, now define local symbol. */
    {
        /* the extern symbol is now no longer accessible */
        define_local_symbol( name, value, type );
    }
}

/*-----------------------------------------------------------------------------
*   declare a global symbol; type = 0 for XDEF, SYM_DEFINE for XLIB
*----------------------------------------------------------------------------*/
static void declare_global_symbol( char *name, byte_t type )
{
    Symbol     *sym, *cloned_sym;

    sym = find_symbol( name, CURRENTMODULE->local_symtab );	/* search in local tab */

    if ( sym == NULL )
    {
        /* not local */
        sym = find_symbol( name, global_symtab );			/* search in global tab */

        if ( sym == NULL )
        {
            /* not local, not global -> declare symbol as global */
            sym = Symbol_create( name, 0, SYM_GLOBAL | type, CURRENTMODULE );
            SymbolHash_set( &global_symtab, name, sym );
        }
        else
        {
            /* not local, global */
            if ( sym->owner != CURRENTMODULE )
            {
                /* this symbol is declared in another module */
                if ( sym->sym_type & SYM_EXTERN )
                {
                    sym->owner = CURRENTMODULE;		/* symbol now owned by this module */
                    sym->sym_type &= ~ SYM_EXTERN;		/* re-declare symbol as global if symbol was */
                    sym->sym_type |= SYM_GLOBAL | type;	/* declared extern in another module */
                }
                else								/* cannot declare two identical global's */
                {
                    /* Already declared global - no possible path, as global tab is 
					   deleted between modules assembly */
                    assert(0);
                }
            }
            else if ( ( sym->sym_type & ( SYM_GLOBAL | type ) ) != ( SYM_GLOBAL | type ) )
            {
                /* re-declaration not allowed */
                error_symbol_redecl( name );
            }
        }
    }
    else
    {
        /* local */
        cloned_sym = find_symbol( name, global_symtab );

        if ( cloned_sym == NULL )
        {
            /* local, not global */
            /* If no global symbol of identical name has been created, then re-declare local symbol as global symbol */
            sym->sym_type &= ~ SYM_LOCAL;
            sym->sym_type |= SYM_GLOBAL;
            cloned_sym = Symbol_create( sym->name, sym->value, sym->sym_type, CURRENTMODULE );
            SymbolHash_set( &global_symtab, name, cloned_sym );

            /* original local symbol cloned as global symbol, now delete old local ... */
            SymbolHash_remove( CURRENTMODULE->local_symtab, name );
        }
        else
        {
            /* local, global - no possible path, as if local & not global, 
			   symbol is moved local -> global */
            assert(0);
        }
    }
}

/* declare a global symbol XDEF or XLIB */
void declare_global_obj_symbol( char *name )
{
    declare_global_symbol( name, 0 );
}
void declare_global_lib_symbol( char *name )
{
    declare_global_symbol( name, SYM_DEFINE );
}

/*-----------------------------------------------------------------------------
*   declare an external symbol; type = 0 for XREF, SYM_DEFINE for LIB
*----------------------------------------------------------------------------*/
static void declare_extern_symbol( char *name, byte_t type )
{
    Symbol     *sym, *ext_sym;

    sym = find_symbol( name, CURRENTMODULE->local_symtab );	/* search in local tab */

    if ( sym == NULL )
    {
        /* not local */
        sym = find_symbol( name, global_symtab );			/* search in global tab */

        if ( sym == NULL )
        {
            /* not local, not global -> declare symbol as extern */
            sym = Symbol_create( name, 0, SYM_EXTERN | type, CURRENTMODULE );
            SymbolHash_set( &global_symtab, name, sym );
        }
        else
        {
            /* not local, global */
            if ( sym->owner == CURRENTMODULE )
            {
                if ( ( sym->sym_type & ( SYM_EXTERN | type ) ) != ( SYM_EXTERN | type ) )
                {
                    if ( opts.sdcc )
                    {
                        sym->sym_type = SYM_EXTERN | type ;
                    }
                    else
                    {
                        /* Re-declaration not allowed */
                        error_symbol_redecl( name );
                    }
                }
            }
        }
    }
    else
    {
        /* local */
        ext_sym = find_symbol( name, global_symtab );

        if ( ext_sym == NULL )
        {
            /* If no external symbol of identical name has been declared, then re-declare local
               symbol as external symbol, but only if local symbol is not defined yet */
            if ( ( sym->sym_type & SYM_DEFINED ) == 0 )
            {
                sym->sym_type &= ~ SYM_LOCAL;
                sym->sym_type |= ( SYM_EXTERN | type );
                ext_sym = Symbol_create( name, 0, sym->sym_type, CURRENTMODULE );
                SymbolHash_set( &global_symtab, name, ext_sym );

                /* original local symbol cloned as external symbol, now delete old local ... */
                SymbolHash_remove( CURRENTMODULE->local_symtab, name );
            }
            else
            {
                /* already declared local */
                error_symbol_decl_local( name );
            }
        }
        else if ( ( sym->sym_type & ( SYM_EXTERN | type ) ) != ( SYM_EXTERN | type ) )
        {
            /* re-declaration not allowed */
            error_symbol_redecl( name );
        }
    }
}

/* declare an external symbol XREF or LIB */
void declare_extern_obj_symbol( char *name )
{
    declare_extern_symbol( name, 0 );
}
void declare_extern_lib_symbol( char *name )
{
    declare_extern_symbol( name, SYM_DEFINE );
}


/*-----------------------------------------------------------------------------
*   sort functions for SymbolHash_sort
*----------------------------------------------------------------------------*/
int SymbolHash_by_name( SymbolHashElem *a, SymbolHashElem *b )
{
    return strcmp( a->key, b->key );
}

int SymbolHash_by_value( SymbolHashElem *a, SymbolHashElem *b )
{
    return ( ( Symbol * )( a->value ) )->value - ( ( Symbol * )( b->value ) )->value;
}


/*
* $Log: symtab.c,v $
* Revision 1.24  2014-04-05 22:07:32  pauloscustodio
* Added ignore_case attribute to allow case-insensitive class hashes
*
* Revision 1.23  2014/03/03 14:09:20  pauloscustodio
* Renamed symbol type attribute
*
* Revision 1.22  2014/03/03 13:27:07  pauloscustodio
* Rename symbol type constants
*
* Revision 1.21  2014/02/03 22:07:38  pauloscustodio
* Use assert() instead of die() for programming errors
*
* Revision 1.20  2014/01/11 01:29:40  pauloscustodio
* Extend copyright to 2014.
* Move CVS log to bottom of file.
*
* Revision 1.19  2014/01/11 00:10:39  pauloscustodio
* Astyle - format C code
* Add -Wall option to CFLAGS, remove all warnings
* 
* Revision 1.18  2014/01/05 23:20:39  pauloscustodio
* List, StrHash classlist and classhash receive the address of the container
* object in all functions that add items to the container, and create the
* container on first use. This allows a container to be staticaly
* initialized with NULL and instantiated on first push/unshift/set.
* Add count attribute to StrHash, classhash to count elements in container.
* Add free_data attribute in StrHash to register a free fucntion to delete
* the data container when the hash is removed or a key is overwritten.
* 
* Revision 1.17  2013/12/15 13:18:34  pauloscustodio
* Move memory allocation routines to lib/xmalloc, instead of glib,
* introduce memory leak report on exit and memory fence check.
* 
* Revision 1.16  2013/10/05 13:43:05  pauloscustodio
* Parse command line options via look-up tables:
* -i, --use-lib
* -x, --make-lib
* 
* Revision 1.15  2013/10/01 22:50:27  pauloscustodio
* Parse command line options via look-up tables:
* -s, --symtable
* -ns, --no-symtable
* 
* Revision 1.14  2013/10/01 22:09:33  pauloscustodio
* Parse command line options via look-up tables:
* -sdcc
* 
* Revision 1.13  2013/09/08 00:43:59  pauloscustodio
* New error module with one error function per error, no need for the error
* constants. Allows compiler to type-check error message arguments.
* Included the errors module in the init() mechanism, no need to call
* error initialization from main(). Moved all error-testing scripts to
* one file errors.t.
* 
* Revision 1.12  2013/09/01 00:18:28  pauloscustodio
* - Replaced e4c exception mechanism by a much simpler one based on a few
*   macros. The former did not allow an exit(1) to be called within a
*   try-catch block.
* 
* Revision 1.11  2013/06/16 22:25:39  pauloscustodio
* New remove_all_{local,static,global}_syms( void ) functions
* to encapsulate calls to get_global_tab().
* 
* Revision 1.10  2013/06/16 20:14:39  pauloscustodio
* Move deffile writing to deffile.c, remove global variable deffile
* 
* Revision 1.9  2013/06/16 17:51:57  pauloscustodio
* get_all_syms() to get list of symbols matching a type mask, use in mapfile to decouple
* it from get_global_tab()
* 
* Revision 1.8  2013/06/15 22:10:01  pauloscustodio
* BUG_0037 : Symbol already defined error when symbol used in IF expression
* 
* Revision 1.7  2013/06/14 22:14:36  pauloscustodio
* find_local_symbol() and find_global_symbol() to encapsulate usage of get_global_tab()
* 
* Revision 1.6  2013/06/11 23:16:06  pauloscustodio
* Move symbol creation logic fromReadNames() in  modlink.c to symtab.c.
* Add error message for invalid symbol and scope chars in object file.
* 
* Revision 1.5  2013/06/10 23:11:33  pauloscustodio
* CH_0023 : Remove notdecl_tab
* 
* Revision 1.4  2013/06/08 23:37:32  pauloscustodio
* Replace define_def_symbol() by one function for each symbol table type: define_static_def_sym(),
*  define_global_def_sym(), define_local_def_sym(), encapsulating the symbol table used.
* Define keywords for special symbols ASMPC, ASMSIZE, ASMTAIL
* 
* Revision 1.3  2013/06/08 23:07:53  pauloscustodio
* Add global ASMPC Symbol pointer, to avoid "ASMPC" symbol table lookup on every instruction.
* Encapsulate get_global_tab() and get_static_tab() by using new functions define_static_def_sym()
*  and define_global_def_sym().
* 
* Revision 1.2  2013/06/01 01:24:22  pauloscustodio
* CH_0022 : Replace avltree by hash table for symbol table
* 
* Revision 1.1  2013/05/23 22:22:23  pauloscustodio
* Move symbol to sym.c, rename to Symbol
* 
* 
*/
