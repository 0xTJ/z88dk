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

Scanner - to be processed by: ragel -G2 scan.rl

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/Attic/scan.rl,v 1.3 2013-10-16 00:14:37 pauloscustodio Exp $ 
*/

#include "memalloc.h"   /* before any other include */

#include "scan.h"

#include "ctype.h"
#include "errors.h"
#include "file.h"
#include "init.h"
#include "legacy.h"
#include "listfile.h"
#include "options.h"
#include "strpool.h"
#include "types.h"

static int scan_num(char *text, int num_suffix_chars, int base);

/*-----------------------------------------------------------------------------
* Globals that keep last token read
*----------------------------------------------------------------------------*/
enum token last_token;
int		   last_token_num;
GString	  *last_token_str;

static Scan *the_scan;

/*-----------------------------------------------------------------------------
* Z80ASM scanner
*----------------------------------------------------------------------------*/
%%{
	machine asm;

	variable cs		ctx->cs;
	variable act	ctx->act;
	variable p		ctx->p;
	variable pe		ctx->pe;
	variable eof	ctx->eof;
	variable ts		ctx->ts;
	variable te		ctx->te;

	# check predicates - beginning of line
	action at_bol 		{ ctx->bol }	
	
	# check predicates - reading by lines / by tokens
	action by_lines		{   by_lines }	
	action by_tokens	{ ! by_lines }	
	
	# Alpha numeric characters or underscore.
	alnum_u = alnum | '_';

	# Alpha charactres or underscore.
	alpha_u = alpha | '_';

	# Name
	name = alpha_u alnum_u*;
	
	# Label
	label = "." [ \t]* name | name [ \t]* ":" | "." [ \t]* name [ \t]* ":";
	
	# binary digit
	bdigit = [01];
	
	main := |*

	#--------------------------------------------------------------------------
	# Token lexer
	#--------------------------------------------------------------------------
	
	# Newline
	( '\n' ) when by_tokens
	{ 
		last_token = t_newline; 
		fbreak; 
	};
	
	# Comment
	( ';' [^\n]* ) when by_tokens ; 
	
	# Whitespace is standard ws, newlines and control codes.
	( any - 0x21..0x7e - '\n' ) when by_tokens ;

	# Symbols
	( punct - [_'";] ) when by_tokens
							{ last_token = ctx->ts[0];	fbreak; };
	( '==' ) when by_tokens { last_token = t_eq_eq; 	fbreak; };
	( '<>' ) when by_tokens { last_token = t_lt_gt; 	fbreak; };
	( '!=' ) when by_tokens { last_token = t_exclam_eq; fbreak; };
	( '<=' ) when by_tokens { last_token = t_lt_eq; 	fbreak; };
	( '>=' ) when by_tokens { last_token = t_gt_eq; 	fbreak; };
	( '||' ) when by_tokens { last_token = t_vbar_vbar; fbreak; };
	( '&&' ) when by_tokens { last_token = t_and_and; 	fbreak; };
	( '<<' ) when by_tokens { last_token = t_lt_lt; 	fbreak; };
	( '>>' ) when by_tokens { last_token = t_gt_gt; 	fbreak; };
	( '**' ) when by_tokens { last_token = t_star_star; fbreak; };

	# Numbers
	( digit+ ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts, ctx->te - ctx->ts, 10 ); 
		last_token = t_number;
		fbreak;
	};
	( digit xdigit* 'h'i ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts, ctx->te - ctx->ts - 1, 16 ); 
		last_token = t_number;
		fbreak;
	};
	( [$#] xdigit+ ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts + 1, ctx->te - ctx->ts - 1, 16 ); 
		last_token = t_number;
		fbreak;
	};
	( '0x'i xdigit+ ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts + 2, ctx->te - ctx->ts - 2, 16 ); 
		last_token = t_number;
		fbreak;
	};
	( digit bdigit* 'b'i ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts, ctx->te - ctx->ts - 1, 2 ); 
		last_token = t_number;
		fbreak;
	};
	( [@%] bdigit+ ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts + 1, ctx->te - ctx->ts - 1, 2 ); 
		last_token = t_number;
		fbreak;
	};
	( '0b'i bdigit+ ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts + 2, ctx->te - ctx->ts - 2, 2 ); 
		last_token = t_number;
		fbreak;
	};
	( [@%] '"' [\-#]+ '"' ) when by_tokens
	{ 
		last_token_num = scan_num( ctx->ts + 2, ctx->te - ctx->ts - 3, 2 ); 
		last_token = t_number;
		fbreak;
	};
	
	# Identifier
	( name | "af'"i ) when by_tokens
	{
		c = *(ctx->te); *(ctx->te) = '\0';			/* make substring */
		g_string_assign( last_token_str, ctx->ts );
		g_string_ascii_up( last_token_str );
		*(ctx->te) = c;								/* recover input */
		last_token = t_name;
		fbreak;
	};
	
	# Label
	( ( label ) when at_bol ) when by_tokens
	{
		/* remove '.' and ':' */
		while ( *(ctx->ts)     == '.' || isspace(*(ctx->ts))   ) (ctx->ts)++;
		while ( *((ctx->te)-1) == ':' || isspace(*(ctx->te-1)) ) (ctx->te)--;
		
		/* copy token */
		c = *(ctx->te); *(ctx->te) = '\0';		/* make substring */
		g_string_assign( last_token_str, ctx->ts );
		g_string_ascii_up( last_token_str );
		*(ctx->te) = c;							/* recover input */
		last_token = t_label;
		fbreak;
	};
	
	# Single Quote
	( "'" [^'\n]* "'" ) when by_tokens
	{
		if ( ctx->te - ctx->ts == 3 )
		{
			last_token_num = *(ctx->ts + 1);
			last_token = t_number;
			fbreak;
		}
		else
			error_invalid_squoted_string();
	};
	( "'" [^'\n]* ) when by_tokens	{ error_invalid_squoted_string(); };

	# Double Quote
	( '"' [^"\n]* '"' ) when by_tokens
	{
		c = *(ctx->te-1); *(ctx->te-1) = '\0';		/* make substring */
		g_string_assign( last_token_str, ctx->ts+1 );
		*(ctx->te-1) = c;							/* recover input */
		last_token = t_string;
		fbreak;
	};
	( '"' [^"\n]* ) when by_tokens	{ error_unclosed_string(); };
	
	#--------------------------------------------------------------------------
	# Lines lexer
	#--------------------------------------------------------------------------

	( [^\n]* '\n'? ) when by_lines
	{
		c = *(ctx->te); *(ctx->te) = '\0';			/* make substring */
		g_string_assign( last_token_str, ctx->ts );
		*(ctx->te) = c;								/* recover input */
		last_token = t_string;
		fbreak;
	};
	
	*|;
}%%

%% write data nofinal;

/*-----------------------------------------------------------------------------
*	convert number to int, range warning if greater than INT_MAX
*----------------------------------------------------------------------------*/
static int scan_num (char *text, int length, int base)
{
	int value;
	int digit = 0;
	char c;
	int i;
	BOOL range_err;
	
	value = 0;
	range_err = FALSE;
	for ( i = 0 ; i < length ; i++ ) 
	{
		c = *text++;					/* read each digit */
		if (isdigit(c)) 
		{
			digit = c - '0';
		}
		else if (isalpha(c)) 
		{
			digit = toupper(c) - 'A' + 10;
		}
		else if (base == 2 && (c == '-' || c == '#')) 
		{
			digit = (c == '#') ? 1 : 0;
		}
		else {							/* invalid digit - should not be reached */
			error_syntax();
		}

		if (digit >= base) {			/* digit out of range - should not be reached */
			error_syntax();
		}
		
		value = value * base + digit;

		if ( ! range_err && value < 0 )	/* overflow to sign bit */
		{
			range_err = TRUE;		
			warn_int_range( value );
		}
	}
		
	return value;
}

/*-----------------------------------------------------------------------------
* Initialize and Terminate module
*----------------------------------------------------------------------------*/
void init_scan(void)
{
	last_token_str = g_string_sized_new( MAXLINE );
	the_scan = new_Scan();
}
	
void fini_scan(void)
{
	g_string_free( last_token_str, TRUE );
	delete0_Scan( &the_scan );
}

/*-----------------------------------------------------------------------------
* Initialize and Terminate scan context
*----------------------------------------------------------------------------*/
void struct_ScanContext_init(ScanContext *self)
{
	self->input = g_string_sized_new( MAXLINE );
}

void struct_ScanContext_fini(ScanContext *self)
{
	if ( self->input )
		g_string_free( self->input, TRUE );
	
	if ( self->file )
		xfclose( self->file );
}

/*-----------------------------------------------------------------------------
* Initialize and Terminate scan
*----------------------------------------------------------------------------*/
void struct_Scan_init(Scan *self)
{
}

void struct_Scan_fini(Scan *self)
{
	g_slist_free_full( self->stack, (GDestroyNotify) delete_ScanContext );
	delete0_ScanContext( &self->ctx );
}

/*-----------------------------------------------------------------------------
* Reset last token variables before each new scan
*----------------------------------------------------------------------------*/
static void reset_last_token(void)
{
	last_token = t_end;
	last_token_num = 0;
	g_string_truncate( last_token_str, 0 );
}

/*-----------------------------------------------------------------------------
* Initialize the scanner to read ctx->input
*----------------------------------------------------------------------------*/
static void reset_scan( ScanContext *ctx )
{
	/* init state structure */
	ctx->bol   	= TRUE;
	ctx->p		= ctx->input->str;
	ctx->pe		= ctx->input->str + ctx->input->len;
	ctx->eof	= ctx->pe;	/* tokens are not split acros input lines */
	
	%% write init;

	reset_last_token();
}

/*-----------------------------------------------------------------------------
* Interface with error location
*----------------------------------------------------------------------------*/
static void set_error_location( ScanContext *ctx )
{
	/* set error location; in line_mode, only set error line at LINE directive */
	set_error_file( ctx->filename );
	if ( !opts.line_mode )
		set_error_line( ctx->line_nr );
}

/*-----------------------------------------------------------------------------
* Read the next line to input
*----------------------------------------------------------------------------*/
static BOOL read_next_line( ScanContext *ctx )
{
	int c1, c2;
	
	g_string_truncate( ctx->input, 0 );
	while ( (c1 = getc( ctx->file )) != EOF && c1 != '\n' && c1 != '\r' )
		g_string_append_c( ctx->input, c1 );
	
	if ( c1 == EOF )
	{
		if ( ctx->input->len > 0 )					/* read some chars */
			g_string_append_c( ctx->input, '\n' );	/* missing newline at end of line */
	}
	else 						
	{
		g_string_append_c( ctx->input, '\n' );		/* end of line */
		
		if ( (c2 = getc( ctx->file )) != EOF &&
			 ! ( c1 == '\n' && c2 == '\r' ||
				 c1 == '\r' && c2 == '\n' ) )
		{
			ungetc( c2, ctx->file );				/* push back to input */
		}
	}
	
	if ( ctx->input->len > 0 )
	{
		ctx->line_nr++;
	
		/* call listing */
		if ( opts.cur_list )
			list_start_line( get_PC(), ctx->filename, ctx->line_nr, ctx->input->str );

		set_error_location( ctx );

		return TRUE;
	}
	else
	{
		/* clear error location */
		set_error_null();

		return FALSE;
	}
}

/*-----------------------------------------------------------------------------
* Push the current context, create a new one
*----------------------------------------------------------------------------*/
static void push_context( Scan *self )
{
	char *filename = NULL;
	int	  line_nr  = 0;
	
	if ( self->ctx )
	{
		/* copy current filename/line_nr to new context */
		filename = self->ctx->filename;
		line_nr  = self->ctx->line_nr;

		/* push current top context to stack */
		self->stack = g_slist_prepend( self->stack, self->ctx );
	}

	/* create the new context */
	self->ctx = new_ScanContext();
	autodelete_ScanContext( self->ctx, FALSE );
	
	/* init filename/line_nr */
	self->ctx->filename = filename;
	self->ctx->line_nr  = line_nr;
}

/*-----------------------------------------------------------------------------
* Pop and delete the current context
*----------------------------------------------------------------------------*/
static void pop_context( Scan *self )
{
	delete0_ScanContext( &self->ctx );
	if ( self->stack )
	{
		/* pop one */
		self->ctx = self->stack->data;
		self->stack = g_slist_remove( self->stack, self->ctx );

		set_error_location( self->ctx );
	}
	else
	{
		set_error_null();
	}
}

/*-----------------------------------------------------------------------------
* push current scan context, start scanning a string
*----------------------------------------------------------------------------*/
void scan_string( char *text )
{
	scan_string_Scan( the_scan, text );
}

void scan_string_Scan( Scan *self, char *text )
{
	push_context( self );
	g_string_assign( self->ctx->input, text );
	reset_scan( self->ctx );
}

/*-----------------------------------------------------------------------------
* push current scan context, start scanning a file
*----------------------------------------------------------------------------*/
void scan_file( char *filename )
{
	scan_file_Scan( the_scan, filename );
}

void scan_file_Scan( Scan *self, char *filename )
{
	GSList		*i;
	ScanContext *ctx;

	/* create the context */
	push_context( self );
	
	/* check for recursive includes */
	for ( i = self->stack; i; i = g_slist_next(i) )
	{
		ctx = i->data;
		if ( ctx->file && ctx->filename &&
		     strcmp(filename, ctx->filename) == 0 )
			fatal_include_recursion( filename );
	}

	/* open the file */
	self->ctx->file		= xfopen( filename, "rb" );		/* "b" to return eol chars */
	self->ctx->filename = strpool_add( filename );
	self->ctx->line_nr  = 0;
	
	set_error_location( self->ctx );

	reset_scan( self->ctx );
}

/*-----------------------------------------------------------------------------
* get the next token or line workhorse
*----------------------------------------------------------------------------*/
static enum token _get_token_Scan( Scan *self, BOOL by_lines )
{
	ScanContext *ctx;
	char c;
	
	reset_last_token();			/* sets last_token to t_end */
	
	while ( (ctx = self->ctx) != NULL )
	{
		%% write exec;
		
		ctx->bol = (last_token == t_newline) ? TRUE : FALSE;
	
		if ( last_token != t_end )
			return last_token;

		/* if reading from file, get next line */
		if ( ctx->file && read_next_line( ctx ) )
			reset_scan( ctx );
		else
			pop_context( self );	/* pop context and try again */
	}
	
	return t_end;					/* no more input */
}

/*-----------------------------------------------------------------------------
* get the next token, set last_tokenXXX as side-effect
*----------------------------------------------------------------------------*/
enum token get_token( void )
{
	return get_token_Scan( the_scan );
}

enum token get_token_Scan( Scan *self )
{
	return _get_token_Scan( self, FALSE );	/* by tokens */
}

/*-----------------------------------------------------------------------------
* get the next input line from file - return pointer to last_token_str->str, 
* or NULL at end of input
*----------------------------------------------------------------------------*/
char *get_line( void )
{
	return get_line_Scan( the_scan );
}

char *get_line_Scan( Scan *self )
{
	enum token token = _get_token_Scan( self, TRUE );	/* by lines */
	if ( token == t_string )
		return last_token_str->str;
	else
		return NULL;
}

#if 0
/*-----------------------------------------------------------------------------
* Bridge to OLD-SCAN interface
*----------------------------------------------------------------------------*/
enum symbols sym = nil;
char ident[MAXLINE];

static enum symbols map_sym( enum token token )
{
	switch (token)
	{
		case t_end:			return nil;
		case t_name:		return name;
		case t_label:		return label;
		case t_number:		return number;
		case t_string:		return string;
		case t_newline:		return newline;
		case t_exclam:		return log_not;
		case t_hash:		return constexpr;
		case t_percent:		return mod;
		case t_lparen:		return lparen;
		case t_rparen:		return rparen;
		case t_star:		return multiply;
		case t_plus:		return plus;
		case t_comma:		return comma;
		case t_minus:		return minus;
		case t_dot:			return fullstop;
		case t_slash:		return divi;
		case t_lt:			return less;
		case t_eq:			return assign;
		case t_gt:			return greater;
		case t_lsquare:		return lsquare;
		case t_rsquare:		return rsquare;
		case t_lcurly:		return lcurly;
		case t_vbar:		return bin_or;
		case t_rcurly:		return rcurly;
		case t_lt_gt:		return notequal;
		case t_exclam_eq:	return notequal;
		case t_lt_eq:		return lessequal;
		case t_gt_eq:		return greatequal;
		case t_star_star:	return power;
#ifdef __LEGACY_Z80ASM_SYNTAX
		case t_and:			return strconq;
		case t_tilde:		return bin_and;
		case t_colon:		return bin_xor;
		case t_caret:		return power;
#else
		case t_and:			return bin_and;
		case t_tilde:		return bin_not;
		case t_colon:		return colon;
		case t_caret:		return bin_xor;
#endif

		/* unused */
		case t_dollar:
		case t_question:	
		case t_at:			
		case t_bslash:		
		case t_bquote:		
		case t_eq_eq:		
		case t_vbar_vbar:	
		case t_and_and:		
		case t_lt_lt:		
		case t_gt_gt:		
		default: 			return nil;
	}
}

/* get the next token */
enum symbols GetSym( void )
{
	/* call lexer, set token, ident */
	sym = map_sym( get_token() );
	g_strlcpy( ident, last_token_str->str, sizeof(ident) );
	
	return sym;
}

/* skip to end of line */
void Skipline( void )
{
	while ( sym != newline && sym != nil )
		GetSym();
}
#endif



/*
* $Log: scan.rl,v $
* Revision 1.3  2013-10-16 00:14:37  pauloscustodio
* Move FileStack implementation to scan.c, remove FileStack.
* Move getline_File() to scan.c.
*
* Revision 1.2  2013/10/15 23:24:33  pauloscustodio
* Move reading by lines or tokens and file reading interface to scan.rl
* to decouple file.c from scan.c.
* Add singleton interface to scan to be used by parser.
*
* Revision 1.1  2013/10/08 21:53:06  pauloscustodio
* Replace Flex-based lexer by a Ragel-based one.
* Add interface to file.c to read files by tokens, calling the lexer.
*
*
*/
