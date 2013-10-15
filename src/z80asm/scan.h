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

Copyright (C) Paulo Custodio, 2011-2013

Scanner

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/scan.h,v 1.20 2013-10-15 23:24:33 pauloscustodio Exp $ 
*/

#pragma once

#include "memalloc.h"   /* before any other include */

#include "types.h"
#include <glib.h>
#include <stdio.h>

/*-----------------------------------------------------------------------------
*   A scanner token is represented as an integer that is the ascii code for 
*	the single-character token.
*	0 represents end of input.
*	The macro T_VALUE() can be used to compute the token value for a 
*	two-character token.
*	Special tokens have codes that do not overlap with the above.
*----------------------------------------------------------------------------*/
#define T_VALUE(c1,c2) ((((c1) & 0xFF) << 8) | ((c2) & 0xFF))

enum token {
	t_end		= 0,
	t_name		= 1,		/* identifier, sets last_token_str in upper case */
	t_label		= 2,		/* .identifier | identifier:, sets last_token_str in upper case */
	t_number	= 3,		/* number or single-quoted char, sets last_token_num */
	t_string	= 4,		/* double-quoted string, sets last_token_str excluding quotes */
	
	t_newline 	= '\n',
	t_exclam 	= '!',
	t_hash 		= '#',
	t_dollar 	= '$',
	t_percent 	= '%',
	t_and 		= '&',
	t_lparen 	= '(',
	t_rparen 	= ')',
	t_star 		= '*',
	t_plus 		= '+',
	t_comma 	= ',',
	t_minus 	= '-',
	t_dot 		= '.',
	t_slash 	= '/',
	t_colon 	= ':',
	t_lt 		= '<',
	t_eq 		= '=',
	t_gt 		= '>',
	t_question 	= '?',
	t_at 		= '@',
	t_lsquare 	= '[',
	t_bslash 	= '\\',
	t_rsquare 	= ']',
	t_caret 	= '^',
	t_bquote 	= '`',
	t_lcurly 	= '{',
	t_vbar 		= '|',
	t_rcurly 	= '}',
	t_tilde 	= '~',

	t_eq_eq		= T_VALUE('=','='),
	t_lt_gt		= T_VALUE('<','>'),
	t_exclam_eq	= T_VALUE('!','='),
	t_lt_eq		= T_VALUE('<','='),
	t_gt_eq		= T_VALUE('>','='),
	t_vbar_vbar	= T_VALUE('|','|'),
	t_and_and	= T_VALUE('&','&'),
	t_lt_lt		= T_VALUE('<','<'),
	t_gt_gt		= T_VALUE('>','>'),
	t_star_star	= T_VALUE('*','*'),
	
};

/*-----------------------------------------------------------------------------
* Globals - last token retrieved
*----------------------------------------------------------------------------*/
extern enum token last_token;
extern int		  last_token_num;
extern GString	 *last_token_str;

/*-----------------------------------------------------------------------------
*   Initialize and Terminate module
*----------------------------------------------------------------------------*/
extern void init_scan(void);
extern void fini_scan(void);

/*-----------------------------------------------------------------------------
* State of one scan context
*----------------------------------------------------------------------------*/
typedef struct ScanContext
{
	GString	*input;				/* text being scanned */
	
	FILE	*file;				/* file being scanned, if any */
	char	*filename;			/* name of file, kept in strpool */
	int		 line_nr;			/* line number, starting at 1 */
	
	BOOL	 bol;				/* true if at beginning of line */
	
	int      cs, act;			/* Ragel state variables */
	char	*p, *pe, *eof, *ts, *te;	
} 
ScanContext;

extern void struct_ScanContext_init(ScanContext *self);
extern void struct_ScanContext_fini(ScanContext *self);

/*-----------------------------------------------------------------------------
* Scanner object - stack of ScanContext's
*----------------------------------------------------------------------------*/
typedef struct Scan
{
	ScanContext	*ctx;			/* current context */
	GSList		*stack;			/* stack of previous contexts */
}
Scan;

extern void struct_Scan_init(Scan *self);
extern void struct_Scan_fini(Scan *self);

/*-----------------------------------------------------------------------------
* Scanner API - methods without Scan* argument operate on a singleton
*----------------------------------------------------------------------------*/

/* push current scan context, start scanning a string */
extern void scan_string( char *text );
extern void scan_string_Scan( Scan *self, char *text );

/* push current scan context, start scanning a file */
extern void scan_file( char *filename );
extern void scan_file_Scan( Scan *self, char *filename );

/* get the next token, set last_tokenXXX as side-effect */
extern enum token get_token( void );
extern enum token get_token_Scan( Scan *self );

/* get the next input line from file - return pointer to 
   input string in ScanConext, or NULL at end of input */
extern char *get_line( void );
extern char *get_line_Scan( Scan *self );

#if 0
/*-----------------------------------------------------------------------------
* Bridge to OLD-SCAN interface
*----------------------------------------------------------------------------*/
#include "symbol.h"

/* last returned symbol */
extern enum symbols sym;
extern char ident[];

/* get the next token */
extern enum symbols GetSym( void );

/* skip to end of line */
extern void Skipline( void );
#endif


/*
* $Log: scan.h,v $
* Revision 1.20  2013-10-15 23:24:33  pauloscustodio
* Move reading by lines or tokens and file reading interface to scan.rl
* to decouple file.c from scan.c.
* Add singleton interface to scan to be used by parser.
*
* Revision 1.19  2013/10/08 21:53:06  pauloscustodio
* Replace Flex-based lexer by a Ragel-based one.
* Add interface to file.c to read files by tokens, calling the lexer.
*
*
*/
