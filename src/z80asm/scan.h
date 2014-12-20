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

Scanner. Scanning engine is built by ragel from scan_rules.rl.

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/scan.h,v 1.41 2014-12-20 12:28:05 pauloscustodio Exp $
*/

#pragma once

#include "legacy.h"
#include "scan_tokens.h"
#include "types.h"
#include "opcodes.h"

#ifdef __LEGACY_Z80ASM_SYNTAX
#define TK_QUESTION		TK_INVALID
#define TK_COLON		TK_INVALID
#define TK_BIN_NOT		TK_INVALID
#else
#define TK_STRING_CAT	TK_COMMA
#endif

enum { FLAG_NONE = -1, FLAG_NZ, FLAG_Z, FLAG_NC, FLAG_C, FLAG_PO, FLAG_PE, FLAG_P, FLAG_M };
enum { REG8_NONE = -1, REG8_B, REG8_C, REG8_D, REG8_E, REG8_H, REG8_L, REG8_A = 7 };
enum { REG16_NONE = -1, REG16_BC, REG16_DE, REG16_HL, REG16_AF, REG16_SP = 3 };
enum { IND_REG16_NONE = -1, IND_REG16_BC, IND_REG16_DE, IND_REG16_HL };

/*-----------------------------------------------------------------------------
* 	Keep last symbol retrieved
*----------------------------------------------------------------------------*/
typedef struct sym_t 
{
	tokid_t  tok;			/* token */
	char	*text;			/* characters of the retrieved token for lexemes 
							*  used in the expression parser */
	char	*string;		/* identifier to return with TK_NAME and TK_LABEL, or
							*  double-quoted string without quotes to return with a TK_STRING */
	char	*ts, *te;		/* Ragel's token start and token end */
	char	*filename;		/* filename where token found, in strpool */
	int 	 line_nr;		/* line number where token found */
	int		 number;		/* number to return with TK_NUMBER */
	int		 ds_size;		/* DS.x size, 0 if none */
#if 0
	void   (*parser)(void);	/* parser for this keyword as opcode */
#endif
	int		 cpu_flag;		/* FLAG_NONE, FLAG_NZ, FLAG_Z, FLAG_NC, FLAG_C, FLAG_PO, FLAG_PE, FLAG_P, FLAG_M */
	int	     cpu_reg8;		/* REG8_NONE, REG8_B, REG8_C, REG8_D, REG8_E, REG8_H, REG8_L, REG8_A */
	int		 cpu_reg16_af;	/* REG16_NONE, REG16_BC, REG16_DE, REG16_HL, REG16_AF */
	int		 cpu_reg16_sp;	/* REG16_NONE, REG16_BC, REG16_DE, REG16_HL, REG16_SP */
	int		 cpu_ind_reg16;	/* IND_REG16_NONE, IND_REG16_BC, IND_REG16_DE */
	int      cpu_idx_reg;	/* IDX_REG_HL, IDX_REG_IX, IDX_REG_IY */
} Sym;

/*-----------------------------------------------------------------------------
* 	Globals
*----------------------------------------------------------------------------*/
extern Sym  sym;			/* last token retrieved */
extern Bool EOL;			/* scanner EOL state */

/*-----------------------------------------------------------------------------
*	Scan API
*----------------------------------------------------------------------------*/

/* get the next token, fill the corresponding tok* variables */
extern tokid_t GetSym( void );

/* save the current scan position and back-track to a saved position */
extern void save_scan_state(void);		/* needs to be balanced with restore_.../drop_... */
extern void restore_scan_state(void);
extern void drop_scan_state(void);

/* get the current/next token, error if not the expected one */
extern void CurSymExpect(tokid_t expected_tok);
extern void GetSymExpect(tokid_t expected_tok);

/* insert the given text at the current scan position */
extern void SetTemporaryLine( char *line );

/* skip line past the newline, set EOL */
extern void  Skipline( void );
extern Bool EOL;
