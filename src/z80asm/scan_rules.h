static const int lexer_start = 21;
static const int lexer_error = 0;
static const int lexer_en_main = 21;
static void set_scan_buf( char *text, Bool _at_bol )
{
 Str_set( input_buf, text );
 at_bol = _at_bol;
 pe = input_buf->str + input_buf->len;
 eof = pe;
	{
	cs = lexer_start;
	ts = 0;
	te = 0;
	act = 0;
	}
}
static tokid_t _scan_get( void )
{
	{
	short _widec;
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
tr0:
	{{p = ((te))-1;}{
	sym.tok = TK_LPAREN;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr9:
	{te = p+1;{
	sym.tok = TK_IND_BC;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr10:
	{te = p+1;{
	sym.tok = TK_IND_C;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr12:
	{te = p+1;{
	sym.tok = TK_IND_DE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr14:
	{te = p+1;{
	sym.tok = TK_IND_HL;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr17:
	{te = p+1;{
	sym.tok = TK_IND_IX;
	p--; te--;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr18:
	{te = p+1;{
	sym.tok = TK_IND_IY;
	p--; te--;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr20:
	{te = p+1;{
	sym.tok = TK_IND_SP;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr21:
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;}
	sym.tok = TK_ASMPC;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 37:
	{{p = ((te))-1;}
	sym.tok = TK_NZ;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 38:
	{{p = ((te))-1;}
	sym.tok = TK_Z;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 39:
	{{p = ((te))-1;}
	sym.tok = TK_NC;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 40:
	{{p = ((te))-1;}
	sym.tok = TK_C;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 41:
	{{p = ((te))-1;}
	sym.tok = TK_PO;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 42:
	{{p = ((te))-1;}
	sym.tok = TK_PE;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 43:
	{{p = ((te))-1;}
	sym.tok = TK_P;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 44:
	{{p = ((te))-1;}
	sym.tok = TK_M;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 45:
	{{p = ((te))-1;}
	sym.tok = TK_B;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 46:
	{{p = ((te))-1;}
	sym.tok = TK_D;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 47:
	{{p = ((te))-1;}
	sym.tok = TK_E;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 48:
	{{p = ((te))-1;}
	sym.tok = TK_H;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 49:
	{{p = ((te))-1;}
	sym.tok = TK_IXH;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 50:
	{{p = ((te))-1;}
	sym.tok = TK_IYH;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 51:
	{{p = ((te))-1;}
	sym.tok = TK_L;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 52:
	{{p = ((te))-1;}
	sym.tok = TK_IXL;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 53:
	{{p = ((te))-1;}
	sym.tok = TK_IYL;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 54:
	{{p = ((te))-1;}
	sym.tok = TK_A;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 55:
	{{p = ((te))-1;}
	sym.tok = TK_F;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 56:
	{{p = ((te))-1;}
	sym.tok = TK_I;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 57:
	{{p = ((te))-1;}
	sym.tok = TK_IIR;
	if ( ! (opts.cpu & CPU_RABBIT) ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 58:
	{{p = ((te))-1;}
	sym.tok = TK_R;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 59:
	{{p = ((te))-1;}
	sym.tok = TK_EIR;
	if ( ! (opts.cpu & CPU_RABBIT) ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}
	break;
	case 61:
	{{p = ((te))-1;}
	sym.tok = TK_BC;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 62:
	{{p = ((te))-1;}
	sym.tok = TK_DE;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 63:
	{{p = ((te))-1;}
	sym.tok = TK_HL;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 64:
	{{p = ((te))-1;}
	sym.tok = TK_IX;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 65:
	{{p = ((te))-1;}
	sym.tok = TK_IY;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 66:
	{{p = ((te))-1;}
	sym.tok = TK_AF;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 67:
	{{p = ((te))-1;}
	sym.tok = TK_SP;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 75:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_BINARY;
		sym.tok_opcode = TK_BINARY;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_BINARY;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 76:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFGROUP;
		sym.tok_opcode = TK_DEFGROUP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFGROUP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 77:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFINE;
		sym.tok_opcode = TK_DEFINE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFINE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 78:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFS;
		sym.tok_opcode = TK_DEFS;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFS;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 79:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFVARS;
		sym.tok_opcode = TK_DEFVARS;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFVARS;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 80:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_EXTERN;
		sym.tok_opcode = TK_EXTERN;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_EXTERN;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 81:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_INCLUDE;
		sym.tok_opcode = TK_INCLUDE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INCLUDE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 82:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LIB;
		sym.tok_opcode = TK_LIB;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LIB;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 83:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LINE;
		sym.tok_opcode = TK_LINE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LINE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 84:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LSTOFF;
		sym.tok_opcode = TK_LSTOFF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LSTOFF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 85:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LSTON;
		sym.tok_opcode = TK_LSTON;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LSTON;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 86:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_MODULE;
		sym.tok_opcode = TK_MODULE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_MODULE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 87:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_ORG;
		sym.tok_opcode = TK_ORG;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_ORG;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 88:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_PUBLIC;
		sym.tok_opcode = TK_PUBLIC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_PUBLIC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 89:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SECTION;
		sym.tok_opcode = TK_SECTION;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SECTION;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 90:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_UNDEFINE;
		sym.tok_opcode = TK_UNDEFINE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_UNDEFINE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 91:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_XDEF;
		sym.tok_opcode = TK_XDEF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_XDEF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 92:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_XLIB;
		sym.tok_opcode = TK_XLIB;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_XLIB;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 93:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_XREF;
		sym.tok_opcode = TK_XREF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_XREF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 98:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_ADC;
		sym.tok_opcode = TK_ADC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_ADC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 99:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_ADD;
		sym.tok_opcode = TK_ADD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_ADD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 100:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_AND;
		sym.tok_opcode = TK_AND;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_AND;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 101:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_BIT;
		sym.tok_opcode = TK_BIT;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_BIT;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 102:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CALL;
		sym.tok_opcode = TK_CALL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CALL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 103:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CCF;
		sym.tok_opcode = TK_CCF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CCF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 104:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CP;
		sym.tok_opcode = TK_CP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 105:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CPD;
		sym.tok_opcode = TK_CPD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CPD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 106:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CPDR;
		sym.tok_opcode = TK_CPDR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CPDR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 107:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CPI;
		sym.tok_opcode = TK_CPI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CPI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 108:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CPIR;
		sym.tok_opcode = TK_CPIR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CPIR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 109:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CPL;
		sym.tok_opcode = TK_CPL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CPL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 110:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DAA;
		sym.tok_opcode = TK_DAA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DAA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 111:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEC;
		sym.tok_opcode = TK_DEC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 112:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DI;
		sym.tok_opcode = TK_DI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 113:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DJNZ;
		sym.tok_opcode = TK_DJNZ;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DJNZ;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 114:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_EI;
		sym.tok_opcode = TK_EI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_EI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 115:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_EX;
		sym.tok_opcode = TK_EX;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_EX;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 116:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_EXX;
		sym.tok_opcode = TK_EXX;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_EXX;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 117:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_HALT;
		sym.tok_opcode = TK_HALT;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_HALT;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 118:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IM;
		sym.tok_opcode = TK_IM;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IM;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 119:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IN;
		sym.tok_opcode = TK_IN;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IN;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 120:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_INC;
		sym.tok_opcode = TK_INC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 121:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IND;
		sym.tok_opcode = TK_IND;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IND;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 122:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_INDR;
		sym.tok_opcode = TK_INDR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INDR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 123:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_INI;
		sym.tok_opcode = TK_INI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 124:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_INIR;
		sym.tok_opcode = TK_INIR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INIR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 125:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_JP;
		sym.tok_opcode = TK_JP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_JP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 126:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_JR;
		sym.tok_opcode = TK_JR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_JR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 127:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LD;
		sym.tok_opcode = TK_LD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 128:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LDD;
		sym.tok_opcode = TK_LDD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 129:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LDDR;
		sym.tok_opcode = TK_LDDR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDDR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 130:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LDI;
		sym.tok_opcode = TK_LDI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 131:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LDIR;
		sym.tok_opcode = TK_LDIR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDIR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 132:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_NEG;
		sym.tok_opcode = TK_NEG;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_NEG;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 133:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_NOP;
		sym.tok_opcode = TK_NOP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_NOP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 134:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OR;
		sym.tok_opcode = TK_OR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 135:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OTDR;
		sym.tok_opcode = TK_OTDR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTDR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 136:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OTIR;
		sym.tok_opcode = TK_OTIR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTIR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 137:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OUT;
		sym.tok_opcode = TK_OUT;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OUT;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 138:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OUTD;
		sym.tok_opcode = TK_OUTD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OUTD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 139:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OUTI;
		sym.tok_opcode = TK_OUTI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OUTI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 140:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_POP;
		sym.tok_opcode = TK_POP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_POP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 141:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_PUSH;
		sym.tok_opcode = TK_PUSH;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_PUSH;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 142:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RES;
		sym.tok_opcode = TK_RES;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RES;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 143:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RET;
		sym.tok_opcode = TK_RET;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RET;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 144:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RETI;
		sym.tok_opcode = TK_RETI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RETI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 145:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RETN;
		sym.tok_opcode = TK_RETN;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RETN;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 146:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RL;
		sym.tok_opcode = TK_RL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 147:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RLA;
		sym.tok_opcode = TK_RLA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RLA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 148:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RLC;
		sym.tok_opcode = TK_RLC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RLC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 149:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RLCA;
		sym.tok_opcode = TK_RLCA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RLCA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 150:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RLD;
		sym.tok_opcode = TK_RLD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RLD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 151:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RR;
		sym.tok_opcode = TK_RR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 152:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RRA;
		sym.tok_opcode = TK_RRA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RRA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 153:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RRC;
		sym.tok_opcode = TK_RRC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RRC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 154:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RRCA;
		sym.tok_opcode = TK_RRCA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RRCA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 155:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RRD;
		sym.tok_opcode = TK_RRD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RRD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 156:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RST;
		sym.tok_opcode = TK_RST;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RST;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 157:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SBC;
		sym.tok_opcode = TK_SBC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SBC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 158:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SCF;
		sym.tok_opcode = TK_SCF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SCF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 159:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SET;
		sym.tok_opcode = TK_SET;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SET;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 160:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SLA;
		sym.tok_opcode = TK_SLA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SLA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 161:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SLL;
		sym.tok_opcode = TK_SLL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SLL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 162:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SRA;
		sym.tok_opcode = TK_SRA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SRA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 163:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SRL;
		sym.tok_opcode = TK_SRL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SRL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 164:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SUB;
		sym.tok_opcode = TK_SUB;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SUB;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 165:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_XOR;
		sym.tok_opcode = TK_XOR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_XOR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 166:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CALL_OZ;
		sym.tok_opcode = TK_CALL_OZ;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CALL_OZ;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 167:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OZ;
		sym.tok_opcode = TK_OZ;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OZ;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 168:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_CALL_PKG;
		sym.tok_opcode = TK_CALL_PKG;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CALL_PKG;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 169:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_FPP;
		sym.tok_opcode = TK_FPP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_FPP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 170:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_INVOKE;
		sym.tok_opcode = TK_INVOKE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INVOKE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 173:
	{{p = ((te))-1;}
  sym.tok = TK_NAME;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 175:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts, 10 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 177:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 1, te - ts - 1, 16 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 179:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts - 1, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 181:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 2, te - ts - 2, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 185:
	{{p = ((te))-1;}
  sym.tok = TK_NIL;
  skip_to_newline();
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	}
	}
	goto st21;
tr23:
	{te = p+1;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts - 1, 16 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr24:
	{{p = ((te))-1;}{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts, 10 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr26:
	{{p = ((te))-1;}{
  sym.tok = TK_NIL;
  skip_to_newline();
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr28:
	{te = p+1;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 2, te - ts - 3, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr29:
	{{p = ((te))-1;}{
  sym.tok = TK_NAME;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr30:
	{te = p+1;{
	sym.tok = TK_DS_B;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr31:
	{te = p+1;{
	sym.tok = TK_DS_L;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr32:
	{te = p+1;{
	sym.tok = TK_DS_P;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr33:
	{te = p+1;{
	sym.tok = TK_DS_W;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr34:
	{{p = ((te))-1;}{
	sym.tok = TK_DOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr38:
	{te = p+1;{
  while ( ts[ 0] == '.' || isspace(ts[ 0]) ) ts++;
  while ( te[-1] == ':' || isspace(te[-1]) ) te--;
  sym.tok = TK_LABEL;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr39:
	{te = p+1;}
	goto st21;
tr40:
	{te = p+1;{
	sym.tok = TK_NEWLINE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr42:
	{te = p+1;{
  sym.tok = TK_STRING;
  if ( ! get_sym_string() )
   error_unclosed_string();
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr43:
	{te = p+1;{
	sym.tok = TK_CONST_EXPR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr45:
	{te = p+1;{
	sym.tok = TK_MOD;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr47:
	{te = p+1;{
  sym.tok = TK_NUMBER;
  if ( get_sym_string() &&
                             te - ts == 1 )
  {
   sym.number = *ts;
  }
  else
  {
   sym.number = 0;
   error_invalid_squoted_string();
  }
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr49:
	{te = p+1;{
	sym.tok = TK_RPAREN;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr51:
	{te = p+1;{
	sym.tok = TK_PLUS;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr52:
	{te = p+1;{
	sym.tok = TK_COMMA;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr53:
	{te = p+1;{
	sym.tok = TK_MINUS;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr54:
	{te = p+1;{
	sym.tok = TK_DIVIDE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr59:
	{te = p+1;{
	sym.tok = TK_COLON;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr64:
	{te = p+1;{
	sym.tok = TK_QUESTION;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr66:
	{te = p+1;{
	sym.tok = TK_LSQUARE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr67:
	{te = p+1;{
  sym.tok = TK_NIL;
  skip_to_newline();
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr68:
	{te = p+1;{
	sym.tok = TK_RSQUARE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr69:
	{te = p+1;{
	sym.tok = TK_BIN_XOR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr70:
	{te = p+1;{
	sym.tok = TK_LCURLY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr72:
	{te = p+1;{
	sym.tok = TK_RCURLY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr73:
	{te = p+1;{
	sym.tok = TK_BIN_NOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr74:
	{te = p+1;{
	sym.tok = TK_DOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr116:
	{te = p;p--;{
	sym.tok = TK_LOG_NOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr117:
	{te = p+1;{
	sym.tok = TK_NOT_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr119:
	{te = p;p--;{
	sym.tok = TK_BIN_AND;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr120:
	{te = p+1;{
	sym.tok = TK_LOG_AND;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr121:
	{te = p;p--;{
	sym.tok = TK_LPAREN;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr122:
	{te = p;p--;{
	sym.tok = TK_MULTIPLY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr123:
	{te = p+1;{
	sym.tok = TK_POWER;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr124:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts, 10 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr128:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts - 1, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr130:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 2, te - ts - 2, 16 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr131:
	{te = p;p--;}
	goto st21;
tr132:
	{te = p;p--;{
	sym.tok = TK_LESS;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr133:
	{te = p+1;{
	sym.tok = TK_LEFT_SHIFT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr134:
	{te = p+1;{
	sym.tok = TK_LESS_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr135:
	{te = p+1;{
	sym.tok = TK_NOT_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr136:
	{te = p;p--;{
	sym.tok = TK_EQUAL;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr137:
	{te = p+1;{
	sym.tok = TK_EQUAL;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr138:
	{te = p;p--;{
	sym.tok = TK_GREATER;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr139:
	{te = p+1;{
	sym.tok = TK_GREATER_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr140:
	{te = p+1;{
	sym.tok = TK_RIGHT_SHIFT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr141:
	{te = p;p--;{
  sym.tok = TK_NIL;
  skip_to_newline();
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr144:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 1, te - ts - 1, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr145:
	{te = p;p--;{
	sym.tok = TK_BIN_OR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr146:
	{te = p+1;{
	sym.tok = TK_LOG_OR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr147:
	{te = p;p--;{
	sym.tok = TK_A;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr152:
	{te = p;p--;{
  sym.tok = TK_NAME;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr155:
	{te = p;p--;{
	sym.tok = TK_AF;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr156:
	{te = p+1;{
	sym.tok = TK_AF1;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr161:
	{te = p;p--;{
	sym.tok = TK_B;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr169:
	{te = p;p--;{
	sym.tok = TK_C;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr175:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_CALL;
		sym.tok_opcode = TK_CALL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CALL;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr183:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_CP;
		sym.tok_opcode = TK_CP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CP;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr187:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_CPD;
		sym.tok_opcode = TK_CPD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CPD;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr189:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_CPI;
		sym.tok_opcode = TK_CPI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_CPI;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr191:
	{te = p;p--;{
	sym.tok = TK_D;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr198:
	{te = p;p--;{
	sym.tok = TK_DE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr217:
	{te = p;p--;{
	sym.tok = TK_E;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr220:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_EI;
		sym.tok_opcode = TK_EI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_EI;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr222:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_EX;
		sym.tok_opcode = TK_EX;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_EX;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr228:
	{te = p;p--;{
	sym.tok = TK_F;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr231:
	{te = p;p--;{
	sym.tok = TK_H;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr236:
	{te = p;p--;{
	sym.tok = TK_I;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr243:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_IN;
		sym.tok_opcode = TK_IN;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IN;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr248:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_INC;
		sym.tok_opcode = TK_INC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INC;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr253:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_IND;
		sym.tok_opcode = TK_IND;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IND;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr255:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_INI;
		sym.tok_opcode = TK_INI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_INI;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr260:
	{te = p;p--;{
	sym.tok = TK_IX;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr263:
	{te = p;p--;{
	sym.tok = TK_IY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr268:
	{te = p;p--;{
	sym.tok = TK_L;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr272:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_LD;
		sym.tok_opcode = TK_LD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LD;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr275:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_LDD;
		sym.tok_opcode = TK_LDD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDD;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr277:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_LDI;
		sym.tok_opcode = TK_LDI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDI;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr287:
	{te = p;p--;{
	sym.tok = TK_M;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr303:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_OR;
		sym.tok_opcode = TK_OR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OR;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr310:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_OUT;
		sym.tok_opcode = TK_OUT;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OUT;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr313:
	{te = p;p--;{
	sym.tok = TK_P;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr317:
	{te = p;p--;{
	sym.tok = TK_PO;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr325:
	{te = p;p--;{
	sym.tok = TK_R;
	if ( opts.cpu & CPU_RABBIT ) { error_illegal_ident(); };
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr332:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_RET;
		sym.tok_opcode = TK_RET;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RET;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr335:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_RL;
		sym.tok_opcode = TK_RL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RL;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr339:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_RLC;
		sym.tok_opcode = TK_RLC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RLC;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr341:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_RR;
		sym.tok_opcode = TK_RR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RR;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr345:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_RRC;
		sym.tok_opcode = TK_RRC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RRC;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr386:
	{te = p;p--;{
	sym.tok = TK_DOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr387:
	{te = p;p--;{
  while ( ts[ 0] == '.' || isspace(ts[ 0]) ) ts++;
  while ( te[-1] == ':' || isspace(te[-1]) ) te--;
  sym.tok = TK_LABEL;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
st21:
	{ts = 0;}
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	{ts = p;}
	_widec = (*p);
	if ( (*p) < 65 ) {
		if ( 46 <= (*p) && (*p) <= 46 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 90 ) {
		if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) >= 95 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 10: goto tr40;
		case 33: goto st22;
		case 34: goto tr42;
		case 35: goto tr43;
		case 36: goto tr44;
		case 37: goto tr45;
		case 38: goto st24;
		case 39: goto tr47;
		case 40: goto tr48;
		case 41: goto tr49;
		case 42: goto st26;
		case 43: goto tr51;
		case 44: goto tr52;
		case 45: goto tr53;
		case 47: goto tr54;
		case 48: goto tr56;
		case 49: goto tr57;
		case 58: goto tr59;
		case 59: goto st33;
		case 60: goto st34;
		case 61: goto st35;
		case 62: goto st36;
		case 63: goto tr64;
		case 64: goto tr65;
		case 91: goto tr66;
		case 92: goto tr67;
		case 93: goto tr68;
		case 94: goto tr69;
		case 96: goto tr67;
		case 123: goto tr70;
		case 124: goto st39;
		case 125: goto tr72;
		case 126: goto tr73;
		case 127: goto tr39;
		case 302: goto tr74;
		case 321: goto st40;
		case 322: goto st48;
		case 323: goto st53;
		case 324: goto st65;
		case 325: goto st81;
		case 326: goto st87;
		case 328: goto st89;
		case 329: goto st92;
		case 330: goto st106;
		case 332: goto st107;
		case 333: goto st117;
		case 334: goto st122;
		case 335: goto st125;
		case 336: goto st132;
		case 338: goto st139;
		case 339: goto st147;
		case 341: goto st158;
		case 344: goto st165;
		case 346: goto tr94;
		case 351: goto tr81;
		case 353: goto st40;
		case 354: goto st48;
		case 355: goto st53;
		case 356: goto st65;
		case 357: goto st81;
		case 358: goto st87;
		case 360: goto st89;
		case 361: goto st92;
		case 362: goto st106;
		case 364: goto st107;
		case 365: goto st117;
		case 366: goto st122;
		case 367: goto st125;
		case 368: goto st132;
		case 370: goto st139;
		case 371: goto st147;
		case 373: goto st158;
		case 376: goto st165;
		case 378: goto tr94;
		case 558: goto tr95;
		case 577: goto tr96;
		case 578: goto tr97;
		case 579: goto tr98;
		case 580: goto tr99;
		case 581: goto tr100;
		case 582: goto tr101;
		case 584: goto tr103;
		case 585: goto tr104;
		case 586: goto tr105;
		case 588: goto tr106;
		case 589: goto tr107;
		case 590: goto tr108;
		case 591: goto tr109;
		case 592: goto tr110;
		case 594: goto tr111;
		case 595: goto tr112;
		case 597: goto tr113;
		case 600: goto tr114;
		case 602: goto tr115;
		case 607: goto tr102;
		case 609: goto tr96;
		case 610: goto tr97;
		case 611: goto tr98;
		case 612: goto tr99;
		case 613: goto tr100;
		case 614: goto tr101;
		case 616: goto tr103;
		case 617: goto tr104;
		case 618: goto tr105;
		case 620: goto tr106;
		case 621: goto tr107;
		case 622: goto tr108;
		case 623: goto tr109;
		case 624: goto tr110;
		case 626: goto tr111;
		case 627: goto tr112;
		case 629: goto tr113;
		case 632: goto tr114;
		case 634: goto tr115;
	}
	if ( _widec < 327 ) {
		if ( _widec > 32 ) {
			if ( 50 <= _widec && _widec <= 57 )
				goto tr58;
		} else
			goto tr39;
	} else if ( _widec > 345 ) {
		if ( _widec < 583 ) {
			if ( 359 <= _widec && _widec <= 377 )
				goto tr81;
		} else if ( _widec > 601 ) {
			if ( 615 <= _widec && _widec <= 633 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto st0;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	if ( (*p) == 61 )
		goto tr117;
	goto tr116;
tr44:
	{te = p+1;}
	{act = 185;}
	goto st23;
tr118:
	{te = p+1;}
	{act = 177;}
	goto st23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr118;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr118;
	} else
		goto tr118;
	goto tr21;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	if ( (*p) == 38 )
		goto tr120;
	goto tr119;
tr48:
	{te = p+1;}
	goto st25;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	switch( (*p) ) {
		case 9: goto st1;
		case 32: goto st1;
		case 66: goto st2;
		case 67: goto st4;
		case 68: goto st5;
		case 72: goto st7;
		case 73: goto st9;
		case 83: goto st12;
		case 98: goto st2;
		case 99: goto st4;
		case 100: goto st5;
		case 104: goto st7;
		case 105: goto st9;
		case 115: goto st12;
	}
	goto tr121;
st1:
	if ( ++p == pe )
		goto _test_eof1;
case 1:
	switch( (*p) ) {
		case 9: goto st1;
		case 32: goto st1;
		case 66: goto st2;
		case 67: goto st4;
		case 68: goto st5;
		case 72: goto st7;
		case 73: goto st9;
		case 83: goto st12;
		case 98: goto st2;
		case 99: goto st4;
		case 100: goto st5;
		case 104: goto st7;
		case 105: goto st9;
		case 115: goto st12;
	}
	goto tr0;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( (*p) ) {
		case 67: goto st3;
		case 99: goto st3;
	}
	goto tr0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( (*p) ) {
		case 9: goto st3;
		case 32: goto st3;
		case 41: goto tr9;
	}
	goto tr0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	switch( (*p) ) {
		case 9: goto st4;
		case 32: goto st4;
		case 41: goto tr10;
	}
	goto tr0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	switch( (*p) ) {
		case 69: goto st6;
		case 101: goto st6;
	}
	goto tr0;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( (*p) ) {
		case 9: goto st6;
		case 32: goto st6;
		case 41: goto tr12;
	}
	goto tr0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	switch( (*p) ) {
		case 76: goto st8;
		case 108: goto st8;
	}
	goto tr0;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	switch( (*p) ) {
		case 9: goto st8;
		case 32: goto st8;
		case 41: goto tr14;
	}
	goto tr0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	switch( (*p) ) {
		case 88: goto st10;
		case 89: goto st11;
		case 120: goto st10;
		case 121: goto st11;
	}
	goto tr0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	switch( (*p) ) {
		case 9: goto st10;
		case 32: goto st10;
		case 41: goto tr17;
		case 43: goto tr17;
		case 45: goto tr17;
	}
	goto tr0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	switch( (*p) ) {
		case 9: goto st11;
		case 32: goto st11;
		case 41: goto tr18;
		case 43: goto tr18;
		case 45: goto tr18;
	}
	goto tr0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	switch( (*p) ) {
		case 80: goto st13;
		case 112: goto st13;
	}
	goto tr0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	switch( (*p) ) {
		case 9: goto st13;
		case 32: goto st13;
		case 41: goto tr20;
	}
	goto tr0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( (*p) == 42 )
		goto tr123;
	goto tr122;
st0:
cs = 0;
	goto _out;
tr56:
	{te = p+1;}
	{act = 175;}
	goto st27;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	switch( (*p) ) {
		case 66: goto tr125;
		case 72: goto tr23;
		case 88: goto st15;
		case 98: goto tr125;
		case 104: goto tr23;
		case 120: goto st15;
	}
	if ( (*p) < 50 ) {
		if ( 48 <= (*p) && (*p) <= 49 )
			goto tr57;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 70 ) {
			if ( 97 <= (*p) && (*p) <= 102 )
				goto st14;
		} else if ( (*p) >= 65 )
			goto st14;
	} else
		goto tr58;
	goto tr124;
tr57:
	{te = p+1;}
	{act = 175;}
	goto st28;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	switch( (*p) ) {
		case 66: goto tr127;
		case 72: goto tr23;
		case 98: goto tr127;
		case 104: goto tr23;
	}
	if ( (*p) < 50 ) {
		if ( 48 <= (*p) && (*p) <= 49 )
			goto tr57;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 70 ) {
			if ( 97 <= (*p) && (*p) <= 102 )
				goto st14;
		} else if ( (*p) >= 65 )
			goto st14;
	} else
		goto tr58;
	goto tr124;
tr58:
	{te = p+1;}
	{act = 175;}
	goto st29;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( (*p) ) {
		case 72: goto tr23;
		case 104: goto tr23;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr58;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st14;
	} else
		goto st14;
	goto tr124;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	switch( (*p) ) {
		case 72: goto tr23;
		case 104: goto tr23;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st14;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st14;
	} else
		goto st14;
	goto tr21;
tr127:
	{te = p+1;}
	{act = 179;}
	goto st30;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	switch( (*p) ) {
		case 72: goto tr23;
		case 104: goto tr23;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st14;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st14;
	} else
		goto st14;
	goto tr128;
tr125:
	{te = p+1;}
	{act = 179;}
	goto st31;
tr129:
	{te = p+1;}
	{act = 181;}
	goto st31;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( (*p) ) {
		case 72: goto tr23;
		case 104: goto tr23;
	}
	if ( (*p) < 50 ) {
		if ( 48 <= (*p) && (*p) <= 49 )
			goto tr129;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 70 ) {
			if ( 97 <= (*p) && (*p) <= 102 )
				goto st14;
		} else if ( (*p) >= 65 )
			goto st14;
	} else
		goto st14;
	goto tr21;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st32;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st32;
	} else
		goto st32;
	goto tr24;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st32;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st32;
	} else
		goto st32;
	goto tr130;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	if ( (*p) == 10 )
		goto tr131;
	goto st33;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	switch( (*p) ) {
		case 60: goto tr133;
		case 61: goto tr134;
		case 62: goto tr135;
	}
	goto tr132;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	if ( (*p) == 61 )
		goto tr137;
	goto tr136;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	switch( (*p) ) {
		case 61: goto tr139;
		case 62: goto tr140;
	}
	goto tr138;
tr65:
	{te = p+1;}
	goto st37;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) == 34 )
		goto st16;
	if ( 48 <= (*p) && (*p) <= 49 )
		goto st38;
	goto tr141;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	switch( (*p) ) {
		case 35: goto st17;
		case 45: goto st17;
	}
	goto tr26;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	switch( (*p) ) {
		case 34: goto tr28;
		case 35: goto st17;
		case 45: goto st17;
	}
	goto tr26;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	if ( 48 <= (*p) && (*p) <= 49 )
		goto st38;
	goto tr144;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	if ( (*p) == 124 )
		goto tr146;
	goto tr145;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	switch( (*p) ) {
		case 68: goto st42;
		case 70: goto st43;
		case 78: goto st44;
		case 83: goto st45;
		case 95: goto tr81;
		case 100: goto st42;
		case 102: goto st43;
		case 110: goto st44;
		case 115: goto st45;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr147;
tr81:
	{te = p+1;}
	{act = 173;}
	goto st41;
tr94:
	{te = p+1;}
	{act = 38;}
	goto st41;
tr153:
	{te = p+1;}
	{act = 98;}
	goto st41;
tr154:
	{te = p+1;}
	{act = 99;}
	goto st41;
tr157:
	{te = p+1;}
	{act = 100;}
	goto st41;
tr160:
	{te = p+1;}
	{act = 1;}
	goto st41;
tr162:
	{te = p+1;}
	{act = 61;}
	goto st41;
tr165:
	{te = p+1;}
	{act = 101;}
	goto st41;
tr168:
	{te = p+1;}
	{act = 75;}
	goto st41;
tr179:
	{te = p+1;}
	{act = 166;}
	goto st41;
tr181:
	{te = p+1;}
	{act = 168;}
	goto st41;
tr182:
	{te = p+1;}
	{act = 103;}
	goto st41;
tr186:
	{te = p+1;}
	{act = 109;}
	goto st41;
tr188:
	{te = p+1;}
	{act = 106;}
	goto st41;
tr190:
	{te = p+1;}
	{act = 108;}
	goto st41;
tr194:
	{te = p+1;}
	{act = 112;}
	goto st41;
tr197:
	{te = p+1;}
	{act = 110;}
	goto st41;
tr199:
	{te = p+1;}
	{act = 111;}
	goto st41;
tr203:
	{te = p+1;}
	{act = 78;}
	goto st41;
tr208:
	{te = p+1;}
	{act = 76;}
	goto st41;
tr210:
	{te = p+1;}
	{act = 77;}
	goto st41;
tr213:
	{te = p+1;}
	{act = 79;}
	goto st41;
tr215:
	{te = p+1;}
	{act = 113;}
	goto st41;
tr221:
	{te = p+1;}
	{act = 59;}
	goto st41;
tr224:
	{te = p+1;}
	{act = 116;}
	goto st41;
tr227:
	{te = p+1;}
	{act = 80;}
	goto st41;
tr230:
	{te = p+1;}
	{act = 169;}
	goto st41;
tr233:
	{te = p+1;}
	{act = 63;}
	goto st41;
tr235:
	{te = p+1;}
	{act = 117;}
	goto st41;
tr238:
	{te = p+1;}
	{act = 118;}
	goto st41;
tr242:
	{te = p+1;}
	{act = 57;}
	goto st41;
tr252:
	{te = p+1;}
	{act = 81;}
	goto st41;
tr254:
	{te = p+1;}
	{act = 122;}
	goto st41;
tr256:
	{te = p+1;}
	{act = 124;}
	goto st41;
tr259:
	{te = p+1;}
	{act = 170;}
	goto st41;
tr261:
	{te = p+1;}
	{act = 49;}
	goto st41;
tr262:
	{te = p+1;}
	{act = 52;}
	goto st41;
tr264:
	{te = p+1;}
	{act = 50;}
	goto st41;
tr265:
	{te = p+1;}
	{act = 53;}
	goto st41;
tr266:
	{te = p+1;}
	{act = 125;}
	goto st41;
tr267:
	{te = p+1;}
	{act = 126;}
	goto st41;
tr276:
	{te = p+1;}
	{act = 129;}
	goto st41;
tr278:
	{te = p+1;}
	{act = 131;}
	goto st41;
tr279:
	{te = p+1;}
	{act = 82;}
	goto st41;
tr281:
	{te = p+1;}
	{act = 83;}
	goto st41;
tr285:
	{te = p+1;}
	{act = 85;}
	goto st41;
tr286:
	{te = p+1;}
	{act = 84;}
	goto st41;
tr292:
	{te = p+1;}
	{act = 86;}
	goto st41;
tr293:
	{te = p+1;}
	{act = 39;}
	goto st41;
tr296:
	{te = p+1;}
	{act = 37;}
	goto st41;
tr297:
	{te = p+1;}
	{act = 132;}
	goto st41;
tr298:
	{te = p+1;}
	{act = 133;}
	goto st41;
tr302:
	{te = p+1;}
	{act = 167;}
	goto st41;
tr304:
	{te = p+1;}
	{act = 87;}
	goto st41;
tr307:
	{te = p+1;}
	{act = 135;}
	goto st41;
tr308:
	{te = p+1;}
	{act = 136;}
	goto st41;
tr311:
	{te = p+1;}
	{act = 138;}
	goto st41;
tr312:
	{te = p+1;}
	{act = 139;}
	goto st41;
tr314:
	{te = p+1;}
	{act = 42;}
	goto st41;
tr318:
	{te = p+1;}
	{act = 140;}
	goto st41;
tr323:
	{te = p+1;}
	{act = 88;}
	goto st41;
tr324:
	{te = p+1;}
	{act = 141;}
	goto st41;
tr330:
	{te = p+1;}
	{act = 142;}
	goto st41;
tr333:
	{te = p+1;}
	{act = 144;}
	goto st41;
tr334:
	{te = p+1;}
	{act = 145;}
	goto st41;
tr336:
	{te = p+1;}
	{act = 147;}
	goto st41;
tr338:
	{te = p+1;}
	{act = 150;}
	goto st41;
tr340:
	{te = p+1;}
	{act = 149;}
	goto st41;
tr342:
	{te = p+1;}
	{act = 152;}
	goto st41;
tr344:
	{te = p+1;}
	{act = 155;}
	goto st41;
tr346:
	{te = p+1;}
	{act = 154;}
	goto st41;
tr347:
	{te = p+1;}
	{act = 156;}
	goto st41;
tr352:
	{te = p+1;}
	{act = 67;}
	goto st41;
tr355:
	{te = p+1;}
	{act = 157;}
	goto st41;
tr356:
	{te = p+1;}
	{act = 158;}
	goto st41;
tr358:
	{te = p+1;}
	{act = 159;}
	goto st41;
tr362:
	{te = p+1;}
	{act = 89;}
	goto st41;
tr363:
	{te = p+1;}
	{act = 160;}
	goto st41;
tr364:
	{te = p+1;}
	{act = 161;}
	goto st41;
tr365:
	{te = p+1;}
	{act = 162;}
	goto st41;
tr366:
	{te = p+1;}
	{act = 163;}
	goto st41;
tr367:
	{te = p+1;}
	{act = 164;}
	goto st41;
tr374:
	{te = p+1;}
	{act = 90;}
	goto st41;
tr380:
	{te = p+1;}
	{act = 91;}
	goto st41;
tr382:
	{te = p+1;}
	{act = 92;}
	goto st41;
tr383:
	{te = p+1;}
	{act = 165;}
	goto st41;
tr385:
	{te = p+1;}
	{act = 93;}
	goto st41;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( (*p) == 95 )
		goto tr81;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr21;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	switch( (*p) ) {
		case 67: goto tr153;
		case 68: goto tr154;
		case 95: goto tr81;
		case 99: goto tr153;
		case 100: goto tr154;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	switch( (*p) ) {
		case 39: goto tr156;
		case 95: goto tr81;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr155;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	switch( (*p) ) {
		case 68: goto tr157;
		case 95: goto tr81;
		case 100: goto tr157;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	switch( (*p) ) {
		case 77: goto st46;
		case 95: goto tr81;
		case 109: goto st46;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	switch( (*p) ) {
		case 80: goto st47;
		case 95: goto tr81;
		case 112: goto st47;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	switch( (*p) ) {
		case 67: goto tr160;
		case 95: goto tr81;
		case 99: goto tr160;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	switch( (*p) ) {
		case 67: goto tr162;
		case 73: goto st49;
		case 95: goto tr81;
		case 99: goto tr162;
		case 105: goto st49;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr161;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	switch( (*p) ) {
		case 78: goto st50;
		case 84: goto tr165;
		case 95: goto tr81;
		case 110: goto st50;
		case 116: goto tr165;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	switch( (*p) ) {
		case 65: goto st51;
		case 95: goto tr81;
		case 97: goto st51;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	switch( (*p) ) {
		case 82: goto st52;
		case 95: goto tr81;
		case 114: goto st52;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	switch( (*p) ) {
		case 89: goto tr168;
		case 95: goto tr81;
		case 121: goto tr168;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	switch( (*p) ) {
		case 65: goto st54;
		case 67: goto st61;
		case 80: goto st62;
		case 95: goto tr81;
		case 97: goto st54;
		case 99: goto st61;
		case 112: goto st62;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr169;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	switch( (*p) ) {
		case 76: goto st55;
		case 95: goto tr81;
		case 108: goto st55;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	switch( (*p) ) {
		case 76: goto st56;
		case 95: goto tr81;
		case 108: goto st56;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	if ( (*p) == 95 )
		goto st57;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr175;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	switch( (*p) ) {
		case 79: goto st58;
		case 80: goto st59;
		case 95: goto tr81;
		case 111: goto st58;
		case 112: goto st59;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	switch( (*p) ) {
		case 90: goto tr179;
		case 95: goto tr81;
		case 122: goto tr179;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	switch( (*p) ) {
		case 75: goto st60;
		case 95: goto tr81;
		case 107: goto st60;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	switch( (*p) ) {
		case 71: goto tr181;
		case 95: goto tr81;
		case 103: goto tr181;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	switch( (*p) ) {
		case 70: goto tr182;
		case 95: goto tr81;
		case 102: goto tr182;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	switch( (*p) ) {
		case 68: goto st63;
		case 73: goto st64;
		case 76: goto tr186;
		case 95: goto tr81;
		case 100: goto st63;
		case 105: goto st64;
		case 108: goto tr186;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr183;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	switch( (*p) ) {
		case 82: goto tr188;
		case 95: goto tr81;
		case 114: goto tr188;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr187;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	switch( (*p) ) {
		case 82: goto tr190;
		case 95: goto tr81;
		case 114: goto tr190;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr189;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	switch( (*p) ) {
		case 65: goto st66;
		case 69: goto st67;
		case 73: goto tr194;
		case 74: goto st78;
		case 83: goto tr196;
		case 95: goto tr81;
		case 97: goto st66;
		case 101: goto st67;
		case 105: goto tr194;
		case 106: goto st78;
		case 115: goto tr196;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr191;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	switch( (*p) ) {
		case 65: goto tr197;
		case 95: goto tr81;
		case 97: goto tr197;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	switch( (*p) ) {
		case 67: goto tr199;
		case 70: goto st68;
		case 95: goto tr81;
		case 99: goto tr199;
		case 102: goto st68;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr198;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	switch( (*p) ) {
		case 71: goto st69;
		case 73: goto st73;
		case 83: goto tr203;
		case 86: goto st75;
		case 95: goto tr81;
		case 103: goto st69;
		case 105: goto st73;
		case 115: goto tr203;
		case 118: goto st75;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	switch( (*p) ) {
		case 82: goto st70;
		case 95: goto tr81;
		case 114: goto st70;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	switch( (*p) ) {
		case 79: goto st71;
		case 95: goto tr81;
		case 111: goto st71;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	switch( (*p) ) {
		case 85: goto st72;
		case 95: goto tr81;
		case 117: goto st72;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	switch( (*p) ) {
		case 80: goto tr208;
		case 95: goto tr81;
		case 112: goto tr208;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	switch( (*p) ) {
		case 78: goto st74;
		case 95: goto tr81;
		case 110: goto st74;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	switch( (*p) ) {
		case 69: goto tr210;
		case 95: goto tr81;
		case 101: goto tr210;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	switch( (*p) ) {
		case 65: goto st76;
		case 95: goto tr81;
		case 97: goto st76;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
	switch( (*p) ) {
		case 82: goto st77;
		case 95: goto tr81;
		case 114: goto st77;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	switch( (*p) ) {
		case 83: goto tr213;
		case 95: goto tr81;
		case 115: goto tr213;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
	switch( (*p) ) {
		case 78: goto st79;
		case 95: goto tr81;
		case 110: goto st79;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
	switch( (*p) ) {
		case 90: goto tr215;
		case 95: goto tr81;
		case 122: goto tr215;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
tr196:
	{te = p+1;}
	goto st80;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
	switch( (*p) ) {
		case 46: goto st18;
		case 95: goto tr81;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( (*p) ) {
		case 66: goto tr30;
		case 76: goto tr31;
		case 80: goto tr32;
		case 87: goto tr33;
		case 98: goto tr30;
		case 108: goto tr31;
		case 112: goto tr32;
		case 119: goto tr33;
	}
	goto tr29;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	switch( (*p) ) {
		case 73: goto st82;
		case 88: goto st83;
		case 95: goto tr81;
		case 105: goto st82;
		case 120: goto st83;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr217;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	switch( (*p) ) {
		case 82: goto tr221;
		case 95: goto tr81;
		case 114: goto tr221;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr220;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
	switch( (*p) ) {
		case 84: goto st84;
		case 88: goto tr224;
		case 95: goto tr81;
		case 116: goto st84;
		case 120: goto tr224;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr222;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
	switch( (*p) ) {
		case 69: goto st85;
		case 95: goto tr81;
		case 101: goto st85;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
	switch( (*p) ) {
		case 82: goto st86;
		case 95: goto tr81;
		case 114: goto st86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
	switch( (*p) ) {
		case 78: goto tr227;
		case 95: goto tr81;
		case 110: goto tr227;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	switch( (*p) ) {
		case 80: goto st88;
		case 95: goto tr81;
		case 112: goto st88;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr228;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
	switch( (*p) ) {
		case 80: goto tr230;
		case 95: goto tr81;
		case 112: goto tr230;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
	switch( (*p) ) {
		case 65: goto st90;
		case 76: goto tr233;
		case 95: goto tr81;
		case 97: goto st90;
		case 108: goto tr233;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr231;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
	switch( (*p) ) {
		case 76: goto st91;
		case 95: goto tr81;
		case 108: goto st91;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	switch( (*p) ) {
		case 84: goto tr235;
		case 95: goto tr81;
		case 116: goto tr235;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
	switch( (*p) ) {
		case 73: goto st93;
		case 77: goto tr238;
		case 78: goto st94;
		case 88: goto st104;
		case 89: goto st105;
		case 95: goto tr81;
		case 105: goto st93;
		case 109: goto tr238;
		case 110: goto st94;
		case 120: goto st104;
		case 121: goto st105;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr236;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
	switch( (*p) ) {
		case 82: goto tr242;
		case 95: goto tr81;
		case 114: goto tr242;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
	switch( (*p) ) {
		case 67: goto st95;
		case 68: goto st99;
		case 73: goto st100;
		case 86: goto st101;
		case 95: goto tr81;
		case 99: goto st95;
		case 100: goto st99;
		case 105: goto st100;
		case 118: goto st101;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr243;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
	switch( (*p) ) {
		case 76: goto st96;
		case 95: goto tr81;
		case 108: goto st96;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr248;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
	switch( (*p) ) {
		case 85: goto st97;
		case 95: goto tr81;
		case 117: goto st97;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
	switch( (*p) ) {
		case 68: goto st98;
		case 95: goto tr81;
		case 100: goto st98;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
	switch( (*p) ) {
		case 69: goto tr252;
		case 95: goto tr81;
		case 101: goto tr252;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
	switch( (*p) ) {
		case 82: goto tr254;
		case 95: goto tr81;
		case 114: goto tr254;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr253;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
	switch( (*p) ) {
		case 82: goto tr256;
		case 95: goto tr81;
		case 114: goto tr256;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr255;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
	switch( (*p) ) {
		case 79: goto st102;
		case 95: goto tr81;
		case 111: goto st102;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
	switch( (*p) ) {
		case 75: goto st103;
		case 95: goto tr81;
		case 107: goto st103;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
	switch( (*p) ) {
		case 69: goto tr259;
		case 95: goto tr81;
		case 101: goto tr259;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
	switch( (*p) ) {
		case 72: goto tr261;
		case 76: goto tr262;
		case 95: goto tr81;
		case 104: goto tr261;
		case 108: goto tr262;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr260;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
	switch( (*p) ) {
		case 72: goto tr264;
		case 76: goto tr265;
		case 95: goto tr81;
		case 104: goto tr264;
		case 108: goto tr265;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr263;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
	switch( (*p) ) {
		case 80: goto tr266;
		case 82: goto tr267;
		case 95: goto tr81;
		case 112: goto tr266;
		case 114: goto tr267;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
	switch( (*p) ) {
		case 68: goto st108;
		case 73: goto st111;
		case 83: goto st113;
		case 95: goto tr81;
		case 100: goto st108;
		case 105: goto st111;
		case 115: goto st113;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr268;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	switch( (*p) ) {
		case 68: goto st109;
		case 73: goto st110;
		case 95: goto tr81;
		case 100: goto st109;
		case 105: goto st110;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr272;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	switch( (*p) ) {
		case 82: goto tr276;
		case 95: goto tr81;
		case 114: goto tr276;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr275;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	switch( (*p) ) {
		case 82: goto tr278;
		case 95: goto tr81;
		case 114: goto tr278;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr277;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	switch( (*p) ) {
		case 66: goto tr279;
		case 78: goto st112;
		case 95: goto tr81;
		case 98: goto tr279;
		case 110: goto st112;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
	switch( (*p) ) {
		case 69: goto tr281;
		case 95: goto tr81;
		case 101: goto tr281;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
	switch( (*p) ) {
		case 84: goto st114;
		case 95: goto tr81;
		case 116: goto st114;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
	switch( (*p) ) {
		case 79: goto st115;
		case 95: goto tr81;
		case 111: goto st115;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	switch( (*p) ) {
		case 70: goto st116;
		case 78: goto tr285;
		case 95: goto tr81;
		case 102: goto st116;
		case 110: goto tr285;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	switch( (*p) ) {
		case 70: goto tr286;
		case 95: goto tr81;
		case 102: goto tr286;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	switch( (*p) ) {
		case 79: goto st118;
		case 95: goto tr81;
		case 111: goto st118;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr287;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	switch( (*p) ) {
		case 68: goto st119;
		case 95: goto tr81;
		case 100: goto st119;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	switch( (*p) ) {
		case 85: goto st120;
		case 95: goto tr81;
		case 117: goto st120;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	switch( (*p) ) {
		case 76: goto st121;
		case 95: goto tr81;
		case 108: goto st121;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	switch( (*p) ) {
		case 69: goto tr292;
		case 95: goto tr81;
		case 101: goto tr292;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	switch( (*p) ) {
		case 67: goto tr293;
		case 69: goto st123;
		case 79: goto st124;
		case 90: goto tr296;
		case 95: goto tr81;
		case 99: goto tr293;
		case 101: goto st123;
		case 111: goto st124;
		case 122: goto tr296;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	switch( (*p) ) {
		case 71: goto tr297;
		case 95: goto tr81;
		case 103: goto tr297;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	switch( (*p) ) {
		case 80: goto tr298;
		case 95: goto tr81;
		case 112: goto tr298;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	switch( (*p) ) {
		case 82: goto st126;
		case 84: goto st127;
		case 85: goto st130;
		case 90: goto tr302;
		case 95: goto tr81;
		case 114: goto st126;
		case 116: goto st127;
		case 117: goto st130;
		case 122: goto tr302;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	switch( (*p) ) {
		case 71: goto tr304;
		case 95: goto tr81;
		case 103: goto tr304;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr303;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
	switch( (*p) ) {
		case 68: goto st128;
		case 73: goto st129;
		case 95: goto tr81;
		case 100: goto st128;
		case 105: goto st129;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
	switch( (*p) ) {
		case 82: goto tr307;
		case 95: goto tr81;
		case 114: goto tr307;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
	switch( (*p) ) {
		case 82: goto tr308;
		case 95: goto tr81;
		case 114: goto tr308;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	switch( (*p) ) {
		case 84: goto st131;
		case 95: goto tr81;
		case 116: goto st131;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
	switch( (*p) ) {
		case 68: goto tr311;
		case 73: goto tr312;
		case 95: goto tr81;
		case 100: goto tr311;
		case 105: goto tr312;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr310;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
	switch( (*p) ) {
		case 69: goto tr314;
		case 79: goto st133;
		case 85: goto st134;
		case 95: goto tr81;
		case 101: goto tr314;
		case 111: goto st133;
		case 117: goto st134;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr313;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
	switch( (*p) ) {
		case 80: goto tr318;
		case 95: goto tr81;
		case 112: goto tr318;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr317;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
	switch( (*p) ) {
		case 66: goto st135;
		case 83: goto st138;
		case 95: goto tr81;
		case 98: goto st135;
		case 115: goto st138;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
	switch( (*p) ) {
		case 76: goto st136;
		case 95: goto tr81;
		case 108: goto st136;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
	switch( (*p) ) {
		case 73: goto st137;
		case 95: goto tr81;
		case 105: goto st137;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
	switch( (*p) ) {
		case 67: goto tr323;
		case 95: goto tr81;
		case 99: goto tr323;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
	switch( (*p) ) {
		case 72: goto tr324;
		case 95: goto tr81;
		case 104: goto tr324;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
	switch( (*p) ) {
		case 69: goto st140;
		case 76: goto st142;
		case 82: goto st144;
		case 83: goto st146;
		case 95: goto tr81;
		case 101: goto st140;
		case 108: goto st142;
		case 114: goto st144;
		case 115: goto st146;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr325;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
	switch( (*p) ) {
		case 83: goto tr330;
		case 84: goto st141;
		case 95: goto tr81;
		case 115: goto tr330;
		case 116: goto st141;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	switch( (*p) ) {
		case 73: goto tr333;
		case 78: goto tr334;
		case 95: goto tr81;
		case 105: goto tr333;
		case 110: goto tr334;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr332;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
	switch( (*p) ) {
		case 65: goto tr336;
		case 67: goto st143;
		case 68: goto tr338;
		case 95: goto tr81;
		case 97: goto tr336;
		case 99: goto st143;
		case 100: goto tr338;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr335;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
	switch( (*p) ) {
		case 65: goto tr340;
		case 95: goto tr81;
		case 97: goto tr340;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr339;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	switch( (*p) ) {
		case 65: goto tr342;
		case 67: goto st145;
		case 68: goto tr344;
		case 95: goto tr81;
		case 97: goto tr342;
		case 99: goto st145;
		case 100: goto tr344;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr341;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
	switch( (*p) ) {
		case 65: goto tr346;
		case 95: goto tr81;
		case 97: goto tr346;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr345;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
	switch( (*p) ) {
		case 84: goto tr347;
		case 95: goto tr81;
		case 116: goto tr347;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
	switch( (*p) ) {
		case 66: goto st148;
		case 67: goto st149;
		case 69: goto st150;
		case 76: goto st155;
		case 80: goto tr352;
		case 82: goto st156;
		case 85: goto st157;
		case 95: goto tr81;
		case 98: goto st148;
		case 99: goto st149;
		case 101: goto st150;
		case 108: goto st155;
		case 112: goto tr352;
		case 114: goto st156;
		case 117: goto st157;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	switch( (*p) ) {
		case 67: goto tr355;
		case 95: goto tr81;
		case 99: goto tr355;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	switch( (*p) ) {
		case 70: goto tr356;
		case 95: goto tr81;
		case 102: goto tr356;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
	switch( (*p) ) {
		case 67: goto st151;
		case 84: goto tr358;
		case 95: goto tr81;
		case 99: goto st151;
		case 116: goto tr358;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
	switch( (*p) ) {
		case 84: goto st152;
		case 95: goto tr81;
		case 116: goto st152;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
	switch( (*p) ) {
		case 73: goto st153;
		case 95: goto tr81;
		case 105: goto st153;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
	switch( (*p) ) {
		case 79: goto st154;
		case 95: goto tr81;
		case 111: goto st154;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
	switch( (*p) ) {
		case 78: goto tr362;
		case 95: goto tr81;
		case 110: goto tr362;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
	switch( (*p) ) {
		case 65: goto tr363;
		case 76: goto tr364;
		case 95: goto tr81;
		case 97: goto tr363;
		case 108: goto tr364;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
	switch( (*p) ) {
		case 65: goto tr365;
		case 76: goto tr366;
		case 95: goto tr81;
		case 97: goto tr365;
		case 108: goto tr366;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
	switch( (*p) ) {
		case 66: goto tr367;
		case 95: goto tr81;
		case 98: goto tr367;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
	switch( (*p) ) {
		case 78: goto st159;
		case 95: goto tr81;
		case 110: goto st159;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
	switch( (*p) ) {
		case 68: goto st160;
		case 95: goto tr81;
		case 100: goto st160;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
	switch( (*p) ) {
		case 69: goto st161;
		case 95: goto tr81;
		case 101: goto st161;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
	switch( (*p) ) {
		case 70: goto st162;
		case 95: goto tr81;
		case 102: goto st162;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
	switch( (*p) ) {
		case 73: goto st163;
		case 95: goto tr81;
		case 105: goto st163;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
	switch( (*p) ) {
		case 78: goto st164;
		case 95: goto tr81;
		case 110: goto st164;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st164:
	if ( ++p == pe )
		goto _test_eof164;
case 164:
	switch( (*p) ) {
		case 69: goto tr374;
		case 95: goto tr81;
		case 101: goto tr374;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
	switch( (*p) ) {
		case 68: goto st166;
		case 76: goto st168;
		case 79: goto st170;
		case 82: goto st171;
		case 95: goto tr81;
		case 100: goto st166;
		case 108: goto st168;
		case 111: goto st170;
		case 114: goto st171;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st166:
	if ( ++p == pe )
		goto _test_eof166;
case 166:
	switch( (*p) ) {
		case 69: goto st167;
		case 95: goto tr81;
		case 101: goto st167;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
	switch( (*p) ) {
		case 70: goto tr380;
		case 95: goto tr81;
		case 102: goto tr380;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st168:
	if ( ++p == pe )
		goto _test_eof168;
case 168:
	switch( (*p) ) {
		case 73: goto st169;
		case 95: goto tr81;
		case 105: goto st169;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
	switch( (*p) ) {
		case 66: goto tr382;
		case 95: goto tr81;
		case 98: goto tr382;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
	switch( (*p) ) {
		case 82: goto tr383;
		case 95: goto tr81;
		case 114: goto tr383;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st171:
	if ( ++p == pe )
		goto _test_eof171;
case 171:
	switch( (*p) ) {
		case 69: goto st172;
		case 95: goto tr81;
		case 101: goto st172;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
st172:
	if ( ++p == pe )
		goto _test_eof172;
case 172:
	switch( (*p) ) {
		case 70: goto tr385;
		case 95: goto tr81;
		case 102: goto tr385;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr81;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr81;
	} else
		goto tr81;
	goto tr152;
tr95:
	{te = p+1;}
	goto st173;
st173:
	if ( ++p == pe )
		goto _test_eof173;
case 173:
	_widec = (*p);
	if ( (*p) < 65 ) {
		if ( (*p) > 9 ) {
			if ( 32 <= (*p) && (*p) <= 32 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) >= 9 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 90 ) {
		if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) >= 95 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 521: goto st19;
		case 544: goto st19;
		case 607: goto st174;
	}
	if ( _widec > 602 ) {
		if ( 609 <= _widec && _widec <= 634 )
			goto st174;
	} else if ( _widec >= 577 )
		goto st174;
	goto tr386;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	_widec = (*p);
	if ( (*p) < 65 ) {
		if ( (*p) > 9 ) {
			if ( 32 <= (*p) && (*p) <= 32 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) >= 9 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 90 ) {
		if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) >= 95 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 521: goto st19;
		case 544: goto st19;
		case 607: goto st174;
	}
	if ( _widec > 602 ) {
		if ( 609 <= _widec && _widec <= 634 )
			goto st174;
	} else if ( _widec >= 577 )
		goto st174;
	goto tr34;
st174:
	if ( ++p == pe )
		goto _test_eof174;
case 174:
	_widec = (*p);
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 90 ) {
		if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) >= 95 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	if ( _widec == 607 )
		goto st174;
	if ( _widec < 577 ) {
		if ( 560 <= _widec && _widec <= 569 )
			goto st174;
	} else if ( _widec > 602 ) {
		if ( 609 <= _widec && _widec <= 634 )
			goto st174;
	} else
		goto st174;
	goto tr387;
tr96:
	{te = p+1;}
	{act = 54;}
	goto st175;
st175:
	if ( ++p == pe )
		goto _test_eof175;
case 175:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st42;
		case 326: goto st43;
		case 334: goto st44;
		case 339: goto st45;
		case 351: goto tr81;
		case 356: goto st42;
		case 358: goto st43;
		case 366: goto st44;
		case 371: goto st45;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr388;
		case 582: goto tr389;
		case 590: goto tr390;
		case 595: goto tr391;
		case 607: goto tr102;
		case 612: goto tr388;
		case 614: goto tr389;
		case 622: goto tr390;
		case 627: goto tr391;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr147;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	_widec = (*p);
	if ( (*p) < 32 ) {
		if ( 9 <= (*p) && (*p) <= 9 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 32 ) {
		if ( 58 <= (*p) && (*p) <= 58 ) {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
	}
	goto tr21;
tr102:
	{te = p+1;}
	{act = 173;}
	goto st176;
tr115:
	{te = p+1;}
	{act = 38;}
	goto st176;
tr392:
	{te = p+1;}
	{act = 98;}
	goto st176;
tr393:
	{te = p+1;}
	{act = 99;}
	goto st176;
tr394:
	{te = p+1;}
	{act = 100;}
	goto st176;
tr397:
	{te = p+1;}
	{act = 1;}
	goto st176;
tr398:
	{te = p+1;}
	{act = 61;}
	goto st176;
tr401:
	{te = p+1;}
	{act = 101;}
	goto st176;
tr404:
	{te = p+1;}
	{act = 75;}
	goto st176;
tr413:
	{te = p+1;}
	{act = 166;}
	goto st176;
tr415:
	{te = p+1;}
	{act = 168;}
	goto st176;
tr416:
	{te = p+1;}
	{act = 103;}
	goto st176;
tr419:
	{te = p+1;}
	{act = 109;}
	goto st176;
tr420:
	{te = p+1;}
	{act = 106;}
	goto st176;
tr421:
	{te = p+1;}
	{act = 108;}
	goto st176;
tr424:
	{te = p+1;}
	{act = 112;}
	goto st176;
tr427:
	{te = p+1;}
	{act = 110;}
	goto st176;
tr428:
	{te = p+1;}
	{act = 111;}
	goto st176;
tr432:
	{te = p+1;}
	{act = 78;}
	goto st176;
tr437:
	{te = p+1;}
	{act = 76;}
	goto st176;
tr439:
	{te = p+1;}
	{act = 77;}
	goto st176;
tr442:
	{te = p+1;}
	{act = 79;}
	goto st176;
tr444:
	{te = p+1;}
	{act = 113;}
	goto st176;
tr447:
	{te = p+1;}
	{act = 59;}
	goto st176;
tr449:
	{te = p+1;}
	{act = 116;}
	goto st176;
tr452:
	{te = p+1;}
	{act = 80;}
	goto st176;
tr454:
	{te = p+1;}
	{act = 169;}
	goto st176;
tr456:
	{te = p+1;}
	{act = 63;}
	goto st176;
tr458:
	{te = p+1;}
	{act = 117;}
	goto st176;
tr460:
	{te = p+1;}
	{act = 118;}
	goto st176;
tr464:
	{te = p+1;}
	{act = 57;}
	goto st176;
tr472:
	{te = p+1;}
	{act = 81;}
	goto st176;
tr473:
	{te = p+1;}
	{act = 122;}
	goto st176;
tr474:
	{te = p+1;}
	{act = 124;}
	goto st176;
tr477:
	{te = p+1;}
	{act = 170;}
	goto st176;
tr478:
	{te = p+1;}
	{act = 49;}
	goto st176;
tr479:
	{te = p+1;}
	{act = 52;}
	goto st176;
tr480:
	{te = p+1;}
	{act = 50;}
	goto st176;
tr481:
	{te = p+1;}
	{act = 53;}
	goto st176;
tr482:
	{te = p+1;}
	{act = 125;}
	goto st176;
tr483:
	{te = p+1;}
	{act = 126;}
	goto st176;
tr489:
	{te = p+1;}
	{act = 129;}
	goto st176;
tr490:
	{te = p+1;}
	{act = 131;}
	goto st176;
tr491:
	{te = p+1;}
	{act = 82;}
	goto st176;
tr493:
	{te = p+1;}
	{act = 83;}
	goto st176;
tr497:
	{te = p+1;}
	{act = 85;}
	goto st176;
tr498:
	{te = p+1;}
	{act = 84;}
	goto st176;
tr503:
	{te = p+1;}
	{act = 86;}
	goto st176;
tr504:
	{te = p+1;}
	{act = 39;}
	goto st176;
tr507:
	{te = p+1;}
	{act = 37;}
	goto st176;
tr508:
	{te = p+1;}
	{act = 132;}
	goto st176;
tr509:
	{te = p+1;}
	{act = 133;}
	goto st176;
tr513:
	{te = p+1;}
	{act = 167;}
	goto st176;
tr514:
	{te = p+1;}
	{act = 87;}
	goto st176;
tr517:
	{te = p+1;}
	{act = 135;}
	goto st176;
tr518:
	{te = p+1;}
	{act = 136;}
	goto st176;
tr520:
	{te = p+1;}
	{act = 138;}
	goto st176;
tr521:
	{te = p+1;}
	{act = 139;}
	goto st176;
tr522:
	{te = p+1;}
	{act = 42;}
	goto st176;
tr525:
	{te = p+1;}
	{act = 140;}
	goto st176;
tr530:
	{te = p+1;}
	{act = 88;}
	goto st176;
tr531:
	{te = p+1;}
	{act = 141;}
	goto st176;
tr536:
	{te = p+1;}
	{act = 142;}
	goto st176;
tr538:
	{te = p+1;}
	{act = 144;}
	goto st176;
tr539:
	{te = p+1;}
	{act = 145;}
	goto st176;
tr540:
	{te = p+1;}
	{act = 147;}
	goto st176;
tr542:
	{te = p+1;}
	{act = 150;}
	goto st176;
tr543:
	{te = p+1;}
	{act = 149;}
	goto st176;
tr544:
	{te = p+1;}
	{act = 152;}
	goto st176;
tr546:
	{te = p+1;}
	{act = 155;}
	goto st176;
tr547:
	{te = p+1;}
	{act = 154;}
	goto st176;
tr548:
	{te = p+1;}
	{act = 156;}
	goto st176;
tr553:
	{te = p+1;}
	{act = 67;}
	goto st176;
tr556:
	{te = p+1;}
	{act = 157;}
	goto st176;
tr557:
	{te = p+1;}
	{act = 158;}
	goto st176;
tr559:
	{te = p+1;}
	{act = 159;}
	goto st176;
tr563:
	{te = p+1;}
	{act = 89;}
	goto st176;
tr564:
	{te = p+1;}
	{act = 160;}
	goto st176;
tr565:
	{te = p+1;}
	{act = 161;}
	goto st176;
tr566:
	{te = p+1;}
	{act = 162;}
	goto st176;
tr567:
	{te = p+1;}
	{act = 163;}
	goto st176;
tr568:
	{te = p+1;}
	{act = 164;}
	goto st176;
tr575:
	{te = p+1;}
	{act = 90;}
	goto st176;
tr581:
	{te = p+1;}
	{act = 91;}
	goto st176;
tr583:
	{te = p+1;}
	{act = 92;}
	goto st176;
tr584:
	{te = p+1;}
	{act = 165;}
	goto st176;
tr586:
	{te = p+1;}
	{act = 93;}
	goto st176;
st176:
	if ( ++p == pe )
		goto _test_eof176;
case 176:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 351: goto tr81;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 607: goto tr102;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr21;
tr388:
	{te = p+1;}
	{act = 173;}
	goto st177;
st177:
	if ( ++p == pe )
		goto _test_eof177;
case 177:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto tr153;
		case 324: goto tr154;
		case 351: goto tr81;
		case 355: goto tr153;
		case 356: goto tr154;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr392;
		case 580: goto tr393;
		case 607: goto tr102;
		case 611: goto tr392;
		case 612: goto tr393;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr389:
	{te = p+1;}
	{act = 66;}
	goto st178;
st178:
	if ( ++p == pe )
		goto _test_eof178;
case 178:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 39: goto tr156;
		case 351: goto tr81;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 607: goto tr102;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr155;
tr390:
	{te = p+1;}
	{act = 173;}
	goto st179;
st179:
	if ( ++p == pe )
		goto _test_eof179;
case 179:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto tr157;
		case 351: goto tr81;
		case 356: goto tr157;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr394;
		case 607: goto tr102;
		case 612: goto tr394;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr391:
	{te = p+1;}
	{act = 173;}
	goto st180;
st180:
	if ( ++p == pe )
		goto _test_eof180;
case 180:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 333: goto st46;
		case 351: goto tr81;
		case 365: goto st46;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 589: goto tr395;
		case 607: goto tr102;
		case 621: goto tr395;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr395:
	{te = p+1;}
	{act = 173;}
	goto st181;
st181:
	if ( ++p == pe )
		goto _test_eof181;
case 181:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 336: goto st47;
		case 351: goto tr81;
		case 368: goto st47;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 592: goto tr396;
		case 607: goto tr102;
		case 624: goto tr396;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr396:
	{te = p+1;}
	{act = 173;}
	goto st182;
st182:
	if ( ++p == pe )
		goto _test_eof182;
case 182:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto tr160;
		case 351: goto tr81;
		case 355: goto tr160;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr397;
		case 607: goto tr102;
		case 611: goto tr397;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr97:
	{te = p+1;}
	{act = 45;}
	goto st183;
st183:
	if ( ++p == pe )
		goto _test_eof183;
case 183:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto tr162;
		case 329: goto st49;
		case 351: goto tr81;
		case 355: goto tr162;
		case 361: goto st49;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr398;
		case 585: goto tr399;
		case 607: goto tr102;
		case 611: goto tr398;
		case 617: goto tr399;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr161;
tr399:
	{te = p+1;}
	{act = 173;}
	goto st184;
st184:
	if ( ++p == pe )
		goto _test_eof184;
case 184:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 334: goto st50;
		case 340: goto tr165;
		case 351: goto tr81;
		case 366: goto st50;
		case 372: goto tr165;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 590: goto tr400;
		case 596: goto tr401;
		case 607: goto tr102;
		case 622: goto tr400;
		case 628: goto tr401;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr400:
	{te = p+1;}
	{act = 173;}
	goto st185;
st185:
	if ( ++p == pe )
		goto _test_eof185;
case 185:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto st51;
		case 351: goto tr81;
		case 353: goto st51;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr402;
		case 607: goto tr102;
		case 609: goto tr402;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr402:
	{te = p+1;}
	{act = 173;}
	goto st186;
st186:
	if ( ++p == pe )
		goto _test_eof186;
case 186:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto st52;
		case 351: goto tr81;
		case 370: goto st52;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr403;
		case 607: goto tr102;
		case 626: goto tr403;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr403:
	{te = p+1;}
	{act = 173;}
	goto st187;
st187:
	if ( ++p == pe )
		goto _test_eof187;
case 187:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 345: goto tr168;
		case 351: goto tr81;
		case 377: goto tr168;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 601: goto tr404;
		case 607: goto tr102;
		case 633: goto tr404;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr98:
	{te = p+1;}
	{act = 40;}
	goto st188;
st188:
	if ( ++p == pe )
		goto _test_eof188;
case 188:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto st54;
		case 323: goto st61;
		case 336: goto st62;
		case 351: goto tr81;
		case 353: goto st54;
		case 355: goto st61;
		case 368: goto st62;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr405;
		case 579: goto tr406;
		case 592: goto tr407;
		case 607: goto tr102;
		case 609: goto tr405;
		case 611: goto tr406;
		case 624: goto tr407;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr169;
tr405:
	{te = p+1;}
	{act = 173;}
	goto st189;
st189:
	if ( ++p == pe )
		goto _test_eof189;
case 189:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 332: goto st55;
		case 351: goto tr81;
		case 364: goto st55;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 588: goto tr408;
		case 607: goto tr102;
		case 620: goto tr408;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr408:
	{te = p+1;}
	{act = 173;}
	goto st190;
st190:
	if ( ++p == pe )
		goto _test_eof190;
case 190:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 332: goto st56;
		case 351: goto tr81;
		case 364: goto st56;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 588: goto tr409;
		case 607: goto tr102;
		case 620: goto tr409;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr409:
	{te = p+1;}
	{act = 102;}
	goto st191;
st191:
	if ( ++p == pe )
		goto _test_eof191;
case 191:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 351: goto st57;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 607: goto tr410;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr175;
tr410:
	{te = p+1;}
	{act = 173;}
	goto st192;
st192:
	if ( ++p == pe )
		goto _test_eof192;
case 192:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 335: goto st58;
		case 336: goto st59;
		case 351: goto tr81;
		case 367: goto st58;
		case 368: goto st59;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 591: goto tr411;
		case 592: goto tr412;
		case 607: goto tr102;
		case 623: goto tr411;
		case 624: goto tr412;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr411:
	{te = p+1;}
	{act = 173;}
	goto st193;
st193:
	if ( ++p == pe )
		goto _test_eof193;
case 193:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 346: goto tr179;
		case 351: goto tr81;
		case 378: goto tr179;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 602: goto tr413;
		case 607: goto tr102;
		case 634: goto tr413;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr412:
	{te = p+1;}
	{act = 173;}
	goto st194;
st194:
	if ( ++p == pe )
		goto _test_eof194;
case 194:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 331: goto st60;
		case 351: goto tr81;
		case 363: goto st60;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 587: goto tr414;
		case 607: goto tr102;
		case 619: goto tr414;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr414:
	{te = p+1;}
	{act = 173;}
	goto st195;
st195:
	if ( ++p == pe )
		goto _test_eof195;
case 195:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 327: goto tr181;
		case 351: goto tr81;
		case 359: goto tr181;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 583: goto tr415;
		case 607: goto tr102;
		case 615: goto tr415;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr406:
	{te = p+1;}
	{act = 173;}
	goto st196;
st196:
	if ( ++p == pe )
		goto _test_eof196;
case 196:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 326: goto tr182;
		case 351: goto tr81;
		case 358: goto tr182;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 582: goto tr416;
		case 607: goto tr102;
		case 614: goto tr416;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr407:
	{te = p+1;}
	{act = 104;}
	goto st197;
st197:
	if ( ++p == pe )
		goto _test_eof197;
case 197:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st63;
		case 329: goto st64;
		case 332: goto tr186;
		case 351: goto tr81;
		case 356: goto st63;
		case 361: goto st64;
		case 364: goto tr186;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr417;
		case 585: goto tr418;
		case 588: goto tr419;
		case 607: goto tr102;
		case 612: goto tr417;
		case 617: goto tr418;
		case 620: goto tr419;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr183;
tr417:
	{te = p+1;}
	{act = 105;}
	goto st198;
st198:
	if ( ++p == pe )
		goto _test_eof198;
case 198:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr188;
		case 351: goto tr81;
		case 370: goto tr188;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr420;
		case 607: goto tr102;
		case 626: goto tr420;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr187;
tr418:
	{te = p+1;}
	{act = 107;}
	goto st199;
st199:
	if ( ++p == pe )
		goto _test_eof199;
case 199:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr190;
		case 351: goto tr81;
		case 370: goto tr190;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr421;
		case 607: goto tr102;
		case 626: goto tr421;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr189;
tr99:
	{te = p+1;}
	{act = 46;}
	goto st200;
st200:
	if ( ++p == pe )
		goto _test_eof200;
case 200:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto st66;
		case 325: goto st67;
		case 329: goto tr194;
		case 330: goto st78;
		case 339: goto tr196;
		case 351: goto tr81;
		case 353: goto st66;
		case 357: goto st67;
		case 361: goto tr194;
		case 362: goto st78;
		case 371: goto tr196;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr422;
		case 581: goto tr423;
		case 585: goto tr424;
		case 586: goto tr425;
		case 595: goto tr426;
		case 607: goto tr102;
		case 609: goto tr422;
		case 613: goto tr423;
		case 617: goto tr424;
		case 618: goto tr425;
		case 627: goto tr426;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr191;
tr422:
	{te = p+1;}
	{act = 173;}
	goto st201;
st201:
	if ( ++p == pe )
		goto _test_eof201;
case 201:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto tr197;
		case 351: goto tr81;
		case 353: goto tr197;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr427;
		case 607: goto tr102;
		case 609: goto tr427;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr423:
	{te = p+1;}
	{act = 62;}
	goto st202;
st202:
	if ( ++p == pe )
		goto _test_eof202;
case 202:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto tr199;
		case 326: goto st68;
		case 351: goto tr81;
		case 355: goto tr199;
		case 358: goto st68;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr428;
		case 582: goto tr429;
		case 607: goto tr102;
		case 611: goto tr428;
		case 614: goto tr429;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr198;
tr429:
	{te = p+1;}
	{act = 173;}
	goto st203;
st203:
	if ( ++p == pe )
		goto _test_eof203;
case 203:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 327: goto st69;
		case 329: goto st73;
		case 339: goto tr203;
		case 342: goto st75;
		case 351: goto tr81;
		case 359: goto st69;
		case 361: goto st73;
		case 371: goto tr203;
		case 374: goto st75;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 583: goto tr430;
		case 585: goto tr431;
		case 595: goto tr432;
		case 598: goto tr433;
		case 607: goto tr102;
		case 615: goto tr430;
		case 617: goto tr431;
		case 627: goto tr432;
		case 630: goto tr433;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr430:
	{te = p+1;}
	{act = 173;}
	goto st204;
st204:
	if ( ++p == pe )
		goto _test_eof204;
case 204:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto st70;
		case 351: goto tr81;
		case 370: goto st70;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr434;
		case 607: goto tr102;
		case 626: goto tr434;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr434:
	{te = p+1;}
	{act = 173;}
	goto st205;
st205:
	if ( ++p == pe )
		goto _test_eof205;
case 205:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 335: goto st71;
		case 351: goto tr81;
		case 367: goto st71;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 591: goto tr435;
		case 607: goto tr102;
		case 623: goto tr435;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr435:
	{te = p+1;}
	{act = 173;}
	goto st206;
st206:
	if ( ++p == pe )
		goto _test_eof206;
case 206:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 341: goto st72;
		case 351: goto tr81;
		case 373: goto st72;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 597: goto tr436;
		case 607: goto tr102;
		case 629: goto tr436;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr436:
	{te = p+1;}
	{act = 173;}
	goto st207;
st207:
	if ( ++p == pe )
		goto _test_eof207;
case 207:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 336: goto tr208;
		case 351: goto tr81;
		case 368: goto tr208;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 592: goto tr437;
		case 607: goto tr102;
		case 624: goto tr437;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr431:
	{te = p+1;}
	{act = 173;}
	goto st208;
st208:
	if ( ++p == pe )
		goto _test_eof208;
case 208:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 334: goto st74;
		case 351: goto tr81;
		case 366: goto st74;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 590: goto tr438;
		case 607: goto tr102;
		case 622: goto tr438;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr438:
	{te = p+1;}
	{act = 173;}
	goto st209;
st209:
	if ( ++p == pe )
		goto _test_eof209;
case 209:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto tr210;
		case 351: goto tr81;
		case 357: goto tr210;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr439;
		case 607: goto tr102;
		case 613: goto tr439;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr433:
	{te = p+1;}
	{act = 173;}
	goto st210;
st210:
	if ( ++p == pe )
		goto _test_eof210;
case 210:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto st76;
		case 351: goto tr81;
		case 353: goto st76;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr440;
		case 607: goto tr102;
		case 609: goto tr440;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr440:
	{te = p+1;}
	{act = 173;}
	goto st211;
st211:
	if ( ++p == pe )
		goto _test_eof211;
case 211:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto st77;
		case 351: goto tr81;
		case 370: goto st77;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr441;
		case 607: goto tr102;
		case 626: goto tr441;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr441:
	{te = p+1;}
	{act = 173;}
	goto st212;
st212:
	if ( ++p == pe )
		goto _test_eof212;
case 212:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 339: goto tr213;
		case 351: goto tr81;
		case 371: goto tr213;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 595: goto tr442;
		case 607: goto tr102;
		case 627: goto tr442;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr425:
	{te = p+1;}
	{act = 173;}
	goto st213;
st213:
	if ( ++p == pe )
		goto _test_eof213;
case 213:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 334: goto st79;
		case 351: goto tr81;
		case 366: goto st79;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 590: goto tr443;
		case 607: goto tr102;
		case 622: goto tr443;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr443:
	{te = p+1;}
	{act = 173;}
	goto st214;
st214:
	if ( ++p == pe )
		goto _test_eof214;
case 214:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 346: goto tr215;
		case 351: goto tr81;
		case 378: goto tr215;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 602: goto tr444;
		case 607: goto tr102;
		case 634: goto tr444;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr426:
	{te = p+1;}
	{act = 173;}
	goto st215;
st215:
	if ( ++p == pe )
		goto _test_eof215;
case 215:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 46: goto st18;
		case 351: goto tr81;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 607: goto tr102;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr100:
	{te = p+1;}
	{act = 47;}
	goto st216;
st216:
	if ( ++p == pe )
		goto _test_eof216;
case 216:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 329: goto st82;
		case 344: goto st83;
		case 351: goto tr81;
		case 361: goto st82;
		case 376: goto st83;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 585: goto tr445;
		case 600: goto tr446;
		case 607: goto tr102;
		case 617: goto tr445;
		case 632: goto tr446;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr217;
tr445:
	{te = p+1;}
	{act = 114;}
	goto st217;
st217:
	if ( ++p == pe )
		goto _test_eof217;
case 217:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr221;
		case 351: goto tr81;
		case 370: goto tr221;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr447;
		case 607: goto tr102;
		case 626: goto tr447;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr220;
tr446:
	{te = p+1;}
	{act = 115;}
	goto st218;
st218:
	if ( ++p == pe )
		goto _test_eof218;
case 218:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 340: goto st84;
		case 344: goto tr224;
		case 351: goto tr81;
		case 372: goto st84;
		case 376: goto tr224;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 596: goto tr448;
		case 600: goto tr449;
		case 607: goto tr102;
		case 628: goto tr448;
		case 632: goto tr449;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr222;
tr448:
	{te = p+1;}
	{act = 173;}
	goto st219;
st219:
	if ( ++p == pe )
		goto _test_eof219;
case 219:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto st85;
		case 351: goto tr81;
		case 357: goto st85;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr450;
		case 607: goto tr102;
		case 613: goto tr450;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr450:
	{te = p+1;}
	{act = 173;}
	goto st220;
st220:
	if ( ++p == pe )
		goto _test_eof220;
case 220:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto st86;
		case 351: goto tr81;
		case 370: goto st86;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr451;
		case 607: goto tr102;
		case 626: goto tr451;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr451:
	{te = p+1;}
	{act = 173;}
	goto st221;
st221:
	if ( ++p == pe )
		goto _test_eof221;
case 221:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 334: goto tr227;
		case 351: goto tr81;
		case 366: goto tr227;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 590: goto tr452;
		case 607: goto tr102;
		case 622: goto tr452;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr101:
	{te = p+1;}
	{act = 55;}
	goto st222;
st222:
	if ( ++p == pe )
		goto _test_eof222;
case 222:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 336: goto st88;
		case 351: goto tr81;
		case 368: goto st88;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 592: goto tr453;
		case 607: goto tr102;
		case 624: goto tr453;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr228;
tr453:
	{te = p+1;}
	{act = 173;}
	goto st223;
st223:
	if ( ++p == pe )
		goto _test_eof223;
case 223:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 336: goto tr230;
		case 351: goto tr81;
		case 368: goto tr230;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 592: goto tr454;
		case 607: goto tr102;
		case 624: goto tr454;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr103:
	{te = p+1;}
	{act = 48;}
	goto st224;
st224:
	if ( ++p == pe )
		goto _test_eof224;
case 224:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto st90;
		case 332: goto tr233;
		case 351: goto tr81;
		case 353: goto st90;
		case 364: goto tr233;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr455;
		case 588: goto tr456;
		case 607: goto tr102;
		case 609: goto tr455;
		case 620: goto tr456;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr231;
tr455:
	{te = p+1;}
	{act = 173;}
	goto st225;
st225:
	if ( ++p == pe )
		goto _test_eof225;
case 225:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 332: goto st91;
		case 351: goto tr81;
		case 364: goto st91;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 588: goto tr457;
		case 607: goto tr102;
		case 620: goto tr457;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr457:
	{te = p+1;}
	{act = 173;}
	goto st226;
st226:
	if ( ++p == pe )
		goto _test_eof226;
case 226:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 340: goto tr235;
		case 351: goto tr81;
		case 372: goto tr235;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 596: goto tr458;
		case 607: goto tr102;
		case 628: goto tr458;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr104:
	{te = p+1;}
	{act = 56;}
	goto st227;
st227:
	if ( ++p == pe )
		goto _test_eof227;
case 227:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 329: goto st93;
		case 333: goto tr238;
		case 334: goto st94;
		case 344: goto st104;
		case 345: goto st105;
		case 351: goto tr81;
		case 361: goto st93;
		case 365: goto tr238;
		case 366: goto st94;
		case 376: goto st104;
		case 377: goto st105;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 585: goto tr459;
		case 589: goto tr460;
		case 590: goto tr461;
		case 600: goto tr462;
		case 601: goto tr463;
		case 607: goto tr102;
		case 617: goto tr459;
		case 621: goto tr460;
		case 622: goto tr461;
		case 632: goto tr462;
		case 633: goto tr463;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr236;
tr459:
	{te = p+1;}
	{act = 173;}
	goto st228;
st228:
	if ( ++p == pe )
		goto _test_eof228;
case 228:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr242;
		case 351: goto tr81;
		case 370: goto tr242;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr464;
		case 607: goto tr102;
		case 626: goto tr464;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr461:
	{te = p+1;}
	{act = 119;}
	goto st229;
st229:
	if ( ++p == pe )
		goto _test_eof229;
case 229:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto st95;
		case 324: goto st99;
		case 329: goto st100;
		case 342: goto st101;
		case 351: goto tr81;
		case 355: goto st95;
		case 356: goto st99;
		case 361: goto st100;
		case 374: goto st101;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr465;
		case 580: goto tr466;
		case 585: goto tr467;
		case 598: goto tr468;
		case 607: goto tr102;
		case 611: goto tr465;
		case 612: goto tr466;
		case 617: goto tr467;
		case 630: goto tr468;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr243;
tr465:
	{te = p+1;}
	{act = 120;}
	goto st230;
st230:
	if ( ++p == pe )
		goto _test_eof230;
case 230:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 332: goto st96;
		case 351: goto tr81;
		case 364: goto st96;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 588: goto tr469;
		case 607: goto tr102;
		case 620: goto tr469;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr248;
tr469:
	{te = p+1;}
	{act = 173;}
	goto st231;
st231:
	if ( ++p == pe )
		goto _test_eof231;
case 231:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 341: goto st97;
		case 351: goto tr81;
		case 373: goto st97;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 597: goto tr470;
		case 607: goto tr102;
		case 629: goto tr470;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr470:
	{te = p+1;}
	{act = 173;}
	goto st232;
st232:
	if ( ++p == pe )
		goto _test_eof232;
case 232:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st98;
		case 351: goto tr81;
		case 356: goto st98;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr471;
		case 607: goto tr102;
		case 612: goto tr471;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr471:
	{te = p+1;}
	{act = 173;}
	goto st233;
st233:
	if ( ++p == pe )
		goto _test_eof233;
case 233:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto tr252;
		case 351: goto tr81;
		case 357: goto tr252;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr472;
		case 607: goto tr102;
		case 613: goto tr472;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr466:
	{te = p+1;}
	{act = 121;}
	goto st234;
st234:
	if ( ++p == pe )
		goto _test_eof234;
case 234:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr254;
		case 351: goto tr81;
		case 370: goto tr254;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr473;
		case 607: goto tr102;
		case 626: goto tr473;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr253;
tr467:
	{te = p+1;}
	{act = 123;}
	goto st235;
st235:
	if ( ++p == pe )
		goto _test_eof235;
case 235:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr256;
		case 351: goto tr81;
		case 370: goto tr256;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr474;
		case 607: goto tr102;
		case 626: goto tr474;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr255;
tr468:
	{te = p+1;}
	{act = 173;}
	goto st236;
st236:
	if ( ++p == pe )
		goto _test_eof236;
case 236:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 335: goto st102;
		case 351: goto tr81;
		case 367: goto st102;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 591: goto tr475;
		case 607: goto tr102;
		case 623: goto tr475;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr475:
	{te = p+1;}
	{act = 173;}
	goto st237;
st237:
	if ( ++p == pe )
		goto _test_eof237;
case 237:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 331: goto st103;
		case 351: goto tr81;
		case 363: goto st103;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 587: goto tr476;
		case 607: goto tr102;
		case 619: goto tr476;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr476:
	{te = p+1;}
	{act = 173;}
	goto st238;
st238:
	if ( ++p == pe )
		goto _test_eof238;
case 238:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto tr259;
		case 351: goto tr81;
		case 357: goto tr259;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr477;
		case 607: goto tr102;
		case 613: goto tr477;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr462:
	{te = p+1;}
	{act = 64;}
	goto st239;
st239:
	if ( ++p == pe )
		goto _test_eof239;
case 239:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 328: goto tr261;
		case 332: goto tr262;
		case 351: goto tr81;
		case 360: goto tr261;
		case 364: goto tr262;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 584: goto tr478;
		case 588: goto tr479;
		case 607: goto tr102;
		case 616: goto tr478;
		case 620: goto tr479;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr260;
tr463:
	{te = p+1;}
	{act = 65;}
	goto st240;
st240:
	if ( ++p == pe )
		goto _test_eof240;
case 240:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 328: goto tr264;
		case 332: goto tr265;
		case 351: goto tr81;
		case 360: goto tr264;
		case 364: goto tr265;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 584: goto tr480;
		case 588: goto tr481;
		case 607: goto tr102;
		case 616: goto tr480;
		case 620: goto tr481;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr263;
tr105:
	{te = p+1;}
	{act = 173;}
	goto st241;
st241:
	if ( ++p == pe )
		goto _test_eof241;
case 241:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 336: goto tr266;
		case 338: goto tr267;
		case 351: goto tr81;
		case 368: goto tr266;
		case 370: goto tr267;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 592: goto tr482;
		case 594: goto tr483;
		case 607: goto tr102;
		case 624: goto tr482;
		case 626: goto tr483;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr106:
	{te = p+1;}
	{act = 51;}
	goto st242;
st242:
	if ( ++p == pe )
		goto _test_eof242;
case 242:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st108;
		case 329: goto st111;
		case 339: goto st113;
		case 351: goto tr81;
		case 356: goto st108;
		case 361: goto st111;
		case 371: goto st113;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr484;
		case 585: goto tr485;
		case 595: goto tr486;
		case 607: goto tr102;
		case 612: goto tr484;
		case 617: goto tr485;
		case 627: goto tr486;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr268;
tr484:
	{te = p+1;}
	{act = 127;}
	goto st243;
st243:
	if ( ++p == pe )
		goto _test_eof243;
case 243:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st109;
		case 329: goto st110;
		case 351: goto tr81;
		case 356: goto st109;
		case 361: goto st110;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr487;
		case 585: goto tr488;
		case 607: goto tr102;
		case 612: goto tr487;
		case 617: goto tr488;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr272;
tr487:
	{te = p+1;}
	{act = 128;}
	goto st244;
st244:
	if ( ++p == pe )
		goto _test_eof244;
case 244:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr276;
		case 351: goto tr81;
		case 370: goto tr276;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr489;
		case 607: goto tr102;
		case 626: goto tr489;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr275;
tr488:
	{te = p+1;}
	{act = 130;}
	goto st245;
st245:
	if ( ++p == pe )
		goto _test_eof245;
case 245:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr278;
		case 351: goto tr81;
		case 370: goto tr278;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr490;
		case 607: goto tr102;
		case 626: goto tr490;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr277;
tr485:
	{te = p+1;}
	{act = 173;}
	goto st246;
st246:
	if ( ++p == pe )
		goto _test_eof246;
case 246:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 322: goto tr279;
		case 334: goto st112;
		case 351: goto tr81;
		case 354: goto tr279;
		case 366: goto st112;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 578: goto tr491;
		case 590: goto tr492;
		case 607: goto tr102;
		case 610: goto tr491;
		case 622: goto tr492;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr492:
	{te = p+1;}
	{act = 173;}
	goto st247;
st247:
	if ( ++p == pe )
		goto _test_eof247;
case 247:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto tr281;
		case 351: goto tr81;
		case 357: goto tr281;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr493;
		case 607: goto tr102;
		case 613: goto tr493;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr486:
	{te = p+1;}
	{act = 173;}
	goto st248;
st248:
	if ( ++p == pe )
		goto _test_eof248;
case 248:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 340: goto st114;
		case 351: goto tr81;
		case 372: goto st114;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 596: goto tr494;
		case 607: goto tr102;
		case 628: goto tr494;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr494:
	{te = p+1;}
	{act = 173;}
	goto st249;
st249:
	if ( ++p == pe )
		goto _test_eof249;
case 249:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 335: goto st115;
		case 351: goto tr81;
		case 367: goto st115;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 591: goto tr495;
		case 607: goto tr102;
		case 623: goto tr495;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr495:
	{te = p+1;}
	{act = 173;}
	goto st250;
st250:
	if ( ++p == pe )
		goto _test_eof250;
case 250:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 326: goto st116;
		case 334: goto tr285;
		case 351: goto tr81;
		case 358: goto st116;
		case 366: goto tr285;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 582: goto tr496;
		case 590: goto tr497;
		case 607: goto tr102;
		case 614: goto tr496;
		case 622: goto tr497;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr496:
	{te = p+1;}
	{act = 173;}
	goto st251;
st251:
	if ( ++p == pe )
		goto _test_eof251;
case 251:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 326: goto tr286;
		case 351: goto tr81;
		case 358: goto tr286;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 582: goto tr498;
		case 607: goto tr102;
		case 614: goto tr498;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr107:
	{te = p+1;}
	{act = 44;}
	goto st252;
st252:
	if ( ++p == pe )
		goto _test_eof252;
case 252:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 335: goto st118;
		case 351: goto tr81;
		case 367: goto st118;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 591: goto tr499;
		case 607: goto tr102;
		case 623: goto tr499;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr287;
tr499:
	{te = p+1;}
	{act = 173;}
	goto st253;
st253:
	if ( ++p == pe )
		goto _test_eof253;
case 253:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st119;
		case 351: goto tr81;
		case 356: goto st119;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr500;
		case 607: goto tr102;
		case 612: goto tr500;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr500:
	{te = p+1;}
	{act = 173;}
	goto st254;
st254:
	if ( ++p == pe )
		goto _test_eof254;
case 254:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 341: goto st120;
		case 351: goto tr81;
		case 373: goto st120;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 597: goto tr501;
		case 607: goto tr102;
		case 629: goto tr501;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr501:
	{te = p+1;}
	{act = 173;}
	goto st255;
st255:
	if ( ++p == pe )
		goto _test_eof255;
case 255:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 332: goto st121;
		case 351: goto tr81;
		case 364: goto st121;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 588: goto tr502;
		case 607: goto tr102;
		case 620: goto tr502;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr502:
	{te = p+1;}
	{act = 173;}
	goto st256;
st256:
	if ( ++p == pe )
		goto _test_eof256;
case 256:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto tr292;
		case 351: goto tr81;
		case 357: goto tr292;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr503;
		case 607: goto tr102;
		case 613: goto tr503;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr108:
	{te = p+1;}
	{act = 173;}
	goto st257;
st257:
	if ( ++p == pe )
		goto _test_eof257;
case 257:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto tr293;
		case 325: goto st123;
		case 335: goto st124;
		case 346: goto tr296;
		case 351: goto tr81;
		case 355: goto tr293;
		case 357: goto st123;
		case 367: goto st124;
		case 378: goto tr296;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr504;
		case 581: goto tr505;
		case 591: goto tr506;
		case 602: goto tr507;
		case 607: goto tr102;
		case 611: goto tr504;
		case 613: goto tr505;
		case 623: goto tr506;
		case 634: goto tr507;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr505:
	{te = p+1;}
	{act = 173;}
	goto st258;
st258:
	if ( ++p == pe )
		goto _test_eof258;
case 258:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 327: goto tr297;
		case 351: goto tr81;
		case 359: goto tr297;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 583: goto tr508;
		case 607: goto tr102;
		case 615: goto tr508;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr506:
	{te = p+1;}
	{act = 173;}
	goto st259;
st259:
	if ( ++p == pe )
		goto _test_eof259;
case 259:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 336: goto tr298;
		case 351: goto tr81;
		case 368: goto tr298;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 592: goto tr509;
		case 607: goto tr102;
		case 624: goto tr509;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr109:
	{te = p+1;}
	{act = 173;}
	goto st260;
st260:
	if ( ++p == pe )
		goto _test_eof260;
case 260:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto st126;
		case 340: goto st127;
		case 341: goto st130;
		case 346: goto tr302;
		case 351: goto tr81;
		case 370: goto st126;
		case 372: goto st127;
		case 373: goto st130;
		case 378: goto tr302;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr510;
		case 596: goto tr511;
		case 597: goto tr512;
		case 602: goto tr513;
		case 607: goto tr102;
		case 626: goto tr510;
		case 628: goto tr511;
		case 629: goto tr512;
		case 634: goto tr513;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr510:
	{te = p+1;}
	{act = 134;}
	goto st261;
st261:
	if ( ++p == pe )
		goto _test_eof261;
case 261:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 327: goto tr304;
		case 351: goto tr81;
		case 359: goto tr304;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 583: goto tr514;
		case 607: goto tr102;
		case 615: goto tr514;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr303;
tr511:
	{te = p+1;}
	{act = 173;}
	goto st262;
st262:
	if ( ++p == pe )
		goto _test_eof262;
case 262:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st128;
		case 329: goto st129;
		case 351: goto tr81;
		case 356: goto st128;
		case 361: goto st129;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr515;
		case 585: goto tr516;
		case 607: goto tr102;
		case 612: goto tr515;
		case 617: goto tr516;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr515:
	{te = p+1;}
	{act = 173;}
	goto st263;
st263:
	if ( ++p == pe )
		goto _test_eof263;
case 263:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr307;
		case 351: goto tr81;
		case 370: goto tr307;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr517;
		case 607: goto tr102;
		case 626: goto tr517;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr516:
	{te = p+1;}
	{act = 173;}
	goto st264;
st264:
	if ( ++p == pe )
		goto _test_eof264;
case 264:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr308;
		case 351: goto tr81;
		case 370: goto tr308;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr518;
		case 607: goto tr102;
		case 626: goto tr518;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr512:
	{te = p+1;}
	{act = 173;}
	goto st265;
st265:
	if ( ++p == pe )
		goto _test_eof265;
case 265:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 340: goto st131;
		case 351: goto tr81;
		case 372: goto st131;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 596: goto tr519;
		case 607: goto tr102;
		case 628: goto tr519;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr519:
	{te = p+1;}
	{act = 137;}
	goto st266;
st266:
	if ( ++p == pe )
		goto _test_eof266;
case 266:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto tr311;
		case 329: goto tr312;
		case 351: goto tr81;
		case 356: goto tr311;
		case 361: goto tr312;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr520;
		case 585: goto tr521;
		case 607: goto tr102;
		case 612: goto tr520;
		case 617: goto tr521;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr310;
tr110:
	{te = p+1;}
	{act = 43;}
	goto st267;
st267:
	if ( ++p == pe )
		goto _test_eof267;
case 267:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto tr314;
		case 335: goto st133;
		case 341: goto st134;
		case 351: goto tr81;
		case 357: goto tr314;
		case 367: goto st133;
		case 373: goto st134;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr522;
		case 591: goto tr523;
		case 597: goto tr524;
		case 607: goto tr102;
		case 613: goto tr522;
		case 623: goto tr523;
		case 629: goto tr524;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr313;
tr523:
	{te = p+1;}
	{act = 41;}
	goto st268;
st268:
	if ( ++p == pe )
		goto _test_eof268;
case 268:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 336: goto tr318;
		case 351: goto tr81;
		case 368: goto tr318;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 592: goto tr525;
		case 607: goto tr102;
		case 624: goto tr525;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr317;
tr524:
	{te = p+1;}
	{act = 173;}
	goto st269;
st269:
	if ( ++p == pe )
		goto _test_eof269;
case 269:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 322: goto st135;
		case 339: goto st138;
		case 351: goto tr81;
		case 354: goto st135;
		case 371: goto st138;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 578: goto tr526;
		case 595: goto tr527;
		case 607: goto tr102;
		case 610: goto tr526;
		case 627: goto tr527;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr526:
	{te = p+1;}
	{act = 173;}
	goto st270;
st270:
	if ( ++p == pe )
		goto _test_eof270;
case 270:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 332: goto st136;
		case 351: goto tr81;
		case 364: goto st136;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 588: goto tr528;
		case 607: goto tr102;
		case 620: goto tr528;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr528:
	{te = p+1;}
	{act = 173;}
	goto st271;
st271:
	if ( ++p == pe )
		goto _test_eof271;
case 271:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 329: goto st137;
		case 351: goto tr81;
		case 361: goto st137;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 585: goto tr529;
		case 607: goto tr102;
		case 617: goto tr529;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr529:
	{te = p+1;}
	{act = 173;}
	goto st272;
st272:
	if ( ++p == pe )
		goto _test_eof272;
case 272:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto tr323;
		case 351: goto tr81;
		case 355: goto tr323;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr530;
		case 607: goto tr102;
		case 611: goto tr530;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr527:
	{te = p+1;}
	{act = 173;}
	goto st273;
st273:
	if ( ++p == pe )
		goto _test_eof273;
case 273:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 328: goto tr324;
		case 351: goto tr81;
		case 360: goto tr324;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 584: goto tr531;
		case 607: goto tr102;
		case 616: goto tr531;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr111:
	{te = p+1;}
	{act = 58;}
	goto st274;
st274:
	if ( ++p == pe )
		goto _test_eof274;
case 274:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto st140;
		case 332: goto st142;
		case 338: goto st144;
		case 339: goto st146;
		case 351: goto tr81;
		case 357: goto st140;
		case 364: goto st142;
		case 370: goto st144;
		case 371: goto st146;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr532;
		case 588: goto tr533;
		case 594: goto tr534;
		case 595: goto tr535;
		case 607: goto tr102;
		case 613: goto tr532;
		case 620: goto tr533;
		case 626: goto tr534;
		case 627: goto tr535;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr325;
tr532:
	{te = p+1;}
	{act = 173;}
	goto st275;
st275:
	if ( ++p == pe )
		goto _test_eof275;
case 275:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 339: goto tr330;
		case 340: goto st141;
		case 351: goto tr81;
		case 371: goto tr330;
		case 372: goto st141;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 595: goto tr536;
		case 596: goto tr537;
		case 607: goto tr102;
		case 627: goto tr536;
		case 628: goto tr537;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr537:
	{te = p+1;}
	{act = 143;}
	goto st276;
st276:
	if ( ++p == pe )
		goto _test_eof276;
case 276:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 329: goto tr333;
		case 334: goto tr334;
		case 351: goto tr81;
		case 361: goto tr333;
		case 366: goto tr334;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 585: goto tr538;
		case 590: goto tr539;
		case 607: goto tr102;
		case 617: goto tr538;
		case 622: goto tr539;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr332;
tr533:
	{te = p+1;}
	{act = 146;}
	goto st277;
st277:
	if ( ++p == pe )
		goto _test_eof277;
case 277:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto tr336;
		case 323: goto st143;
		case 324: goto tr338;
		case 351: goto tr81;
		case 353: goto tr336;
		case 355: goto st143;
		case 356: goto tr338;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr540;
		case 579: goto tr541;
		case 580: goto tr542;
		case 607: goto tr102;
		case 609: goto tr540;
		case 611: goto tr541;
		case 612: goto tr542;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr335;
tr541:
	{te = p+1;}
	{act = 148;}
	goto st278;
st278:
	if ( ++p == pe )
		goto _test_eof278;
case 278:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto tr340;
		case 351: goto tr81;
		case 353: goto tr340;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr543;
		case 607: goto tr102;
		case 609: goto tr543;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr339;
tr534:
	{te = p+1;}
	{act = 151;}
	goto st279;
st279:
	if ( ++p == pe )
		goto _test_eof279;
case 279:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto tr342;
		case 323: goto st145;
		case 324: goto tr344;
		case 351: goto tr81;
		case 353: goto tr342;
		case 355: goto st145;
		case 356: goto tr344;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr544;
		case 579: goto tr545;
		case 580: goto tr546;
		case 607: goto tr102;
		case 609: goto tr544;
		case 611: goto tr545;
		case 612: goto tr546;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr341;
tr545:
	{te = p+1;}
	{act = 153;}
	goto st280;
st280:
	if ( ++p == pe )
		goto _test_eof280;
case 280:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto tr346;
		case 351: goto tr81;
		case 353: goto tr346;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr547;
		case 607: goto tr102;
		case 609: goto tr547;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr345;
tr535:
	{te = p+1;}
	{act = 173;}
	goto st281;
st281:
	if ( ++p == pe )
		goto _test_eof281;
case 281:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 340: goto tr347;
		case 351: goto tr81;
		case 372: goto tr347;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 596: goto tr548;
		case 607: goto tr102;
		case 628: goto tr548;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr112:
	{te = p+1;}
	{act = 173;}
	goto st282;
st282:
	if ( ++p == pe )
		goto _test_eof282;
case 282:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 322: goto st148;
		case 323: goto st149;
		case 325: goto st150;
		case 332: goto st155;
		case 336: goto tr352;
		case 338: goto st156;
		case 341: goto st157;
		case 351: goto tr81;
		case 354: goto st148;
		case 355: goto st149;
		case 357: goto st150;
		case 364: goto st155;
		case 368: goto tr352;
		case 370: goto st156;
		case 373: goto st157;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 578: goto tr549;
		case 579: goto tr550;
		case 581: goto tr551;
		case 588: goto tr552;
		case 592: goto tr553;
		case 594: goto tr554;
		case 597: goto tr555;
		case 607: goto tr102;
		case 610: goto tr549;
		case 611: goto tr550;
		case 613: goto tr551;
		case 620: goto tr552;
		case 624: goto tr553;
		case 626: goto tr554;
		case 629: goto tr555;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr549:
	{te = p+1;}
	{act = 173;}
	goto st283;
st283:
	if ( ++p == pe )
		goto _test_eof283;
case 283:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto tr355;
		case 351: goto tr81;
		case 355: goto tr355;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr556;
		case 607: goto tr102;
		case 611: goto tr556;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr550:
	{te = p+1;}
	{act = 173;}
	goto st284;
st284:
	if ( ++p == pe )
		goto _test_eof284;
case 284:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 326: goto tr356;
		case 351: goto tr81;
		case 358: goto tr356;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 582: goto tr557;
		case 607: goto tr102;
		case 614: goto tr557;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr551:
	{te = p+1;}
	{act = 173;}
	goto st285;
st285:
	if ( ++p == pe )
		goto _test_eof285;
case 285:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 323: goto st151;
		case 340: goto tr358;
		case 351: goto tr81;
		case 355: goto st151;
		case 372: goto tr358;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 579: goto tr558;
		case 596: goto tr559;
		case 607: goto tr102;
		case 611: goto tr558;
		case 628: goto tr559;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr558:
	{te = p+1;}
	{act = 173;}
	goto st286;
st286:
	if ( ++p == pe )
		goto _test_eof286;
case 286:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 340: goto st152;
		case 351: goto tr81;
		case 372: goto st152;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 596: goto tr560;
		case 607: goto tr102;
		case 628: goto tr560;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr560:
	{te = p+1;}
	{act = 173;}
	goto st287;
st287:
	if ( ++p == pe )
		goto _test_eof287;
case 287:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 329: goto st153;
		case 351: goto tr81;
		case 361: goto st153;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 585: goto tr561;
		case 607: goto tr102;
		case 617: goto tr561;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr561:
	{te = p+1;}
	{act = 173;}
	goto st288;
st288:
	if ( ++p == pe )
		goto _test_eof288;
case 288:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 335: goto st154;
		case 351: goto tr81;
		case 367: goto st154;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 591: goto tr562;
		case 607: goto tr102;
		case 623: goto tr562;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr562:
	{te = p+1;}
	{act = 173;}
	goto st289;
st289:
	if ( ++p == pe )
		goto _test_eof289;
case 289:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 334: goto tr362;
		case 351: goto tr81;
		case 366: goto tr362;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 590: goto tr563;
		case 607: goto tr102;
		case 622: goto tr563;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr552:
	{te = p+1;}
	{act = 173;}
	goto st290;
st290:
	if ( ++p == pe )
		goto _test_eof290;
case 290:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto tr363;
		case 332: goto tr364;
		case 351: goto tr81;
		case 353: goto tr363;
		case 364: goto tr364;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr564;
		case 588: goto tr565;
		case 607: goto tr102;
		case 609: goto tr564;
		case 620: goto tr565;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr554:
	{te = p+1;}
	{act = 173;}
	goto st291;
st291:
	if ( ++p == pe )
		goto _test_eof291;
case 291:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 321: goto tr365;
		case 332: goto tr366;
		case 351: goto tr81;
		case 353: goto tr365;
		case 364: goto tr366;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 577: goto tr566;
		case 588: goto tr567;
		case 607: goto tr102;
		case 609: goto tr566;
		case 620: goto tr567;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr555:
	{te = p+1;}
	{act = 173;}
	goto st292;
st292:
	if ( ++p == pe )
		goto _test_eof292;
case 292:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 322: goto tr367;
		case 351: goto tr81;
		case 354: goto tr367;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 578: goto tr568;
		case 607: goto tr102;
		case 610: goto tr568;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr113:
	{te = p+1;}
	{act = 173;}
	goto st293;
st293:
	if ( ++p == pe )
		goto _test_eof293;
case 293:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 334: goto st159;
		case 351: goto tr81;
		case 366: goto st159;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 590: goto tr569;
		case 607: goto tr102;
		case 622: goto tr569;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr569:
	{te = p+1;}
	{act = 173;}
	goto st294;
st294:
	if ( ++p == pe )
		goto _test_eof294;
case 294:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st160;
		case 351: goto tr81;
		case 356: goto st160;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr570;
		case 607: goto tr102;
		case 612: goto tr570;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr570:
	{te = p+1;}
	{act = 173;}
	goto st295;
st295:
	if ( ++p == pe )
		goto _test_eof295;
case 295:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto st161;
		case 351: goto tr81;
		case 357: goto st161;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr571;
		case 607: goto tr102;
		case 613: goto tr571;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr571:
	{te = p+1;}
	{act = 173;}
	goto st296;
st296:
	if ( ++p == pe )
		goto _test_eof296;
case 296:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 326: goto st162;
		case 351: goto tr81;
		case 358: goto st162;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 582: goto tr572;
		case 607: goto tr102;
		case 614: goto tr572;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr572:
	{te = p+1;}
	{act = 173;}
	goto st297;
st297:
	if ( ++p == pe )
		goto _test_eof297;
case 297:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 329: goto st163;
		case 351: goto tr81;
		case 361: goto st163;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 585: goto tr573;
		case 607: goto tr102;
		case 617: goto tr573;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr573:
	{te = p+1;}
	{act = 173;}
	goto st298;
st298:
	if ( ++p == pe )
		goto _test_eof298;
case 298:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 334: goto st164;
		case 351: goto tr81;
		case 366: goto st164;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 590: goto tr574;
		case 607: goto tr102;
		case 622: goto tr574;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr574:
	{te = p+1;}
	{act = 173;}
	goto st299;
st299:
	if ( ++p == pe )
		goto _test_eof299;
case 299:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto tr374;
		case 351: goto tr81;
		case 357: goto tr374;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr575;
		case 607: goto tr102;
		case 613: goto tr575;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr114:
	{te = p+1;}
	{act = 173;}
	goto st300;
st300:
	if ( ++p == pe )
		goto _test_eof300;
case 300:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 324: goto st166;
		case 332: goto st168;
		case 335: goto st170;
		case 338: goto st171;
		case 351: goto tr81;
		case 356: goto st166;
		case 364: goto st168;
		case 367: goto st170;
		case 370: goto st171;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 580: goto tr576;
		case 588: goto tr577;
		case 591: goto tr578;
		case 594: goto tr579;
		case 607: goto tr102;
		case 612: goto tr576;
		case 620: goto tr577;
		case 623: goto tr578;
		case 626: goto tr579;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr576:
	{te = p+1;}
	{act = 173;}
	goto st301;
st301:
	if ( ++p == pe )
		goto _test_eof301;
case 301:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto st167;
		case 351: goto tr81;
		case 357: goto st167;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr580;
		case 607: goto tr102;
		case 613: goto tr580;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr580:
	{te = p+1;}
	{act = 173;}
	goto st302;
st302:
	if ( ++p == pe )
		goto _test_eof302;
case 302:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 326: goto tr380;
		case 351: goto tr81;
		case 358: goto tr380;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 582: goto tr581;
		case 607: goto tr102;
		case 614: goto tr581;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr577:
	{te = p+1;}
	{act = 173;}
	goto st303;
st303:
	if ( ++p == pe )
		goto _test_eof303;
case 303:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 329: goto st169;
		case 351: goto tr81;
		case 361: goto st169;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 585: goto tr582;
		case 607: goto tr102;
		case 617: goto tr582;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr582:
	{te = p+1;}
	{act = 173;}
	goto st304;
st304:
	if ( ++p == pe )
		goto _test_eof304;
case 304:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 322: goto tr382;
		case 351: goto tr81;
		case 354: goto tr382;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 578: goto tr583;
		case 607: goto tr102;
		case 610: goto tr583;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr578:
	{te = p+1;}
	{act = 173;}
	goto st305;
st305:
	if ( ++p == pe )
		goto _test_eof305;
case 305:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 338: goto tr383;
		case 351: goto tr81;
		case 370: goto tr383;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 594: goto tr584;
		case 607: goto tr102;
		case 626: goto tr584;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr579:
	{te = p+1;}
	{act = 173;}
	goto st306;
st306:
	if ( ++p == pe )
		goto _test_eof306;
case 306:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 325: goto st172;
		case 351: goto tr81;
		case 357: goto st172;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 581: goto tr585;
		case 607: goto tr102;
		case 613: goto tr585;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
tr585:
	{te = p+1;}
	{act = 173;}
	goto st307;
st307:
	if ( ++p == pe )
		goto _test_eof307;
case 307:
	_widec = (*p);
	if ( (*p) < 58 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 9 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 32 ) {
			if ( 48 <= (*p) && (*p) <= 57 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else if ( (*p) > 58 ) {
		if ( (*p) < 95 ) {
			if ( 65 <= (*p) && (*p) <= 90 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else if ( (*p) > 95 ) {
			if ( 97 <= (*p) && (*p) <= 122 ) {
				_widec = (short)(128 + ((*p) - -128));
				if ( 
 at_bol  ) _widec += 256;
			}
		} else {
			_widec = (short)(128 + ((*p) - -128));
			if ( 
 at_bol  ) _widec += 256;
		}
	} else {
		_widec = (short)(128 + ((*p) - -128));
		if ( 
 at_bol  ) _widec += 256;
	}
	switch( _widec ) {
		case 326: goto tr385;
		case 351: goto tr81;
		case 358: goto tr385;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr38;
		case 582: goto tr586;
		case 607: goto tr102;
		case 614: goto tr586;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr81;
		} else if ( _widec >= 304 )
			goto tr81;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr102;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr102;
		} else
			goto tr102;
	} else
		goto tr81;
	goto tr152;
	}
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof1: cs = 1; goto _test_eof; 
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof3: cs = 3; goto _test_eof; 
	_test_eof4: cs = 4; goto _test_eof; 
	_test_eof5: cs = 5; goto _test_eof; 
	_test_eof6: cs = 6; goto _test_eof; 
	_test_eof7: cs = 7; goto _test_eof; 
	_test_eof8: cs = 8; goto _test_eof; 
	_test_eof9: cs = 9; goto _test_eof; 
	_test_eof10: cs = 10; goto _test_eof; 
	_test_eof11: cs = 11; goto _test_eof; 
	_test_eof12: cs = 12; goto _test_eof; 
	_test_eof13: cs = 13; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 
	_test_eof27: cs = 27; goto _test_eof; 
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
	_test_eof34: cs = 34; goto _test_eof; 
	_test_eof35: cs = 35; goto _test_eof; 
	_test_eof36: cs = 36; goto _test_eof; 
	_test_eof37: cs = 37; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof38: cs = 38; goto _test_eof; 
	_test_eof39: cs = 39; goto _test_eof; 
	_test_eof40: cs = 40; goto _test_eof; 
	_test_eof41: cs = 41; goto _test_eof; 
	_test_eof42: cs = 42; goto _test_eof; 
	_test_eof43: cs = 43; goto _test_eof; 
	_test_eof44: cs = 44; goto _test_eof; 
	_test_eof45: cs = 45; goto _test_eof; 
	_test_eof46: cs = 46; goto _test_eof; 
	_test_eof47: cs = 47; goto _test_eof; 
	_test_eof48: cs = 48; goto _test_eof; 
	_test_eof49: cs = 49; goto _test_eof; 
	_test_eof50: cs = 50; goto _test_eof; 
	_test_eof51: cs = 51; goto _test_eof; 
	_test_eof52: cs = 52; goto _test_eof; 
	_test_eof53: cs = 53; goto _test_eof; 
	_test_eof54: cs = 54; goto _test_eof; 
	_test_eof55: cs = 55; goto _test_eof; 
	_test_eof56: cs = 56; goto _test_eof; 
	_test_eof57: cs = 57; goto _test_eof; 
	_test_eof58: cs = 58; goto _test_eof; 
	_test_eof59: cs = 59; goto _test_eof; 
	_test_eof60: cs = 60; goto _test_eof; 
	_test_eof61: cs = 61; goto _test_eof; 
	_test_eof62: cs = 62; goto _test_eof; 
	_test_eof63: cs = 63; goto _test_eof; 
	_test_eof64: cs = 64; goto _test_eof; 
	_test_eof65: cs = 65; goto _test_eof; 
	_test_eof66: cs = 66; goto _test_eof; 
	_test_eof67: cs = 67; goto _test_eof; 
	_test_eof68: cs = 68; goto _test_eof; 
	_test_eof69: cs = 69; goto _test_eof; 
	_test_eof70: cs = 70; goto _test_eof; 
	_test_eof71: cs = 71; goto _test_eof; 
	_test_eof72: cs = 72; goto _test_eof; 
	_test_eof73: cs = 73; goto _test_eof; 
	_test_eof74: cs = 74; goto _test_eof; 
	_test_eof75: cs = 75; goto _test_eof; 
	_test_eof76: cs = 76; goto _test_eof; 
	_test_eof77: cs = 77; goto _test_eof; 
	_test_eof78: cs = 78; goto _test_eof; 
	_test_eof79: cs = 79; goto _test_eof; 
	_test_eof80: cs = 80; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
	_test_eof81: cs = 81; goto _test_eof; 
	_test_eof82: cs = 82; goto _test_eof; 
	_test_eof83: cs = 83; goto _test_eof; 
	_test_eof84: cs = 84; goto _test_eof; 
	_test_eof85: cs = 85; goto _test_eof; 
	_test_eof86: cs = 86; goto _test_eof; 
	_test_eof87: cs = 87; goto _test_eof; 
	_test_eof88: cs = 88; goto _test_eof; 
	_test_eof89: cs = 89; goto _test_eof; 
	_test_eof90: cs = 90; goto _test_eof; 
	_test_eof91: cs = 91; goto _test_eof; 
	_test_eof92: cs = 92; goto _test_eof; 
	_test_eof93: cs = 93; goto _test_eof; 
	_test_eof94: cs = 94; goto _test_eof; 
	_test_eof95: cs = 95; goto _test_eof; 
	_test_eof96: cs = 96; goto _test_eof; 
	_test_eof97: cs = 97; goto _test_eof; 
	_test_eof98: cs = 98; goto _test_eof; 
	_test_eof99: cs = 99; goto _test_eof; 
	_test_eof100: cs = 100; goto _test_eof; 
	_test_eof101: cs = 101; goto _test_eof; 
	_test_eof102: cs = 102; goto _test_eof; 
	_test_eof103: cs = 103; goto _test_eof; 
	_test_eof104: cs = 104; goto _test_eof; 
	_test_eof105: cs = 105; goto _test_eof; 
	_test_eof106: cs = 106; goto _test_eof; 
	_test_eof107: cs = 107; goto _test_eof; 
	_test_eof108: cs = 108; goto _test_eof; 
	_test_eof109: cs = 109; goto _test_eof; 
	_test_eof110: cs = 110; goto _test_eof; 
	_test_eof111: cs = 111; goto _test_eof; 
	_test_eof112: cs = 112; goto _test_eof; 
	_test_eof113: cs = 113; goto _test_eof; 
	_test_eof114: cs = 114; goto _test_eof; 
	_test_eof115: cs = 115; goto _test_eof; 
	_test_eof116: cs = 116; goto _test_eof; 
	_test_eof117: cs = 117; goto _test_eof; 
	_test_eof118: cs = 118; goto _test_eof; 
	_test_eof119: cs = 119; goto _test_eof; 
	_test_eof120: cs = 120; goto _test_eof; 
	_test_eof121: cs = 121; goto _test_eof; 
	_test_eof122: cs = 122; goto _test_eof; 
	_test_eof123: cs = 123; goto _test_eof; 
	_test_eof124: cs = 124; goto _test_eof; 
	_test_eof125: cs = 125; goto _test_eof; 
	_test_eof126: cs = 126; goto _test_eof; 
	_test_eof127: cs = 127; goto _test_eof; 
	_test_eof128: cs = 128; goto _test_eof; 
	_test_eof129: cs = 129; goto _test_eof; 
	_test_eof130: cs = 130; goto _test_eof; 
	_test_eof131: cs = 131; goto _test_eof; 
	_test_eof132: cs = 132; goto _test_eof; 
	_test_eof133: cs = 133; goto _test_eof; 
	_test_eof134: cs = 134; goto _test_eof; 
	_test_eof135: cs = 135; goto _test_eof; 
	_test_eof136: cs = 136; goto _test_eof; 
	_test_eof137: cs = 137; goto _test_eof; 
	_test_eof138: cs = 138; goto _test_eof; 
	_test_eof139: cs = 139; goto _test_eof; 
	_test_eof140: cs = 140; goto _test_eof; 
	_test_eof141: cs = 141; goto _test_eof; 
	_test_eof142: cs = 142; goto _test_eof; 
	_test_eof143: cs = 143; goto _test_eof; 
	_test_eof144: cs = 144; goto _test_eof; 
	_test_eof145: cs = 145; goto _test_eof; 
	_test_eof146: cs = 146; goto _test_eof; 
	_test_eof147: cs = 147; goto _test_eof; 
	_test_eof148: cs = 148; goto _test_eof; 
	_test_eof149: cs = 149; goto _test_eof; 
	_test_eof150: cs = 150; goto _test_eof; 
	_test_eof151: cs = 151; goto _test_eof; 
	_test_eof152: cs = 152; goto _test_eof; 
	_test_eof153: cs = 153; goto _test_eof; 
	_test_eof154: cs = 154; goto _test_eof; 
	_test_eof155: cs = 155; goto _test_eof; 
	_test_eof156: cs = 156; goto _test_eof; 
	_test_eof157: cs = 157; goto _test_eof; 
	_test_eof158: cs = 158; goto _test_eof; 
	_test_eof159: cs = 159; goto _test_eof; 
	_test_eof160: cs = 160; goto _test_eof; 
	_test_eof161: cs = 161; goto _test_eof; 
	_test_eof162: cs = 162; goto _test_eof; 
	_test_eof163: cs = 163; goto _test_eof; 
	_test_eof164: cs = 164; goto _test_eof; 
	_test_eof165: cs = 165; goto _test_eof; 
	_test_eof166: cs = 166; goto _test_eof; 
	_test_eof167: cs = 167; goto _test_eof; 
	_test_eof168: cs = 168; goto _test_eof; 
	_test_eof169: cs = 169; goto _test_eof; 
	_test_eof170: cs = 170; goto _test_eof; 
	_test_eof171: cs = 171; goto _test_eof; 
	_test_eof172: cs = 172; goto _test_eof; 
	_test_eof173: cs = 173; goto _test_eof; 
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof174: cs = 174; goto _test_eof; 
	_test_eof175: cs = 175; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
	_test_eof176: cs = 176; goto _test_eof; 
	_test_eof177: cs = 177; goto _test_eof; 
	_test_eof178: cs = 178; goto _test_eof; 
	_test_eof179: cs = 179; goto _test_eof; 
	_test_eof180: cs = 180; goto _test_eof; 
	_test_eof181: cs = 181; goto _test_eof; 
	_test_eof182: cs = 182; goto _test_eof; 
	_test_eof183: cs = 183; goto _test_eof; 
	_test_eof184: cs = 184; goto _test_eof; 
	_test_eof185: cs = 185; goto _test_eof; 
	_test_eof186: cs = 186; goto _test_eof; 
	_test_eof187: cs = 187; goto _test_eof; 
	_test_eof188: cs = 188; goto _test_eof; 
	_test_eof189: cs = 189; goto _test_eof; 
	_test_eof190: cs = 190; goto _test_eof; 
	_test_eof191: cs = 191; goto _test_eof; 
	_test_eof192: cs = 192; goto _test_eof; 
	_test_eof193: cs = 193; goto _test_eof; 
	_test_eof194: cs = 194; goto _test_eof; 
	_test_eof195: cs = 195; goto _test_eof; 
	_test_eof196: cs = 196; goto _test_eof; 
	_test_eof197: cs = 197; goto _test_eof; 
	_test_eof198: cs = 198; goto _test_eof; 
	_test_eof199: cs = 199; goto _test_eof; 
	_test_eof200: cs = 200; goto _test_eof; 
	_test_eof201: cs = 201; goto _test_eof; 
	_test_eof202: cs = 202; goto _test_eof; 
	_test_eof203: cs = 203; goto _test_eof; 
	_test_eof204: cs = 204; goto _test_eof; 
	_test_eof205: cs = 205; goto _test_eof; 
	_test_eof206: cs = 206; goto _test_eof; 
	_test_eof207: cs = 207; goto _test_eof; 
	_test_eof208: cs = 208; goto _test_eof; 
	_test_eof209: cs = 209; goto _test_eof; 
	_test_eof210: cs = 210; goto _test_eof; 
	_test_eof211: cs = 211; goto _test_eof; 
	_test_eof212: cs = 212; goto _test_eof; 
	_test_eof213: cs = 213; goto _test_eof; 
	_test_eof214: cs = 214; goto _test_eof; 
	_test_eof215: cs = 215; goto _test_eof; 
	_test_eof216: cs = 216; goto _test_eof; 
	_test_eof217: cs = 217; goto _test_eof; 
	_test_eof218: cs = 218; goto _test_eof; 
	_test_eof219: cs = 219; goto _test_eof; 
	_test_eof220: cs = 220; goto _test_eof; 
	_test_eof221: cs = 221; goto _test_eof; 
	_test_eof222: cs = 222; goto _test_eof; 
	_test_eof223: cs = 223; goto _test_eof; 
	_test_eof224: cs = 224; goto _test_eof; 
	_test_eof225: cs = 225; goto _test_eof; 
	_test_eof226: cs = 226; goto _test_eof; 
	_test_eof227: cs = 227; goto _test_eof; 
	_test_eof228: cs = 228; goto _test_eof; 
	_test_eof229: cs = 229; goto _test_eof; 
	_test_eof230: cs = 230; goto _test_eof; 
	_test_eof231: cs = 231; goto _test_eof; 
	_test_eof232: cs = 232; goto _test_eof; 
	_test_eof233: cs = 233; goto _test_eof; 
	_test_eof234: cs = 234; goto _test_eof; 
	_test_eof235: cs = 235; goto _test_eof; 
	_test_eof236: cs = 236; goto _test_eof; 
	_test_eof237: cs = 237; goto _test_eof; 
	_test_eof238: cs = 238; goto _test_eof; 
	_test_eof239: cs = 239; goto _test_eof; 
	_test_eof240: cs = 240; goto _test_eof; 
	_test_eof241: cs = 241; goto _test_eof; 
	_test_eof242: cs = 242; goto _test_eof; 
	_test_eof243: cs = 243; goto _test_eof; 
	_test_eof244: cs = 244; goto _test_eof; 
	_test_eof245: cs = 245; goto _test_eof; 
	_test_eof246: cs = 246; goto _test_eof; 
	_test_eof247: cs = 247; goto _test_eof; 
	_test_eof248: cs = 248; goto _test_eof; 
	_test_eof249: cs = 249; goto _test_eof; 
	_test_eof250: cs = 250; goto _test_eof; 
	_test_eof251: cs = 251; goto _test_eof; 
	_test_eof252: cs = 252; goto _test_eof; 
	_test_eof253: cs = 253; goto _test_eof; 
	_test_eof254: cs = 254; goto _test_eof; 
	_test_eof255: cs = 255; goto _test_eof; 
	_test_eof256: cs = 256; goto _test_eof; 
	_test_eof257: cs = 257; goto _test_eof; 
	_test_eof258: cs = 258; goto _test_eof; 
	_test_eof259: cs = 259; goto _test_eof; 
	_test_eof260: cs = 260; goto _test_eof; 
	_test_eof261: cs = 261; goto _test_eof; 
	_test_eof262: cs = 262; goto _test_eof; 
	_test_eof263: cs = 263; goto _test_eof; 
	_test_eof264: cs = 264; goto _test_eof; 
	_test_eof265: cs = 265; goto _test_eof; 
	_test_eof266: cs = 266; goto _test_eof; 
	_test_eof267: cs = 267; goto _test_eof; 
	_test_eof268: cs = 268; goto _test_eof; 
	_test_eof269: cs = 269; goto _test_eof; 
	_test_eof270: cs = 270; goto _test_eof; 
	_test_eof271: cs = 271; goto _test_eof; 
	_test_eof272: cs = 272; goto _test_eof; 
	_test_eof273: cs = 273; goto _test_eof; 
	_test_eof274: cs = 274; goto _test_eof; 
	_test_eof275: cs = 275; goto _test_eof; 
	_test_eof276: cs = 276; goto _test_eof; 
	_test_eof277: cs = 277; goto _test_eof; 
	_test_eof278: cs = 278; goto _test_eof; 
	_test_eof279: cs = 279; goto _test_eof; 
	_test_eof280: cs = 280; goto _test_eof; 
	_test_eof281: cs = 281; goto _test_eof; 
	_test_eof282: cs = 282; goto _test_eof; 
	_test_eof283: cs = 283; goto _test_eof; 
	_test_eof284: cs = 284; goto _test_eof; 
	_test_eof285: cs = 285; goto _test_eof; 
	_test_eof286: cs = 286; goto _test_eof; 
	_test_eof287: cs = 287; goto _test_eof; 
	_test_eof288: cs = 288; goto _test_eof; 
	_test_eof289: cs = 289; goto _test_eof; 
	_test_eof290: cs = 290; goto _test_eof; 
	_test_eof291: cs = 291; goto _test_eof; 
	_test_eof292: cs = 292; goto _test_eof; 
	_test_eof293: cs = 293; goto _test_eof; 
	_test_eof294: cs = 294; goto _test_eof; 
	_test_eof295: cs = 295; goto _test_eof; 
	_test_eof296: cs = 296; goto _test_eof; 
	_test_eof297: cs = 297; goto _test_eof; 
	_test_eof298: cs = 298; goto _test_eof; 
	_test_eof299: cs = 299; goto _test_eof; 
	_test_eof300: cs = 300; goto _test_eof; 
	_test_eof301: cs = 301; goto _test_eof; 
	_test_eof302: cs = 302; goto _test_eof; 
	_test_eof303: cs = 303; goto _test_eof; 
	_test_eof304: cs = 304; goto _test_eof; 
	_test_eof305: cs = 305; goto _test_eof; 
	_test_eof306: cs = 306; goto _test_eof; 
	_test_eof307: cs = 307; goto _test_eof; 
	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 22: goto tr116;
	case 23: goto tr21;
	case 24: goto tr119;
	case 25: goto tr121;
	case 1: goto tr0;
	case 2: goto tr0;
	case 3: goto tr0;
	case 4: goto tr0;
	case 5: goto tr0;
	case 6: goto tr0;
	case 7: goto tr0;
	case 8: goto tr0;
	case 9: goto tr0;
	case 10: goto tr0;
	case 11: goto tr0;
	case 12: goto tr0;
	case 13: goto tr0;
	case 26: goto tr122;
	case 27: goto tr124;
	case 28: goto tr124;
	case 29: goto tr124;
	case 14: goto tr21;
	case 30: goto tr128;
	case 31: goto tr21;
	case 15: goto tr24;
	case 32: goto tr130;
	case 33: goto tr131;
	case 34: goto tr132;
	case 35: goto tr136;
	case 36: goto tr138;
	case 37: goto tr141;
	case 16: goto tr26;
	case 17: goto tr26;
	case 38: goto tr144;
	case 39: goto tr145;
	case 40: goto tr147;
	case 41: goto tr21;
	case 42: goto tr152;
	case 43: goto tr155;
	case 44: goto tr152;
	case 45: goto tr152;
	case 46: goto tr152;
	case 47: goto tr152;
	case 48: goto tr161;
	case 49: goto tr152;
	case 50: goto tr152;
	case 51: goto tr152;
	case 52: goto tr152;
	case 53: goto tr169;
	case 54: goto tr152;
	case 55: goto tr152;
	case 56: goto tr175;
	case 57: goto tr152;
	case 58: goto tr152;
	case 59: goto tr152;
	case 60: goto tr152;
	case 61: goto tr152;
	case 62: goto tr183;
	case 63: goto tr187;
	case 64: goto tr189;
	case 65: goto tr191;
	case 66: goto tr152;
	case 67: goto tr198;
	case 68: goto tr152;
	case 69: goto tr152;
	case 70: goto tr152;
	case 71: goto tr152;
	case 72: goto tr152;
	case 73: goto tr152;
	case 74: goto tr152;
	case 75: goto tr152;
	case 76: goto tr152;
	case 77: goto tr152;
	case 78: goto tr152;
	case 79: goto tr152;
	case 80: goto tr152;
	case 18: goto tr29;
	case 81: goto tr217;
	case 82: goto tr220;
	case 83: goto tr222;
	case 84: goto tr152;
	case 85: goto tr152;
	case 86: goto tr152;
	case 87: goto tr228;
	case 88: goto tr152;
	case 89: goto tr231;
	case 90: goto tr152;
	case 91: goto tr152;
	case 92: goto tr236;
	case 93: goto tr152;
	case 94: goto tr243;
	case 95: goto tr248;
	case 96: goto tr152;
	case 97: goto tr152;
	case 98: goto tr152;
	case 99: goto tr253;
	case 100: goto tr255;
	case 101: goto tr152;
	case 102: goto tr152;
	case 103: goto tr152;
	case 104: goto tr260;
	case 105: goto tr263;
	case 106: goto tr152;
	case 107: goto tr268;
	case 108: goto tr272;
	case 109: goto tr275;
	case 110: goto tr277;
	case 111: goto tr152;
	case 112: goto tr152;
	case 113: goto tr152;
	case 114: goto tr152;
	case 115: goto tr152;
	case 116: goto tr152;
	case 117: goto tr287;
	case 118: goto tr152;
	case 119: goto tr152;
	case 120: goto tr152;
	case 121: goto tr152;
	case 122: goto tr152;
	case 123: goto tr152;
	case 124: goto tr152;
	case 125: goto tr152;
	case 126: goto tr303;
	case 127: goto tr152;
	case 128: goto tr152;
	case 129: goto tr152;
	case 130: goto tr152;
	case 131: goto tr310;
	case 132: goto tr313;
	case 133: goto tr317;
	case 134: goto tr152;
	case 135: goto tr152;
	case 136: goto tr152;
	case 137: goto tr152;
	case 138: goto tr152;
	case 139: goto tr325;
	case 140: goto tr152;
	case 141: goto tr332;
	case 142: goto tr335;
	case 143: goto tr339;
	case 144: goto tr341;
	case 145: goto tr345;
	case 146: goto tr152;
	case 147: goto tr152;
	case 148: goto tr152;
	case 149: goto tr152;
	case 150: goto tr152;
	case 151: goto tr152;
	case 152: goto tr152;
	case 153: goto tr152;
	case 154: goto tr152;
	case 155: goto tr152;
	case 156: goto tr152;
	case 157: goto tr152;
	case 158: goto tr152;
	case 159: goto tr152;
	case 160: goto tr152;
	case 161: goto tr152;
	case 162: goto tr152;
	case 163: goto tr152;
	case 164: goto tr152;
	case 165: goto tr152;
	case 166: goto tr152;
	case 167: goto tr152;
	case 168: goto tr152;
	case 169: goto tr152;
	case 170: goto tr152;
	case 171: goto tr152;
	case 172: goto tr152;
	case 173: goto tr386;
	case 19: goto tr34;
	case 174: goto tr387;
	case 175: goto tr147;
	case 20: goto tr21;
	case 176: goto tr21;
	case 177: goto tr152;
	case 178: goto tr155;
	case 179: goto tr152;
	case 180: goto tr152;
	case 181: goto tr152;
	case 182: goto tr152;
	case 183: goto tr161;
	case 184: goto tr152;
	case 185: goto tr152;
	case 186: goto tr152;
	case 187: goto tr152;
	case 188: goto tr169;
	case 189: goto tr152;
	case 190: goto tr152;
	case 191: goto tr175;
	case 192: goto tr152;
	case 193: goto tr152;
	case 194: goto tr152;
	case 195: goto tr152;
	case 196: goto tr152;
	case 197: goto tr183;
	case 198: goto tr187;
	case 199: goto tr189;
	case 200: goto tr191;
	case 201: goto tr152;
	case 202: goto tr198;
	case 203: goto tr152;
	case 204: goto tr152;
	case 205: goto tr152;
	case 206: goto tr152;
	case 207: goto tr152;
	case 208: goto tr152;
	case 209: goto tr152;
	case 210: goto tr152;
	case 211: goto tr152;
	case 212: goto tr152;
	case 213: goto tr152;
	case 214: goto tr152;
	case 215: goto tr152;
	case 216: goto tr217;
	case 217: goto tr220;
	case 218: goto tr222;
	case 219: goto tr152;
	case 220: goto tr152;
	case 221: goto tr152;
	case 222: goto tr228;
	case 223: goto tr152;
	case 224: goto tr231;
	case 225: goto tr152;
	case 226: goto tr152;
	case 227: goto tr236;
	case 228: goto tr152;
	case 229: goto tr243;
	case 230: goto tr248;
	case 231: goto tr152;
	case 232: goto tr152;
	case 233: goto tr152;
	case 234: goto tr253;
	case 235: goto tr255;
	case 236: goto tr152;
	case 237: goto tr152;
	case 238: goto tr152;
	case 239: goto tr260;
	case 240: goto tr263;
	case 241: goto tr152;
	case 242: goto tr268;
	case 243: goto tr272;
	case 244: goto tr275;
	case 245: goto tr277;
	case 246: goto tr152;
	case 247: goto tr152;
	case 248: goto tr152;
	case 249: goto tr152;
	case 250: goto tr152;
	case 251: goto tr152;
	case 252: goto tr287;
	case 253: goto tr152;
	case 254: goto tr152;
	case 255: goto tr152;
	case 256: goto tr152;
	case 257: goto tr152;
	case 258: goto tr152;
	case 259: goto tr152;
	case 260: goto tr152;
	case 261: goto tr303;
	case 262: goto tr152;
	case 263: goto tr152;
	case 264: goto tr152;
	case 265: goto tr152;
	case 266: goto tr310;
	case 267: goto tr313;
	case 268: goto tr317;
	case 269: goto tr152;
	case 270: goto tr152;
	case 271: goto tr152;
	case 272: goto tr152;
	case 273: goto tr152;
	case 274: goto tr325;
	case 275: goto tr152;
	case 276: goto tr332;
	case 277: goto tr335;
	case 278: goto tr339;
	case 279: goto tr341;
	case 280: goto tr345;
	case 281: goto tr152;
	case 282: goto tr152;
	case 283: goto tr152;
	case 284: goto tr152;
	case 285: goto tr152;
	case 286: goto tr152;
	case 287: goto tr152;
	case 288: goto tr152;
	case 289: goto tr152;
	case 290: goto tr152;
	case 291: goto tr152;
	case 292: goto tr152;
	case 293: goto tr152;
	case 294: goto tr152;
	case 295: goto tr152;
	case 296: goto tr152;
	case 297: goto tr152;
	case 298: goto tr152;
	case 299: goto tr152;
	case 300: goto tr152;
	case 301: goto tr152;
	case 302: goto tr152;
	case 303: goto tr152;
	case 304: goto tr152;
	case 305: goto tr152;
	case 306: goto tr152;
	case 307: goto tr152;
	}
	}
	_out: {}
	}
 return sym.tok;
}
