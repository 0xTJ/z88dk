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
Copyright (C) Paulo Custodio, 2011-2014

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/Attic/prsident.c,v 1.71 2014-05-02 20:24:38 pauloscustodio Exp $
*/

#include "xmalloc.h"   /* before any other include */

#include "codearea.h"
#include "config.h"
#include "errors.h"
#include "listfile.h"
#include "options.h"
#include "scan.h"
#include "symbol.h"
#include "symtab.h"
#include "types.h"
#include "z80asm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* external functions */
void Subroutine_addr( int opc0, int opc );
void JP_instr( int opc0, int opc );
void PushPop_instr( int opcode );
void RotShift_instr( int opcode );
void BitTest_instr( int opcode );
void ArithLog8_instr( int opcode );
void DeclModuleName( void );
void DEFINE( void );
void ifstatement( enum flag interpret );
void DEFVARS( void ), DEFS( void ), ORG( void ), INCLUDE( void ), BINARY( void ), CALL_OZ( void ), OZ( void ), CALL_PKG( void ), FPP( void );
void ADC( void ), ADD( void ), DEC( void ), IM( void ), IN( void ), INC( void ), INVOKE( void );
void JR( void ), LD( void ), OUT( void ), RET( void ), SBC( void );
void DEFB( void ), DEFC( void ), DEFM( void ), DEFW( void ), DEFL( void ), DEFP( void );
void RST( void ), DEFGROUP( void );
int CheckRegister8( void );
void UNDEFINE( void );


/* local functions */
void ParseIdent( enum flag interpret );
void AND( void ), BIT( void ), CALL( void ), CCF( void ), CP( void ), CPD( void );
void CPDR( void ), CPI( void ), CPIR( void ), CPL( void ), DAA( void );
void DI( void ), DJNZ( void );
void EI( void ), EX( void ), EXX( void ), HALT( void );
void IND( void );
void INDR( void ), INI( void ), INIR( void ), JP( void );
void LDD( void ), LDDR( void );
void LDI( void ), LDIR( void ), NEG( void ), NOP( void ), OR( void ), OTDR( void ), OTIR( void );
void OUTD( void ), OUTI( void ), POP( void ), PUSH( void ), RES( void );
void RETI( void ), RETN( void );
void RL( void ), RLA( void ), RLC( void ), RLCA( void ), RLD( void ), RR( void ), RRA( void ), RRC( void );
void RRCA( void ), RRD( void );
void SCF( void ), SET( void ), SLA( void ), SLL( void ), SRA( void );
void SRL( void ), SUB( void ), XOR( void );
void XREF( void ), XDEF( void ), LSTON( void ), LSTOFF( void );
void LIB( void ), XLIB( void );
void IF( void ), ELSE( void ), ENDIF( void );
void MODULE( void );
void LINE( void );
void PUBLIC( void ); void EXTERN( void ); 


typedef void ( *ptrfunc )( void ); /* ptr to function returning void */
typedef int ( *fptr )( const void *, const void * );

struct Z80sym
{
    char *z80mnem;
    ptrfunc z80func;
};


#define DEF_ENTRY(func)     { #func, func }
struct Z80sym Z80ident[] =
{
    DEF_ENTRY( ADC ),
    DEF_ENTRY( ADD ),
    DEF_ENTRY( AND ),
    DEF_ENTRY( BINARY ),
    DEF_ENTRY( BIT ),
    DEF_ENTRY( CALL ),
    DEF_ENTRY( CALL_OZ ),
    DEF_ENTRY( CALL_PKG ),
    DEF_ENTRY( CCF ),
    DEF_ENTRY( CP ),
    DEF_ENTRY( CPD ),
    DEF_ENTRY( CPDR ),
    DEF_ENTRY( CPI ),
    DEF_ENTRY( CPIR ),
    DEF_ENTRY( CPL ),
    DEF_ENTRY( DAA ),
    DEF_ENTRY( DEC ),
    DEF_ENTRY( DEFB ),
    DEF_ENTRY( DEFC ),
    DEF_ENTRY( DEFGROUP ),
    DEF_ENTRY( DEFINE ),
    DEF_ENTRY( DEFL ),
    DEF_ENTRY( DEFM ),
    DEF_ENTRY( DEFP ),
    DEF_ENTRY( DEFS ),
    DEF_ENTRY( DEFVARS ),
    DEF_ENTRY( DEFW ),
    DEF_ENTRY( DI ),
    DEF_ENTRY( DJNZ ),
    DEF_ENTRY( EI ),
    DEF_ENTRY( ELSE ),
    DEF_ENTRY( ENDIF ),
    DEF_ENTRY( EX ),
    DEF_ENTRY( EXTERN ),
    DEF_ENTRY( EXX ),
    DEF_ENTRY( FPP ),
    DEF_ENTRY( HALT ),
    DEF_ENTRY( IF ),
    DEF_ENTRY( IM ),
    DEF_ENTRY( IN ),
    DEF_ENTRY( INC ),
    DEF_ENTRY( INCLUDE ),
    DEF_ENTRY( IND ),
    DEF_ENTRY( INDR ),
    DEF_ENTRY( INI ),
    DEF_ENTRY( INIR ),
    DEF_ENTRY( INVOKE ),
    DEF_ENTRY( JP ),
    DEF_ENTRY( JR ),
    DEF_ENTRY( LD ),
    DEF_ENTRY( LDD ),
    DEF_ENTRY( LDDR ),
    DEF_ENTRY( LDI ),
    DEF_ENTRY( LDIR ),
    DEF_ENTRY( LIB ),
    DEF_ENTRY( LINE ),
    DEF_ENTRY( LSTOFF ),
    DEF_ENTRY( LSTON ),
    DEF_ENTRY( MODULE ),
    DEF_ENTRY( NEG ),
    DEF_ENTRY( NOP ),
    DEF_ENTRY( OR ),
    DEF_ENTRY( ORG ),
    DEF_ENTRY( OTDR ),
    DEF_ENTRY( OTIR ),
    DEF_ENTRY( OUT ),
    DEF_ENTRY( OUTD ),
    DEF_ENTRY( OUTI ),
    DEF_ENTRY( OZ ),
    DEF_ENTRY( POP ),
    DEF_ENTRY( PUBLIC ),
    DEF_ENTRY( PUSH ),
    DEF_ENTRY( RES ),
    DEF_ENTRY( RET ),
    DEF_ENTRY( RETI ),
    DEF_ENTRY( RETN ),
    DEF_ENTRY( RL ),
    DEF_ENTRY( RLA ),
    DEF_ENTRY( RLC ),
    DEF_ENTRY( RLCA ),
    DEF_ENTRY( RLD ),
    DEF_ENTRY( RR ),
    DEF_ENTRY( RRA ),
    DEF_ENTRY( RRC ),
    DEF_ENTRY( RRCA ),
    DEF_ENTRY( RRD ),
    DEF_ENTRY( RST ),
    DEF_ENTRY( SBC ),
    DEF_ENTRY( SCF ),
    DEF_ENTRY( SET ),
    DEF_ENTRY( SLA ),
    DEF_ENTRY( SLL ),
    DEF_ENTRY( SRA ),
    DEF_ENTRY( SRL ),
    DEF_ENTRY( SUB ),
    DEF_ENTRY( UNDEFINE ),
    DEF_ENTRY( XDEF ),
    DEF_ENTRY( XLIB ),
    DEF_ENTRY( XOR ),
    DEF_ENTRY( XREF )
};
#undef DEF_ENTRY

int
idcmp( char *idptr, const struct Z80sym *symptr )
{
    return stricompare( idptr, symptr->z80mnem );
}


struct Z80sym *SearchId( void )
{
    struct Z80sym *foundsym;

    foundsym = ( struct Z80sym * ) bsearch( tok_name, Z80ident, NUM_ELEMS( Z80ident ), sizeof( struct Z80sym ),
                                            ( fptr ) idcmp );
    return foundsym;
}



void
ParseIdent( enum flag interpret )
{
    struct Z80sym *foundsym;

    foundsym = SearchId();

    if ( foundsym == NULL )
    {
        if ( interpret == ON )      /* only issue error message if interpreting */
            error_unknown_ident();
    }
    else
    {
        if ( foundsym->z80func == IF )
        {
            if ( interpret == OFF )
                Skipline();    /* skip current line until EOL */

            ifstatement( interpret );
        }
        else if ( foundsym->z80func == ELSE ||
                  foundsym->z80func == ENDIF )
        {
            ( foundsym->z80func )();
            Skipline();
        }
        else
        {
            if ( interpret == ON )
                ( foundsym->z80func )();

            Skipline();               /* skip current line until EOL */
        }
    }
}



void
LSTON( void )
{
    if ( opts.list )
        opts.cur_list = TRUE;				/* switch listing ON again... */
}



void
LSTOFF( void )
{
    if ( opts.list )
        opts.cur_list = FALSE;
}

/* Function for Line number in C source */
void LINE( void )
{
	DEFINE_STR( name, MAXLINE );

    GetSym();
	if (tok != TK_NUMBER)
		error_syntax();

    if ( opts.line_mode )
        set_error_line( tok_number );

	Str_sprintf( name, "__C_LINE_%ld", tok_number );
    define_symbol( name->str, get_PC(), SYM_ADDR | SYM_TOUCHED );
}



/* dummy function - not used */
void
IF( void )
{
}




void
ELSE( void )
{
    tok = TK_ELSE_STMT;
}




void
ENDIF( void )
{
    tok = TK_ENDIF_STMT;
}


void
PUBLIC( void )
{
    do
    {
        if ( GetSym() == TK_NAME )
        {
            declare_public_symbol( tok_name );
        }
        else
        {
            error_syntax();
            return;
        }
    }
    while ( GetSym() == TK_COMMA );

    if ( tok != TK_NEWLINE && tok != TK_END )
    {
        error_syntax();
    }
}

void
XDEF( void )
{
#if 0
	warn_deprecated("XDEF", "PUBLIC");
#endif
	PUBLIC();
}

void
XLIB( void )
{
#if 0
	warn_deprecated("XLIB", "PUBLIC");
#endif
	PUBLIC();
}

void
EXTERN( void )
{
    do
    {
        if ( GetSym() == TK_NAME )
        {
            declare_extern_symbol( tok_name );    /* Define symbol as extern */
        }
        else
        {
            error_syntax();
            return;
        }
    }
    while ( GetSym() == TK_COMMA );

    if ( tok != TK_NEWLINE && tok != TK_END )
    {
        error_syntax();
    }
}

void
XREF( void )
{
#if 0
	warn_deprecated("XREF", "EXTERN");
#endif
	EXTERN();
}

void
LIB( void )
{
#if 0
	warn_deprecated("LIB", "EXTERN");
#endif
	EXTERN();
}


void
MODULE( void )
{
    if ( opts.force_xlib )
    {
        PUBLIC();
    }
    else
    {
        GetSym();
        DeclModuleName();
    }
}


void
NOP( void )
{
    append_byte( 0x00 );
}



void
HALT( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_byte( 0x76 );
}



void
LDI( void )
{
    append_2bytes( 0xED, 0xA0 );
}



void
LDIR( void )
{
    append_2bytes( 0xED, 0xB0 );
}



void
LDD( void )
{
    append_2bytes( 0xED, 0xA8 );
}



void
LDDR( void )
{
    append_2bytes( 0xED, 0xB8 );
}



void
CPI( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        SetTemporaryLine( "\n extern rcmx_cpi \n call rcmx_cpi \n" );
        return;
    }

    append_2bytes( 0xED, 0xA1 );
}



void
CPIR( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        SetTemporaryLine( "\n extern rcmx_cpir \n call rcmx_cpir \n" );
        return;
    }

    append_2bytes( 0xED, 0xB1 );
}



void
CPD( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        SetTemporaryLine( "\n extern rcmx_cpd \n call rcmx_cpd \n" );
        return;
    }

    append_2bytes( 0xED, 0xA9 );
}



void
CPDR( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        SetTemporaryLine( "\n extern rcmx_cpdr \n call rcmx_cpdr \n" );
        return;
    }

    append_2bytes( 0xED, 0xB9 );
}



void
IND( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xAA );
}



void
INDR( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xBA );
}



void
INI( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xA2 );
}



void
INIR( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xB2 );
}



void
OUTI( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xA3 );
}



void
OUTD( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xAB );
}



void
OTIR( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xB3 );
}



void
OTDR( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0xBB );
}




/*
 * Allow specification of "<instr> [A,]xxx"
 * in SUB, AND, OR, XOR, CP instructions
 */
void
ExtAccumulator( int opcode )
{
    char *fptr;

    fptr = ScanGetPos();

    if ( GetSym() == TK_NAME )
    {
        if ( CheckRegister8() == 7 )
        {
            if ( GetSym() == TK_COMMA )
            {
                /* <instr> A, ... */
                ArithLog8_instr( opcode );

                return;
            }
        }
    }

    /* reparse and code generate (if possible) */
    tok = TK_NIL;
    EOL = FALSE;

    ScanSetPos( fptr );
    ArithLog8_instr( opcode );
}



void
CP( void )
{
    ExtAccumulator( 7 );
}




void
AND( void )
{
    ExtAccumulator( 4 );
}



void
OR( void )
{
    ExtAccumulator( 6 );
}



void
XOR( void )
{
    ExtAccumulator( 5 );
}


void
SUB( void )
{
    ExtAccumulator( 2 );
}




void
SET( void )
{
    BitTest_instr( 192 );
}



void
RES( void )
{
    BitTest_instr( 128 );
}



void
BIT( void )
{
    BitTest_instr( 64 );
}



void
RLC( void )
{
    RotShift_instr( 0 );
}



void
RRC( void )
{
    RotShift_instr( 1 );
}



void
RL( void )
{
    RotShift_instr( 2 );
}



void
RR( void )
{
    RotShift_instr( 3 );
}



void
SLA( void )
{
    RotShift_instr( 4 );
}



void
SRA( void )
{
    RotShift_instr( 5 );
}



void
SLL( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    RotShift_instr( 6 );
}



void
SRL( void )
{
    RotShift_instr( 7 );
}



void
CPL( void )
{
    append_byte( 0x2F );
}



void
RLA( void )
{
    append_byte( 0x17 );
}



void
RRA( void )
{
    append_byte( 0x1F );
}



void
RRCA( void )
{
    append_byte( 0x0F );
}



void
RLCA( void )
{
    append_byte( 0x07 );
}



void
EXX( void )
{
    append_byte( 0xD9 );
}



void
PUSH( void )
{
    PushPop_instr( 197 );
}



void
POP( void )
{
    PushPop_instr( 193 );
}




void
RETI( void )
{
    append_2bytes( 0xED, 0x4D );
}



void
RETN( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_2bytes( 0xED, 0x45 );
}



void
RLD( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        SetTemporaryLine( "\n extern rcmx_rld \n call rcmx_rld \n" );
        return;
    }

    append_2bytes( 0xED, 0x6F );
}



void
RRD( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        SetTemporaryLine( "\n extern rcmx_rrd \n call rcmx_rrd \n" );
        return;
    }

    append_2bytes( 0xED, 0x67 );
}



void
NEG( void )
{
    append_2bytes( 0xED, 0x44 );
}



void
CALL( void )
{
    Subroutine_addr( 205, 196 );
}



void
JP( void )
{
    JP_instr( 195, 194 );
}



void
CCF( void )
{
    append_byte( 0x3F );
}



void
SCF( void )
{
    append_byte( 0x37 );
}



void
DI( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_byte( 0xF3 );
}



void
EI( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_byte( 0xFB );
}



void
DAA( void )
{
    if ( ( opts.cpu & CPU_RABBIT ) )
    {
        error_illegal_ident();
        return;
    }

    append_byte( 0x27 );
}

/*
* $Log: prsident.c,v $
* Revision 1.71  2014-05-02 20:24:38  pauloscustodio
* New class Module to replace struct module and struct modules
*
* Revision 1.70  2014/04/22 23:52:55  pauloscustodio
* As inc_PC() is no longer needed, append_opcode() no longer makes sense.
* Removed append_opcode() and created a new helper append_2bytes().
*
* Revision 1.69  2014/04/22 23:32:42  pauloscustodio
* Release 2.2.0 with major fixes:
*
* - Object file format changed to version 03, to include address of start
* of the opcode of each expression stored in the object file, to allow
* ASMPC to refer to the start of the opcode instead of the patch pointer.
* This solves long standing BUG_0011 and BUG_0048.
*
* - ASMPC no longer stored in the symbol table and evaluated as a separate
* token, to allow expressions including ASMPC to be relocated. This solves
* long standing and never detected BUG_0047.
*
* - Handling ASMPC during assembly simplified - no need to call inc_PC() on
* every assembled instruction, no need to store list of JRPC addresses as
* ASMPC is now stored in the expression.
*
* BUG_0047: Expressions including ASMPC not relocated - impacts call po|pe|p|m emulation in RCMX000
* ASMPC is computed on zero-base address of the code section and expressions
* including ASMPC are not relocated at link time.
* "call po, xx" is emulated in --RCMX000 as "jp pe, ASMPC+3; call xx".
* The expression ASMPC+3 is not marked as relocateable, and the resulting
* code only works when linked at address 0.
*
* BUG_0048: ASMPC used in JP/CALL argument does not refer to start of statement
* In "JP ASMPC", ASMPC is coded as instruction-address + 1 instead
* of instruction-address.
*
* BUG_0011 : ASMPC should refer to start of statememnt, not current element in DEFB/DEFW
* Bug only happens with forward references to relative addresses in expressions.
* See example from zx48.asm ROM image in t/BUG_0011.t test file.
* Need to change object file format to correct - need patchptr and address of instruction start.
*
* Revision 1.68  2014/04/13 20:32:06  pauloscustodio
* PUBLIC and EXTERN instead of LIB, XREF, XDEF, XLIB
*
* Revision 1.67  2014/04/13 11:54:01  pauloscustodio
* CH_0025: PUBLIC and EXTERN instead of LIB, XREF, XDEF, XLIB
* Use new keywords PUBLIC and EXTERN, make the old ones synonyms.
* Remove 'X' scope for symbols in object files used before for XLIB -
* all PUBLIC symbols have scope 'G'.
* Remove SDCC hack on object files trating XLIB and XDEF the same.
* Created a warning to say XDEF et.al. are deprecated, but for the
* momment keep it commented.
*
* Revision 1.66  2014/04/05 23:36:11  pauloscustodio
* CH_0024: Case-preserving, case-insensitive symbols
* Symbols no longer converted to upper-case, but still case-insensitive
* searched. Warning when a symbol is used with different case than
* defined. Intermidiate stage before making z80asm case-sensitive, to
* be more C-code friendly.
*
* Revision 1.65  2014/03/29 00:21:35  pauloscustodio
* TK_EOF renamed TK_END
*
* Revision 1.64  2014/03/18 22:44:03  pauloscustodio
* Scanner decodes a number into tok_number.
* GetConstant(), TK_HEX_CONST, TK_BIN_CONST and TK_DEC_CONST removed.
* ident[] replaced by tok_name.
*
* Revision 1.63  2014/03/16 23:57:06  pauloscustodio
* Removed global line[]
*
* Revision 1.62  2014/03/16 19:19:49  pauloscustodio
* Integrate use of srcfile in scanner, removing global variable z80asmfile
* and attributes CURRENTMODULE->cfile->line and CURRENTMODULE->cfile->fname.
*
* Revision 1.61  2014/03/15 02:12:07  pauloscustodio
* Rename last token to tok*
* GetSym() declared in scan.h
*
* Revision 1.60  2014/03/11 23:34:00  pauloscustodio
* Remove check for feof(z80asmfile), add token TK_END to return on EOF.
* Allows decoupling of input file used in scanner from callers.
* Removed TOTALLINES.
* GetChar() made static to scanner, not called by other modules.
*
* Revision 1.59  2014/03/11 22:59:20  pauloscustodio
* Move EOL flag to scanner
*
* Revision 1.58  2014/03/11 00:15:13  pauloscustodio
* Scanner reads input line-by-line instead of character-by-character.
* Factor house-keeping at each new line read in the scanner getasmline().
* Add interface to allow back-tacking of the recursive descent parser by
* getting the current input buffer position and comming back to the same later.
* SetTemporaryLine() keeps a stack of previous input lines.
* Scanner handles single-quoted strings and returns a number.
* New error for single-quoted string with length != 1.
* Scanner handles double-quoted strings and returns the quoted string.
*
* Revision 1.57  2014/03/03 13:27:07  pauloscustodio
* Rename symbol type constants
*
* Revision 1.56  2014/03/02 12:51:41  pauloscustodio
* Change token ids to TK_...
*
* Revision 1.55  2014/03/01 15:45:31  pauloscustodio
* CH_0021: New operators ==, !=, &&, ||, <<, >>, ?:
* Handle C-like operators, make exponentiation (**) right-associative.
* Simplify expression parser by handling composed tokens in lexer.
* Change token ids to TK_...
*
* Revision 1.54  2014/02/25 22:39:34  pauloscustodio
* ws
*
* Revision 1.53  2014/02/24 23:08:55  pauloscustodio
* Rename "enum symbols" to "tokid_t", define in token.h
*
* Revision 1.52  2014/01/11 01:29:40  pauloscustodio
* Extend copyright to 2014.
* Move CVS log to bottom of file.
*
* Revision 1.51  2014/01/11 00:10:39  pauloscustodio
* Astyle - format C code
* Add -Wall option to CFLAGS, remove all warnings
*
* Revision 1.50  2013/12/15 19:01:07  pauloscustodio
* Move platform specific defines from types.h to config.h.
* Remove dependency of types.h from glib.h.
* Use NUM_ELEMS() instead of glib G_N_ELEMENTS().
*
* Revision 1.49  2013/12/15 13:18:34  pauloscustodio
* Move memory allocation routines to lib/xmalloc, instead of glib,
* introduce memory leak report on exit and memory fence check.
*
* Revision 1.48  2013/10/05 08:54:01  pauloscustodio
* Parse command line options via look-up tables:
* -forcexlib, --forcexlib
*
* Revision 1.47  2013/10/05 08:14:43  pauloscustodio
* Parse command line options via look-up tables:
* -C, --line-mode
*
* Revision 1.46  2013/10/04 23:09:25  pauloscustodio
* Parse command line options via look-up tables:
* -R, --relocatable
* --RCMX000
*
* Revision 1.45  2013/10/01 23:23:53  pauloscustodio
* Parse command line options via look-up tables:
* -l, --list
* -nl, --no-list
*
* Revision 1.44  2013/10/01 22:09:33  pauloscustodio
* Parse command line options via look-up tables:
* -sdcc
*
* Revision 1.43  2013/09/08 00:43:59  pauloscustodio
* New error module with one error function per error, no need for the error
* constants. Allows compiler to type-check error message arguments.
* Included the errors module in the init() mechanism, no need to call
* error initialization from main(). Moved all error-testing scripts to
* one file errors.t.
*
* Revision 1.42  2013/09/01 18:45:35  pauloscustodio
* Remove NUM_ELEMS, use G_N_ELEMENTS instead (from glib.h)
* Remove FALSE, TRUE, MIN, MAX; defined in glib.h
*
* Revision 1.41  2013/08/26 21:49:39  pauloscustodio
* Bug report 2013-07-27 10:50:27 by rkd77 : compile with -Wformat -Werror=format-security
*
* Revision 1.40  2013/06/08 23:37:32  pauloscustodio
* Replace define_def_symbol() by one function for each symbol table type: define_static_def_sym(),
*  define_global_def_sym(), define_local_def_sym(), encapsulating the symbol table used.
* Define keywords for special symbols ASMSIZE, ASMTAIL
*
* Revision 1.39  2013/06/01 01:24:22  pauloscustodio
* CH_0022 : Replace avltree by hash table for symbol table
*
* Revision 1.38  2013/03/04 23:23:37  pauloscustodio
* Removed writeline, that was used to cancel listing of multi-line
* constructs, as only the first line was shown on the list file. Fixed
* the problem in DEFVARS and DEFGROUP. Side-effect: LSTOFF line is listed.
*
* Revision 1.37  2013/02/19 22:52:40  pauloscustodio
* BUG_0030 : List bytes patching overwrites header
* BUG_0031 : List file garbled with input lines with 255 chars
* New listfile.c with all the listing related code
*
* Revision 1.36  2013/01/20 21:24:28  pauloscustodio
* Updated copyright year to 2013
*
* Revision 1.35  2012/11/03 17:39:36  pauloscustodio
* astyle, comments
*
* Revision 1.34  2012/06/05 22:24:47  pauloscustodio
* BUG_0020 : Segmentation fault in ParseIdent for symbol not found with interpret OFF
*
* Revision 1.33  2012/05/26 18:51:10  pauloscustodio
* CH_0012 : wrappers on OS calls to raise fatal error
* CH_0013 : new errors interface to decouple calling code from errors.c
*
* Revision 1.32  2012/05/24 17:09:27  pauloscustodio
* Unify copyright header
*
* Revision 1.31  2012/05/18 00:28:45  pauloscustodio
* astyle
*
* Revision 1.30  2012/05/18 00:20:32  pauloscustodio
* ParseIndent(): remove hard coded IDs of IF, ELSE, ENDIF
* Z80ident[]: make always handling function the same name as assembler ident.
*
* Revision 1.29  2012/05/17 17:42:14  pauloscustodio
* define_symbol() defined as void, a fatal error is
* always raised on error.
*
* Revision 1.28  2012/05/12 16:57:33  pauloscustodio
*     BUG_0016 : RCMX000 emulation routines not assembled when LIST is ON (-l)
*         The code "cpi" is assembled as "call rcmx_cpi" when option -RCMX000 is ON.
*         This is implemented by calling SetTemporaryLine() to insert new code
*         at the current input position.
*         When LIST is ON, getasmline() remembers the input file position, reads
*         the next line and restores the file position. It ignores the buffer
*         set by SetTemporaryLine(), causing the assembler to skip
*         the "call rcmx_cpi" line.
*         Also added registry of rcmx_cpi as external library routine.
*
* Revision 1.27  2012/05/11 19:29:49  pauloscustodio
* Format code with AStyle (http://astyle.sourceforge.net/) to unify brackets, spaces instead of tabs, 
* indenting style, space padding in parentheses and operators. Options written in the makefile, target astyle.
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
* Revision 1.26  2011/10/14 14:51:15  pauloscustodio
* - Silence warnings with casts.
*
* Revision 1.25  2011/08/19 15:53:58  pauloscustodio
* BUG_0010 : heap corruption when reaching MAXCODESIZE
* - test for overflow of MAXCODESIZE is done before each instruction at parseline(); if only one byte is available in codearea, and a 2 byte instruction is assembled, the heap is corrupted before the exception is raised.
* - Factored all the codearea-accessing code into a new module, checking for MAXCODESIZE on every write.
*
* Revision 1.24  2011/07/18 00:48:25  pauloscustodio
* Initialize MS Visual Studio DEBUG build to show memory leaks on exit
*
* Revision 1.23  2011/07/12 22:47:59  pauloscustodio
* - Moved all error variables and error reporting code to a separate module errors.c,
*   replaced all extern declarations of these variables by include errors.h,
*   created symbolic constants for error codes.
* - Added test scripts for error messages.
*
* Revision 1.22  2011/07/11 16:02:04  pauloscustodio
* Moved all option variables and option handling code to a separate module options.c,
* replaced all extern declarations of these variables by include options.h.
*
* Revision 1.21  2011/07/09 18:25:35  pauloscustodio
* Log keyword in checkin comment was expanded inside Log expansion... recursive
* Added Z80asm banner to all source files
*
* Revision 1.20  2011/07/09 17:36:09  pauloscustodio
* Copied cvs log into Log history
*
* Revision 1.19  2011/07/09 01:46:00  pauloscustodio
* Added Log keyword
*
* Revision 1.18  2011/07/09 01:21:55  pauloscustodio
* added define_symbol() declaration
*
* Revision 1.17  2011/02/27 11:58:46  stefano
* Rolled back z80asm changes (I must have messed up something!!)
* Slightly updated console output for Enterprise..
*
* Revision 1.16  2011/02/23 16:27:39  stefano
* *** empty log message ***
*
* Revision 1.15  2010/09/19 00:06:20  dom
* Tweaks for compiling code generated by sdcc - it generates XREF rather than
* LIB so treat XREF as a LIB (this possibly should be the default)
*
* Do some _ mapping magic when in sdcc so standard z88dk libs can be used
* (wrong _ convention chosen a long time ago...)
*
* Have -forcexlib flag which treats MODULE as XLIB.
*
* Revision 1.14  2010/04/16 17:34:37  dom
* Make line number an int - 32768 lines isn't big enough...
*
* Revision 1.13  2009/10/11 00:24:38  dom
* Define a symbol each time we come across a LINE directive - this will
* assist the debugger somewhat
*
* Revision 1.12  2009/07/18 23:23:15  dom
* clean up the code a bit more (Formatting and a fewer magic numbers)
*
* Revision 1.11  2009/05/28 20:33:58  dom
* retn isn't available either on a rabbit
*
* Revision 1.10  2009/05/28 19:20:16  dom
* For the RCM SLL isn't a valid opcode, neither is anything using ixh,ixl,iyh
* or iyl.
*
* Revision 1.9  2009/05/28 18:49:54  dom
* Some opcodes didn't come out right
*
* Revision 1.8  2007/06/17 12:07:43  dom
* Commit the rabbit emulation code including rrd, rld
*
* Add a .vcproj for visual studio
*
* Revision 1.7  2007/02/28 11:23:24  stefano
* New platform !
* Rabbit Control Module 2000/3000.
*
* Revision 1.6  2003/10/11 15:41:04  dom
* changes from garry
*
* - support for defp -> defp addr,bank
* - square brackets can be used in expressions
* - comma can be used in defm
*
* Revision 1.5  2002/05/11 20:09:38  dom
* A patch around the appalling IF ELSE ENDIF handling of z80asm where it
* tries to evaluate FALSE clauses and gets completely in a twist.
*
* These patches turn off the output to the two errors that I've seen pop
* up in this state: Syntax error and unknown identifier. Please test this
* one quite hard if you get a change... - it was done to allow even more
* complicated logic in the z88 app startup to actually work - as soon as I'm
* happy with that I'll commit it as well
*
* Revision 1.4  2001/02/28 18:19:24  dom
* Fixed size of Z80ident table <grrr>
*
* Revision 1.3  2001/02/28 17:59:22  dom
* Added UNDEFINE for undefining symbols, bumped version to 1.0.18
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
* Revision 1.1  2000/07/04 15:33:30  dom
* branches:  1.1.1;
* Initial revision
*
* Revision 1.1.1.1  2000/07/04 15:33:30  dom
* First import of z88dk into the sourceforge system <gulp>
*
*/

/* $History: PRSIDENT.C $ */
/*  */
/* *****************  Version 14  ***************** */
/* User: Gbs          Date: 30-01-00   Time: 12:51 */
/* Updated in $/Z80asm */
/* Bug fix from v1.0.14 where IF, ELSE & ENDIF id's were wrong in  */
/* ParseIdent () due to new CALL_PKG pseudo macro. */
/*  */
/* *****************  Version 13  ***************** */
/* User: Gbs          Date: 30-09-99   Time: 22:39 */
/* Updated in $/Z80asm */
/* CALL_PKG hard coded macro implemented for Garry Lancaster's Package */
/* System. */
/*  */
/* *****************  Version 11  ***************** */
/* User: Gbs          Date: 6-06-99    Time: 20:06 */
/* Updated in $/Z80asm */
/* "PC" program counter changed to long (from unsigned short). */
/*  */
/* *****************  Version 9  ***************** */
/* User: Gbs          Date: 6-06-99    Time: 12:13 */
/* Updated in $/Z80asm */
/* Added Ascii Art "Z80asm" at top of source file. */
/*  */
/* *****************  Version 7  ***************** */
/* User: Gbs          Date: 6-06-99    Time: 11:30 */
/* Updated in $/Z80asm */
/* "config.h" included before "symbol.h" */
/*  */
/* *****************  Version 5  ***************** */
/* User: Gbs          Date: 17-04-99   Time: 0:30 */
/* Updated in $/Z80asm */
/* New GNU programming style C format. Improved ANSI C coding style */
/* eliminating previous compiler warnings. New -o option. Asm sources file */
/* now parsed even though any line feed standards (CR,LF or CRLF) are */
/* used. */
/*  */
/* *****************  Version 4  ***************** */
/* User: Gbs          Date: 7-03-99    Time: 13:13 */
/* Updated in $/Z80asm */
/* Minor changes to keep C compiler happy. */
/*  */
/* *****************  Version 2  ***************** */
/* User: Gbs          Date: 20-06-98   Time: 15:04 */
/* Updated in $/Z80asm */
/* SUB, AND, OR, XOR and CP instruction improved with alternative syntax: */
/* "<instr> [A,]xxx", allowing for specification of accumulator. This */
/* makes all accumulator related instructions equal in syntax and removes */
/* ambiguity. */
