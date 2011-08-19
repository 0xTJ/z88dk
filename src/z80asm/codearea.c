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
Copyright (C) Paulo Custodio, 2011

Manage the code area in memory
*/

/* $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/codearea.c,v 1.1 2011-08-19 15:53:58 pauloscustodio Exp $ */
/* $Log: codearea.c,v $
/* Revision 1.1  2011-08-19 15:53:58  pauloscustodio
/* BUG_0010 : heap corruption when reaching MAXCODESIZE
/* - test for overflow of MAXCODESIZE is done before each instruction at parseline(); if only one byte is available in codearea, and a 2 byte instruction is assembled, the heap is corrupted before the exception is raised.
/* - Factored all the codearea-accessing code into a new module, checking for MAXCODESIZE on every write.
/*
/* */

#include <memory.h>
#include "codearea.h"
#include "config.h"
#include "errors.h"
#include "symbol.h"
#include "z80asm.h"
#include "file.h"

/*-----------------------------------------------------------------------------
*   global data
*----------------------------------------------------------------------------*/
static char *codearea;			/* machine code block */
static size_t codeindex;		/* point to current address of codearea */
static size_t PC, oldPC;		/* Program Counter */

/*-----------------------------------------------------------------------------
*   free_objfile_data
*	Free all global structures
*----------------------------------------------------------------------------*/
static void free_objfile_data (void)
{  
    xfree0(codearea);			/* free memory for Z80 machine code */
}

/*-----------------------------------------------------------------------------
*   init_codearea_module
*	Alloc all global structures
*----------------------------------------------------------------------------*/
void init_codearea_module (void)
{
    codearea = (unsigned char *) xcalloc (MAXCODESIZE, sizeof (char));	
					/* allocate memory for Z80 machine code */
    codeindex = 0;
    set_PC(0); 
    set_oldPC();

    /* cleanup on program end */
    atexit(free_objfile_data);
}

/*-----------------------------------------------------------------------------
*   modify program counter
*----------------------------------------------------------------------------*/
size_t set_PC (size_t n)    { return PC = n;     }
size_t inc_PC (size_t n)    { return PC += n;    }
size_t get_PC (void)	    { return PC;         }

size_t set_oldPC (void)	    { return oldPC = PC; }
size_t get_oldPC (void)	    { return oldPC;      }

/*-----------------------------------------------------------------------------
*   init the code area, return current size
*----------------------------------------------------------------------------*/
void init_codearea (void)
{
    codeindex = 0;
    memset(codearea, 0, MAXCODESIZE);
}

size_t get_code_size (void)
{
    return codeindex;
}

static void check_space (size_t addr, size_t n) 
{
    if (addr + n > MAXCODESIZE) {
	ReportError (CURRENTFILE->fname, CURRENTFILE->line, ERR_MAX_CODESIZE);
	throw(FatalErrorException, "MAXCODESIZE reached");
    }
}

/*-----------------------------------------------------------------------------
*   read/write code area to an open file
*----------------------------------------------------------------------------*/
void fwrite_codearea (FILE *stream)
{
    xfwritec(codearea, codeindex, stream);
}

void fwrite_codearea_chunk (FILE *stream, size_t addr, size_t size)
{
    if (addr < codeindex) {
	if (addr + size > codeindex) {
	    size = codeindex - addr;
	}
	xfwritec(codearea + addr, size, stream);
    }
}

/* append data read from file to the current code area */
void fread_codearea (FILE *stream, size_t size) 
{
    check_space(codeindex, size);
    xfreadc(codearea + codeindex, size, stream);
    codeindex += size;
}

/*-----------------------------------------------------------------------------
*   load data into code area
*----------------------------------------------------------------------------*/
void patch_byte (size_t *paddr, unsigned char byte)
{
    check_space(*paddr, 1);
    codearea[(*paddr)++] = byte;
}

void append_byte (unsigned char byte)
{
    patch_byte(&codeindex, byte);
}

void patch_word (size_t *paddr, int word) 
{
    check_space(*paddr, 2);
    codearea[(*paddr)++] = word & 0xFF; word >>= 8;
    codearea[(*paddr)++] = word & 0xFF; word >>= 8;
}

void append_word (int word)
{
    patch_word(&codeindex, word);
}

void patch_long (size_t *paddr, long dword)
{
    check_space(*paddr, 4);
    codearea[(*paddr)++] = dword & 0xFF; dword >>= 8;
    codearea[(*paddr)++] = dword & 0xFF; dword >>= 8;
    codearea[(*paddr)++] = dword & 0xFF; dword >>= 8;
    codearea[(*paddr)++] = dword & 0xFF; dword >>= 8;
}

void append_long (long dword) 
{
    patch_long(&codeindex, dword);
}

unsigned char get_byte (size_t *paddr) 
{
    unsigned char byte;

    E4C_ASSERT(*paddr >= 0 && *paddr < codeindex);
    byte = codearea[(*paddr)++];
    return byte;
}
