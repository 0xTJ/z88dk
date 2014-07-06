/*
Memory allocation routines with automatic garbage collection on exit,
Simple fence mechanism and exception thrown on out of memory.
Only works for memory allocated by xmalloc and freed by xfree.
Use MS Visual Studio malloc debug for any allocation not using xmalloc/xfree

Copyright (C) Paulo Custodio, 2011-2014

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/lib/Attic/xmalloc.c,v 1.11 2014-07-06 01:11:39 pauloscustodio Exp $
*/

#include "xmalloc.h"   /* before any other include */

#include "queue.h"
#include "init.h"
#include <stdlib.h>
#include <stdio.h>

/*-----------------------------------------------------------------------------
*   Memory Block - allocated before the actual buffer requested by the user
*   keeps linked list of all allocated blocks to be freed at exit
*----------------------------------------------------------------------------*/
#define FENCE_SIZE      sizeof(void*)
#define FENCE_SIGN      0xAA
#define MEMBLOCK_SIGN   0x5A5A5A5A

typedef struct MemBlock
{
    int signature;                  /* contains MEMBLOCK_SIGN to make sure we found
                                       a block */
    size_t  client_size;            /* size requested by client */
    char    *file;                  /* source where allocated */
    int     lineno;                 /* line number where allocated */

    LIST_ENTRY( MemBlock ) entries; /* Double-linked list of blocks */

    char    fence[FENCE_SIZE];      /* fence to detect underflow */

    /* client data starts here with client_size bytes + FENCE_SIZE fence */

} MemBlock;

/* list of all allocated memory */
static LIST_HEAD( MemBlockList, MemBlock ) mem_blocks = LIST_HEAD_INITIALIZER( mem_blocks );

/* convert from MemBlock area to client area */
#define CLIENT_PTR(block)   ((block)->fence + FENCE_SIZE)
#define CLIENT_SIZE(block)  ((block)->client_size)

/* convert client block and size to MemBlock and total size */
#define BLOCK_PTR(ptr)      ((MemBlock *) (((char*) (ptr)) - sizeof(MemBlock)))
#define BLOCK_SIZE(size)    ((size) + sizeof(MemBlock) + FENCE_SIZE)

/* address of both fences */
#define START_FENCE_PTR(block)  ((block)->fence)
#define END_FENCE_PTR(block)    (CLIENT_PTR(block) + (block)->client_size)


/*-----------------------------------------------------------------------------
*   Initialize functions
*----------------------------------------------------------------------------*/
DEFINE_init()
{
#ifdef XMALLOC_DEBUG
    warn( "xmalloc: init\n" );
#endif

#ifdef _CRTDBG_MAP_ALLOC        /* MS Visual Studio malloc debug */
#define REPORT_STDERR(reportType)   \
			_CrtSetReportMode(reportType, _CRTDBG_MODE_FILE | _CRTDBG_MODE_DEBUG); \
			_CrtSetReportFile(reportType, _CRTDBG_FILE_STDERR )
    _CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
    REPORT_STDERR( _CRT_WARN );
    REPORT_STDERR( _CRT_ERROR );
    REPORT_STDERR( _CRT_ASSERT );
#undef REPORT_STDERR

    /* break on allocation Nr. XX */
    /* _CrtSetBreakAlloc(86); */
#endif
}

void xmalloc_init( void )
{
    init();
}

/*-----------------------------------------------------------------------------
*   Terminate function
*----------------------------------------------------------------------------*/
DEFINE_fini()
{
    MemBlock *block;

#ifdef XMALLOC_DEBUG
    warn( "xmalloc: cleanup\n" );
#endif

    /* delete all existing blocks */
    while ( ! LIST_EMPTY( &mem_blocks ) )
    {
        block = LIST_FIRST( &mem_blocks );

        /* free but do not report memory allocated with NULL file */
        if ( block->file != NULL )
        {
            warn( "xmalloc: leak (%u) allocated at %s(%d)\n",
                  block->client_size, block->file, block->lineno );
        }

        _xfree( CLIENT_PTR( block ), __FILE__, __LINE__ );  /* deletes from list */
    }
}

/*-----------------------------------------------------------------------------
*   Create a new MemBlock
*----------------------------------------------------------------------------*/
static MemBlock *new_block( size_t client_size, char *file, int lineno )
{
    MemBlock *block;
    size_t   block_size;

    /* create memory to hold MemBlock + client area + fence */
    block_size = BLOCK_SIZE( client_size );
    block      = malloc( block_size );

    if ( block == NULL )
    {
        die( "%s(%d): alloc (%u) failed\n", file, lineno, block_size );
        /* not reached */
    }

    /* init block */
    block->signature   = MEMBLOCK_SIGN;
    block->client_size = client_size;
    block->file        = file;
    block->lineno      = lineno;

    /* fill fences */
    memset( START_FENCE_PTR( block ), FENCE_SIGN, FENCE_SIZE );
    memset( END_FENCE_PTR( block ),   FENCE_SIGN, FENCE_SIZE );

    /* add to list of blocks in reverse order, so that cleanup is reversed */
    LIST_INSERT_HEAD( &mem_blocks, block, entries );

#ifdef XMALLOC_DEBUG
    warn( "%s(%d): alloc (%u)\n", block->file, block->lineno, CLIENT_SIZE( block ) );
#endif

    return block;
}

/*-----------------------------------------------------------------------------
*   Find a block via client ptr, exit if not found
*----------------------------------------------------------------------------*/
static MemBlock *find_block( void *client_ptr, char *file, int lineno )
{
    MemBlock *block;

    block = BLOCK_PTR( client_ptr );

    if ( block->signature != MEMBLOCK_SIGN )
    {
        die( "%s(%d): block not found\n", file, lineno );
        /* not reached */
    }

    return block;
}

/*-----------------------------------------------------------------------------
*   Check block fence
*----------------------------------------------------------------------------*/
static void check_fences( MemBlock *block, char *file, int lineno )
{
    char fence[FENCE_SIZE];

    memset( fence, FENCE_SIGN, FENCE_SIZE );

    /* check fences */
    if ( 0 != memcmp( fence, START_FENCE_PTR( block ), FENCE_SIZE ) )
    {
        die( "%s(%d): buffer underflow, allocated at %s(%d)\n",
             file, lineno, block->file, block->lineno );
        /* not reached */
    }

    if ( 0 != memcmp( fence, END_FENCE_PTR( block ), FENCE_SIZE ) )
    {
        die( "%s(%d): buffer overflow, allocated at %s(%d)\n",
             file, lineno, block->file, block->lineno );
        /* not reached */
    }
}

/*-----------------------------------------------------------------------------
*   xmalloc
*----------------------------------------------------------------------------*/
void *_xmalloc( size_t client_size, char *file, int lineno )
{
    MemBlock *block;

    init();

    block = new_block( client_size, file, lineno );
    return CLIENT_PTR( block );
}

/* to use when a function pointer compatible with malloc() and free() is expected */
void *xmallocf( size_t size )
{
	return _xmalloc( size, __FILE__, __LINE__ );
}


/*-----------------------------------------------------------------------------
*   xfree
*----------------------------------------------------------------------------*/
void _xfree( void *client_ptr, char *file, int lineno )
{
    MemBlock *block;

    init();

    /* if input is NULL, do nothing */
    if ( client_ptr == NULL )
    {
        return;
    }

    block = find_block( client_ptr, file, lineno );

#ifdef XMALLOC_DEBUG
    warn( "%s(%d): free (%u) allocated at %s(%d)\n",
          file, lineno, CLIENT_SIZE( block ), block->file, block->lineno );
#endif

    /* delete from list to avoid recursion atexit() if overflow */
    LIST_REMOVE( block, entries );

    /* check fences */
    check_fences( block, file, lineno );

    /* delete memory blocks */
    free( block );
}

/* to use when a function pointer compatible with malloc() and free() is expected */
void xfreef( void *memptr )
{
    _xfree( memptr, __FILE__, __LINE__ );
}


/*-----------------------------------------------------------------------------
*   xcalloc
*----------------------------------------------------------------------------*/
void *_xcalloc( int num, size_t size, char *file, int lineno )
{
    MemBlock *block;
    size_t   client_size;
    void     *client_ptr;

    init();

    client_size = num * size;
    block       = new_block( client_size, file, lineno );
    client_ptr  = CLIENT_PTR( block );

    memset( client_ptr, 0, client_size );

    return client_ptr;
}

/*-----------------------------------------------------------------------------
*   xstrdup
*----------------------------------------------------------------------------*/
char *_xstrdup( char *source, char *file, int lineno )
{
    MemBlock *block;
    size_t   client_size;
    void     *client_ptr;

    init();

    client_size = strlen( source ) + 1;
    block       = new_block( client_size, file, lineno );
    client_ptr  = CLIENT_PTR( block );

    /* copy string */
    strcpy( client_ptr, source );

    return client_ptr;
}

/*-----------------------------------------------------------------------------
*   xrealloc
*----------------------------------------------------------------------------*/
void *_xrealloc( void *client_ptr, size_t client_size, char *file, int lineno )
{
    MemBlock *block;
    size_t   block_size;

    init();

    /* if input is NULL, behave as malloc */
    if ( client_ptr == NULL )
    {
        return _xmalloc( client_size, file, lineno );
    }

    /* find the block */
    block = find_block( client_ptr, file, lineno );

#ifdef XMALLOC_DEBUG
    warn( "%s(%d): free (%u) allocated at %s(%d)\n",
          file, lineno, CLIENT_SIZE( block ), block->file, block->lineno );
#endif

    /* delete from list as realloc may move block */
    LIST_REMOVE( block, entries );

    /* check fences */
    check_fences( block, file, lineno );

    /* reallocate and create new end fence */
    block_size = BLOCK_SIZE( client_size );
    block      = realloc( block, block_size );

    if ( block == NULL )
    {
        die( "%s(%d): alloc (%u) failed\n", file, lineno, block_size );
        /* not reached */
    }

    client_ptr = CLIENT_PTR( block );

    /* update block */
    block->client_size = client_size;
    block->file        = file;
    block->lineno      = lineno;

    /* fill end fence */
    memset( END_FENCE_PTR( block ),   FENCE_SIGN, FENCE_SIZE );

    /* add to list of blocks in reverse order, so that cleanup is reversed */
    LIST_INSERT_HEAD( &mem_blocks, block, entries );

#ifdef XMALLOC_DEBUG
    warn( "%s(%d): alloc (%u)\n", block->file, block->lineno, CLIENT_SIZE( block ) );
#endif

    return client_ptr;
}
