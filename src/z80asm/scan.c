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

Scanner - to be processed by: flex -L scan.l
*/

/* $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/scan.c,v 1.3 2013-04-09 20:56:50 pauloscustodio Exp $ */
/* $Log: scan.c,v $
/* Revision 1.3  2013-04-09 20:56:50  pauloscustodio
/* TOK_LABEL removed - identifying a label as XXX: has to be a parsing action in order to
/* distinguish a label from a continuation statement, e.g.
/* LABEL: ld a,VALUE : inc a ; LABEL is label, VALUE is name
/*
/* Revision 1.2  2013/03/31 18:28:30  pauloscustodio
/* New TOK_LABEL for a label definition, i.e. ". NAME" or "NAME :"
/*
/* Revision 1.1  2013/03/29 23:53:08  pauloscustodio
/* Added GNU Flex-based scanner. Not yet integrated into assembler.
/*
/*
/* */

#include "memalloc.h"	/* before any other include */

#define YY_NO_UNISTD_H	1		/* don't include unistd */

#ifndef SCAN_H
#define SCAN_H

#include "class.h"
#include "classlist.h"
#include "dynstr.h"

/*-----------------------------------------------------------------------------
*   Token Type
*----------------------------------------------------------------------------*/
typedef enum TokType
{
	/* mark end of input */
	TOK_NULL			= 0,
	
    /* single character tokens */
    TOK_NEWLINE         = '\n',
	
    TOK_EXCLAM          = '!',
    TOK_HASH            = '#',
    TOK_DOLLAR          = '$',
    TOK_PERCENT         = '%',
    TOK_AMPERSAND       = '&',
    TOK_LPAREN          = '(',
    TOK_RPAREN          = ')',
    TOK_ASTERISK        = '*',
    TOK_PLUS            = '+',
    TOK_COMMA           = ',',
    TOK_HYPHEN          = '-',
    TOK_PERIOD          = '.',
    TOK_SLASH           = '/',
    TOK_COLON           = ':',
    TOK_LESS            = '<',
    TOK_EQUAL           = '=',
    TOK_GREATER         = '>',
    TOK_QUESTION        = '?',
    TOK_ATSIGN          = '@',
    TOK_LSQUARE         = '[',
    TOK_BACKSLASH       = '\\',
    TOK_RSQUARE         = ']',
    TOK_CARET           = '^',
    TOK_BACKQUOTE       = '`',
    TOK_LCURLY          = '{',
    TOK_VBAR            = '|',
    TOK_RCURLY          = '}',
    TOK_TILDE           = '~',
	
    /* multi-character tokens */
    TOK_EQUAL_EQUAL     = 0x100,/* "==" */
    TOK_LESS_GREATER,           /* "<>" */
    TOK_NOT_EQUAL,              /* "!=" */
    TOK_LESS_EQUAL,             /* "<=" */
    TOK_GREATER_EQUAL,          /* ">=" */
    TOK_DBL_VBAR,               /* "||" */
    TOK_DBL_AMPERSAND,          /* "&&" */
    TOK_DBL_LESS,               /* "<<" */
    TOK_DBL_GREATER,            /* ">>" */
    TOK_DBL_ASTERISK,           /* "**" */

    /* language tokens */
    TOK_NAME,                   /* any identifier */
    TOK_NUMBER,
    TOK_STRING,                 /* single- or double-quoted string */
    TOK_PREPROC,                /* preprocessor command */

} TokType;

/*-----------------------------------------------------------------------------
*   Token and list of tokens
*----------------------------------------------------------------------------*/
CLASS(Token)
	TokType	tok_type;			/* type of token */
	long	num_value;			/* numeric value, if any */
	Str	   *str_value;			/* string value, if any */
	char   *filename;			/* file name - kept in strpool */
	int 	line_nr;			/* input line number */
END_CLASS;

CLASS_LIST(Token);

/*-----------------------------------------------------------------------------
*   API - uses srcfile.h singleton API
*----------------------------------------------------------------------------*/

/* Start reading file / text at current position */
extern void scan_file( char *filename );
extern void scan_text( char *text );

/* scan input for next token, return token type; 
   use scan_xxx() to last returned token attributes, only valid until next
   scan_get()/scan_unget() call */
extern TokType scan_get( void );
extern TokType scan_tok_type( void );
extern long	   scan_num_value( void );
extern char   *scan_str_value( void );
extern char   *scan_filename( void );
extern int 	   scan_line_nr( void );

/* push back token to input stream */
extern void scan_unget( TokType tok_type, long num_value, char *str_value,
						char *filename, int line_nr );

/* stack of nested constructs, i.e. IF / ELSE / ENDIF
   local to each input file, stack must be empty at the end of file */
extern void scan_push_struct( int id, int value );
extern int  scan_top_id( void );						
extern int  scan_top_value( void );
extern void scan_replace_struct( int id, int value );
extern void scan_pop_struct( int id );		/* syntaxt error if id != top_id */

/* forward declaration for YY_EXTRA_TYPE */
struct Context;

#endif /* ndef SCAN_H */





#define  YY_INT_ALIGNED long int

/* A lexical scanner generated by flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 35
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* end standard C headers. */

/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/* C99 says to define __STDC_LIMIT_MACROS before including stdint.h,
 * if you want the limit (max/min) macros for int types. 
 */
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif /* ! C99 */

#endif /* ! FLEXINT_H */

#ifdef __cplusplus

/* The "const" storage-class-modifier is valid. */
#define YY_USE_CONST

#else	/* ! __cplusplus */

/* C99 requires __STDC__ to be defined as 1. */
#if defined (__STDC__)

#define YY_USE_CONST

#endif	/* defined (__STDC__) */
#endif	/* ! __cplusplus */

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif

/* Returned upon end-of-file. */
#define YY_NULL 0

/* Promotes a possibly negative, possibly signed char to an unsigned
 * integer for use as an array index.  If the signed char is negative,
 * we want to instead treat it as an 8-bit unsigned char, hence the
 * double cast.
 */
#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)

/* An opaque pointer. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

/* For convenience, these vars (plus the bison vars far below)
   are macros in the reentrant scanner. */
#define yyin yyg->yyin_r
#define yyout yyg->yyout_r
#define yyextra yyg->yyextra_r
#define yyleng yyg->yyleng_r
#define yytext yyg->yytext_r
#define yylineno (YY_CURRENT_BUFFER_LVALUE->yy_bs_lineno)
#define yycolumn (YY_CURRENT_BUFFER_LVALUE->yy_bs_column)
#define yy_flex_debug yyg->yy_flex_debug_r

/* Enter a start condition.  This macro really ought to take a parameter,
 * but we do it the disgusting crufty way forced on us by the ()-less
 * definition of BEGIN.
 */
#define BEGIN yyg->yy_start = 1 + 2 *

/* Translate the current start state into a value that can be later handed
 * to BEGIN to return to the state.  The YYSTATE alias is for lex
 * compatibility.
 */
#define YY_START ((yyg->yy_start - 1) / 2)
#define YYSTATE YY_START

/* Action number for EOF rule of a given start state. */
#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)

/* Special action meaning "start processing a new file". */
#define YY_NEW_FILE yyrestart(yyin ,yyscanner )

#define YY_END_OF_BUFFER_CHAR 0

/* Size of default input buffer. */
#ifndef YY_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k.
 * Moreover, YY_BUF_SIZE is 2*YY_READ_BUF_SIZE in the general case.
 * Ditto for the __ia64__ case accordingly.
 */
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif /* __ia64__ */
#endif

/* The state buf must be large enough to hold one state per character in the main buffer.
 */
#define YY_STATE_BUF_SIZE   ((YY_BUF_SIZE + 2) * sizeof(yy_state_type))

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

    #define YY_LESS_LINENO(n)
    
/* Return all but the first "n" matched characters back to the input stream. */
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		*yy_cp = yyg->yy_hold_char; \
		YY_RESTORE_YY_MORE_OFFSET \
		yyg->yy_c_buf_p = yy_cp = yy_bp + yyless_macro_arg - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )

#define unput(c) yyunput( c, yyg->yytext_ptr , yyscanner )

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	yy_size_t yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */
    
	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1
	/* When an EOF's been seen but there's still some text to process
	 * then we mark the buffer as YY_EOF_PENDING, to indicate that we
	 * shouldn't try reading from the input source any more.  We might
	 * still have a bunch of tokens to match, though, because of
	 * possible backing-up.
	 *
	 * When we actually see the EOF, we change the status to "new"
	 * (via yyrestart()), so that the user can continue scanning by
	 * just pointing yyin at a new input file.
	 */
#define YY_BUFFER_EOF_PENDING 2

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

/* We provide macros for accessing buffer states in case in the
 * future we want to put the buffer states in a more general
 * "scanner state".
 *
 * Returns the top of the stack, or NULL.
 */
#define YY_CURRENT_BUFFER ( yyg->yy_buffer_stack \
                          ? yyg->yy_buffer_stack[yyg->yy_buffer_stack_top] \
                          : NULL)

/* Same as previous macro, but useful when we know that the buffer stack is not
 * NULL or when we need an lvalue. For internal use only.
 */
#define YY_CURRENT_BUFFER_LVALUE yyg->yy_buffer_stack[yyg->yy_buffer_stack_top]

void yyrestart (FILE *input_file ,yyscan_t yyscanner );
void yy_switch_to_buffer (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
YY_BUFFER_STATE yy_create_buffer (FILE *file,int size ,yyscan_t yyscanner );
void yy_delete_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void yy_flush_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void yypush_buffer_state (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
void yypop_buffer_state (yyscan_t yyscanner );

static void yyensure_buffer_stack (yyscan_t yyscanner );
static void yy_load_buffer_state (yyscan_t yyscanner );
static void yy_init_buffer (YY_BUFFER_STATE b,FILE *file ,yyscan_t yyscanner );

#define YY_FLUSH_BUFFER yy_flush_buffer(YY_CURRENT_BUFFER ,yyscanner)

YY_BUFFER_STATE yy_scan_buffer (char *base,yy_size_t size ,yyscan_t yyscanner );
YY_BUFFER_STATE yy_scan_string (yyconst char *yy_str ,yyscan_t yyscanner );
YY_BUFFER_STATE yy_scan_bytes (yyconst char *bytes,int len ,yyscan_t yyscanner );

void *yyalloc (yy_size_t ,yyscan_t yyscanner );
void *yyrealloc (void *,yy_size_t ,yyscan_t yyscanner );
void yyfree (void * ,yyscan_t yyscanner );

#define yy_new_buffer yy_create_buffer

#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){ \
        yyensure_buffer_stack (yyscanner); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer(yyin,YY_BUF_SIZE ,yyscanner); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_is_interactive = is_interactive; \
	}

#define yy_set_bol(at_bol) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){\
        yyensure_buffer_stack (yyscanner); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer(yyin,YY_BUF_SIZE ,yyscanner); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_at_bol = at_bol; \
	}

#define YY_AT_BOL() (YY_CURRENT_BUFFER_LVALUE->yy_at_bol)

/* Begin user sect3 */

#define yywrap(n) 1
#define YY_SKIP_YYWRAP

typedef unsigned char YY_CHAR;

typedef yyconst struct yy_trans_info *yy_state_type;

#define yytext_ptr yytext_r

static yy_state_type yy_get_previous_state (yyscan_t yyscanner );
static yy_state_type yy_try_NUL_trans (yy_state_type current_state  ,yyscan_t yyscanner);
static int yy_get_next_buffer (yyscan_t yyscanner );
static void yy_fatal_error (yyconst char msg[] ,yyscan_t yyscanner );

/* Done after the current pattern has been matched and before the
 * corresponding action - sets up yytext.
 */
#define YY_DO_BEFORE_ACTION \
	yyg->yytext_ptr = yy_bp; \
	yyleng = (size_t) (yy_cp - yy_bp); \
	yyg->yy_hold_char = *yy_cp; \
	*yy_cp = '\0'; \
	yyg->yy_c_buf_p = yy_cp;

#define YY_NUM_RULES 30
#define YY_END_OF_BUFFER 31
struct yy_trans_info
	{
	flex_int32_t yy_verify;
	flex_int32_t yy_nxt;
	};
static yyconst struct yy_trans_info yy_transition[4903] =
    {
 {   0,   0 }, {   0,4647 }, {   0,   0 }, {   0,4645 }, {   1,1032 },
 {   2,1032 }, {   3,1032 }, {   4,1032 }, {   5,1032 }, {   6,1032 },
 {   7,1032 }, {   8,1032 }, {   9,1034 }, {  10,1036 }, {  11,1032 },
 {  12,1034 }, {  13,1038 }, {  14,1032 }, {  15,1032 }, {  16,1032 },
 {  17,1032 }, {  18,1032 }, {  19,1032 }, {  20,1032 }, {  21,1032 },
 {  22,1032 }, {  23,1032 }, {  24,1032 }, {  25,1032 }, {  26,1032 },
 {  27,1032 }, {  28,1032 }, {  29,1032 }, {  30,1032 }, {  31,1032 },
 {  32,1034 }, {  33,1040 }, {  34,1088 }, {  35,1346 }, {  36,1346 },
 {  37,1370 }, {  38,1372 }, {  39,1450 }, {  40,1032 }, {  41,1032 },
 {  42,1375 }, {  43,1032 }, {  44,1032 }, {  45,1032 }, {  46,1032 },

 {  47,1032 }, {  48,1708 }, {  49,1767 }, {  50,1826 }, {  51,1826 },
 {  52,1826 }, {  53,1826 }, {  54,1826 }, {  55,1826 }, {  56,1826 },
 {  57,1826 }, {  58,1032 }, {  59,1932 }, {  60,1377 }, {  61,1379 },
 {  62,1710 }, {  63,1032 }, {  64,1370 }, {  65,2190 }, {  66,2282 },
 {  67,2282 }, {  68,2282 }, {  69,2282 }, {  70,2282 }, {  71,2282 },
 {  72,2282 }, {  73,2282 }, {  74,2282 }, {  75,2282 }, {  76,2282 },
 {  77,2282 }, {  78,2282 }, {  79,2282 }, {  80,2282 }, {  81,2282 },
 {  82,2282 }, {  83,2282 }, {  84,2282 }, {  85,2282 }, {  86,2282 },
 {  87,2282 }, {  88,2282 }, {  89,2282 }, {  90,2282 }, {  91,1032 },
 {  92,1032 }, {  93,1032 }, {  94,1032 }, {  95,2282 }, {  96,1032 },

 {  97,2190 }, {  98,2282 }, {  99,2282 }, { 100,2282 }, { 101,2282 },
 { 102,2282 }, { 103,2282 }, { 104,2282 }, { 105,2282 }, { 106,2282 },
 { 107,2282 }, { 108,2282 }, { 109,2282 }, { 110,2282 }, { 111,2282 },
 { 112,2282 }, { 113,2282 }, { 114,2282 }, { 115,2282 }, { 116,2282 },
 { 117,2282 }, { 118,2282 }, { 119,2282 }, { 120,2282 }, { 121,2282 },
 { 122,2282 }, { 123,1032 }, { 124,1714 }, { 125,1032 }, { 126,1032 },
 { 127,1032 }, { 128,1032 }, { 129,1032 }, { 130,1032 }, { 131,1032 },
 { 132,1032 }, { 133,1032 }, { 134,1032 }, { 135,1032 }, { 136,1032 },
 { 137,1032 }, { 138,1032 }, { 139,1032 }, { 140,1032 }, { 141,1032 },
 { 142,1032 }, { 143,1032 }, { 144,1032 }, { 145,1032 }, { 146,1032 },

 { 147,1032 }, { 148,1032 }, { 149,1032 }, { 150,1032 }, { 151,1032 },
 { 152,1032 }, { 153,1032 }, { 154,1032 }, { 155,1032 }, { 156,1032 },
 { 157,1032 }, { 158,1032 }, { 159,1032 }, { 160,1032 }, { 161,1032 },
 { 162,1032 }, { 163,1032 }, { 164,1032 }, { 165,1032 }, { 166,1032 },
 { 167,1032 }, { 168,1032 }, { 169,1032 }, { 170,1032 }, { 171,1032 },
 { 172,1032 }, { 173,1032 }, { 174,1032 }, { 175,1032 }, { 176,1032 },
 { 177,1032 }, { 178,1032 }, { 179,1032 }, { 180,1032 }, { 181,1032 },
 { 182,1032 }, { 183,1032 }, { 184,1032 }, { 185,1032 }, { 186,1032 },
 { 187,1032 }, { 188,1032 }, { 189,1032 }, { 190,1032 }, { 191,1032 },
 { 192,1032 }, { 193,1032 }, { 194,1032 }, { 195,1032 }, { 196,1032 },

 { 197,1032 }, { 198,1032 }, { 199,1032 }, { 200,1032 }, { 201,1032 },
 { 202,1032 }, { 203,1032 }, { 204,1032 }, { 205,1032 }, { 206,1032 },
 { 207,1032 }, { 208,1032 }, { 209,1032 }, { 210,1032 }, { 211,1032 },
 { 212,1032 }, { 213,1032 }, { 214,1032 }, { 215,1032 }, { 216,1032 },
 { 217,1032 }, { 218,1032 }, { 219,1032 }, { 220,1032 }, { 221,1032 },
 { 222,1032 }, { 223,1032 }, { 224,1032 }, { 225,1032 }, { 226,1032 },
 { 227,1032 }, { 228,1032 }, { 229,1032 }, { 230,1032 }, { 231,1032 },
 { 232,1032 }, { 233,1032 }, { 234,1032 }, { 235,1032 }, { 236,1032 },
 { 237,1032 }, { 238,1032 }, { 239,1032 }, { 240,1032 }, { 241,1032 },
 { 242,1032 }, { 243,1032 }, { 244,1032 }, { 245,1032 }, { 246,1032 },

 { 247,1032 }, { 248,1032 }, { 249,1032 }, { 250,1032 }, { 251,1032 },
 { 252,1032 }, { 253,1032 }, { 254,1032 }, { 255,1032 }, { 256,1032 },
 {   0,   0 }, {   0,4387 }, {   1, 774 }, {   2, 774 }, {   3, 774 },
 {   4, 774 }, {   5, 774 }, {   6, 774 }, {   7, 774 }, {   8, 774 },
 {   9, 776 }, {  10, 778 }, {  11, 774 }, {  12, 776 }, {  13, 780 },
 {  14, 774 }, {  15, 774 }, {  16, 774 }, {  17, 774 }, {  18, 774 },
 {  19, 774 }, {  20, 774 }, {  21, 774 }, {  22, 774 }, {  23, 774 },
 {  24, 774 }, {  25, 774 }, {  26, 774 }, {  27, 774 }, {  28, 774 },
 {  29, 774 }, {  30, 774 }, {  31, 774 }, {  32, 776 }, {  33, 782 },
 {  34, 830 }, {  35,1088 }, {  36,1088 }, {  37,1112 }, {  38,1114 },

 {  39,1192 }, {  40, 774 }, {  41, 774 }, {  42,1117 }, {  43, 774 },
 {  44, 774 }, {  45, 774 }, {  46, 774 }, {  47, 774 }, {  48,1450 },
 {  49,1509 }, {  50,1568 }, {  51,1568 }, {  52,1568 }, {  53,1568 },
 {  54,1568 }, {  55,1568 }, {  56,1568 }, {  57,1568 }, {  58, 774 },
 {  59,1674 }, {  60,1119 }, {  61,1121 }, {  62,1452 }, {  63, 774 },
 {  64,1112 }, {  65,1932 }, {  66,2024 }, {  67,2024 }, {  68,2024 },
 {  69,2024 }, {  70,2024 }, {  71,2024 }, {  72,2024 }, {  73,2024 },
 {  74,2024 }, {  75,2024 }, {  76,2024 }, {  77,2024 }, {  78,2024 },
 {  79,2024 }, {  80,2024 }, {  81,2024 }, {  82,2024 }, {  83,2024 },
 {  84,2024 }, {  85,2024 }, {  86,2024 }, {  87,2024 }, {  88,2024 },

 {  89,2024 }, {  90,2024 }, {  91, 774 }, {  92, 774 }, {  93, 774 },
 {  94, 774 }, {  95,2024 }, {  96, 774 }, {  97,1932 }, {  98,2024 },
 {  99,2024 }, { 100,2024 }, { 101,2024 }, { 102,2024 }, { 103,2024 },
 { 104,2024 }, { 105,2024 }, { 106,2024 }, { 107,2024 }, { 108,2024 },
 { 109,2024 }, { 110,2024 }, { 111,2024 }, { 112,2024 }, { 113,2024 },
 { 114,2024 }, { 115,2024 }, { 116,2024 }, { 117,2024 }, { 118,2024 },
 { 119,2024 }, { 120,2024 }, { 121,2024 }, { 122,2024 }, { 123, 774 },
 { 124,1456 }, { 125, 774 }, { 126, 774 }, { 127, 774 }, { 128, 774 },
 { 129, 774 }, { 130, 774 }, { 131, 774 }, { 132, 774 }, { 133, 774 },
 { 134, 774 }, { 135, 774 }, { 136, 774 }, { 137, 774 }, { 138, 774 },

 { 139, 774 }, { 140, 774 }, { 141, 774 }, { 142, 774 }, { 143, 774 },
 { 144, 774 }, { 145, 774 }, { 146, 774 }, { 147, 774 }, { 148, 774 },
 { 149, 774 }, { 150, 774 }, { 151, 774 }, { 152, 774 }, { 153, 774 },
 { 154, 774 }, { 155, 774 }, { 156, 774 }, { 157, 774 }, { 158, 774 },
 { 159, 774 }, { 160, 774 }, { 161, 774 }, { 162, 774 }, { 163, 774 },
 { 164, 774 }, { 165, 774 }, { 166, 774 }, { 167, 774 }, { 168, 774 },
 { 169, 774 }, { 170, 774 }, { 171, 774 }, { 172, 774 }, { 173, 774 },
 { 174, 774 }, { 175, 774 }, { 176, 774 }, { 177, 774 }, { 178, 774 },
 { 179, 774 }, { 180, 774 }, { 181, 774 }, { 182, 774 }, { 183, 774 },
 { 184, 774 }, { 185, 774 }, { 186, 774 }, { 187, 774 }, { 188, 774 },

 { 189, 774 }, { 190, 774 }, { 191, 774 }, { 192, 774 }, { 193, 774 },
 { 194, 774 }, { 195, 774 }, { 196, 774 }, { 197, 774 }, { 198, 774 },
 { 199, 774 }, { 200, 774 }, { 201, 774 }, { 202, 774 }, { 203, 774 },
 { 204, 774 }, { 205, 774 }, { 206, 774 }, { 207, 774 }, { 208, 774 },
 { 209, 774 }, { 210, 774 }, { 211, 774 }, { 212, 774 }, { 213, 774 },
 { 214, 774 }, { 215, 774 }, { 216, 774 }, { 217, 774 }, { 218, 774 },
 { 219, 774 }, { 220, 774 }, { 221, 774 }, { 222, 774 }, { 223, 774 },
 { 224, 774 }, { 225, 774 }, { 226, 774 }, { 227, 774 }, { 228, 774 },
 { 229, 774 }, { 230, 774 }, { 231, 774 }, { 232, 774 }, { 233, 774 },
 { 234, 774 }, { 235, 774 }, { 236, 774 }, { 237, 774 }, { 238, 774 },

 { 239, 774 }, { 240, 774 }, { 241, 774 }, { 242, 774 }, { 243, 774 },
 { 244, 774 }, { 245, 774 }, { 246, 774 }, { 247, 774 }, { 248, 774 },
 { 249, 774 }, { 250, 774 }, { 251, 774 }, { 252, 774 }, { 253, 774 },
 { 254, 774 }, { 255, 774 }, { 256, 774 }, {   0,   1 }, {   0,4129 },
 {   1,1890 }, {   2,1890 }, {   3,1890 }, {   4,1890 }, {   5,1890 },
 {   6,1890 }, {   7,1890 }, {   8,1890 }, {   9,1890 }, {  10,1200 },
 {  11,1890 }, {  12,1890 }, {  13,1202 }, {  14,1890 }, {  15,1890 },
 {  16,1890 }, {  17,1890 }, {  18,1890 }, {  19,1890 }, {  20,1890 },
 {  21,1890 }, {  22,1890 }, {  23,1890 }, {  24,1890 }, {  25,1890 },
 {  26,1890 }, {  27,1890 }, {  28,1890 }, {  29,1890 }, {  30,1890 },

 {  31,1890 }, {  32,1890 }, {  33,1890 }, {  34,1890 }, {  35,1890 },
 {  36,1890 }, {  37,1890 }, {  38,1890 }, {  39,1890 }, {  40,1890 },
 {  41,1890 }, {  42,1890 }, {  43,1890 }, {  44,1890 }, {  45,1890 },
 {  46,1890 }, {  47,1890 }, {  48,1890 }, {  49,1890 }, {  50,1890 },
 {  51,1890 }, {  52,1890 }, {  53,1890 }, {  54,1890 }, {  55,1890 },
 {  56,1890 }, {  57,1890 }, {  58,1890 }, {  59,1890 }, {  60,1890 },
 {  61,1890 }, {  62,1890 }, {  63,1890 }, {  64,1890 }, {  65,1890 },
 {  66,1890 }, {  67,1890 }, {  68,1890 }, {  69,1890 }, {  70,1890 },
 {  71,1890 }, {  72,1890 }, {  73,1890 }, {  74,1890 }, {  75,1890 },
 {  76,1890 }, {  77,1890 }, {  78,1890 }, {  79,1890 }, {  80,1890 },

 {  81,1890 }, {  82,1890 }, {  83,1890 }, {  84,1890 }, {  85,1890 },
 {  86,1890 }, {  87,1890 }, {  88,1890 }, {  89,1890 }, {  90,1890 },
 {  91,1890 }, {  92,1890 }, {  93,1890 }, {  94,1890 }, {  95,1890 },
 {  96,1890 }, {  97,1890 }, {  98,1890 }, {  99,1890 }, { 100,1890 },
 { 101,1890 }, { 102,1890 }, { 103,1890 }, { 104,1890 }, { 105,1890 },
 { 106,1890 }, { 107,1890 }, { 108,1890 }, { 109,1890 }, { 110,1890 },
 { 111,1890 }, { 112,1890 }, { 113,1890 }, { 114,1890 }, { 115,1890 },
 { 116,1890 }, { 117,1890 }, { 118,1890 }, { 119,1890 }, { 120,1890 },
 { 121,1890 }, { 122,1890 }, { 123,1890 }, { 124,1890 }, { 125,1890 },
 { 126,1890 }, { 127,1890 }, { 128,1890 }, { 129,1890 }, { 130,1890 },

 { 131,1890 }, { 132,1890 }, { 133,1890 }, { 134,1890 }, { 135,1890 },
 { 136,1890 }, { 137,1890 }, { 138,1890 }, { 139,1890 }, { 140,1890 },
 { 141,1890 }, { 142,1890 }, { 143,1890 }, { 144,1890 }, { 145,1890 },
 { 146,1890 }, { 147,1890 }, { 148,1890 }, { 149,1890 }, { 150,1890 },
 { 151,1890 }, { 152,1890 }, { 153,1890 }, { 154,1890 }, { 155,1890 },
 { 156,1890 }, { 157,1890 }, { 158,1890 }, { 159,1890 }, { 160,1890 },
 { 161,1890 }, { 162,1890 }, { 163,1890 }, { 164,1890 }, { 165,1890 },
 { 166,1890 }, { 167,1890 }, { 168,1890 }, { 169,1890 }, { 170,1890 },
 { 171,1890 }, { 172,1890 }, { 173,1890 }, { 174,1890 }, { 175,1890 },
 { 176,1890 }, { 177,1890 }, { 178,1890 }, { 179,1890 }, { 180,1890 },

 { 181,1890 }, { 182,1890 }, { 183,1890 }, { 184,1890 }, { 185,1890 },
 { 186,1890 }, { 187,1890 }, { 188,1890 }, { 189,1890 }, { 190,1890 },
 { 191,1890 }, { 192,1890 }, { 193,1890 }, { 194,1890 }, { 195,1890 },
 { 196,1890 }, { 197,1890 }, { 198,1890 }, { 199,1890 }, { 200,1890 },
 { 201,1890 }, { 202,1890 }, { 203,1890 }, { 204,1890 }, { 205,1890 },
 { 206,1890 }, { 207,1890 }, { 208,1890 }, { 209,1890 }, { 210,1890 },
 { 211,1890 }, { 212,1890 }, { 213,1890 }, { 214,1890 }, { 215,1890 },
 { 216,1890 }, { 217,1890 }, { 218,1890 }, { 219,1890 }, { 220,1890 },
 { 221,1890 }, { 222,1890 }, { 223,1890 }, { 224,1890 }, { 225,1890 },
 { 226,1890 }, { 227,1890 }, { 228,1890 }, { 229,1890 }, { 230,1890 },

 { 231,1890 }, { 232,1890 }, { 233,1890 }, { 234,1890 }, { 235,1890 },
 { 236,1890 }, { 237,1890 }, { 238,1890 }, { 239,1890 }, { 240,1890 },
 { 241,1890 }, { 242,1890 }, { 243,1890 }, { 244,1890 }, { 245,1890 },
 { 246,1890 }, { 247,1890 }, { 248,1890 }, { 249,1890 }, { 250,1890 },
 { 251,1890 }, { 252,1890 }, { 253,1890 }, { 254,1890 }, { 255,1890 },
 { 256,1890 }, {   0,   1 }, {   0,3871 }, {   1,1632 }, {   2,1632 },
 {   3,1632 }, {   4,1632 }, {   5,1632 }, {   6,1632 }, {   7,1632 },
 {   8,1632 }, {   9,1632 }, {  10, 942 }, {  11,1632 }, {  12,1632 },
 {  13, 944 }, {  14,1632 }, {  15,1632 }, {  16,1632 }, {  17,1632 },
 {  18,1632 }, {  19,1632 }, {  20,1632 }, {  21,1632 }, {  22,1632 },

 {  23,1632 }, {  24,1632 }, {  25,1632 }, {  26,1632 }, {  27,1632 },
 {  28,1632 }, {  29,1632 }, {  30,1632 }, {  31,1632 }, {  32,1632 },
 {  33,1632 }, {  34,1632 }, {  35,1632 }, {  36,1632 }, {  37,1632 },
 {  38,1632 }, {  39,1632 }, {  40,1632 }, {  41,1632 }, {  42,1632 },
 {  43,1632 }, {  44,1632 }, {  45,1632 }, {  46,1632 }, {  47,1632 },
 {  48,1632 }, {  49,1632 }, {  50,1632 }, {  51,1632 }, {  52,1632 },
 {  53,1632 }, {  54,1632 }, {  55,1632 }, {  56,1632 }, {  57,1632 },
 {  58,1632 }, {  59,1632 }, {  60,1632 }, {  61,1632 }, {  62,1632 },
 {  63,1632 }, {  64,1632 }, {  65,1632 }, {  66,1632 }, {  67,1632 },
 {  68,1632 }, {  69,1632 }, {  70,1632 }, {  71,1632 }, {  72,1632 },

 {  73,1632 }, {  74,1632 }, {  75,1632 }, {  76,1632 }, {  77,1632 },
 {  78,1632 }, {  79,1632 }, {  80,1632 }, {  81,1632 }, {  82,1632 },
 {  83,1632 }, {  84,1632 }, {  85,1632 }, {  86,1632 }, {  87,1632 },
 {  88,1632 }, {  89,1632 }, {  90,1632 }, {  91,1632 }, {  92,1632 },
 {  93,1632 }, {  94,1632 }, {  95,1632 }, {  96,1632 }, {  97,1632 },
 {  98,1632 }, {  99,1632 }, { 100,1632 }, { 101,1632 }, { 102,1632 },
 { 103,1632 }, { 104,1632 }, { 105,1632 }, { 106,1632 }, { 107,1632 },
 { 108,1632 }, { 109,1632 }, { 110,1632 }, { 111,1632 }, { 112,1632 },
 { 113,1632 }, { 114,1632 }, { 115,1632 }, { 116,1632 }, { 117,1632 },
 { 118,1632 }, { 119,1632 }, { 120,1632 }, { 121,1632 }, { 122,1632 },

 { 123,1632 }, { 124,1632 }, { 125,1632 }, { 126,1632 }, { 127,1632 },
 { 128,1632 }, { 129,1632 }, { 130,1632 }, { 131,1632 }, { 132,1632 },
 { 133,1632 }, { 134,1632 }, { 135,1632 }, { 136,1632 }, { 137,1632 },
 { 138,1632 }, { 139,1632 }, { 140,1632 }, { 141,1632 }, { 142,1632 },
 { 143,1632 }, { 144,1632 }, { 145,1632 }, { 146,1632 }, { 147,1632 },
 { 148,1632 }, { 149,1632 }, { 150,1632 }, { 151,1632 }, { 152,1632 },
 { 153,1632 }, { 154,1632 }, { 155,1632 }, { 156,1632 }, { 157,1632 },
 { 158,1632 }, { 159,1632 }, { 160,1632 }, { 161,1632 }, { 162,1632 },
 { 163,1632 }, { 164,1632 }, { 165,1632 }, { 166,1632 }, { 167,1632 },
 { 168,1632 }, { 169,1632 }, { 170,1632 }, { 171,1632 }, { 172,1632 },

 { 173,1632 }, { 174,1632 }, { 175,1632 }, { 176,1632 }, { 177,1632 },
 { 178,1632 }, { 179,1632 }, { 180,1632 }, { 181,1632 }, { 182,1632 },
 { 183,1632 }, { 184,1632 }, { 185,1632 }, { 186,1632 }, { 187,1632 },
 { 188,1632 }, { 189,1632 }, { 190,1632 }, { 191,1632 }, { 192,1632 },
 { 193,1632 }, { 194,1632 }, { 195,1632 }, { 196,1632 }, { 197,1632 },
 { 198,1632 }, { 199,1632 }, { 200,1632 }, { 201,1632 }, { 202,1632 },
 { 203,1632 }, { 204,1632 }, { 205,1632 }, { 206,1632 }, { 207,1632 },
 { 208,1632 }, { 209,1632 }, { 210,1632 }, { 211,1632 }, { 212,1632 },
 { 213,1632 }, { 214,1632 }, { 215,1632 }, { 216,1632 }, { 217,1632 },
 { 218,1632 }, { 219,1632 }, { 220,1632 }, { 221,1632 }, { 222,1632 },

 { 223,1632 }, { 224,1632 }, { 225,1632 }, { 226,1632 }, { 227,1632 },
 { 228,1632 }, { 229,1632 }, { 230,1632 }, { 231,1632 }, { 232,1632 },
 { 233,1632 }, { 234,1632 }, { 235,1632 }, { 236,1632 }, { 237,1632 },
 { 238,1632 }, { 239,1632 }, { 240,1632 }, { 241,1632 }, { 242,1632 },
 { 243,1632 }, { 244,1632 }, { 245,1632 }, { 246,1632 }, { 247,1632 },
 { 248,1632 }, { 249,1632 }, { 250,1632 }, { 251,1632 }, { 252,1632 },
 { 253,1632 }, { 254,1632 }, { 255,1632 }, { 256,1632 }, {   0,  29 },
 {   0,3613 }, {   0,   3 }, {   0,3611 }, {   0,   2 }, {   0,3609 },
 {   0,   2 }, {   0,3607 }, {   0,  29 }, {   0,3605 }, {   0,   0 },
 {   0,   0 }, {   9, 687 }, {   0,   0 }, {   0,   0 }, {  12, 687 },

 {   0,   0 }, {  10, 685 }, {  13, 687 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {  32, 687 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   9 }, {   0,3557 }, {   1,1576 }, {   2,1576 }, {   3,1576 },
 {   4,1576 }, {   5,1576 }, {   6,1576 }, {   7,1576 }, {   8,1576 },

 {   9,1576 }, {   0,   0 }, {  11,1576 }, {  12,1576 }, {  61, 685 },
 {  14,1576 }, {  15,1576 }, {  16,1576 }, {  17,1576 }, {  18,1576 },
 {  19,1576 }, {  20,1576 }, {  21,1576 }, {  22,1576 }, {  23,1576 },
 {  24,1576 }, {  25,1576 }, {  26,1576 }, {  27,1576 }, {  28,1576 },
 {  29,1576 }, {  30,1576 }, {  31,1576 }, {  32,1576 }, {  33,1576 },
 {  34, 639 }, {  35,1576 }, {  36,1576 }, {  37,1576 }, {  38,1576 },
 {  39,1576 }, {  40,1576 }, {  41,1576 }, {  42,1576 }, {  43,1576 },
 {  44,1576 }, {  45,1576 }, {  46,1576 }, {  47,1576 }, {  48,1576 },
 {  49,1576 }, {  50,1576 }, {  51,1576 }, {  52,1576 }, {  53,1576 },
 {  54,1576 }, {  55,1576 }, {  56,1576 }, {  57,1576 }, {  58,1576 },

 {  59,1576 }, {  60,1576 }, {  61,1576 }, {  62,1576 }, {  63,1576 },
 {  64,1576 }, {  65,1576 }, {  66,1576 }, {  67,1576 }, {  68,1576 },
 {  69,1576 }, {  70,1576 }, {  71,1576 }, {  72,1576 }, {  73,1576 },
 {  74,1576 }, {  75,1576 }, {  76,1576 }, {  77,1576 }, {  78,1576 },
 {  79,1576 }, {  80,1576 }, {  81,1576 }, {  82,1576 }, {  83,1576 },
 {  84,1576 }, {  85,1576 }, {  86,1576 }, {  87,1576 }, {  88,1576 },
 {  89,1576 }, {  90,1576 }, {  91,1576 }, {  92,1576 }, {  93,1576 },
 {  94,1576 }, {  95,1576 }, {  96,1576 }, {  97,1576 }, {  98,1576 },
 {  99,1576 }, { 100,1576 }, { 101,1576 }, { 102,1576 }, { 103,1576 },
 { 104,1576 }, { 105,1576 }, { 106,1576 }, { 107,1576 }, { 108,1576 },

 { 109,1576 }, { 110,1576 }, { 111,1576 }, { 112,1576 }, { 113,1576 },
 { 114,1576 }, { 115,1576 }, { 116,1576 }, { 117,1576 }, { 118,1576 },
 { 119,1576 }, { 120,1576 }, { 121,1576 }, { 122,1576 }, { 123,1576 },
 { 124,1576 }, { 125,1576 }, { 126,1576 }, { 127,1576 }, { 128,1576 },
 { 129,1576 }, { 130,1576 }, { 131,1576 }, { 132,1576 }, { 133,1576 },
 { 134,1576 }, { 135,1576 }, { 136,1576 }, { 137,1576 }, { 138,1576 },
 { 139,1576 }, { 140,1576 }, { 141,1576 }, { 142,1576 }, { 143,1576 },
 { 144,1576 }, { 145,1576 }, { 146,1576 }, { 147,1576 }, { 148,1576 },
 { 149,1576 }, { 150,1576 }, { 151,1576 }, { 152,1576 }, { 153,1576 },
 { 154,1576 }, { 155,1576 }, { 156,1576 }, { 157,1576 }, { 158,1576 },

 { 159,1576 }, { 160,1576 }, { 161,1576 }, { 162,1576 }, { 163,1576 },
 { 164,1576 }, { 165,1576 }, { 166,1576 }, { 167,1576 }, { 168,1576 },
 { 169,1576 }, { 170,1576 }, { 171,1576 }, { 172,1576 }, { 173,1576 },
 { 174,1576 }, { 175,1576 }, { 176,1576 }, { 177,1576 }, { 178,1576 },
 { 179,1576 }, { 180,1576 }, { 181,1576 }, { 182,1576 }, { 183,1576 },
 { 184,1576 }, { 185,1576 }, { 186,1576 }, { 187,1576 }, { 188,1576 },
 { 189,1576 }, { 190,1576 }, { 191,1576 }, { 192,1576 }, { 193,1576 },
 { 194,1576 }, { 195,1576 }, { 196,1576 }, { 197,1576 }, { 198,1576 },
 { 199,1576 }, { 200,1576 }, { 201,1576 }, { 202,1576 }, { 203,1576 },
 { 204,1576 }, { 205,1576 }, { 206,1576 }, { 207,1576 }, { 208,1576 },

 { 209,1576 }, { 210,1576 }, { 211,1576 }, { 212,1576 }, { 213,1576 },
 { 214,1576 }, { 215,1576 }, { 216,1576 }, { 217,1576 }, { 218,1576 },
 { 219,1576 }, { 220,1576 }, { 221,1576 }, { 222,1576 }, { 223,1576 },
 { 224,1576 }, { 225,1576 }, { 226,1576 }, { 227,1576 }, { 228,1576 },
 { 229,1576 }, { 230,1576 }, { 231,1576 }, { 232,1576 }, { 233,1576 },
 { 234,1576 }, { 235,1576 }, { 236,1576 }, { 237,1576 }, { 238,1576 },
 { 239,1576 }, { 240,1576 }, { 241,1576 }, { 242,1576 }, { 243,1576 },
 { 244,1576 }, { 245,1576 }, { 246,1576 }, { 247,1576 }, { 248,1576 },
 { 249,1576 }, { 250,1576 }, { 251,1576 }, { 252,1576 }, { 253,1576 },
 { 254,1576 }, { 255,1576 }, { 256,1576 }, {   0,  29 }, {   0,3299 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,  29 }, {   0,3275 }, {   0,  29 },
 {   0,3273 }, {   0,   0 }, {   0,  29 }, {   0,3270 }, {   0,  29 },
 {   0,3268 }, {   0,  29 }, {   0,3266 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {  48,1576 }, {  49,1576 }, {  50,1576 },

 {  51,1576 }, {  52,1576 }, {  53,1576 }, {  54,1576 }, {  55,1576 },
 {  56,1576 }, {  57,1576 }, {  34, 374 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {  39, 376 }, {  38, 379 }, {  65,1576 },
 {  66,1576 }, {  67,1576 }, {  68,1576 }, {  69,1576 }, {  70,1576 },
 {  42, 394 }, {  48, 379 }, {  49, 379 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  60, 408 }, {  61, 410 }, {  62, 416 }, {  61, 416 }, {   0,   0 },
 {   0,   0 }, {  97,1576 }, {  98,1576 }, {  99,1576 }, { 100,1576 },

 { 101,1576 }, { 102,1576 }, {   0,   8 }, {   0,3195 }, {   1,1576 },
 {   2,1576 }, {   3,1576 }, {   4,1576 }, {   5,1576 }, {   6,1576 },
 {   7,1576 }, {   8,1576 }, {   9,1576 }, {   0,   0 }, {  11,1576 },
 {  12,1576 }, {   0,   0 }, {  14,1576 }, {  15,1576 }, {  16,1576 },
 {  17,1576 }, {  18,1576 }, {  19,1576 }, {  20,1576 }, {  21,1576 },
 {  22,1576 }, {  23,1576 }, {  24,1576 }, {  25,1576 }, {  26,1576 },
 {  27,1576 }, {  28,1576 }, {  29,1576 }, {  30,1576 }, {  31,1576 },
 {  32,1576 }, {  33,1576 }, {  34,1576 }, {  35,1576 }, {  36,1576 },
 {  37,1576 }, {  38,1576 }, {  39, 305 }, {  40,1576 }, {  41,1576 },
 {  42,1576 }, {  43,1576 }, {  44,1576 }, {  45,1576 }, {  46,1576 },

 {  47,1576 }, {  48,1576 }, {  49,1576 }, {  50,1576 }, {  51,1576 },
 {  52,1576 }, {  53,1576 }, {  54,1576 }, {  55,1576 }, {  56,1576 },
 {  57,1576 }, {  58,1576 }, {  59,1576 }, {  60,1576 }, {  61,1576 },
 {  62,1576 }, {  63,1576 }, {  64,1576 }, {  65,1576 }, {  66,1576 },
 {  67,1576 }, {  68,1576 }, {  69,1576 }, {  70,1576 }, {  71,1576 },
 {  72,1576 }, {  73,1576 }, {  74,1576 }, {  75,1576 }, {  76,1576 },
 {  77,1576 }, {  78,1576 }, {  79,1576 }, {  80,1576 }, {  81,1576 },
 {  82,1576 }, {  83,1576 }, {  84,1576 }, {  85,1576 }, {  86,1576 },
 {  87,1576 }, {  88,1576 }, {  89,1576 }, {  90,1576 }, {  91,1576 },
 {  92,1576 }, {  93,1576 }, {  94,1576 }, {  95,1576 }, {  96,1576 },

 {  97,1576 }, {  98,1576 }, {  99,1576 }, { 100,1576 }, { 101,1576 },
 { 102,1576 }, { 103,1576 }, { 104,1576 }, { 105,1576 }, { 106,1576 },
 { 107,1576 }, { 108,1576 }, { 109,1576 }, { 110,1576 }, { 111,1576 },
 { 112,1576 }, { 113,1576 }, { 114,1576 }, { 115,1576 }, { 116,1576 },
 { 117,1576 }, { 118,1576 }, { 119,1576 }, { 120,1576 }, { 121,1576 },
 { 122,1576 }, { 123,1576 }, { 124,1576 }, { 125,1576 }, { 126,1576 },
 { 127,1576 }, { 128,1576 }, { 129,1576 }, { 130,1576 }, { 131,1576 },
 { 132,1576 }, { 133,1576 }, { 134,1576 }, { 135,1576 }, { 136,1576 },
 { 137,1576 }, { 138,1576 }, { 139,1576 }, { 140,1576 }, { 141,1576 },
 { 142,1576 }, { 143,1576 }, { 144,1576 }, { 145,1576 }, { 146,1576 },

 { 147,1576 }, { 148,1576 }, { 149,1576 }, { 150,1576 }, { 151,1576 },
 { 152,1576 }, { 153,1576 }, { 154,1576 }, { 155,1576 }, { 156,1576 },
 { 157,1576 }, { 158,1576 }, { 159,1576 }, { 160,1576 }, { 161,1576 },
 { 162,1576 }, { 163,1576 }, { 164,1576 }, { 165,1576 }, { 166,1576 },
 { 167,1576 }, { 168,1576 }, { 169,1576 }, { 170,1576 }, { 171,1576 },
 { 172,1576 }, { 173,1576 }, { 174,1576 }, { 175,1576 }, { 176,1576 },
 { 177,1576 }, { 178,1576 }, { 179,1576 }, { 180,1576 }, { 181,1576 },
 { 182,1576 }, { 183,1576 }, { 184,1576 }, { 185,1576 }, { 186,1576 },
 { 187,1576 }, { 188,1576 }, { 189,1576 }, { 190,1576 }, { 191,1576 },
 { 192,1576 }, { 193,1576 }, { 194,1576 }, { 195,1576 }, { 196,1576 },

 { 197,1576 }, { 198,1576 }, { 199,1576 }, { 200,1576 }, { 201,1576 },
 { 202,1576 }, { 203,1576 }, { 204,1576 }, { 205,1576 }, { 206,1576 },
 { 207,1576 }, { 208,1576 }, { 209,1576 }, { 210,1576 }, { 211,1576 },
 { 212,1576 }, { 213,1576 }, { 214,1576 }, { 215,1576 }, { 216,1576 },
 { 217,1576 }, { 218,1576 }, { 219,1576 }, { 220,1576 }, { 221,1576 },
 { 222,1576 }, { 223,1576 }, { 224,1576 }, { 225,1576 }, { 226,1576 },
 { 227,1576 }, { 228,1576 }, { 229,1576 }, { 230,1576 }, { 231,1576 },
 { 232,1576 }, { 233,1576 }, { 234,1576 }, { 235,1576 }, { 236,1576 },
 { 237,1576 }, { 238,1576 }, { 239,1576 }, { 240,1576 }, { 241,1576 },
 { 242,1576 }, { 243,1576 }, { 244,1576 }, { 245,1576 }, { 246,1576 },

 { 247,1576 }, { 248,1576 }, { 249,1576 }, { 250,1576 }, { 251,1576 },
 { 252,1576 }, { 253,1576 }, { 254,1576 }, { 255,1576 }, { 256,1576 },
 {   0,  10 }, {   0,2937 }, {   0,  29 }, {   0,2935 }, {   0,   0 },
 {   0,   0 }, {   0,  29 }, {   0,2931 }, {   0,   1 }, {   0,2929 },
 {   0,   1 }, {   0,2927 }, {   0,   0 }, {   0,   3 }, {   0,2924 },
 {   0,   2 }, {   0,2922 }, {   0,  21 }, {   0,2920 }, {   0,   7 },
 {   0,2918 }, {  10, 124 }, {  13, 126 }, {   9,   0 }, {   0,   0 },
 {   0,   0 }, {  12,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,2901 }, {   0,   0 }, {   0,2899 },

 {   0,   0 }, {   0,  15 }, {   0,2896 }, {   0,  25 }, {   0,2894 },
 {   0,   0 }, {  32,   0 }, {   0,   6 }, {   0,2890 }, {  48,1576 },
 {  49,1576 }, {  50,1635 }, {  51,1635 }, {  52,1635 }, {  53,1635 },
 {  54,1635 }, {  55,1635 }, {  56,1635 }, {  57,1635 }, {   0,  10 },
 {   0,2878 }, {   0,  28 }, {   0,2876 }, {   0,   0 }, {  61,  90 },
 {  62,  92 }, {  65,1694 }, {  66,1753 }, {  67,1694 }, {  68,1694 },
 {  69,1694 }, {  70,1694 }, {  35, 108 }, {  72,  75 }, {  35, 127 },
 {   0,  11 }, {   0,2862 }, {   0,  26 }, {   0,2860 }, {   0,  22 },
 {   0,2858 }, {   0,   0 }, {  45, 108 }, {   0,   0 }, {  45, 127 },
 {   0,  20 }, {   0,2852 }, {   0,  19 }, {   0,2850 }, {  88,1778 },

 {  48,   0 }, {  49,   0 }, {   0,  23 }, {   0,2845 }, {   0,  27 },
 {   0,2843 }, {   0,  24 }, {   0,2841 }, {  97,1694 }, {  98,1753 },
 {  99,1694 }, { 100,1694 }, { 101,1694 }, { 102,1694 }, {   0,   0 },
 { 104,  75 }, {   0,   1 }, {   0,2831 }, {  48,1517 }, {  49,1517 },
 {  50,1576 }, {  51,1576 }, {  52,1576 }, {  53,1576 }, {  54,1576 },
 {  55,1576 }, {  56,1576 }, {  57,1576 }, {   0,  10 }, {   0,2819 },
 {  13,  28 }, { 120,1778 }, {   0,   1 }, {   0,2815 }, {   0,   0 },
 {  65,1635 }, {  66,1757 }, {  67,1635 }, {  68,1635 }, {  69,1635 },
 {  70,1635 }, { 124,  90 }, {  72,  16 }, {  10,  12 }, {   0,   1 },
 {   0,2803 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,2793 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {  97,1635 }, {  98,1757 }, {  99,1635 },
 { 100,1635 }, { 101,1635 }, { 102,1635 }, {   0,   0 }, { 104,  16 },
 {   0,   0 }, {   0,2772 }, {  48,1517 }, {  49,1517 }, {  50,1517 },
 {  51,1517 }, {  52,1517 }, {  53,1517 }, {  54,1517 }, {  55,1517 },
 {  56,1517 }, {  57,1517 }, {   0,   5 }, {   0,2760 }, {  34,  37 },
 {  35,   0 }, {   0,  18 }, {   0,2756 }, {   0,   0 }, {  65,1576 },
 {  66,1576 }, {  67,1576 }, {  68,1576 }, {  69,1576 }, {  70,1576 },

 {  45,   0 }, {  72, -43 }, {   0,  17 }, {   0,2745 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {  35,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  39,  27 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {  45,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {  97,1576 }, {  98,1576 }, {  99,1576 }, { 100,1576 },
 { 101,1576 }, { 102,1576 }, {   0,   0 }, { 104, -43 }, {   0,   4 },
 {   0,2713 }, {   1,1698 }, {   2,1698 }, {   3,1698 }, {   4,1698 },
 {   5,1698 }, {   6,1698 }, {   7,1698 }, {   8,1698 }, {   9,1698 },
 {   0,   0 }, {  11,1698 }, {  12,1698 }, {  13,1698 }, {  14,1698 },

 {  15,1698 }, {  16,1698 }, {  17,1698 }, {  18,1698 }, {  19,1698 },
 {  20,1698 }, {  21,1698 }, {  22,1698 }, {  23,1698 }, {  24,1698 },
 {  25,1698 }, {  26,1698 }, {  27,1698 }, {  28,1698 }, {  29,1698 },
 {  30,1698 }, {  31,1698 }, {  32,1698 }, {  33,1698 }, {  34,1698 },
 {  35,1698 }, {  36,1698 }, {  37,1698 }, {  38,1698 }, {  39,1698 },
 {  40,1698 }, {  41,1698 }, {  42,1698 }, {  43,1698 }, {  44,1698 },
 {  45,1698 }, {  46,1698 }, {  47,1698 }, {  48,1698 }, {  49,1698 },
 {  50,1698 }, {  51,1698 }, {  52,1698 }, {  53,1698 }, {  54,1698 },
 {  55,1698 }, {  56,1698 }, {  57,1698 }, {  58,1698 }, {  59,1698 },
 {  60,1698 }, {  61,1698 }, {  62,1698 }, {  63,1698 }, {  64,1698 },

 {  65,1698 }, {  66,1698 }, {  67,1698 }, {  68,1698 }, {  69,1698 },
 {  70,1698 }, {  71,1698 }, {  72,1698 }, {  73,1698 }, {  74,1698 },
 {  75,1698 }, {  76,1698 }, {  77,1698 }, {  78,1698 }, {  79,1698 },
 {  80,1698 }, {  81,1698 }, {  82,1698 }, {  83,1698 }, {  84,1698 },
 {  85,1698 }, {  86,1698 }, {  87,1698 }, {  88,1698 }, {  89,1698 },
 {  90,1698 }, {  91,1698 }, {  92,1698 }, {  93,1698 }, {  94,1698 },
 {  95,1698 }, {  96,1698 }, {  97,1698 }, {  98,1698 }, {  99,1698 },
 { 100,1698 }, { 101,1698 }, { 102,1698 }, { 103,1698 }, { 104,1698 },
 { 105,1698 }, { 106,1698 }, { 107,1698 }, { 108,1698 }, { 109,1698 },
 { 110,1698 }, { 111,1698 }, { 112,1698 }, { 113,1698 }, { 114,1698 },

 { 115,1698 }, { 116,1698 }, { 117,1698 }, { 118,1698 }, { 119,1698 },
 { 120,1698 }, { 121,1698 }, { 122,1698 }, { 123,1698 }, { 124,1698 },
 { 125,1698 }, { 126,1698 }, { 127,1698 }, { 128,1698 }, { 129,1698 },
 { 130,1698 }, { 131,1698 }, { 132,1698 }, { 133,1698 }, { 134,1698 },
 { 135,1698 }, { 136,1698 }, { 137,1698 }, { 138,1698 }, { 139,1698 },
 { 140,1698 }, { 141,1698 }, { 142,1698 }, { 143,1698 }, { 144,1698 },
 { 145,1698 }, { 146,1698 }, { 147,1698 }, { 148,1698 }, { 149,1698 },
 { 150,1698 }, { 151,1698 }, { 152,1698 }, { 153,1698 }, { 154,1698 },
 { 155,1698 }, { 156,1698 }, { 157,1698 }, { 158,1698 }, { 159,1698 },
 { 160,1698 }, { 161,1698 }, { 162,1698 }, { 163,1698 }, { 164,1698 },

 { 165,1698 }, { 166,1698 }, { 167,1698 }, { 168,1698 }, { 169,1698 },
 { 170,1698 }, { 171,1698 }, { 172,1698 }, { 173,1698 }, { 174,1698 },
 { 175,1698 }, { 176,1698 }, { 177,1698 }, { 178,1698 }, { 179,1698 },
 { 180,1698 }, { 181,1698 }, { 182,1698 }, { 183,1698 }, { 184,1698 },
 { 185,1698 }, { 186,1698 }, { 187,1698 }, { 188,1698 }, { 189,1698 },
 { 190,1698 }, { 191,1698 }, { 192,1698 }, { 193,1698 }, { 194,1698 },
 { 195,1698 }, { 196,1698 }, { 197,1698 }, { 198,1698 }, { 199,1698 },
 { 200,1698 }, { 201,1698 }, { 202,1698 }, { 203,1698 }, { 204,1698 },
 { 205,1698 }, { 206,1698 }, { 207,1698 }, { 208,1698 }, { 209,1698 },
 { 210,1698 }, { 211,1698 }, { 212,1698 }, { 213,1698 }, { 214,1698 },

 { 215,1698 }, { 216,1698 }, { 217,1698 }, { 218,1698 }, { 219,1698 },
 { 220,1698 }, { 221,1698 }, { 222,1698 }, { 223,1698 }, { 224,1698 },
 { 225,1698 }, { 226,1698 }, { 227,1698 }, { 228,1698 }, { 229,1698 },
 { 230,1698 }, { 231,1698 }, { 232,1698 }, { 233,1698 }, { 234,1698 },
 { 235,1698 }, { 236,1698 }, { 237,1698 }, { 238,1698 }, { 239,1698 },
 { 240,1698 }, { 241,1698 }, { 242,1698 }, { 243,1698 }, { 244,1698 },
 { 245,1698 }, { 246,1698 }, { 247,1698 }, { 248,1698 }, { 249,1698 },
 { 250,1698 }, { 251,1698 }, { 252,1698 }, { 253,1698 }, { 254,1698 },
 { 255,1698 }, { 256,1698 }, {   0,   5 }, {   0,2455 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {  48,1698 }, {  49,1698 }, {  50,1698 }, {  51,1698 },
 {  52,1698 }, {  53,1698 }, {  54,1698 }, {  55,1698 }, {  56,1698 },

 {  57,1698 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {  65,1698 }, {  66,1698 },
 {  67,1698 }, {  68,1698 }, {  69,1698 }, {  70,1790 }, {  71,1698 },
 {  72,1698 }, {  73,1698 }, {  74,1698 }, {  75,1698 }, {  76,1698 },
 {  77,1698 }, {  78,1698 }, {  79,1698 }, {  80,1698 }, {  81,1698 },
 {  82,1698 }, {  83,1698 }, {  84,1698 }, {  85,1698 }, {  86,1698 },
 {  87,1698 }, {  88,1698 }, {  89,1698 }, {  90,1698 }, {   0,   5 },
 {   0,2363 }, {   0,   0 }, {   0,   0 }, {  95,1698 }, {   0,   0 },
 {  97,1698 }, {  98,1698 }, {  99,1698 }, { 100,1698 }, { 101,1698 },
 { 102,1790 }, { 103,1698 }, { 104,1698 }, { 105,1698 }, { 106,1698 },

 { 107,1698 }, { 108,1698 }, { 109,1698 }, { 110,1698 }, { 111,1698 },
 { 112,1698 }, { 113,1698 }, { 114,1698 }, { 115,1698 }, { 116,1698 },
 { 117,1698 }, { 118,1698 }, { 119,1698 }, { 120,1698 }, { 121,1698 },
 { 122,1698 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {  48,1606 }, {  49,1606 },
 {  50,1606 }, {  51,1606 }, {  52,1606 }, {  53,1606 }, {  54,1606 },
 {  55,1606 }, {  56,1606 }, {  57,1606 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {  65,1606 }, {  66,1606 }, {  67,1606 }, {  68,1606 }, {  69,1606 },
 {  70,1606 }, {  71,1606 }, {  72,1606 }, {  73,1606 }, {  74,1606 },
 {  75,1606 }, {  76,1606 }, {  77,1606 }, {  78,1606 }, {  79,1606 },
 {  80,1606 }, {  81,1606 }, {  82,1606 }, {  83,1606 }, {  84,1606 },
 {  85,1606 }, {  86,1606 }, {  87,1606 }, {  88,1606 }, {  89,1606 },
 {  90,1606 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  95,1606 }, {   0,   0 }, {  97,1606 }, {  98,1606 }, {  99,1606 },
 { 100,1606 }, { 101,1606 }, { 102,1606 }, { 103,1606 }, { 104,1606 },
 { 105,1606 }, { 106,1606 }, { 107,1606 }, { 108,1606 }, { 109,1606 },
 { 110,1606 }, { 111,1606 }, { 112,1606 }, { 113,1606 }, { 114,1606 },

 { 115,1606 }, { 116,1606 }, { 117,1606 }, { 118,1606 }, { 119,1606 },
 { 120,1606 }, { 121,1606 }, { 122,1606 }, {   0,   1 }, {   0,2239 },
 {   1,1698 }, {   2,1698 }, {   3,1698 }, {   4,1698 }, {   5,1698 },
 {   6,1698 }, {   7,1698 }, {   8,1698 }, {   9,1698 }, {  10,-592 },
 {  11,1698 }, {  12,1698 }, {  13,-576 }, {  14,1698 }, {  15,1698 },
 {  16,1698 }, {  17,1698 }, {  18,1698 }, {  19,1698 }, {  20,1698 },
 {  21,1698 }, {  22,1698 }, {  23,1698 }, {  24,1698 }, {  25,1698 },
 {  26,1698 }, {  27,1698 }, {  28,1698 }, {  29,1698 }, {  30,1698 },
 {  31,1698 }, {  32,1698 }, {  33,1698 }, {  34,1698 }, {  35,1698 },
 {  36,1698 }, {  37,1698 }, {  38,1698 }, {  39,1698 }, {  40,1698 },

 {  41,1698 }, {  42,1698 }, {  43,1698 }, {  44,1698 }, {  45,1698 },
 {  46,1698 }, {  47,1698 }, {  48,1698 }, {  49,1698 }, {  50,1698 },
 {  51,1698 }, {  52,1698 }, {  53,1698 }, {  54,1698 }, {  55,1698 },
 {  56,1698 }, {  57,1698 }, {  58,1698 }, {  59,1698 }, {  60,1698 },
 {  61,1698 }, {  62,1698 }, {  63,1698 }, {  64,1698 }, {  65,1698 },
 {  66,1698 }, {  67,1698 }, {  68,1698 }, {  69,1698 }, {  70,1698 },
 {  71,1698 }, {  72,1698 }, {  73,1698 }, {  74,1698 }, {  75,1698 },
 {  76,1698 }, {  77,1698 }, {  78,1698 }, {  79,1698 }, {  80,1698 },
 {  81,1698 }, {  82,1698 }, {  83,1698 }, {  84,1698 }, {  85,1698 },
 {  86,1698 }, {  87,1698 }, {  88,1698 }, {  89,1698 }, {  90,1698 },

 {  91,1698 }, {  92,1698 }, {  93,1698 }, {  94,1698 }, {  95,1698 },
 {  96,1698 }, {  97,1698 }, {  98,1698 }, {  99,1698 }, { 100,1698 },
 { 101,1698 }, { 102,1698 }, { 103,1698 }, { 104,1698 }, { 105,1698 },
 { 106,1698 }, { 107,1698 }, { 108,1698 }, { 109,1698 }, { 110,1698 },
 { 111,1698 }, { 112,1698 }, { 113,1698 }, { 114,1698 }, { 115,1698 },
 { 116,1698 }, { 117,1698 }, { 118,1698 }, { 119,1698 }, { 120,1698 },
 { 121,1698 }, { 122,1698 }, { 123,1698 }, { 124,1698 }, { 125,1698 },
 { 126,1698 }, { 127,1698 }, { 128,1698 }, { 129,1698 }, { 130,1698 },
 { 131,1698 }, { 132,1698 }, { 133,1698 }, { 134,1698 }, { 135,1698 },
 { 136,1698 }, { 137,1698 }, { 138,1698 }, { 139,1698 }, { 140,1698 },

 { 141,1698 }, { 142,1698 }, { 143,1698 }, { 144,1698 }, { 145,1698 },
 { 146,1698 }, { 147,1698 }, { 148,1698 }, { 149,1698 }, { 150,1698 },
 { 151,1698 }, { 152,1698 }, { 153,1698 }, { 154,1698 }, { 155,1698 },
 { 156,1698 }, { 157,1698 }, { 158,1698 }, { 159,1698 }, { 160,1698 },
 { 161,1698 }, { 162,1698 }, { 163,1698 }, { 164,1698 }, { 165,1698 },
 { 166,1698 }, { 167,1698 }, { 168,1698 }, { 169,1698 }, { 170,1698 },
 { 171,1698 }, { 172,1698 }, { 173,1698 }, { 174,1698 }, { 175,1698 },
 { 176,1698 }, { 177,1698 }, { 178,1698 }, { 179,1698 }, { 180,1698 },
 { 181,1698 }, { 182,1698 }, { 183,1698 }, { 184,1698 }, { 185,1698 },
 { 186,1698 }, { 187,1698 }, { 188,1698 }, { 189,1698 }, { 190,1698 },

 { 191,1698 }, { 192,1698 }, { 193,1698 }, { 194,1698 }, { 195,1698 },
 { 196,1698 }, { 197,1698 }, { 198,1698 }, { 199,1698 }, { 200,1698 },
 { 201,1698 }, { 202,1698 }, { 203,1698 }, { 204,1698 }, { 205,1698 },
 { 206,1698 }, { 207,1698 }, { 208,1698 }, { 209,1698 }, { 210,1698 },
 { 211,1698 }, { 212,1698 }, { 213,1698 }, { 214,1698 }, { 215,1698 },
 { 216,1698 }, { 217,1698 }, { 218,1698 }, { 219,1698 }, { 220,1698 },
 { 221,1698 }, { 222,1698 }, { 223,1698 }, { 224,1698 }, { 225,1698 },
 { 226,1698 }, { 227,1698 }, { 228,1698 }, { 229,1698 }, { 230,1698 },
 { 231,1698 }, { 232,1698 }, { 233,1698 }, { 234,1698 }, { 235,1698 },
 { 236,1698 }, { 237,1698 }, { 238,1698 }, { 239,1698 }, { 240,1698 },

 { 241,1698 }, { 242,1698 }, { 243,1698 }, { 244,1698 }, { 245,1698 },
 { 246,1698 }, { 247,1698 }, { 248,1698 }, { 249,1698 }, { 250,1698 },
 { 251,1698 }, { 252,1698 }, { 253,1698 }, { 254,1698 }, { 255,1698 },
 { 256,1698 }, {   0,   9 }, {   0,1981 }, {   1,   0 }, {   2,   0 },
 {   3,   0 }, {   4,   0 }, {   5,   0 }, {   6,   0 }, {   7,   0 },
 {   8,   0 }, {   9,   0 }, {   0,   0 }, {  11,   0 }, {  12,   0 },
 {   0,   0 }, {  14,   0 }, {  15,   0 }, {  16,   0 }, {  17,   0 },
 {  18,   0 }, {  19,   0 }, {  20,   0 }, {  21,   0 }, {  22,   0 },
 {  23,   0 }, {  24,   0 }, {  25,   0 }, {  26,   0 }, {  27,   0 },
 {  28,   0 }, {  29,   0 }, {  30,   0 }, {  31,   0 }, {  32,   0 },

 {  33,   0 }, {  34,-937 }, {  35,   0 }, {  36,   0 }, {  37,   0 },
 {  38,   0 }, {  39,   0 }, {  40,   0 }, {  41,   0 }, {  42,   0 },
 {  43,   0 }, {  44,   0 }, {  45,   0 }, {  46,   0 }, {  47,   0 },
 {  48,   0 }, {  49,   0 }, {  50,   0 }, {  51,   0 }, {  52,   0 },
 {  53,   0 }, {  54,   0 }, {  55,   0 }, {  56,   0 }, {  57,   0 },
 {  58,   0 }, {  59,   0 }, {  60,   0 }, {  61,   0 }, {  62,   0 },
 {  63,   0 }, {  64,   0 }, {  65,   0 }, {  66,   0 }, {  67,   0 },
 {  68,   0 }, {  69,   0 }, {  70,   0 }, {  71,   0 }, {  72,   0 },
 {  73,   0 }, {  74,   0 }, {  75,   0 }, {  76,   0 }, {  77,   0 },
 {  78,   0 }, {  79,   0 }, {  80,   0 }, {  81,   0 }, {  82,   0 },

 {  83,   0 }, {  84,   0 }, {  85,   0 }, {  86,   0 }, {  87,   0 },
 {  88,   0 }, {  89,   0 }, {  90,   0 }, {  91,   0 }, {  92,   0 },
 {  93,   0 }, {  94,   0 }, {  95,   0 }, {  96,   0 }, {  97,   0 },
 {  98,   0 }, {  99,   0 }, { 100,   0 }, { 101,   0 }, { 102,   0 },
 { 103,   0 }, { 104,   0 }, { 105,   0 }, { 106,   0 }, { 107,   0 },
 { 108,   0 }, { 109,   0 }, { 110,   0 }, { 111,   0 }, { 112,   0 },
 { 113,   0 }, { 114,   0 }, { 115,   0 }, { 116,   0 }, { 117,   0 },
 { 118,   0 }, { 119,   0 }, { 120,   0 }, { 121,   0 }, { 122,   0 },
 { 123,   0 }, { 124,   0 }, { 125,   0 }, { 126,   0 }, { 127,   0 },
 { 128,   0 }, { 129,   0 }, { 130,   0 }, { 131,   0 }, { 132,   0 },

 { 133,   0 }, { 134,   0 }, { 135,   0 }, { 136,   0 }, { 137,   0 },
 { 138,   0 }, { 139,   0 }, { 140,   0 }, { 141,   0 }, { 142,   0 },
 { 143,   0 }, { 144,   0 }, { 145,   0 }, { 146,   0 }, { 147,   0 },
 { 148,   0 }, { 149,   0 }, { 150,   0 }, { 151,   0 }, { 152,   0 },
 { 153,   0 }, { 154,   0 }, { 155,   0 }, { 156,   0 }, { 157,   0 },
 { 158,   0 }, { 159,   0 }, { 160,   0 }, { 161,   0 }, { 162,   0 },
 { 163,   0 }, { 164,   0 }, { 165,   0 }, { 166,   0 }, { 167,   0 },
 { 168,   0 }, { 169,   0 }, { 170,   0 }, { 171,   0 }, { 172,   0 },
 { 173,   0 }, { 174,   0 }, { 175,   0 }, { 176,   0 }, { 177,   0 },
 { 178,   0 }, { 179,   0 }, { 180,   0 }, { 181,   0 }, { 182,   0 },

 { 183,   0 }, { 184,   0 }, { 185,   0 }, { 186,   0 }, { 187,   0 },
 { 188,   0 }, { 189,   0 }, { 190,   0 }, { 191,   0 }, { 192,   0 },
 { 193,   0 }, { 194,   0 }, { 195,   0 }, { 196,   0 }, { 197,   0 },
 { 198,   0 }, { 199,   0 }, { 200,   0 }, { 201,   0 }, { 202,   0 },
 { 203,   0 }, { 204,   0 }, { 205,   0 }, { 206,   0 }, { 207,   0 },
 { 208,   0 }, { 209,   0 }, { 210,   0 }, { 211,   0 }, { 212,   0 },
 { 213,   0 }, { 214,   0 }, { 215,   0 }, { 216,   0 }, { 217,   0 },
 { 218,   0 }, { 219,   0 }, { 220,   0 }, { 221,   0 }, { 222,   0 },
 { 223,   0 }, { 224,   0 }, { 225,   0 }, { 226,   0 }, { 227,   0 },
 { 228,   0 }, { 229,   0 }, { 230,   0 }, { 231,   0 }, { 232,   0 },

 { 233,   0 }, { 234,   0 }, { 235,   0 }, { 236,   0 }, { 237,   0 },
 { 238,   0 }, { 239,   0 }, { 240,   0 }, { 241,   0 }, { 242,   0 },
 { 243,   0 }, { 244,   0 }, { 245,   0 }, { 246,   0 }, { 247,   0 },
 { 248,   0 }, { 249,   0 }, { 250,   0 }, { 251,   0 }, { 252,   0 },
 { 253,   0 }, { 254,   0 }, { 255,   0 }, { 256,   0 }, {   0,  12 },
 {   0,1723 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {  48,   0 }, {  49,   0 },
 {  50,   0 }, {  51,   0 }, {  52,   0 }, {  53,   0 }, {  54,   0 },
 {  55,   0 }, {  56,   0 }, {  57,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  65,   0 }, {  66,   0 }, {  67,   0 }, {  68,   0 }, {  69,   0 },
 {  70,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {  97,   0 }, {  98,   0 }, {  99,   0 },
 { 100,   0 }, { 101,   0 }, { 102,   0 }, {   0,   8 }, {   0,1619 },
 {   1,   0 }, {   2,   0 }, {   3,   0 }, {   4,   0 }, {   5,   0 },
 {   6,   0 }, {   7,   0 }, {   8,   0 }, {   9,   0 }, {   0,   0 },
 {  11,   0 }, {  12,   0 }, {   0,   0 }, {  14,   0 }, {  15,   0 },
 {  16,   0 }, {  17,   0 }, {  18,   0 }, {  19,   0 }, {  20,   0 },

 {  21,   0 }, {  22,   0 }, {  23,   0 }, {  24,   0 }, {  25,   0 },
 {  26,   0 }, {  27,   0 }, {  28,   0 }, {  29,   0 }, {  30,   0 },
 {  31,   0 }, {  32,   0 }, {  33,   0 }, {  34,   0 }, {  35,   0 },
 {  36,   0 }, {  37,   0 }, {  38,   0 }, {  39,-1271 }, {  40,   0 },
 {  41,   0 }, {  42,   0 }, {  43,   0 }, {  44,   0 }, {  45,   0 },
 {  46,   0 }, {  47,   0 }, {  48,   0 }, {  49,   0 }, {  50,   0 },
 {  51,   0 }, {  52,   0 }, {  53,   0 }, {  54,   0 }, {  55,   0 },
 {  56,   0 }, {  57,   0 }, {  58,   0 }, {  59,   0 }, {  60,   0 },
 {  61,   0 }, {  62,   0 }, {  63,   0 }, {  64,   0 }, {  65,   0 },
 {  66,   0 }, {  67,   0 }, {  68,   0 }, {  69,   0 }, {  70,   0 },

 {  71,   0 }, {  72,   0 }, {  73,   0 }, {  74,   0 }, {  75,   0 },
 {  76,   0 }, {  77,   0 }, {  78,   0 }, {  79,   0 }, {  80,   0 },
 {  81,   0 }, {  82,   0 }, {  83,   0 }, {  84,   0 }, {  85,   0 },
 {  86,   0 }, {  87,   0 }, {  88,   0 }, {  89,   0 }, {  90,   0 },
 {  91,   0 }, {  92,   0 }, {  93,   0 }, {  94,   0 }, {  95,   0 },
 {  96,   0 }, {  97,   0 }, {  98,   0 }, {  99,   0 }, { 100,   0 },
 { 101,   0 }, { 102,   0 }, { 103,   0 }, { 104,   0 }, { 105,   0 },
 { 106,   0 }, { 107,   0 }, { 108,   0 }, { 109,   0 }, { 110,   0 },
 { 111,   0 }, { 112,   0 }, { 113,   0 }, { 114,   0 }, { 115,   0 },
 { 116,   0 }, { 117,   0 }, { 118,   0 }, { 119,   0 }, { 120,   0 },

 { 121,   0 }, { 122,   0 }, { 123,   0 }, { 124,   0 }, { 125,   0 },
 { 126,   0 }, { 127,   0 }, { 128,   0 }, { 129,   0 }, { 130,   0 },
 { 131,   0 }, { 132,   0 }, { 133,   0 }, { 134,   0 }, { 135,   0 },
 { 136,   0 }, { 137,   0 }, { 138,   0 }, { 139,   0 }, { 140,   0 },
 { 141,   0 }, { 142,   0 }, { 143,   0 }, { 144,   0 }, { 145,   0 },
 { 146,   0 }, { 147,   0 }, { 148,   0 }, { 149,   0 }, { 150,   0 },
 { 151,   0 }, { 152,   0 }, { 153,   0 }, { 154,   0 }, { 155,   0 },
 { 156,   0 }, { 157,   0 }, { 158,   0 }, { 159,   0 }, { 160,   0 },
 { 161,   0 }, { 162,   0 }, { 163,   0 }, { 164,   0 }, { 165,   0 },
 { 166,   0 }, { 167,   0 }, { 168,   0 }, { 169,   0 }, { 170,   0 },

 { 171,   0 }, { 172,   0 }, { 173,   0 }, { 174,   0 }, { 175,   0 },
 { 176,   0 }, { 177,   0 }, { 178,   0 }, { 179,   0 }, { 180,   0 },
 { 181,   0 }, { 182,   0 }, { 183,   0 }, { 184,   0 }, { 185,   0 },
 { 186,   0 }, { 187,   0 }, { 188,   0 }, { 189,   0 }, { 190,   0 },
 { 191,   0 }, { 192,   0 }, { 193,   0 }, { 194,   0 }, { 195,   0 },
 { 196,   0 }, { 197,   0 }, { 198,   0 }, { 199,   0 }, { 200,   0 },
 { 201,   0 }, { 202,   0 }, { 203,   0 }, { 204,   0 }, { 205,   0 },
 { 206,   0 }, { 207,   0 }, { 208,   0 }, { 209,   0 }, { 210,   0 },
 { 211,   0 }, { 212,   0 }, { 213,   0 }, { 214,   0 }, { 215,   0 },
 { 216,   0 }, { 217,   0 }, { 218,   0 }, { 219,   0 }, { 220,   0 },

 { 221,   0 }, { 222,   0 }, { 223,   0 }, { 224,   0 }, { 225,   0 },
 { 226,   0 }, { 227,   0 }, { 228,   0 }, { 229,   0 }, { 230,   0 },
 { 231,   0 }, { 232,   0 }, { 233,   0 }, { 234,   0 }, { 235,   0 },
 { 236,   0 }, { 237,   0 }, { 238,   0 }, { 239,   0 }, { 240,   0 },
 { 241,   0 }, { 242,   0 }, { 243,   0 }, { 244,   0 }, { 245,   0 },
 { 246,   0 }, { 247,   0 }, { 248,   0 }, { 249,   0 }, { 250,   0 },
 { 251,   0 }, { 252,   0 }, { 253,   0 }, { 254,   0 }, { 255,   0 },
 { 256,   0 }, {   0,  10 }, {   0,1361 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  48,   0 }, {  49,   0 }, {  50,  59 }, {  51,  59 }, {  52,  59 },
 {  53,  59 }, {  54,  59 }, {  55,  59 }, {  56,  59 }, {  57,  59 },
 {   0,  10 }, {   0,1302 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {  65, 118 }, {  66, 240 }, {  67, 118 },
 {  68, 118 }, {  69, 118 }, {  70, 118 }, {   0,   0 }, {  72,-1501 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {  97, 118 },
 {  98, 240 }, {  99, 118 }, { 100, 118 }, { 101, 118 }, { 102, 118 },
 {   0,   0 }, { 104,-1501 }, {   0,   0 }, {   0,   0 }, {  48,   0 },
 {  49,   0 }, {  50,   0 }, {  51,   0 }, {  52,   0 }, {  53,   0 },

 {  54,   0 }, {  55,   0 }, {  56,   0 }, {  57,   0 }, {   0,   0 },
 {   0,1243 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {  65,  59 }, {  66,  59 }, {  67,  59 }, {  68,  59 },
 {  69,  59 }, {  70,  59 }, {   0,   0 }, {  72,-1560 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {  97,  59 }, {  98,  59 },
 {  99,  59 }, { 100,  59 }, { 101,  59 }, { 102,  59 }, {   0,   0 },

 { 104,-1560 }, {   0,   0 }, {   0,   0 }, {  48,   0 }, {  49,   0 },
 {  50,   0 }, {  51,   0 }, {  52,   0 }, {  53,   0 }, {  54,   0 },
 {  55,   0 }, {  56,   0 }, {  57,   0 }, {   0,  14 }, {   0,1184 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  65,   0 }, {  66,   0 }, {  67,   0 }, {  68,   0 }, {  69,   0 },
 {  70,   0 }, {   0,   0 }, {  72,-1619 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,1159 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {  97,   0 }, {  98,   0 }, {  99,   0 },
 { 100,   0 }, { 101,   0 }, { 102,   0 }, {   0,   0 }, { 104,-1619 },
 {   0,   0 }, {   0,   0 }, {  48, 901 }, {  49, 901 }, {  50, -59 },
 {  51, -59 }, {  52, -59 }, {  53, -59 }, {  54, -59 }, {  55, -59 },
 {  56, -59 }, {  57, -59 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,  14 }, {   0,1121 }, {   0,   0 }, {  65, -59 },
 {  66, -59 }, {  67, -59 }, {  68, -59 }, {  69, -59 }, {  70, -59 },
 {   0,   0 }, {  72,-1678 }, {  48, 901 }, {  49, 901 }, {  50, 901 },
 {  51, 901 }, {  52, 901 }, {  53, 901 }, {  54, 901 }, {  55, 901 },
 {  56, 901 }, {  57, 901 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {  65, 901 },
 {  66, 901 }, {  67, 901 }, {  68, 901 }, {  69, 901 }, {  70, 901 },
 {   0,   0 }, {  97, -59 }, {  98, -59 }, {  99, -59 }, { 100, -59 },
 { 101, -59 }, { 102, -59 }, {   0,   0 }, { 104,-1678 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  48,-122 }, {  49,-122 }, {  50,-122 }, {  51,-122 }, {  52,-122 },
 {  53,-122 }, {  54,-122 }, {  55,-122 }, {  56,-122 }, {  57,-122 },
 {   0,   0 }, {  97, 901 }, {  98, 901 }, {  99, 901 }, { 100, 901 },
 { 101, 901 }, { 102, 901 }, {  65,-122 }, {  66,-122 }, {  67,-122 },
 {  68,-122 }, {  69,-122 }, {  70,-122 }, {   0,   0 }, {  72,-1741 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {  97,-122 },
 {  98,-122 }, {  99,-122 }, { 100,-122 }, { 101,-122 }, { 102,-122 },
 {   0,   0 }, { 104,-1741 }, {   0,   4 }, {   0,1015 }, {   1,   0 },
 {   2,   0 }, {   3,   0 }, {   4,   0 }, {   5,   0 }, {   6,   0 },
 {   7,   0 }, {   8,   0 }, {   9,   0 }, {   0,   0 }, {  11,   0 },
 {  12,   0 }, {  13,   0 }, {  14,   0 }, {  15,   0 }, {  16,   0 },

 {  17,   0 }, {  18,   0 }, {  19,   0 }, {  20,   0 }, {  21,   0 },
 {  22,   0 }, {  23,   0 }, {  24,   0 }, {  25,   0 }, {  26,   0 },
 {  27,   0 }, {  28,   0 }, {  29,   0 }, {  30,   0 }, {  31,   0 },
 {  32,   0 }, {  33,   0 }, {  34,   0 }, {  35,   0 }, {  36,   0 },
 {  37,   0 }, {  38,   0 }, {  39,   0 }, {  40,   0 }, {  41,   0 },
 {  42,   0 }, {  43,   0 }, {  44,   0 }, {  45,   0 }, {  46,   0 },
 {  47,   0 }, {  48,   0 }, {  49,   0 }, {  50,   0 }, {  51,   0 },
 {  52,   0 }, {  53,   0 }, {  54,   0 }, {  55,   0 }, {  56,   0 },
 {  57,   0 }, {  58,   0 }, {  59,   0 }, {  60,   0 }, {  61,   0 },
 {  62,   0 }, {  63,   0 }, {  64,   0 }, {  65,   0 }, {  66,   0 },

 {  67,   0 }, {  68,   0 }, {  69,   0 }, {  70,   0 }, {  71,   0 },
 {  72,   0 }, {  73,   0 }, {  74,   0 }, {  75,   0 }, {  76,   0 },
 {  77,   0 }, {  78,   0 }, {  79,   0 }, {  80,   0 }, {  81,   0 },
 {  82,   0 }, {  83,   0 }, {  84,   0 }, {  85,   0 }, {  86,   0 },
 {  87,   0 }, {  88,   0 }, {  89,   0 }, {  90,   0 }, {  91,   0 },
 {  92,   0 }, {  93,   0 }, {  94,   0 }, {  95,   0 }, {  96,   0 },
 {  97,   0 }, {  98,   0 }, {  99,   0 }, { 100,   0 }, { 101,   0 },
 { 102,   0 }, { 103,   0 }, { 104,   0 }, { 105,   0 }, { 106,   0 },
 { 107,   0 }, { 108,   0 }, { 109,   0 }, { 110,   0 }, { 111,   0 },
 { 112,   0 }, { 113,   0 }, { 114,   0 }, { 115,   0 }, { 116,   0 },

 { 117,   0 }, { 118,   0 }, { 119,   0 }, { 120,   0 }, { 121,   0 },
 { 122,   0 }, { 123,   0 }, { 124,   0 }, { 125,   0 }, { 126,   0 },
 { 127,   0 }, { 128,   0 }, { 129,   0 }, { 130,   0 }, { 131,   0 },
 { 132,   0 }, { 133,   0 }, { 134,   0 }, { 135,   0 }, { 136,   0 },
 { 137,   0 }, { 138,   0 }, { 139,   0 }, { 140,   0 }, { 141,   0 },
 { 142,   0 }, { 143,   0 }, { 144,   0 }, { 145,   0 }, { 146,   0 },
 { 147,   0 }, { 148,   0 }, { 149,   0 }, { 150,   0 }, { 151,   0 },
 { 152,   0 }, { 153,   0 }, { 154,   0 }, { 155,   0 }, { 156,   0 },
 { 157,   0 }, { 158,   0 }, { 159,   0 }, { 160,   0 }, { 161,   0 },
 { 162,   0 }, { 163,   0 }, { 164,   0 }, { 165,   0 }, { 166,   0 },

 { 167,   0 }, { 168,   0 }, { 169,   0 }, { 170,   0 }, { 171,   0 },
 { 172,   0 }, { 173,   0 }, { 174,   0 }, { 175,   0 }, { 176,   0 },
 { 177,   0 }, { 178,   0 }, { 179,   0 }, { 180,   0 }, { 181,   0 },
 { 182,   0 }, { 183,   0 }, { 184,   0 }, { 185,   0 }, { 186,   0 },
 { 187,   0 }, { 188,   0 }, { 189,   0 }, { 190,   0 }, { 191,   0 },
 { 192,   0 }, { 193,   0 }, { 194,   0 }, { 195,   0 }, { 196,   0 },
 { 197,   0 }, { 198,   0 }, { 199,   0 }, { 200,   0 }, { 201,   0 },
 { 202,   0 }, { 203,   0 }, { 204,   0 }, { 205,   0 }, { 206,   0 },
 { 207,   0 }, { 208,   0 }, { 209,   0 }, { 210,   0 }, { 211,   0 },
 { 212,   0 }, { 213,   0 }, { 214,   0 }, { 215,   0 }, { 216,   0 },

 { 217,   0 }, { 218,   0 }, { 219,   0 }, { 220,   0 }, { 221,   0 },
 { 222,   0 }, { 223,   0 }, { 224,   0 }, { 225,   0 }, { 226,   0 },
 { 227,   0 }, { 228,   0 }, { 229,   0 }, { 230,   0 }, { 231,   0 },
 { 232,   0 }, { 233,   0 }, { 234,   0 }, { 235,   0 }, { 236,   0 },
 { 237,   0 }, { 238,   0 }, { 239,   0 }, { 240,   0 }, { 241,   0 },
 { 242,   0 }, { 243,   0 }, { 244,   0 }, { 245,   0 }, { 246,   0 },
 { 247,   0 }, { 248,   0 }, { 249,   0 }, { 250,   0 }, { 251,   0 },
 { 252,   0 }, { 253,   0 }, { 254,   0 }, { 255,   0 }, { 256,   0 },
 {   0,   5 }, {   0, 757 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {  48,   0 },
 {  49,   0 }, {  50,   0 }, {  51,   0 }, {  52,   0 }, {  53,   0 },
 {  54,   0 }, {  55,   0 }, {  56,   0 }, {  57,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {  65,   0 }, {  66,   0 }, {  67,   0 }, {  68,   0 },
 {  69,   0 }, {  70,   0 }, {  71,   0 }, {  72,   0 }, {  73,   0 },
 {  74,   0 }, {  75,   0 }, {  76,   0 }, {  77,   0 }, {  78,   0 },
 {  79,   0 }, {  80,   0 }, {  81,   0 }, {  82,   0 }, {  83,   0 },
 {  84,   0 }, {  85,   0 }, {  86,   0 }, {  87,   0 }, {  88,   0 },
 {  89,   0 }, {  90,   0 }, {   0,   5 }, {   0, 665 }, {   0,   0 },
 {   0,   0 }, {  95,   0 }, {   0,   0 }, {  97,   0 }, {  98,   0 },
 {  99,   0 }, { 100,   0 }, { 101,   0 }, { 102,   0 }, { 103,   0 },
 { 104,   0 }, { 105,   0 }, { 106,   0 }, { 107,   0 }, { 108,   0 },

 { 109,   0 }, { 110,   0 }, { 111,   0 }, { 112,   0 }, { 113,   0 },
 { 114,   0 }, { 115,   0 }, { 116,   0 }, { 117,   0 }, { 118,   0 },
 { 119,   0 }, { 120,   0 }, { 121,   0 }, { 122,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {  39,-2095 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {  48, -92 }, {  49, -92 }, {  50, -92 }, {  51, -92 },
 {  52, -92 }, {  53, -92 }, {  54, -92 }, {  55, -92 }, {  56, -92 },
 {  57, -92 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {  65, -92 }, {  66, -92 },

 {  67, -92 }, {  68, -92 }, {  69, -92 }, {  70, -92 }, {  71, -92 },
 {  72, -92 }, {  73, -92 }, {  74, -92 }, {  75, -92 }, {  76, -92 },
 {  77, -92 }, {  78, -92 }, {  79, -92 }, {  80, -92 }, {  81, -92 },
 {  82, -92 }, {  83, -92 }, {  84, -92 }, {  85, -92 }, {  86, -92 },
 {  87, -92 }, {  88, -92 }, {  89, -92 }, {  90, -92 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {  95, -92 }, {   0,   0 },
 {  97, -92 }, {  98, -92 }, {  99, -92 }, { 100, -92 }, { 101, -92 },
 { 102, -92 }, { 103, -92 }, { 104, -92 }, { 105, -92 }, { 106, -92 },
 { 107, -92 }, { 108, -92 }, { 109, -92 }, { 110, -92 }, { 111, -92 },
 { 112, -92 }, { 113, -92 }, { 114, -92 }, { 115, -92 }, { 116, -92 },

 { 117, -92 }, { 118, -92 }, { 119, -92 }, { 120, -92 }, { 121, -92 },
 { 122, -92 }, {   0,   1 }, {   0, 541 }, {   1,   0 }, {   2,   0 },
 {   3,   0 }, {   4,   0 }, {   5,   0 }, {   6,   0 }, {   7,   0 },
 {   8,   0 }, {   9,   0 }, {  10,-2290 }, {  11,   0 }, {  12,   0 },
 {  13,-2274 }, {  14,   0 }, {  15,   0 }, {  16,   0 }, {  17,   0 },
 {  18,   0 }, {  19,   0 }, {  20,   0 }, {  21,   0 }, {  22,   0 },
 {  23,   0 }, {  24,   0 }, {  25,   0 }, {  26,   0 }, {  27,   0 },
 {  28,   0 }, {  29,   0 }, {  30,   0 }, {  31,   0 }, {  32,   0 },
 {  33,   0 }, {  34,   0 }, {  35,   0 }, {  36,   0 }, {  37,   0 },
 {  38,   0 }, {  39,   0 }, {  40,   0 }, {  41,   0 }, {  42,   0 },

 {  43,   0 }, {  44,   0 }, {  45,   0 }, {  46,   0 }, {  47,   0 },
 {  48,   0 }, {  49,   0 }, {  50,   0 }, {  51,   0 }, {  52,   0 },
 {  53,   0 }, {  54,   0 }, {  55,   0 }, {  56,   0 }, {  57,   0 },
 {  58,   0 }, {  59,   0 }, {  60,   0 }, {  61,   0 }, {  62,   0 },
 {  63,   0 }, {  64,   0 }, {  65,   0 }, {  66,   0 }, {  67,   0 },
 {  68,   0 }, {  69,   0 }, {  70,   0 }, {  71,   0 }, {  72,   0 },
 {  73,   0 }, {  74,   0 }, {  75,   0 }, {  76,   0 }, {  77,   0 },
 {  78,   0 }, {  79,   0 }, {  80,   0 }, {  81,   0 }, {  82,   0 },
 {  83,   0 }, {  84,   0 }, {  85,   0 }, {  86,   0 }, {  87,   0 },
 {  88,   0 }, {  89,   0 }, {  90,   0 }, {  91,   0 }, {  92,   0 },

 {  93,   0 }, {  94,   0 }, {  95,   0 }, {  96,   0 }, {  97,   0 },
 {  98,   0 }, {  99,   0 }, { 100,   0 }, { 101,   0 }, { 102,   0 },
 { 103,   0 }, { 104,   0 }, { 105,   0 }, { 106,   0 }, { 107,   0 },
 { 108,   0 }, { 109,   0 }, { 110,   0 }, { 111,   0 }, { 112,   0 },
 { 113,   0 }, { 114,   0 }, { 115,   0 }, { 116,   0 }, { 117,   0 },
 { 118,   0 }, { 119,   0 }, { 120,   0 }, { 121,   0 }, { 122,   0 },
 { 123,   0 }, { 124,   0 }, { 125,   0 }, { 126,   0 }, { 127,   0 },
 { 128,   0 }, { 129,   0 }, { 130,   0 }, { 131,   0 }, { 132,   0 },
 { 133,   0 }, { 134,   0 }, { 135,   0 }, { 136,   0 }, { 137,   0 },
 { 138,   0 }, { 139,   0 }, { 140,   0 }, { 141,   0 }, { 142,   0 },

 { 143,   0 }, { 144,   0 }, { 145,   0 }, { 146,   0 }, { 147,   0 },
 { 148,   0 }, { 149,   0 }, { 150,   0 }, { 151,   0 }, { 152,   0 },
 { 153,   0 }, { 154,   0 }, { 155,   0 }, { 156,   0 }, { 157,   0 },
 { 158,   0 }, { 159,   0 }, { 160,   0 }, { 161,   0 }, { 162,   0 },
 { 163,   0 }, { 164,   0 }, { 165,   0 }, { 166,   0 }, { 167,   0 },
 { 168,   0 }, { 169,   0 }, { 170,   0 }, { 171,   0 }, { 172,   0 },
 { 173,   0 }, { 174,   0 }, { 175,   0 }, { 176,   0 }, { 177,   0 },
 { 178,   0 }, { 179,   0 }, { 180,   0 }, { 181,   0 }, { 182,   0 },
 { 183,   0 }, { 184,   0 }, { 185,   0 }, { 186,   0 }, { 187,   0 },
 { 188,   0 }, { 189,   0 }, { 190,   0 }, { 191,   0 }, { 192,   0 },

 { 193,   0 }, { 194,   0 }, { 195,   0 }, { 196,   0 }, { 197,   0 },
 { 198,   0 }, { 199,   0 }, { 200,   0 }, { 201,   0 }, { 202,   0 },
 { 203,   0 }, { 204,   0 }, { 205,   0 }, { 206,   0 }, { 207,   0 },
 { 208,   0 }, { 209,   0 }, { 210,   0 }, { 211,   0 }, { 212,   0 },
 { 213,   0 }, { 214,   0 }, { 215,   0 }, { 216,   0 }, { 217,   0 },
 { 218,   0 }, { 219,   0 }, { 220,   0 }, { 221,   0 }, { 222,   0 },
 { 223,   0 }, { 224,   0 }, { 225,   0 }, { 226,   0 }, { 227,   0 },
 { 228,   0 }, { 229,   0 }, { 230,   0 }, { 231,   0 }, { 232,   0 },
 { 233,   0 }, { 234,   0 }, { 235,   0 }, { 236,   0 }, { 237,   0 },
 { 238,   0 }, { 239,   0 }, { 240,   0 }, { 241,   0 }, { 242,   0 },

 { 243,   0 }, { 244,   0 }, { 245,   0 }, { 246,   0 }, { 247,   0 },
 { 248,   0 }, { 249,   0 }, { 250,   0 }, { 251,   0 }, { 252,   0 },
 { 253,   0 }, { 254,   0 }, { 255,   0 }, { 256,   0 }, {   0,  16 },
 {   0, 283 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,  13 },
 {   0, 258 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {  48,   0 }, {  49,   0 },
 {  50,-960 }, {  51,-960 }, {  52,-960 }, {  53,-960 }, {  54,-960 },
 {  55,-960 }, {  56,-960 }, {  57,-960 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  65,-960 }, {  66,-960 }, {  67,-960 }, {  68,-960 }, {  69,-960 },
 {  70,-960 }, {   0,   0 }, {  72,-2579 }, {  48,   0 }, {  49,   0 },
 {  50,   0 }, {  51,   0 }, {  52,   0 }, {  53,   0 }, {  54,   0 },
 {  55,   0 }, {  56,   0 }, {  57,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {  65,   0 }, {  66,   0 }, {  67,   0 }, {  68,   0 }, {  69,   0 },
 {  70,   0 }, {   0,   0 }, {  97,-960 }, {  98,-960 }, {  99,-960 },
 { 100,-960 }, { 101,-960 }, { 102,-960 }, {   0,   0 }, { 104,-2579 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {  97,   0 }, {  98,   0 }, {  99,   0 },
 { 100,   0 }, { 101,   0 }, { 102,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },

 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {   0,   0 },
 {   0,   0 }, {   0,   0 }, { 257,  31 }, {   1,   0 },    };

static yyconst struct yy_trans_info *yy_start_state_list[5] =
    {
    &yy_transition[1],
    &yy_transition[3],
    &yy_transition[261],
    &yy_transition[519],
    &yy_transition[777],

    } ;

/* The intent behind this definition is that it'll catch
 * any uses of REJECT which flex missed.
 */
#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET

#include "codearea.h"
#include "ctype.h"
#include "die.h"
#include "errors.h"
#include "listfile.h"
#include "options.h"
#include "srcfile.h"
#include "strutil.h"
#include "strpool.h"

/*-----------------------------------------------------------------------------
*   Types
*----------------------------------------------------------------------------*/

/* Stack of nested constructs on each context */
CLASS(Struct)
	int		id;					/* user-defined ID */
	int		value;				/* user-defined VALUE */
	int		line_nr;			/* line where struct started */
END_CLASS;
CLASS_LIST(Struct);

/* Scanner context - current input file/buffer */
CLASS(Context)
	yyscan_t	scanner;		/* current scanner object */

	FILE   *file; 				/* file handle */
	char   *filename;			/* file name - kept in strpool so that it is 
								   available after file has been closed */
	int 	line_nr;			/* input line number */
	int 	line_inc;			/* increment line number on each newline */
	
	BOOL	do_list;			/* true to output list lines */

	StructList *struct_stack;	/* stack of open structs, empty if none */
	
END_CLASS;

/* Scanner context - scack of contexts, top of stack is current */
CLASS_LIST(Context);

/* List of tokens for unget queue */

/* Scanner global data */
CLASS(Scan)
	ContextList	*contexts;			/* stack of input contexts */
	TokenList	*token_queue;		/* stack of pushed-back tokens */
	Token		*token;				/* last token */
END_CLASS;

/*-----------------------------------------------------------------------------
*   Globals
*----------------------------------------------------------------------------*/
static Scan *scan = NULL;

/*-----------------------------------------------------------------------------
*   Forward declatations
*----------------------------------------------------------------------------*/
static long scan_num (char *text, int num_suffix_chars, int base);
static Context *get_context( void );

/* init_scan() implemented as macro */
#define init_scan() if ( scan == NULL ) scan = OBJ_NEW( Scan )

/*-----------------------------------------------------------------------------
*   Configure scanner
*----------------------------------------------------------------------------*/

/* handle line number */
#define YY_USER_ACTION 														\
	scan->token->filename = context->filename;								\
	scan->token->line_nr  = context->line_nr;								\
	if ( !clinemode )														\
	{																		\
		set_error_line( scan->token->line_nr ); 							\
	}
	
#define YY_FATAL_ERROR(msg) 												\
	die( AssertionException, msg )

/*-----------------------------------------------------------------------------
*	Options
*----------------------------------------------------------------------------*/
#define YY_NO_UNISTD_H 1
/*-----------------------------------------------------------------------------
*	Start conditions
*----------------------------------------------------------------------------*/
/* start condition active to read whole line for list before scanning tokens */
		
/*-----------------------------------------------------------------------------
*	Rules
*----------------------------------------------------------------------------*/

#define INITIAL 0
#define READ_LINE 1

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */
#include <unistd.h>
#endif

#define YY_EXTRA_TYPE struct Context *

/* Holds the entire state of the reentrant scanner. */
struct yyguts_t
    {

    /* User-defined. Not touched by flex. */
    YY_EXTRA_TYPE yyextra_r;

    /* The rest are the same as the globals declared in the non-reentrant scanner. */
    FILE *yyin_r, *yyout_r;
    size_t yy_buffer_stack_top; /**< index of top of stack. */
    size_t yy_buffer_stack_max; /**< capacity of stack. */
    YY_BUFFER_STATE * yy_buffer_stack; /**< Stack as an array. */
    char yy_hold_char;
    int yy_n_chars;
    int yyleng_r;
    char *yy_c_buf_p;
    int yy_init;
    int yy_start;
    int yy_did_buffer_switch_on_eof;
    int yy_start_stack_ptr;
    int yy_start_stack_depth;
    int *yy_start_stack;
    yy_state_type yy_last_accepting_state;
    char* yy_last_accepting_cpos;

    int yylineno_r;
    int yy_flex_debug_r;

    char *yytext_r;
    int yy_more_flag;
    int yy_more_len;

    }; /* end struct yyguts_t */

static int yy_init_globals (yyscan_t yyscanner );

int yylex_init (yyscan_t* scanner);

int yylex_init_extra (YY_EXTRA_TYPE user_defined,yyscan_t* scanner);

/* Accessor methods to globals.
   These are made visible to non-reentrant scanners for convenience. */

int yylex_destroy (yyscan_t yyscanner );

int yyget_debug (yyscan_t yyscanner );

void yyset_debug (int debug_flag ,yyscan_t yyscanner );

YY_EXTRA_TYPE yyget_extra (yyscan_t yyscanner );

void yyset_extra (YY_EXTRA_TYPE user_defined ,yyscan_t yyscanner );

FILE *yyget_in (yyscan_t yyscanner );

void yyset_in  (FILE * in_str ,yyscan_t yyscanner );

FILE *yyget_out (yyscan_t yyscanner );

void yyset_out  (FILE * out_str ,yyscan_t yyscanner );

int yyget_leng (yyscan_t yyscanner );

char *yyget_text (yyscan_t yyscanner );

int yyget_lineno (yyscan_t yyscanner );

void yyset_lineno (int line_number ,yyscan_t yyscanner );

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap (yyscan_t yyscanner );
#else
extern int yywrap (yyscan_t yyscanner );
#endif
#endif

    static void yyunput (int c,char *buf_ptr  ,yyscan_t yyscanner);
    
#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int ,yyscan_t yyscanner);
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * ,yyscan_t yyscanner);
#endif

#ifndef YY_NO_INPUT

#ifdef __cplusplus
static int yyinput (yyscan_t yyscanner );
#else
static int input (yyscan_t yyscanner );
#endif

#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k */
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif /* __ia64__ */
#endif

/* Copy whatever the last rule matched to the standard output. */
#ifndef ECHO
/* This used to be an fputs(), but since the string might contain NUL's,
 * we now use fwrite().
 */
#define ECHO do { if (fwrite( yytext, yyleng, 1, yyout )) {} } while (0)
#endif

/* Gets input and stuffs it into "buf".  number of characters read, or YY_NULL,
 * is returned in "result".
 */
#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	errno=0; \
	while ( (result = read( fileno(yyin), (char *) buf, max_size )) < 0 ) \
	{ \
		if( errno != EINTR) \
		{ \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
			break; \
		} \
		errno=0; \
		clearerr(yyin); \
	}\
\

#endif

/* No semi-colon after return; correct usage is to write "yyterminate();" -
 * we don't want an extra ';' after the "return" because that will cause
 * some compilers to complain about unreachable statements.
 */
#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Report a fatal error. */
#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg , yyscanner)
#endif

/* end tables serialization structures and prototypes */

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int yylex (yyscan_t yyscanner);

#define YY_DECL int yylex (yyscan_t yyscanner)
#endif /* !YY_DECL */

/* Code executed at the beginning of each rule, after yytext and yyleng
 * have been set up.
 */
#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

/* Code executed at the end of each rule. */
#ifndef YY_BREAK
#define YY_BREAK break;
#endif

#define YY_RULE_SETUP \
	YY_USER_ACTION

/** The main scanner function which does all the work.
 */
YY_DECL
{
	register yy_state_type yy_current_state;
	register char *yy_cp, *yy_bp;
	register int yy_act;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

			Context *context = yyget_extra(yyscanner );
			Token   *token   = scan->token;
			
			/* setup state for listing, if first call of file or first call
			   after newline */
			if ( context->do_list )
			{
				BEGIN( READ_LINE );
			}

			/* process list */

	if ( !yyg->yy_init )
		{
		yyg->yy_init = 1;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! yyg->yy_start )
			yyg->yy_start = 1;	/* first start state */

		if ( ! yyin )
			yyin = stdin;

		if ( ! yyout )
			yyout = stdout;

		if ( ! YY_CURRENT_BUFFER ) {
			yyensure_buffer_stack (yyscanner);
			YY_CURRENT_BUFFER_LVALUE =
				yy_create_buffer(yyin,YY_BUF_SIZE ,yyscanner);
		}

		yy_load_buffer_state(yyscanner );
		}

	while ( 1 )		/* loops until end-of-file is reached */
		{
		yy_cp = yyg->yy_c_buf_p;

		/* Support of yytext. */
		*yy_cp = yyg->yy_hold_char;

		/* yy_bp points to the position in yy_ch_buf of the start of
		 * the current run.
		 */
		yy_bp = yy_cp;

		yy_current_state = yy_start_state_list[yyg->yy_start];
yy_match:
		{
		register yyconst struct yy_trans_info *yy_trans_info;

		register YY_CHAR yy_c;

		for ( yy_c = YY_SC_TO_UI(*yy_cp);
		      (yy_trans_info = &yy_current_state[(unsigned int) yy_c])->
		yy_verify == yy_c;
		      yy_c = YY_SC_TO_UI(*++yy_cp) )
			{
			yy_current_state += yy_trans_info->yy_nxt;

			if ( yy_current_state[-1].yy_nxt )
				{
				yyg->yy_last_accepting_state = yy_current_state;
				yyg->yy_last_accepting_cpos = yy_cp;
				}
			}
		}

yy_find_action:
		yy_act = yy_current_state[-1].yy_nxt;

		YY_DO_BEFORE_ACTION;

do_action:	/* This label is used only to access EOF actions. */

		switch ( yy_act )
	{ /* beginning of action switch */
			case 0: /* must back up */
			/* undo the effects of YY_DO_BEFORE_ACTION */
			*yy_cp = yyg->yy_hold_char;
			yy_cp = yyg->yy_last_accepting_cpos + 1;
			yy_current_state = yyg->yy_last_accepting_state;
			goto yy_find_action;

case 1:
/* rule 1 can match eol */
YY_RULE_SETUP
{
				list_start_line( get_PC(), context->filename, context->line_nr, yytext );
				yyless( 0 );				/* push all text back to input */
				context->do_list = FALSE;
				BEGIN( INITIAL );
			}
	YY_BREAK
/* newline */
case 2:
/* rule 2 can match eol */
YY_RULE_SETUP
{
				context->line_nr += context->line_inc;		/* count lines */
				if ( listing && context->file != NULL )
				{
					context->do_list = TRUE;				/* READ_LINE on next scan */
				}
				return TOK_NEWLINE;
			}			
	YY_BREAK
case 3:
YY_RULE_SETUP
/* blanks */
	YY_BREAK
case 4:
YY_RULE_SETUP
/* comment */
	YY_BREAK
/* Identifier */
case 5:
YY_RULE_SETUP
{
				Str_bset( token->str_value, yytext, yyleng ); 	
				strtoupper( Str_data( token->str_value ) );		
				return TOK_NAME;
			}
	YY_BREAK
/* String - return string without quotes */
case 6:
case 7:
YY_RULE_SETUP
{
				Str_bset( token->str_value, yytext+1, yyleng-2 ); 	
				return TOK_STRING;
			}
	YY_BREAK
case 8:
case 9:
YY_RULE_SETUP
error( ERR_UNCLOSED_STR );
	YY_BREAK
/* Number - return value in yyvalue */
case 10:
YY_RULE_SETUP
token->num_value = scan_num(yytext,     0, 10); return TOK_NUMBER;
	YY_BREAK
case 11:
YY_RULE_SETUP
token->num_value = scan_num(yytext,     1, 16); return TOK_NUMBER;
	YY_BREAK
case 12:
YY_RULE_SETUP
token->num_value = scan_num(yytext + 1, 0, 16); return TOK_NUMBER;
	YY_BREAK
case 13:
YY_RULE_SETUP
token->num_value = scan_num(yytext + 2, 0, 16); return TOK_NUMBER;
	YY_BREAK
case 14:
YY_RULE_SETUP
token->num_value = scan_num(yytext,     1,  2); return TOK_NUMBER;
	YY_BREAK
case 15:
YY_RULE_SETUP
token->num_value = scan_num(yytext + 1, 0,  2); return TOK_NUMBER;
	YY_BREAK
case 16:
YY_RULE_SETUP
token->num_value = scan_num(yytext + 2, 0,  2); return TOK_NUMBER;
	YY_BREAK
case 17:
YY_RULE_SETUP
token->num_value = scan_num(yytext + 2, 1,  2); return TOK_NUMBER;
	YY_BREAK
case 18:
YY_RULE_SETUP
token->num_value = scan_num(yytext + 2, 1,  2); return TOK_NUMBER;
	YY_BREAK
/* multi-char tokens */			
case 19:
YY_RULE_SETUP
return TOK_EQUAL_EQUAL;
	YY_BREAK
case 20:
YY_RULE_SETUP
return TOK_LESS_GREATER;
	YY_BREAK
case 21:
YY_RULE_SETUP
return TOK_NOT_EQUAL;
	YY_BREAK
case 22:
YY_RULE_SETUP
return TOK_LESS_EQUAL;
	YY_BREAK
case 23:
YY_RULE_SETUP
return TOK_GREATER_EQUAL;
	YY_BREAK
case 24:
YY_RULE_SETUP
return TOK_DBL_VBAR;
	YY_BREAK
case 25:
YY_RULE_SETUP
return TOK_DBL_AMPERSAND;
	YY_BREAK
case 26:
YY_RULE_SETUP
return TOK_DBL_LESS;
	YY_BREAK
case 27:
YY_RULE_SETUP
return TOK_DBL_GREATER;
	YY_BREAK
case 28:
YY_RULE_SETUP
return TOK_DBL_ASTERISK;
	YY_BREAK
/* default rule - one character token */
case 29:
YY_RULE_SETUP
return (TokType)yytext[0];
	YY_BREAK
case 30:
YY_RULE_SETUP
YY_FATAL_ERROR( "flex scanner jammed" );
	YY_BREAK
case YY_STATE_EOF(INITIAL):
case YY_STATE_EOF(READ_LINE):
	yyterminate();

	case YY_END_OF_BUFFER:
		{
		/* Amount of text matched not including the EOB char. */
		int yy_amount_of_matched_text = (int) (yy_cp - yyg->yytext_ptr) - 1;

		/* Undo the effects of YY_DO_BEFORE_ACTION. */
		*yy_cp = yyg->yy_hold_char;
		YY_RESTORE_YY_MORE_OFFSET

		if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_NEW )
			{
			/* We're scanning a new file or input source.  It's
			 * possible that this happened because the user
			 * just pointed yyin at a new source and called
			 * yylex().  If so, then we have to assure
			 * consistency between YY_CURRENT_BUFFER and our
			 * globals.  Here is the right place to do so, because
			 * this is the first action (other than possibly a
			 * back-up) that will match for the new input source.
			 */
			yyg->yy_n_chars = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
			YY_CURRENT_BUFFER_LVALUE->yy_input_file = yyin;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status = YY_BUFFER_NORMAL;
			}

		/* Note that here we test for yy_c_buf_p "<=" to the position
		 * of the first EOB in the buffer, since yy_c_buf_p will
		 * already have been incremented past the NUL character
		 * (since all states make transitions on EOB to the
		 * end-of-buffer state).  Contrast this with the test
		 * in input().
		 */
		if ( yyg->yy_c_buf_p <= &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars] )
			{ /* This was really a NUL. */
			yy_state_type yy_next_state;

			yyg->yy_c_buf_p = yyg->yytext_ptr + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state( yyscanner );

			/* Okay, we're now positioned to make the NUL
			 * transition.  We couldn't have
			 * yy_get_previous_state() go ahead and do it
			 * for us because it doesn't know how to deal
			 * with the possibility of jamming (and we don't
			 * want to build jamming into it because then it
			 * will run more slowly).
			 */

			yy_next_state = yy_try_NUL_trans( yy_current_state , yyscanner);

			yy_bp = yyg->yytext_ptr + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				/* Consume the NUL. */
				yy_cp = ++yyg->yy_c_buf_p;
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = yyg->yy_c_buf_p;
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer( yyscanner ) )
			{
			case EOB_ACT_END_OF_FILE:
				{
				yyg->yy_did_buffer_switch_on_eof = 0;

				if ( yywrap(yyscanner ) )
					{
					/* Note: because we've taken care in
					 * yy_get_next_buffer() to have set up
					 * yytext, we can now set up
					 * yy_c_buf_p so that if some total
					 * hoser (like flex itself) wants to
					 * call the scanner after we return the
					 * YY_NULL, it'll still work - another
					 * YY_NULL will get returned.
					 */
					yyg->yy_c_buf_p = yyg->yytext_ptr + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! yyg->yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				yyg->yy_c_buf_p =
					yyg->yytext_ptr + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state( yyscanner );

				yy_cp = yyg->yy_c_buf_p;
				yy_bp = yyg->yytext_ptr + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				yyg->yy_c_buf_p =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars];

				yy_current_state = yy_get_previous_state( yyscanner );

				yy_cp = yyg->yy_c_buf_p;
				yy_bp = yyg->yytext_ptr + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	} /* end of action switch */
		} /* end of scanning one token */
} /* end of yylex */

/* yy_get_next_buffer - try to read in a new buffer
 *
 * Returns a code representing an action:
 *	EOB_ACT_LAST_MATCH -
 *	EOB_ACT_CONTINUE_SCAN - continue scanning from current position
 *	EOB_ACT_END_OF_FILE - end of file
 */
static int yy_get_next_buffer (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	register char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
	register char *source = yyg->yytext_ptr;
	register int number_to_move, i;
	int ret_val;

	if ( yyg->yy_c_buf_p > &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( YY_CURRENT_BUFFER_LVALUE->yy_fill_buffer == 0 )
		{ /* Don't try to fill the buffer, so this is an EOF. */
		if ( yyg->yy_c_buf_p - yyg->yytext_ptr - YY_MORE_ADJ == 1 )
			{
			/* We matched a single character, the EOB, so
			 * treat this as a final EOF.
			 */
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			/* We matched some text prior to the EOB, first
			 * process it.
			 */
			return EOB_ACT_LAST_MATCH;
			}
		}

	/* Try to read more data. */

	/* First move last chars to start of buffer. */
	number_to_move = (int) (yyg->yy_c_buf_p - yyg->yytext_ptr) - 1;

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_EOF_PENDING )
		/* don't do the read, it's not guaranteed to return an EOF,
		 * just force an EOF
		 */
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars = 0;

	else
		{
			int num_to_read =
			YY_CURRENT_BUFFER_LVALUE->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ /* Not enough room in the buffer - grow it. */

			/* just a shorter name for the current buffer */
			YY_BUFFER_STATE b = YY_CURRENT_BUFFER;

			int yy_c_buf_p_offset =
				(int) (yyg->yy_c_buf_p - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					/* Include room in for 2 EOB chars. */
					yyrealloc((void *) b->yy_ch_buf,b->yy_buf_size + 2 ,yyscanner );
				}
			else
				/* Can't grow it, we don't own it. */
				b->yy_ch_buf = 0;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			yyg->yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = YY_CURRENT_BUFFER_LVALUE->yy_buf_size -
						number_to_move - 1;

			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		/* Read in more data. */
		YY_INPUT( (&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move]),
			yyg->yy_n_chars, (size_t) num_to_read );

		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars;
		}

	if ( yyg->yy_n_chars == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			yyrestart(yyin  ,yyscanner);
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	if ((yy_size_t) (yyg->yy_n_chars + number_to_move) > YY_CURRENT_BUFFER_LVALUE->yy_buf_size) {
		/* Extend the array by 50%, plus the number we really need. */
		yy_size_t new_size = yyg->yy_n_chars + number_to_move + (yyg->yy_n_chars >> 1);
		YY_CURRENT_BUFFER_LVALUE->yy_ch_buf = (char *) yyrealloc((void *) YY_CURRENT_BUFFER_LVALUE->yy_ch_buf,new_size ,yyscanner );
		if ( ! YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			YY_FATAL_ERROR( "out of dynamic memory in yy_get_next_buffer()" );
	}

	yyg->yy_n_chars += number_to_move;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars] = YY_END_OF_BUFFER_CHAR;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars + 1] = YY_END_OF_BUFFER_CHAR;

	yyg->yytext_ptr = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[0];

	return ret_val;
}

/* yy_get_previous_state - get the state just before the EOB char was reached */

    static yy_state_type yy_get_previous_state (yyscan_t yyscanner)
{
	register yy_state_type yy_current_state;
	register char *yy_cp;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	yy_current_state = yy_start_state_list[yyg->yy_start];

	for ( yy_cp = yyg->yytext_ptr + YY_MORE_ADJ; yy_cp < yyg->yy_c_buf_p; ++yy_cp )
		{
		yy_current_state += yy_current_state[(*yy_cp ? YY_SC_TO_UI(*yy_cp) : 256)].yy_nxt;
		if ( yy_current_state[-1].yy_nxt )
			{
			yyg->yy_last_accepting_state = yy_current_state;
			yyg->yy_last_accepting_cpos = yy_cp;
			}
		}

	return yy_current_state;
}

/* yy_try_NUL_trans - try to make a transition on the NUL character
 *
 * synopsis
 *	next_state = yy_try_NUL_trans( current_state );
 */
    static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state , yyscan_t yyscanner)
{
	register int yy_is_jam;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner; /* This var may be unused depending upon options. */
	register char *yy_cp = yyg->yy_c_buf_p;

	register int yy_c = 256;
	register yyconst struct yy_trans_info *yy_trans_info;

	yy_trans_info = &yy_current_state[(unsigned int) yy_c];
	yy_current_state += yy_trans_info->yy_nxt;
	yy_is_jam = (yy_trans_info->yy_verify != yy_c);

	if ( ! yy_is_jam )
		{
		if ( yy_current_state[-1].yy_nxt )
			{
			yyg->yy_last_accepting_state = yy_current_state;
			yyg->yy_last_accepting_cpos = yy_cp;
			}
		}

	return yy_is_jam ? 0 : yy_current_state;
}

    static void yyunput (int c, register char * yy_bp , yyscan_t yyscanner)
{
	register char *yy_cp;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

    yy_cp = yyg->yy_c_buf_p;

	/* undo effects of setting up yytext */
	*yy_cp = yyg->yy_hold_char;

	if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
		{ /* need to shift things up to make room */
		/* +2 for EOB chars. */
		register int number_to_move = yyg->yy_n_chars + 2;
		register char *dest = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[
					YY_CURRENT_BUFFER_LVALUE->yy_buf_size + 2];
		register char *source =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move];

		while ( source > YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars =
			yyg->yy_n_chars = YY_CURRENT_BUFFER_LVALUE->yy_buf_size;

		if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "flex scanner push-back overflow" );
		}

	*--yy_cp = (char) c;

	yyg->yytext_ptr = yy_bp;
	yyg->yy_hold_char = *yy_cp;
	yyg->yy_c_buf_p = yy_cp;
}

#ifndef YY_NO_INPUT
#ifdef __cplusplus
    static int yyinput (yyscan_t yyscanner)
#else
    static int input  (yyscan_t yyscanner)
#endif

{
	int c;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	*yyg->yy_c_buf_p = yyg->yy_hold_char;

	if ( *yyg->yy_c_buf_p == YY_END_OF_BUFFER_CHAR )
		{
		/* yy_c_buf_p now points to the character we want to return.
		 * If this occurs *before* the EOB characters, then it's a
		 * valid NUL; if not, then we've hit the end of the buffer.
		 */
		if ( yyg->yy_c_buf_p < &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars] )
			/* This was really a NUL. */
			*yyg->yy_c_buf_p = '\0';

		else
			{ /* need more input */
			int offset = yyg->yy_c_buf_p - yyg->yytext_ptr;
			++yyg->yy_c_buf_p;

			switch ( yy_get_next_buffer( yyscanner ) )
				{
				case EOB_ACT_LAST_MATCH:
					/* This happens because yy_g_n_b()
					 * sees that we've accumulated a
					 * token and flags that we need to
					 * try matching the token before
					 * proceeding.  But for input(),
					 * there's no matching to consider.
					 * So convert the EOB_ACT_LAST_MATCH
					 * to EOB_ACT_END_OF_FILE.
					 */

					/* Reset buffer status. */
					yyrestart(yyin ,yyscanner);

					/*FALLTHROUGH*/

				case EOB_ACT_END_OF_FILE:
					{
					if ( yywrap(yyscanner ) )
						return EOF;

					if ( ! yyg->yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput(yyscanner);
#else
					return input(yyscanner);
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					yyg->yy_c_buf_p = yyg->yytext_ptr + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) yyg->yy_c_buf_p;	/* cast for 8-bit char's */
	*yyg->yy_c_buf_p = '\0';	/* preserve yytext */
	yyg->yy_hold_char = *++yyg->yy_c_buf_p;

	return c;
}
#endif	/* ifndef YY_NO_INPUT */

/** Immediately switch to a different input stream.
 * @param input_file A readable stream.
 * @param yyscanner The scanner object.
 * @note This function does not reset the start condition to @c INITIAL .
 */
    void yyrestart  (FILE * input_file , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	if ( ! YY_CURRENT_BUFFER ){
        yyensure_buffer_stack (yyscanner);
		YY_CURRENT_BUFFER_LVALUE =
            yy_create_buffer(yyin,YY_BUF_SIZE ,yyscanner);
	}

	yy_init_buffer(YY_CURRENT_BUFFER,input_file ,yyscanner);
	yy_load_buffer_state(yyscanner );
}

/** Switch to a different input buffer.
 * @param new_buffer The new input buffer.
 * @param yyscanner The scanner object.
 */
    void yy_switch_to_buffer  (YY_BUFFER_STATE  new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	/* TODO. We should be able to replace this entire function body
	 * with
	 *		yypop_buffer_state();
	 *		yypush_buffer_state(new_buffer);
     */
	yyensure_buffer_stack (yyscanner);
	if ( YY_CURRENT_BUFFER == new_buffer )
		return;

	if ( YY_CURRENT_BUFFER )
		{
		/* Flush out information for old buffer. */
		*yyg->yy_c_buf_p = yyg->yy_hold_char;
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = yyg->yy_c_buf_p;
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars;
		}

	YY_CURRENT_BUFFER_LVALUE = new_buffer;
	yy_load_buffer_state(yyscanner );

	/* We don't actually know whether we did this switch during
	 * EOF (yywrap()) processing, but the only time this flag
	 * is looked at is after yywrap() is called, so it's safe
	 * to go ahead and always set it.
	 */
	yyg->yy_did_buffer_switch_on_eof = 1;
}

static void yy_load_buffer_state  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	yyg->yy_n_chars = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
	yyg->yytext_ptr = yyg->yy_c_buf_p = YY_CURRENT_BUFFER_LVALUE->yy_buf_pos;
	yyin = YY_CURRENT_BUFFER_LVALUE->yy_input_file;
	yyg->yy_hold_char = *yyg->yy_c_buf_p;
}

/** Allocate and initialize an input buffer state.
 * @param file A readable stream.
 * @param size The character buffer size in bytes. When in doubt, use @c YY_BUF_SIZE.
 * @param yyscanner The scanner object.
 * @return the allocated buffer state.
 */
    YY_BUFFER_STATE yy_create_buffer  (FILE * file, int  size , yyscan_t yyscanner)
{
	YY_BUFFER_STATE b;
    
	b = (YY_BUFFER_STATE) yyalloc(sizeof( struct yy_buffer_state ) ,yyscanner );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_buf_size = size;

	/* yy_ch_buf has to be 2 characters longer than the size given because
	 * we need to put in 2 end-of-buffer characters.
	 */
	b->yy_ch_buf = (char *) yyalloc(b->yy_buf_size + 2 ,yyscanner );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_is_our_buffer = 1;

	yy_init_buffer(b,file ,yyscanner);

	return b;
}

/** Destroy the buffer.
 * @param b a buffer created with yy_create_buffer()
 * @param yyscanner The scanner object.
 */
    void yy_delete_buffer (YY_BUFFER_STATE  b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	if ( ! b )
		return;

	if ( b == YY_CURRENT_BUFFER ) /* Not sure if we should pop here. */
		YY_CURRENT_BUFFER_LVALUE = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		yyfree((void *) b->yy_ch_buf ,yyscanner );

	yyfree((void *) b ,yyscanner );
}

/* Initializes or reinitializes a buffer.
 * This function is sometimes called more than once on the same buffer,
 * such as during a yyrestart() or at EOF.
 */
    static void yy_init_buffer  (YY_BUFFER_STATE  b, FILE * file , yyscan_t yyscanner)

{
	int oerrno = errno;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	yy_flush_buffer(b ,yyscanner);

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

    /* If b is the current buffer, then yy_init_buffer was _probably_
     * called from yyrestart() or through yy_get_next_buffer.
     * In that case, we don't want to reset the lineno or column.
     */
    if (b != YY_CURRENT_BUFFER){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = 0;
    
	errno = oerrno;
}

/** Discard all buffered characters. On the next scan, YY_INPUT will be called.
 * @param b the buffer state to be flushed, usually @c YY_CURRENT_BUFFER.
 * @param yyscanner The scanner object.
 */
    void yy_flush_buffer (YY_BUFFER_STATE  b , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	if ( ! b )
		return;

	b->yy_n_chars = 0;

	/* We always need two end-of-buffer characters.  The first causes
	 * a transition to the end-of-buffer state.  The second causes
	 * a jam in that state.
	 */
	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == YY_CURRENT_BUFFER )
		yy_load_buffer_state(yyscanner );
}

/** Pushes the new state onto the stack. The new state becomes
 *  the current state. This function will allocate the stack
 *  if necessary.
 *  @param new_buffer The new state.
 *  @param yyscanner The scanner object.
 */
void yypush_buffer_state (YY_BUFFER_STATE new_buffer , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	if (new_buffer == NULL)
		return;

	yyensure_buffer_stack(yyscanner);

	/* This block is copied from yy_switch_to_buffer. */
	if ( YY_CURRENT_BUFFER )
		{
		/* Flush out information for old buffer. */
		*yyg->yy_c_buf_p = yyg->yy_hold_char;
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = yyg->yy_c_buf_p;
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = yyg->yy_n_chars;
		}

	/* Only push if top exists. Otherwise, replace top. */
	if (YY_CURRENT_BUFFER)
		yyg->yy_buffer_stack_top++;
	YY_CURRENT_BUFFER_LVALUE = new_buffer;

	/* copied from yy_switch_to_buffer. */
	yy_load_buffer_state(yyscanner );
	yyg->yy_did_buffer_switch_on_eof = 1;
}

/** Removes and deletes the top of the stack, if present.
 *  The next element becomes the new top.
 *  @param yyscanner The scanner object.
 */
void yypop_buffer_state (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
	if (!YY_CURRENT_BUFFER)
		return;

	yy_delete_buffer(YY_CURRENT_BUFFER ,yyscanner);
	YY_CURRENT_BUFFER_LVALUE = NULL;
	if (yyg->yy_buffer_stack_top > 0)
		--yyg->yy_buffer_stack_top;

	if (YY_CURRENT_BUFFER) {
		yy_load_buffer_state(yyscanner );
		yyg->yy_did_buffer_switch_on_eof = 1;
	}
}

/* Allocates the stack if it does not exist.
 *  Guarantees space for at least one push.
 */
static void yyensure_buffer_stack (yyscan_t yyscanner)
{
	int num_to_alloc;
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

	if (!yyg->yy_buffer_stack) {

		/* First allocation is just for 2 elements, since we don't know if this
		 * scanner will even need a stack. We use 2 instead of 1 to avoid an
		 * immediate realloc on the next call.
         */
		num_to_alloc = 1;
		yyg->yy_buffer_stack = (struct yy_buffer_state**)yyalloc
								(num_to_alloc * sizeof(struct yy_buffer_state*)
								, yyscanner);
		if ( ! yyg->yy_buffer_stack )
			YY_FATAL_ERROR( "out of dynamic memory in yyensure_buffer_stack()" );
								  
		memset(yyg->yy_buffer_stack, 0, num_to_alloc * sizeof(struct yy_buffer_state*));
				
		yyg->yy_buffer_stack_max = num_to_alloc;
		yyg->yy_buffer_stack_top = 0;
		return;
	}

	if (yyg->yy_buffer_stack_top >= (yyg->yy_buffer_stack_max) - 1){

		/* Increase the buffer to prepare for a possible push. */
		int grow_size = 8 /* arbitrary grow size */;

		num_to_alloc = yyg->yy_buffer_stack_max + grow_size;
		yyg->yy_buffer_stack = (struct yy_buffer_state**)yyrealloc
								(yyg->yy_buffer_stack,
								num_to_alloc * sizeof(struct yy_buffer_state*)
								, yyscanner);
		if ( ! yyg->yy_buffer_stack )
			YY_FATAL_ERROR( "out of dynamic memory in yyensure_buffer_stack()" );

		/* zero only the new slots.*/
		memset(yyg->yy_buffer_stack + yyg->yy_buffer_stack_max, 0, grow_size * sizeof(struct yy_buffer_state*));
		yyg->yy_buffer_stack_max = num_to_alloc;
	}
}

/** Setup the input buffer state to scan directly from a user-specified character buffer.
 * @param base the character buffer
 * @param size the size in bytes of the character buffer
 * @param yyscanner The scanner object.
 * @return the newly allocated buffer state object. 
 */
YY_BUFFER_STATE yy_scan_buffer  (char * base, yy_size_t  size , yyscan_t yyscanner)
{
	YY_BUFFER_STATE b;
    
	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		/* They forgot to leave room for the EOB's. */
		return 0;

	b = (YY_BUFFER_STATE) yyalloc(sizeof( struct yy_buffer_state ) ,yyscanner );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_buffer()" );

	b->yy_buf_size = size - 2;	/* "- 2" to take care of EOB's */
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = 0;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	yy_switch_to_buffer(b ,yyscanner );

	return b;
}

/** Setup the input buffer state to scan a string. The next call to yylex() will
 * scan from a @e copy of @a str.
 * @param yystr a NUL-terminated string to scan
 * @param yyscanner The scanner object.
 * @return the newly allocated buffer state object.
 * @note If you want to scan bytes that may contain NUL values, then use
 *       yy_scan_bytes() instead.
 */
YY_BUFFER_STATE yy_scan_string (yyconst char * yystr , yyscan_t yyscanner)
{
    
	return yy_scan_bytes(yystr,strlen(yystr) ,yyscanner);
}

/** Setup the input buffer state to scan the given bytes. The next call to yylex() will
 * scan from a @e copy of @a bytes.
 * @param yybytes the byte buffer to scan
 * @param _yybytes_len the number of bytes in the buffer pointed to by @a bytes.
 * @param yyscanner The scanner object.
 * @return the newly allocated buffer state object.
 */
YY_BUFFER_STATE yy_scan_bytes  (yyconst char * yybytes, int  _yybytes_len , yyscan_t yyscanner)
{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;
    
	/* Get memory for full buffer, including space for trailing EOB's. */
	n = _yybytes_len + 2;
	buf = (char *) yyalloc(n ,yyscanner );
	if ( ! buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_bytes()" );

	for ( i = 0; i < _yybytes_len; ++i )
		buf[i] = yybytes[i];

	buf[_yybytes_len] = buf[_yybytes_len+1] = YY_END_OF_BUFFER_CHAR;

	b = yy_scan_buffer(buf,n ,yyscanner);
	if ( ! b )
		YY_FATAL_ERROR( "bad buffer in yy_scan_bytes()" );

	/* It's okay to grow etc. this buffer, and we should throw it
	 * away when we're done.
	 */
	b->yy_is_our_buffer = 1;

	return b;
}

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif

static void yy_fatal_error (yyconst char* msg , yyscan_t yyscanner)
{
    	(void) fprintf( stderr, "%s\n", msg );
	exit( YY_EXIT_FAILURE );
}

/* Redefine yyless() so it works in section 3 code. */

#undef yyless
#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		yytext[yyleng] = yyg->yy_hold_char; \
		yyg->yy_c_buf_p = yytext + yyless_macro_arg; \
		yyg->yy_hold_char = *yyg->yy_c_buf_p; \
		*yyg->yy_c_buf_p = '\0'; \
		yyleng = yyless_macro_arg; \
		} \
	while ( 0 )

/* Accessor  methods (get/set functions) to struct members. */

/** Get the user-defined data for this scanner.
 * @param yyscanner The scanner object.
 */
YY_EXTRA_TYPE yyget_extra  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyextra;
}

/** Get the current line number.
 * @param yyscanner The scanner object.
 */
int yyget_lineno  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    
        if (! YY_CURRENT_BUFFER)
            return 0;
    
    return yylineno;
}

/** Get the current column number.
 * @param yyscanner The scanner object.
 */
int yyget_column  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    
        if (! YY_CURRENT_BUFFER)
            return 0;
    
    return yycolumn;
}

/** Get the input stream.
 * @param yyscanner The scanner object.
 */
FILE *yyget_in  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyin;
}

/** Get the output stream.
 * @param yyscanner The scanner object.
 */
FILE *yyget_out  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyout;
}

/** Get the length of the current token.
 * @param yyscanner The scanner object.
 */
int yyget_leng  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yyleng;
}

/** Get the current token.
 * @param yyscanner The scanner object.
 */

char *yyget_text  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yytext;
}

/** Set the user-defined data. This data is never touched by the scanner.
 * @param user_defined The data to be associated with this scanner.
 * @param yyscanner The scanner object.
 */
void yyset_extra (YY_EXTRA_TYPE  user_defined , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyextra = user_defined ;
}

/** Set the current line number.
 * @param line_number
 * @param yyscanner The scanner object.
 */
void yyset_lineno (int  line_number , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        /* lineno is only valid if an input buffer exists. */
        if (! YY_CURRENT_BUFFER )
           yy_fatal_error( "yyset_lineno called with no buffer" , yyscanner); 
    
    yylineno = line_number;
}

/** Set the current column.
 * @param line_number
 * @param yyscanner The scanner object.
 */
void yyset_column (int  column_no , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

        /* column is only valid if an input buffer exists. */
        if (! YY_CURRENT_BUFFER )
           yy_fatal_error( "yyset_column called with no buffer" , yyscanner); 
    
    yycolumn = column_no;
}

/** Set the input stream. This does not discard the current
 * input buffer.
 * @param in_str A readable stream.
 * @param yyscanner The scanner object.
 * @see yy_switch_to_buffer
 */
void yyset_in (FILE *  in_str , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyin = in_str ;
}

void yyset_out (FILE *  out_str , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yyout = out_str ;
}

int yyget_debug  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    return yy_flex_debug;
}

void yyset_debug (int  bdebug , yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    yy_flex_debug = bdebug ;
}

/* Accessor methods for yylval and yylloc */

/* User-visible API */

/* yylex_init is special because it creates the scanner itself, so it is
 * the ONLY reentrant function that doesn't take the scanner as the last argument.
 * That's why we explicitly handle the declaration, instead of using our macros.
 */

int yylex_init(yyscan_t* ptr_yy_globals)

{
    if (ptr_yy_globals == NULL){
        errno = EINVAL;
        return 1;
    }

    *ptr_yy_globals = (yyscan_t) yyalloc ( sizeof( struct yyguts_t ), NULL );

    if (*ptr_yy_globals == NULL){
        errno = ENOMEM;
        return 1;
    }

    /* By setting to 0xAA, we expose bugs in yy_init_globals. Leave at 0x00 for releases. */
    memset(*ptr_yy_globals,0x00,sizeof(struct yyguts_t));

    return yy_init_globals ( *ptr_yy_globals );
}

/* yylex_init_extra has the same functionality as yylex_init, but follows the
 * convention of taking the scanner as the last argument. Note however, that
 * this is a *pointer* to a scanner, as it will be allocated by this call (and
 * is the reason, too, why this function also must handle its own declaration).
 * The user defined value in the first argument will be available to yyalloc in
 * the yyextra field.
 */

int yylex_init_extra(YY_EXTRA_TYPE yy_user_defined,yyscan_t* ptr_yy_globals )

{
    struct yyguts_t dummy_yyguts;

    yyset_extra (yy_user_defined, &dummy_yyguts);

    if (ptr_yy_globals == NULL){
        errno = EINVAL;
        return 1;
    }
	
    *ptr_yy_globals = (yyscan_t) yyalloc ( sizeof( struct yyguts_t ), &dummy_yyguts );
	
    if (*ptr_yy_globals == NULL){
        errno = ENOMEM;
        return 1;
    }
    
    /* By setting to 0xAA, we expose bugs in
    yy_init_globals. Leave at 0x00 for releases. */
    memset(*ptr_yy_globals,0x00,sizeof(struct yyguts_t));
    
    yyset_extra (yy_user_defined, *ptr_yy_globals);
    
    return yy_init_globals ( *ptr_yy_globals );
}

static int yy_init_globals (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
    /* Initialization is the same as for the non-reentrant scanner.
     * This function is called from yylex_destroy(), so don't allocate here.
     */

    yyg->yy_buffer_stack = 0;
    yyg->yy_buffer_stack_top = 0;
    yyg->yy_buffer_stack_max = 0;
    yyg->yy_c_buf_p = (char *) 0;
    yyg->yy_init = 0;
    yyg->yy_start = 0;

    yyg->yy_start_stack_ptr = 0;
    yyg->yy_start_stack_depth = 0;
    yyg->yy_start_stack =  NULL;

/* Defined in main.c */
#ifdef YY_STDINIT
    yyin = stdin;
    yyout = stdout;
#else
    yyin = (FILE *) 0;
    yyout = (FILE *) 0;
#endif

    /* For future reference: Set errno on error, since we are called by
     * yylex_init()
     */
    return 0;
}

/* yylex_destroy is for both reentrant and non-reentrant scanners. */
int yylex_destroy  (yyscan_t yyscanner)
{
    struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;

    /* Pop the buffer stack, destroying each element. */
	while(YY_CURRENT_BUFFER){
		yy_delete_buffer(YY_CURRENT_BUFFER ,yyscanner );
		YY_CURRENT_BUFFER_LVALUE = NULL;
		yypop_buffer_state(yyscanner);
	}

	/* Destroy the stack itself. */
	yyfree(yyg->yy_buffer_stack ,yyscanner);
	yyg->yy_buffer_stack = NULL;

    /* Destroy the start condition stack. */
        yyfree(yyg->yy_start_stack ,yyscanner );
        yyg->yy_start_stack = NULL;

    /* Reset the globals. This is important in a non-reentrant scanner so the next time
     * yylex() is called, initialization will occur. */
    yy_init_globals( yyscanner);

    /* Destroy the main struct (reentrant only). */
    yyfree ( yyscanner , yyscanner );
    yyscanner = NULL;
    return 0;
}

/*
 * Internal utility routines.
 */

#ifndef yytext_ptr
static void yy_flex_strncpy (char* s1, yyconst char * s2, int n , yyscan_t yyscanner)
{
	register int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
}
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * s , yyscan_t yyscanner)
{
	register int n;
	for ( n = 0; s[n]; ++n )
		;

	return n;
}
#endif

#define YYTABLES_NAME "yytables"

/*-----------------------------------------------------------------------------
*   Token
*----------------------------------------------------------------------------*/
DEF_CLASS(Token);
DEF_CLASS_LIST(Token);

void Token_init( Token *self ) 
{
    /* force init strpool to make sure Context is destroyed before StrPool */
    strpool_init();

	self->str_value = OBJ_NEW(Str);
	OBJ_AUTODELETE( self->str_value ) = FALSE;
}

void Token_copy( Token *self, Token *other )
{
	self->str_value = Str_clone( other->str_value );
}

void Token_fini( Token *self ) 
{ 
	OBJ_DELETE( self->str_value );
}

/* set a token by copy of another */
void Token_set( Token *self, Token *other )
{
	self->tok_type	= other->tok_type;
	self->num_value	= other->num_value;
	
	Str_set( self->str_value, other->str_value );
	
	self->filename	= other->filename;	/* point to same strpool area */
	self->line_nr	= other->line_nr;
}

/* clear a token */
void Token_clear( Token *self )
{
	self->tok_type	= TOK_NULL;
	self->num_value	= 0;
	
	Str_clear( self->str_value );
	
	self->filename	= NULL;
	self->line_nr	= 0;
}

/*-----------------------------------------------------------------------------
*   Stack of nested constructs
*----------------------------------------------------------------------------*/
DEF_CLASS(Struct);
DEF_CLASS_LIST(Struct);

void Struct_init( Struct *self ) { }

void Struct_copy( Struct *self, Struct *other ) { }

void Struct_fini( Struct *self ) { }

/* push start of new struct to stack, fatal error if no context */
void scan_push_struct( int id, int value )
{
	Context	*context;
	Struct  *elem;
	
	init_scan();
	
	context = get_context();
	if ( context == NULL )
	{
		error( ERR_UNBALANCED_STRUCT );
	}
	else 
	{
		elem = OBJ_NEW( Struct );
		elem->id 		= id;
		elem->value 	= value;
		elem->line_nr	= context->line_nr;
		
		StructList_push( context->struct_stack, elem );
	}
}

static Struct *scan_top( void )
{
	Context	*context;

	init_scan();
	
	context = get_context();
	if ( context == NULL || StructList_empty( context->struct_stack ) )
	{
		error( ERR_UNBALANCED_STRUCT );
		return NULL;
	}
	else
	{
		return StructList_last( context->struct_stack )->obj;
	}
}

/* return ID of top of struct stack, -1 if none */
int scan_top_id( void )						
{
	Struct *elem = scan_top();
	return elem ? elem->id : -1;
}

/* return VALUE of top of struct stack, -1 if none */
int scan_top_value( void )
{
	Struct *elem = scan_top();
	return elem ? elem->value : -1;
}

/* replace ID, VALUE of top element, e.g replace IF by ELSE */
void scan_replace_struct( int id, int value )
{
	Context	*context;
	Struct  *elem;
	
	init_scan();
	
	context = get_context();
	if ( context == NULL )
	{
		error( ERR_UNBALANCED_STRUCT );
	}
	else 
	{
		elem = scan_top();
		elem->id 		= id;
		elem->value 	= value;
		elem->line_nr	= context->line_nr;
	}
}

/* pop top element, syntaxt error if id != top_id */
void scan_pop_struct( int id )
{
	Context	*context;
	Struct  *elem;
	
	init_scan();
	
	context = get_context();
	if ( context == NULL || StructList_empty( context->struct_stack ) )
	{
		error( ERR_UNBALANCED_STRUCT );
	}
	else 
	{
		elem = StructList_pop( context->struct_stack );
		if ( elem->id != id ) 
		{
			error( ERR_UNBALANCED_STRUCT_AT, 
				   elem->line_nr );
		}
		
		OBJ_DELETE( elem );	
	}
}

/*-----------------------------------------------------------------------------
*   Scanner context - current input file/buffer
*----------------------------------------------------------------------------*/
DEF_CLASS(Context);
DEF_CLASS_LIST(Context);

void Context_init( Context *self )	/* only init non-null items */
{
    /* force init strpool to make sure Context is destroyed before StrPool */
    strpool_init();
	
	self->struct_stack = OBJ_NEW( StructList );
	OBJ_AUTODELETE( self->struct_stack ) = FALSE;
}

void Context_copy( Context *self, Context *other ) { }

void Context_fini( Context *self )	/* free resources */
{
	if ( self->scanner ) {
		yylex_destroy(self->scanner );
	}
	
	if ( self->file )
	{
		fclose( self->file );
	}
	
	OBJ_DELETE( self->struct_stack );
}

/* create a new context and switch yylex to its buffer */
Context *Context_create( FILE *file, char *filename, int line_nr, int line_inc )
{
	Context *self;

	/* allocate and init new context */
	self = OBJ_NEW(Context);
	self->file		= file;
	self->filename	= strpool_add(filename);
	self->line_nr	= line_nr;
	self->line_inc	= line_inc;
	
	/* init a new scanner */
	yylex_init_extra(self,&self->scanner );
	
	/* interface with errors */
	set_error_null();
	set_error_file( filename );   			/* error location */
	
	return self;
}

/* return current context */
static Context *get_context( void )
{
	init_scan();
	
	if ( ContextList_empty( scan->contexts ) )
		return NULL;
	else
		return ContextList_last( scan->contexts )->obj;
}

/* pop the stack of input files, return TRUE to continue reading, FALSE on end */
static BOOL pop_context( void ) 
{
	Context *context;
	
	init_scan();
	
	/* interface with errors */
	set_error_null();

	context = ContextList_pop( scan->contexts );
	if ( context == NULL )
	{
		return FALSE;					/* no more input */
	}
	else 
	{
		/* destroy context */
		OBJ_DELETE( context );
		
		/* switch to previous context, if any */
		context = get_context();
		if ( context == NULL )
		{
			return FALSE;				/* no more input */
		}
		else 
		{
			/* interface with errors */
			set_error_file( context->filename );
			set_error_line( context->line_nr );

			return TRUE;				/* continue scanning */
		}
	}
}

/*-----------------------------------------------------------------------------
*	Scanner global data
*----------------------------------------------------------------------------*/
DEF_CLASS(Scan);

void Scan_init( Scan *self ) 
{
    /* force init strpool to make sure Context is destroyed before StrPool */
    strpool_init();

	self->contexts = OBJ_NEW( ContextList );
	OBJ_AUTODELETE( self->contexts ) = FALSE;
	
	self->token_queue = OBJ_NEW( TokenList );
	OBJ_AUTODELETE( self->token_queue ) = FALSE;
	
	self->token = OBJ_NEW( Token );
	OBJ_AUTODELETE( self->token ) = FALSE;
}

void Scan_copy( Scan *self, Scan *other ) { }

void Scan_fini( Scan *self ) 
{ 
	OBJ_DELETE( self->contexts );
	OBJ_DELETE( self->token_queue );
	OBJ_DELETE( self->token );
}

/*-----------------------------------------------------------------------------
*   Get / Unget token
*----------------------------------------------------------------------------*/

/* scan input for next token, set scan->token with last token value */
TokType scan_get( void )
{
	Context	*context;
	Token 	*token;
	Struct  *elem;

	init_scan();

	/* init scan->token */
	Token_clear( scan->token );
	
	/* get token from queue */
	token = TokenList_pop( scan->token_queue );
	if ( token != NULL )
	{
		Token_set( scan->token, token );
		OBJ_DELETE( token );
	}
	else
	{
		/* loop until input ended for all existing contexts, or token found */
		while ( (context = get_context()) != NULL )
		{
			if ( ( scan->token->tok_type = yylex(context->scanner ) ) != TOK_NULL )
			{
				break;					/* found input */
			}
			
			/* check for open structs */
			while ( (elem = StructList_pop( context->struct_stack )) != NULL )
			{
				error( ERR_UNBALANCED_STRUCT_AT, 
					   elem->line_nr );
				OBJ_DELETE( elem );
			}
			
			pop_context();				/* pop top context, clear error location */
		}
	}
	
	return scan->token->tok_type;
}

/* unget the given token to the list */
void scan_unget( TokType tok_type, long num_value, char *str_value,
				 char *filename, int line_nr )
{
	Token *token;

	init_scan();
	
	/* init token object */
	token = OBJ_NEW(Token);
	token->tok_type		= tok_type;
	token->num_value	= num_value;
	
	Str_szset( token->str_value, str_value ? str_value : "" );	/* copy string */
	Str_unreserve( token->str_value );			/* reclaim extra memory for queue */
	
	token->filename 	= strpool_add( filename );
	token->line_nr		= line_nr;
	
	/* set last token */
	Token_set( scan->token, token );
	
	TokenList_push( scan->token_queue, token );
}

/*-----------------------------------------------------------------------------
*   Get last token
*----------------------------------------------------------------------------*/
TokType scan_tok_type( void )
{
	init_scan();
	return scan->token->tok_type;
}

long scan_num_value( void )
{
	init_scan();
	return scan->token->num_value;
}

char *scan_str_value( void )
{
	init_scan();
	return Str_data( scan->token->str_value );
}

char *scan_filename( void )
{
	init_scan();
	return scan->token->filename;
}

int scan_line_nr( void )
{
	init_scan();
	return scan->token->line_nr;
}

/*-----------------------------------------------------------------------------
*	Context stack
*----------------------------------------------------------------------------*/

/* check circular includes, error if found */
static void check_circular_includes( char *filename ) 
{
	ContextListElem *iter;
	
	for ( iter = ContextList_first( scan->contexts ) ; iter != NULL ; 
		  iter = ContextList_next( iter ) )
	{
		if ( iter->obj->file != NULL &&			/* open file, not scanned text */
		     strcmp( filename, iter->obj->filename ) == 0 )
		{
            fatal_error( ERR_INCLUDE_RECURSION, filename );
		}
	}
}	

/* create a context to scan a file */
void scan_file( char *filename ) 
{
	FILE 	*file;
	Context	*context;
	
	init_scan();
	
	/* search source path */
	filename = search_source_file( filename );
	
	/* check for circular includes */
	check_circular_includes( filename );
	
	/* try to open the file */
	file = fopen( filename, "rb" ); 		/* b: to ready \r and \n */
	if ( file == NULL ) 
	{
		fatal_error( ERR_FOPEN_READ, filename );
	}

	/* create new flex instance */
	context = Context_create( file, filename, 1, 1 );
	ContextList_push( scan->contexts, context );
	
	/* set input file */
	yyset_in(file,context->scanner );
	
	/* prepare for list */
	if ( listing )
	{
		context->do_list = TRUE;
	}
}

/* create a context to scan a text block */
void scan_text( char *text )
{
	Context 	   *context, *prev_context;
	char 		   *prev_filename;
	int 			prev_line_nr;
	
	init_scan();
	
	/* if already reading input, copy file and line_nr of last item in stack */
	prev_context = get_context();
	prev_filename = prev_context != NULL ? prev_context->filename : NULL;
	prev_line_nr  = prev_context != NULL ? prev_context->line_nr  : 0;

	/* create new flex instance */
	context = Context_create( NULL, prev_filename, prev_line_nr, 0 );
	ContextList_push( scan->contexts, context );
	
	/* switch to text buffer */
	yy_scan_string(text,context->scanner );
}

/*-----------------------------------------------------------------------------
*	convert number to long, range error if greater than LONG_MAX
*----------------------------------------------------------------------------*/
static long scan_num (char *text, int num_suffix_chars, int base)
{
	long value;
	int digit;
	int length;
	char c;
	int i;
	
	/* ignore any suffix characters */
	length = strlen(text) - num_suffix_chars;
	
	value = 0;
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
			error( ERR_SYNTAX );
		}

		if (digit >= base) {			/* digit out of range - should not be reached */
			error( ERR_SYNTAX );
		}
		
		value = value * base + digit;
	}
	
	return value;
}

/*-----------------------------------------------------------------------------
*   Memory allocation used in scanner
*----------------------------------------------------------------------------*/
void *yyalloc(size_t bytes,yyscan_t scanner )
{
    return xmalloc( bytes );
}

void *yyrealloc(void *ptr,size_t bytes,yyscan_t scanner )
{
    return xrealloc( ptr, bytes );
}

void yyfree(void *ptr,yyscan_t scanner )
{
    xfree( ptr );
}

