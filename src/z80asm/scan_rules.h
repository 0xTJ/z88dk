static const int lexer_start = 21;
static const int lexer_error = 0;
static const int lexer_en_main = 21;
static void set_scan_buf( char *text, Bool _at_bol )
{
 str_set( input_buf, text );
 p = str_data(input_buf);
 at_bol = _at_bol;
 pe = str_data(input_buf) + str_len(input_buf);
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
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;}
	sym.tok = TK_ASMPC;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 5:
	{{p = ((te))-1;}
	sym.tok = TK_MOD;
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
	sym.tok = TK_LZ;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 46:
	{{p = ((te))-1;}
	sym.tok = TK_LO;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 47:
	{{p = ((te))-1;}
	sym.tok = TK_B;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 48:
	{{p = ((te))-1;}
	sym.tok = TK_D;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 49:
	{{p = ((te))-1;}
	sym.tok = TK_E;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 50:
	{{p = ((te))-1;}
	sym.tok = TK_H;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 51:
	{{p = ((te))-1;}
	sym.tok = TK_IXH;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 52:
	{{p = ((te))-1;}
	sym.tok = TK_IYH;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 53:
	{{p = ((te))-1;}
	sym.tok = TK_L;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 54:
	{{p = ((te))-1;}
	sym.tok = TK_IXL;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 55:
	{{p = ((te))-1;}
	sym.tok = TK_IYL;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 56:
	{{p = ((te))-1;}
	sym.tok = TK_A;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 57:
	{{p = ((te))-1;}
	sym.tok = TK_F;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 58:
	{{p = ((te))-1;}
	sym.tok = TK_I;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 59:
	{{p = ((te))-1;}
	sym.tok = TK_IIR;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 60:
	{{p = ((te))-1;}
	sym.tok = TK_R;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 61:
	{{p = ((te))-1;}
	sym.tok = TK_EIR;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 63:
	{{p = ((te))-1;}
	sym.tok = TK_BC;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 64:
	{{p = ((te))-1;}
	sym.tok = TK_DE;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 65:
	{{p = ((te))-1;}
	sym.tok = TK_HL;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 66:
	{{p = ((te))-1;}
	sym.tok = TK_IX;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 67:
	{{p = ((te))-1;}
	sym.tok = TK_IY;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 68:
	{{p = ((te))-1;}
	sym.tok = TK_AF;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 69:
	{{p = ((te))-1;}
	sym.tok = TK_SP;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 70:
	{{p = ((te))-1;}
	sym.tok = TK_IP;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 71:
	{{p = ((te))-1;}
	sym.tok = TK_SU;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 72:
	{{p = ((te))-1;}
	sym.tok = TK_XPC;
	;
	{p++; cs = 21; goto _out;}
}
	break;
	case 83:
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
	case 84:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFB;
		sym.tok_opcode = TK_DEFB;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFB;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 85:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFC;
		sym.tok_opcode = TK_DEFC;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFC;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 86:
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
	case 87:
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
	case 88:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFQ;
		sym.tok_opcode = TK_DEFQ;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFQ;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 89:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFM;
		sym.tok_opcode = TK_DEFM;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFM;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 90:
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
	case 91:
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
	case 92:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_DEFW;
		sym.tok_opcode = TK_DEFW;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_DEFW;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 93:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_ELSE;
		sym.tok_opcode = TK_ELSE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_ELSE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 94:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_ENDIF;
		sym.tok_opcode = TK_ENDIF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_ENDIF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 95:
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
	case 96:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_GLOBAL;
		sym.tok_opcode = TK_GLOBAL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_GLOBAL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 97:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IF;
		sym.tok_opcode = TK_IF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 98:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IFDEF;
		sym.tok_opcode = TK_IFDEF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IFDEF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 99:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IFNDEF;
		sym.tok_opcode = TK_IFNDEF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IFNDEF;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 100:
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
	case 101:
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
	case 102:
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
	case 103:
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
	case 104:
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
	case 105:
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
	case 106:
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
	case 107:
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
	case 108:
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
	case 113:
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
	case 114:
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
	case 115:
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
	case 116:
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
	case 117:
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
	case 118:
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
	case 119:
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
	case 120:
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
	case 121:
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
	case 122:
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
	case 123:
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
	case 124:
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
	case 125:
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
	case 126:
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
	case 127:
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
	case 128:
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
	case 129:
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
	case 130:
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
	case 131:
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
	case 132:
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
	case 133:
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
	case 134:
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
	case 135:
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
	case 136:
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
	case 137:
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
	case 138:
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
	case 139:
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
	case 140:
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
	case 141:
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
	case 142:
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
	case 143:
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
	case 144:
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
	case 145:
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
	case 146:
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
	case 147:
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
	case 148:
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
	case 149:
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
	case 150:
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
	case 151:
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
	case 152:
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
	case 153:
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
	case 154:
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
	case 155:
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
	case 156:
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
	case 157:
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
	case 158:
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
	case 159:
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
	case 160:
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
	case 161:
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
	case 162:
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
	case 163:
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
	case 164:
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
	case 165:
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
	case 166:
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
	case 167:
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
	case 168:
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
	case 169:
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
	case 170:
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
	case 171:
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
	case 172:
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
	case 173:
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
	case 174:
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
	case 175:
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
	case 176:
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
	case 177:
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
	case 178:
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
	case 179:
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
	case 180:
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
	case 181:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IN0;
		sym.tok_opcode = TK_IN0;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IN0;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 182:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_MLT;
		sym.tok_opcode = TK_MLT;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_MLT;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 183:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OTDM;
		sym.tok_opcode = TK_OTDM;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTDM;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 184:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OTDMR;
		sym.tok_opcode = TK_OTDMR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTDMR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 185:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OTIM;
		sym.tok_opcode = TK_OTIM;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTIM;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 186:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OTIMR;
		sym.tok_opcode = TK_OTIMR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTIMR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 187:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_OUT0;
		sym.tok_opcode = TK_OUT0;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OUT0;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 188:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SLP;
		sym.tok_opcode = TK_SLP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SLP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 189:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_TST;
		sym.tok_opcode = TK_TST;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_TST;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 190:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_TSTIO;
		sym.tok_opcode = TK_TSTIO;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_TSTIO;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 191:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_ALTD;
		sym.tok_opcode = TK_ALTD;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_ALTD;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 192:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_BOOL;
		sym.tok_opcode = TK_BOOL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_BOOL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 193:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IDET;
		sym.tok_opcode = TK_IDET;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IDET;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 194:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IOE;
		sym.tok_opcode = TK_IOE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IOE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 195:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IOI;
		sym.tok_opcode = TK_IOI;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IOI;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 196:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IPRES;
		sym.tok_opcode = TK_IPRES;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IPRES;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 197:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_IPSET;
		sym.tok_opcode = TK_IPSET;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IPSET;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 198:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LDDSR;
		sym.tok_opcode = TK_LDDSR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDDSR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 199:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LDISR;
		sym.tok_opcode = TK_LDISR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDISR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 200:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LDP;
		sym.tok_opcode = TK_LDP;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LDP;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 201:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LSDR;
		sym.tok_opcode = TK_LSDR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LSDR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 202:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LSIR;
		sym.tok_opcode = TK_LSIR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LSIR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 203:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LSDDR;
		sym.tok_opcode = TK_LSDDR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LSDDR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 204:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_LSIDR;
		sym.tok_opcode = TK_LSIDR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_LSIDR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 205:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_MUL;
		sym.tok_opcode = TK_MUL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_MUL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 206:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_RDMODE;
		sym.tok_opcode = TK_RDMODE;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_RDMODE;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 207:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SETUSR;
		sym.tok_opcode = TK_SETUSR;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SETUSR;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 208:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SURES;
		sym.tok_opcode = TK_SURES;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SURES;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 209:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_SYSCALL;
		sym.tok_opcode = TK_SYSCALL;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_SYSCALL;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 210:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_UMA;
		sym.tok_opcode = TK_UMA;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_UMA;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 211:
	{{p = ((te))-1;}
	if (expect_opcode) {
		sym.tok = TK_UMS;
		sym.tok_opcode = TK_UMS;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_UMS;
	}
	{p++; cs = 21; goto _out;}
}
	break;
	case 212:
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
	case 213:
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
	case 214:
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
	case 215:
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
	case 218:
	{{p = ((te))-1;}
  sym.tok = TK_NAME;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 220:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts, 10 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 222:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 1, te - ts - 1, 16 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 224:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts - 1, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 226:
	{{p = ((te))-1;}
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 2, te - ts - 2, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }
	break;
	case 230:
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
tr2:
	{te = p+1;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 2, te - ts - 3, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr3:
	{{p = ((te))-1;}{
	sym.tok = TK_LPAREN;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr12:
	{te = p+1;{
	sym.tok = TK_IND_BC;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr13:
	{te = p+1;{
	sym.tok = TK_IND_C;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr15:
	{te = p+1;{
	sym.tok = TK_IND_DE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr17:
	{te = p+1;{
	sym.tok = TK_IND_HL;
	p--; te--;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr20:
	{te = p+1;{
	sym.tok = TK_IND_IX;
	p--; te--;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr21:
	{te = p+1;{
	sym.tok = TK_IND_IY;
	p--; te--;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr23:
	{te = p+1;{
	sym.tok = TK_IND_SP;
	p--; te--;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr25:
	{te = p+1;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts - 1, 16 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr26:
	{{p = ((te))-1;}{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts, 10 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr28:
	{{p = ((te))-1;}{
  sym.tok = TK_NAME;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr29:
	{te = p+1;{
	sym.tok = TK_DS_B;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr30:
	{te = p+1;{
	sym.tok = TK_DS_P;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr31:
	{te = p+1;{
	sym.tok = TK_DS_Q;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr32:
	{te = p+1;{
	sym.tok = TK_DS_W;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr33:
	{{p = ((te))-1;}{
	sym.tok = TK_DOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr37:
	{te = p+1;{
  while ( ts[ 0] == '.' || isspace(ts[ 0]) ) ts++;
  while ( te[-1] == ':' || isspace(te[-1]) ) te--;
  sym.tok = TK_LABEL;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr38:
	{te = p+1;}
	goto st21;
tr39:
	{te = p+1;{
	sym.tok = TK_NEWLINE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr41:
	{te = p+1;{
  sym.tok = TK_STRING;
  if ( ! get_sym_string() )
   error_unclosed_string();
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr42:
	{te = p+1;{
	sym.tok = TK_CONST_EXPR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr46:
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
tr48:
	{te = p+1;{
	sym.tok = TK_RPAREN;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr50:
	{te = p+1;{
	sym.tok = TK_PLUS;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr51:
	{te = p+1;{
	sym.tok = TK_COMMA;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr52:
	{te = p+1;{
	sym.tok = TK_MINUS;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr53:
	{te = p+1;{
	sym.tok = TK_DIVIDE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr58:
	{te = p+1;{
	sym.tok = TK_COLON;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr63:
	{te = p+1;{
	sym.tok = TK_QUESTION;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr65:
	{te = p+1;{
	sym.tok = TK_LSQUARE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr66:
	{te = p+1;{
  sym.tok = TK_NIL;
  skip_to_newline();
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr67:
	{te = p+1;{
	sym.tok = TK_RSQUARE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr68:
	{te = p+1;{
	sym.tok = TK_BIN_XOR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr69:
	{te = p+1;{
	sym.tok = TK_LCURLY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr71:
	{te = p+1;{
	sym.tok = TK_RCURLY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr72:
	{te = p+1;{
	sym.tok = TK_BIN_NOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr73:
	{te = p+1;{
	sym.tok = TK_DOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr119:
	{te = p;p--;{
	sym.tok = TK_LOG_NOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr120:
	{te = p+1;{
	sym.tok = TK_NOT_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr124:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 1, te - ts - 1, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr125:
	{te = p;p--;{
	sym.tok = TK_BIN_AND;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr126:
	{te = p+1;{
	sym.tok = TK_LOG_AND;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr127:
	{te = p;p--;{
	sym.tok = TK_LPAREN;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr128:
	{te = p;p--;{
	sym.tok = TK_MULTIPLY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr129:
	{te = p+1;{
	sym.tok = TK_POWER;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr130:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts, 10 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr134:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts, te - ts - 1, 2 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr136:
	{te = p;p--;{
  sym.tok = TK_NUMBER;
  sym.number = scan_num( ts + 2, te - ts - 2, 16 );
  ts = te = p;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr137:
	{te = p;p--;}
	goto st21;
tr138:
	{te = p;p--;{
	sym.tok = TK_LESS;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr139:
	{te = p+1;{
	sym.tok = TK_LEFT_SHIFT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr140:
	{te = p+1;{
	sym.tok = TK_LESS_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr141:
	{te = p+1;{
	sym.tok = TK_NOT_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr142:
	{te = p;p--;{
	sym.tok = TK_EQUAL;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr143:
	{te = p+1;{
	sym.tok = TK_EQUAL;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr144:
	{te = p;p--;{
	sym.tok = TK_GREATER;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr145:
	{te = p+1;{
	sym.tok = TK_GREATER_EQ;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr146:
	{te = p+1;{
	sym.tok = TK_RIGHT_SHIFT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr147:
	{te = p;p--;{
	sym.tok = TK_BIN_OR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr148:
	{te = p+1;{
	sym.tok = TK_LOG_OR;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr149:
	{te = p;p--;{
	sym.tok = TK_A;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr155:
	{te = p;p--;{
  sym.tok = TK_NAME;
  {p++; cs = 21; goto _out;}
 }}
	goto st21;
tr158:
	{te = p;p--;{
	sym.tok = TK_AF;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr159:
	{te = p+1;{
	sym.tok = TK_AF1;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr166:
	{te = p;p--;{
	sym.tok = TK_B;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr170:
	{te = p;p--;{
	sym.tok = TK_BC;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr171:
	{te = p+1;{
	sym.tok = TK_BC1;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr179:
	{te = p;p--;{
	sym.tok = TK_C;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr185:
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
tr193:
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
tr197:
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
tr199:
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
tr201:
	{te = p;p--;{
	sym.tok = TK_D;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr208:
	{te = p;p--;{
	sym.tok = TK_DE;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr209:
	{te = p+1;{
	sym.tok = TK_DE1;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr233:
	{te = p;p--;{
	sym.tok = TK_E;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr238:
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
tr245:
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
tr251:
	{te = p;p--;{
	sym.tok = TK_F;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr259:
	{te = p;p--;{
	sym.tok = TK_H;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr264:
	{te = p;p--;{
	sym.tok = TK_HL;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr265:
	{te = p+1;{
	sym.tok = TK_HL1;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr266:
	{te = p;p--;{
	sym.tok = TK_I;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr278:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_IF;
		sym.tok_opcode = TK_IF;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_IF;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr287:
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
tr293:
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
tr298:
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
tr300:
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
tr307:
	{te = p;p--;{
	sym.tok = TK_IP;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr314:
	{te = p;p--;{
	sym.tok = TK_IX;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr317:
	{te = p;p--;{
	sym.tok = TK_IY;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr322:
	{te = p;p--;{
	sym.tok = TK_L;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr328:
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
tr332:
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
tr336:
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
tr355:
	{te = p;p--;{
	sym.tok = TK_M;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr374:
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
tr380:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_OTDM;
		sym.tok_opcode = TK_OTDM;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTDM;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr384:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_OTIM;
		sym.tok_opcode = TK_OTIM;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_OTIM;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr387:
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
tr391:
	{te = p;p--;{
	sym.tok = TK_P;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr395:
	{te = p;p--;{
	sym.tok = TK_PO;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr403:
	{te = p;p--;{
	sym.tok = TK_R;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr415:
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
tr418:
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
tr422:
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
tr424:
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
tr428:
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
tr447:
	{te = p;p--;{
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
}}
	goto st21;
tr456:
	{te = p;p--;{
	sym.tok = TK_SU;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr468:
	{te = p;p--;{
	if (expect_opcode) {
		sym.tok = TK_TST;
		sym.tok_opcode = TK_TST;
		expect_opcode = FALSE;
	}
	else {
		sym.tok = TK_NAME;
		sym.tok_opcode = TK_TST;
	}
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr485:
	{te = p;p--;{
	sym.tok = TK_DOT;
	;
	{p++; cs = 21; goto _out;}
}}
	goto st21;
tr486:
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
		case 10: goto tr39;
		case 33: goto st22;
		case 34: goto tr41;
		case 35: goto tr42;
		case 36: goto tr43;
		case 37: goto tr44;
		case 38: goto st26;
		case 39: goto tr46;
		case 40: goto tr47;
		case 41: goto tr48;
		case 42: goto st28;
		case 43: goto tr50;
		case 44: goto tr51;
		case 45: goto tr52;
		case 47: goto tr53;
		case 48: goto tr55;
		case 49: goto tr56;
		case 58: goto tr58;
		case 59: goto st35;
		case 60: goto st36;
		case 61: goto st37;
		case 62: goto st38;
		case 63: goto tr63;
		case 64: goto tr64;
		case 91: goto tr65;
		case 92: goto tr66;
		case 93: goto tr67;
		case 94: goto tr68;
		case 96: goto tr66;
		case 123: goto tr69;
		case 124: goto st39;
		case 125: goto tr71;
		case 126: goto tr72;
		case 127: goto tr38;
		case 302: goto tr73;
		case 321: goto st40;
		case 322: goto st50;
		case 323: goto st58;
		case 324: goto st70;
		case 325: goto st86;
		case 326: goto st97;
		case 327: goto st99;
		case 328: goto st104;
		case 329: goto st108;
		case 330: goto st136;
		case 332: goto st137;
		case 333: goto st153;
		case 334: goto st160;
		case 335: goto st163;
		case 336: goto st172;
		case 338: goto st179;
		case 339: goto st191;
		case 340: goto st212;
		case 341: goto st216;
		case 344: goto st224;
		case 346: goto tr95;
		case 351: goto tr84;
		case 353: goto st40;
		case 354: goto st50;
		case 355: goto st58;
		case 356: goto st70;
		case 357: goto st86;
		case 358: goto st97;
		case 359: goto st99;
		case 360: goto st104;
		case 361: goto st108;
		case 362: goto st136;
		case 364: goto st137;
		case 365: goto st153;
		case 366: goto st160;
		case 367: goto st163;
		case 368: goto st172;
		case 370: goto st179;
		case 371: goto st191;
		case 372: goto st212;
		case 373: goto st216;
		case 376: goto st224;
		case 378: goto tr95;
		case 558: goto tr96;
		case 577: goto tr97;
		case 578: goto tr98;
		case 579: goto tr99;
		case 580: goto tr100;
		case 581: goto tr101;
		case 582: goto tr102;
		case 583: goto tr103;
		case 584: goto tr104;
		case 585: goto tr105;
		case 586: goto tr106;
		case 588: goto tr108;
		case 589: goto tr109;
		case 590: goto tr110;
		case 591: goto tr111;
		case 592: goto tr112;
		case 594: goto tr113;
		case 595: goto tr114;
		case 596: goto tr115;
		case 597: goto tr116;
		case 600: goto tr117;
		case 602: goto tr118;
		case 607: goto tr107;
		case 609: goto tr97;
		case 610: goto tr98;
		case 611: goto tr99;
		case 612: goto tr100;
		case 613: goto tr101;
		case 614: goto tr102;
		case 615: goto tr103;
		case 616: goto tr104;
		case 617: goto tr105;
		case 618: goto tr106;
		case 620: goto tr108;
		case 621: goto tr109;
		case 622: goto tr110;
		case 623: goto tr111;
		case 624: goto tr112;
		case 626: goto tr113;
		case 627: goto tr114;
		case 628: goto tr115;
		case 629: goto tr116;
		case 632: goto tr117;
		case 634: goto tr118;
	}
	if ( _widec < 331 ) {
		if ( _widec > 32 ) {
			if ( 50 <= _widec && _widec <= 57 )
				goto tr57;
		} else
			goto tr38;
	} else if ( _widec > 345 ) {
		if ( _widec < 587 ) {
			if ( 363 <= _widec && _widec <= 377 )
				goto tr84;
		} else if ( _widec > 601 ) {
			if ( 619 <= _widec && _widec <= 633 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto st0;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	if ( (*p) == 61 )
		goto tr120;
	goto tr119;
tr43:
	{te = p+1;}
	{act = 230;}
	goto st23;
tr121:
	{te = p+1;}
	{act = 222;}
	goto st23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr121;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr121;
	} else
		goto tr121;
	goto tr0;
tr64:
	{te = p+1;}
	{act = 230;}
	goto st24;
tr44:
	{te = p+1;}
	{act = 5;}
	goto st24;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	if ( (*p) == 34 )
		goto st1;
	if ( 48 <= (*p) && (*p) <= 49 )
		goto st25;
	goto tr0;
st1:
	if ( ++p == pe )
		goto _test_eof1;
case 1:
	switch( (*p) ) {
		case 35: goto st2;
		case 45: goto st2;
	}
	goto tr0;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( (*p) ) {
		case 34: goto tr2;
		case 35: goto st2;
		case 45: goto st2;
	}
	goto tr0;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( 48 <= (*p) && (*p) <= 49 )
		goto st25;
	goto tr124;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( (*p) == 38 )
		goto tr126;
	goto tr125;
tr47:
	{te = p+1;}
	goto st27;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	switch( (*p) ) {
		case 9: goto st3;
		case 32: goto st3;
		case 66: goto st4;
		case 67: goto st6;
		case 68: goto st7;
		case 72: goto st9;
		case 73: goto st11;
		case 83: goto st14;
		case 98: goto st4;
		case 99: goto st6;
		case 100: goto st7;
		case 104: goto st9;
		case 105: goto st11;
		case 115: goto st14;
	}
	goto tr127;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( (*p) ) {
		case 9: goto st3;
		case 32: goto st3;
		case 66: goto st4;
		case 67: goto st6;
		case 68: goto st7;
		case 72: goto st9;
		case 73: goto st11;
		case 83: goto st14;
		case 98: goto st4;
		case 99: goto st6;
		case 100: goto st7;
		case 104: goto st9;
		case 105: goto st11;
		case 115: goto st14;
	}
	goto tr3;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	switch( (*p) ) {
		case 67: goto st5;
		case 99: goto st5;
	}
	goto tr3;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	switch( (*p) ) {
		case 9: goto st5;
		case 32: goto st5;
		case 41: goto tr12;
	}
	goto tr3;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( (*p) ) {
		case 9: goto st6;
		case 32: goto st6;
		case 41: goto tr13;
	}
	goto tr3;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	switch( (*p) ) {
		case 69: goto st8;
		case 101: goto st8;
	}
	goto tr3;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	switch( (*p) ) {
		case 9: goto st8;
		case 32: goto st8;
		case 41: goto tr15;
	}
	goto tr3;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	switch( (*p) ) {
		case 76: goto st10;
		case 108: goto st10;
	}
	goto tr3;
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
	goto tr3;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	switch( (*p) ) {
		case 88: goto st12;
		case 89: goto st13;
		case 120: goto st12;
		case 121: goto st13;
	}
	goto tr3;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	switch( (*p) ) {
		case 9: goto st12;
		case 32: goto st12;
		case 41: goto tr20;
		case 43: goto tr20;
		case 45: goto tr20;
	}
	goto tr3;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	switch( (*p) ) {
		case 9: goto st13;
		case 32: goto st13;
		case 41: goto tr21;
		case 43: goto tr21;
		case 45: goto tr21;
	}
	goto tr3;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	switch( (*p) ) {
		case 80: goto st15;
		case 112: goto st15;
	}
	goto tr3;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	switch( (*p) ) {
		case 9: goto st15;
		case 32: goto st15;
		case 41: goto tr23;
		case 43: goto tr23;
		case 45: goto tr23;
	}
	goto tr3;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	if ( (*p) == 42 )
		goto tr129;
	goto tr128;
st0:
cs = 0;
	goto _out;
tr55:
	{te = p+1;}
	{act = 220;}
	goto st29;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( (*p) ) {
		case 66: goto tr131;
		case 72: goto tr25;
		case 88: goto st17;
		case 98: goto tr131;
		case 104: goto tr25;
		case 120: goto st17;
	}
	if ( (*p) < 50 ) {
		if ( 48 <= (*p) && (*p) <= 49 )
			goto tr56;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 70 ) {
			if ( 97 <= (*p) && (*p) <= 102 )
				goto st16;
		} else if ( (*p) >= 65 )
			goto st16;
	} else
		goto tr57;
	goto tr130;
tr56:
	{te = p+1;}
	{act = 220;}
	goto st30;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	switch( (*p) ) {
		case 66: goto tr133;
		case 72: goto tr25;
		case 98: goto tr133;
		case 104: goto tr25;
	}
	if ( (*p) < 50 ) {
		if ( 48 <= (*p) && (*p) <= 49 )
			goto tr56;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 70 ) {
			if ( 97 <= (*p) && (*p) <= 102 )
				goto st16;
		} else if ( (*p) >= 65 )
			goto st16;
	} else
		goto tr57;
	goto tr130;
tr57:
	{te = p+1;}
	{act = 220;}
	goto st31;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( (*p) ) {
		case 72: goto tr25;
		case 104: goto tr25;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr57;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st16;
	} else
		goto st16;
	goto tr130;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	switch( (*p) ) {
		case 72: goto tr25;
		case 104: goto tr25;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st16;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st16;
	} else
		goto st16;
	goto tr0;
tr133:
	{te = p+1;}
	{act = 224;}
	goto st32;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	switch( (*p) ) {
		case 72: goto tr25;
		case 104: goto tr25;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st16;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st16;
	} else
		goto st16;
	goto tr134;
tr131:
	{te = p+1;}
	{act = 224;}
	goto st33;
tr135:
	{te = p+1;}
	{act = 226;}
	goto st33;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( (*p) ) {
		case 72: goto tr25;
		case 104: goto tr25;
	}
	if ( (*p) < 50 ) {
		if ( 48 <= (*p) && (*p) <= 49 )
			goto tr135;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 70 ) {
			if ( 97 <= (*p) && (*p) <= 102 )
				goto st16;
		} else if ( (*p) >= 65 )
			goto st16;
	} else
		goto st16;
	goto tr0;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st34;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st34;
	} else
		goto st34;
	goto tr26;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st34;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st34;
	} else
		goto st34;
	goto tr136;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	if ( (*p) == 10 )
		goto tr137;
	goto st35;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	switch( (*p) ) {
		case 60: goto tr139;
		case 61: goto tr140;
		case 62: goto tr141;
	}
	goto tr138;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) == 61 )
		goto tr143;
	goto tr142;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	switch( (*p) ) {
		case 61: goto tr145;
		case 62: goto tr146;
	}
	goto tr144;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	if ( (*p) == 124 )
		goto tr148;
	goto tr147;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	switch( (*p) ) {
		case 68: goto st42;
		case 70: goto st43;
		case 76: goto st44;
		case 78: goto st46;
		case 83: goto st47;
		case 95: goto tr84;
		case 100: goto st42;
		case 102: goto st43;
		case 108: goto st44;
		case 110: goto st46;
		case 115: goto st47;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr149;
tr84:
	{te = p+1;}
	{act = 218;}
	goto st41;
tr95:
	{te = p+1;}
	{act = 38;}
	goto st41;
tr156:
	{te = p+1;}
	{act = 113;}
	goto st41;
tr157:
	{te = p+1;}
	{act = 114;}
	goto st41;
tr161:
	{te = p+1;}
	{act = 191;}
	goto st41;
tr162:
	{te = p+1;}
	{act = 115;}
	goto st41;
tr165:
	{te = p+1;}
	{act = 1;}
	goto st41;
tr173:
	{te = p+1;}
	{act = 116;}
	goto st41;
tr176:
	{te = p+1;}
	{act = 83;}
	goto st41;
tr178:
	{te = p+1;}
	{act = 192;}
	goto st41;
tr189:
	{te = p+1;}
	{act = 212;}
	goto st41;
tr191:
	{te = p+1;}
	{act = 213;}
	goto st41;
tr192:
	{te = p+1;}
	{act = 118;}
	goto st41;
tr196:
	{te = p+1;}
	{act = 124;}
	goto st41;
tr198:
	{te = p+1;}
	{act = 121;}
	goto st41;
tr200:
	{te = p+1;}
	{act = 123;}
	goto st41;
tr204:
	{te = p+1;}
	{act = 127;}
	goto st41;
tr207:
	{te = p+1;}
	{act = 125;}
	goto st41;
tr210:
	{te = p+1;}
	{act = 126;}
	goto st41;
tr212:
	{te = p+1;}
	{act = 84;}
	goto st41;
tr213:
	{te = p+1;}
	{act = 85;}
	goto st41;
tr216:
	{te = p+1;}
	{act = 89;}
	goto st41;
tr217:
	{te = p+1;}
	{act = 88;}
	goto st41;
tr218:
	{te = p+1;}
	{act = 90;}
	goto st41;
tr220:
	{te = p+1;}
	{act = 92;}
	goto st41;
tr224:
	{te = p+1;}
	{act = 86;}
	goto st41;
tr226:
	{te = p+1;}
	{act = 87;}
	goto st41;
tr229:
	{te = p+1;}
	{act = 91;}
	goto st41;
tr231:
	{te = p+1;}
	{act = 128;}
	goto st41;
tr239:
	{te = p+1;}
	{act = 61;}
	goto st41;
tr241:
	{te = p+1;}
	{act = 93;}
	goto st41;
tr244:
	{te = p+1;}
	{act = 94;}
	goto st41;
tr247:
	{te = p+1;}
	{act = 131;}
	goto st41;
tr250:
	{te = p+1;}
	{act = 95;}
	goto st41;
tr253:
	{te = p+1;}
	{act = 214;}
	goto st41;
tr258:
	{te = p+1;}
	{act = 96;}
	goto st41;
tr263:
	{te = p+1;}
	{act = 132;}
	goto st41;
tr270:
	{te = p+1;}
	{act = 133;}
	goto st41;
tr277:
	{te = p+1;}
	{act = 193;}
	goto st41;
tr282:
	{te = p+1;}
	{act = 98;}
	goto st41;
tr285:
	{te = p+1;}
	{act = 99;}
	goto st41;
tr286:
	{te = p+1;}
	{act = 59;}
	goto st41;
tr288:
	{te = p+1;}
	{act = 181;}
	goto st41;
tr297:
	{te = p+1;}
	{act = 100;}
	goto st41;
tr299:
	{te = p+1;}
	{act = 137;}
	goto st41;
tr301:
	{te = p+1;}
	{act = 139;}
	goto st41;
tr304:
	{te = p+1;}
	{act = 215;}
	goto st41;
tr305:
	{te = p+1;}
	{act = 194;}
	goto st41;
tr306:
	{te = p+1;}
	{act = 195;}
	goto st41;
tr311:
	{te = p+1;}
	{act = 196;}
	goto st41;
tr313:
	{te = p+1;}
	{act = 197;}
	goto st41;
tr315:
	{te = p+1;}
	{act = 51;}
	goto st41;
tr316:
	{te = p+1;}
	{act = 54;}
	goto st41;
tr318:
	{te = p+1;}
	{act = 52;}
	goto st41;
tr319:
	{te = p+1;}
	{act = 55;}
	goto st41;
tr320:
	{te = p+1;}
	{act = 140;}
	goto st41;
tr321:
	{te = p+1;}
	{act = 141;}
	goto st41;
tr325:
	{te = p+1;}
	{act = 46;}
	goto st41;
tr327:
	{te = p+1;}
	{act = 45;}
	goto st41;
tr331:
	{te = p+1;}
	{act = 200;}
	goto st41;
tr333:
	{te = p+1;}
	{act = 144;}
	goto st41;
tr335:
	{te = p+1;}
	{act = 198;}
	goto st41;
tr337:
	{te = p+1;}
	{act = 146;}
	goto st41;
tr339:
	{te = p+1;}
	{act = 199;}
	goto st41;
tr341:
	{te = p+1;}
	{act = 101;}
	goto st41;
tr346:
	{te = p+1;}
	{act = 201;}
	goto st41;
tr347:
	{te = p+1;}
	{act = 203;}
	goto st41;
tr349:
	{te = p+1;}
	{act = 202;}
	goto st41;
tr350:
	{te = p+1;}
	{act = 204;}
	goto st41;
tr353:
	{te = p+1;}
	{act = 103;}
	goto st41;
tr354:
	{te = p+1;}
	{act = 102;}
	goto st41;
tr359:
	{te = p+1;}
	{act = 182;}
	goto st41;
tr363:
	{te = p+1;}
	{act = 104;}
	goto st41;
tr364:
	{te = p+1;}
	{act = 205;}
	goto st41;
tr365:
	{te = p+1;}
	{act = 39;}
	goto st41;
tr368:
	{te = p+1;}
	{act = 37;}
	goto st41;
tr369:
	{te = p+1;}
	{act = 147;}
	goto st41;
tr370:
	{te = p+1;}
	{act = 148;}
	goto st41;
tr375:
	{te = p+1;}
	{act = 105;}
	goto st41;
tr379:
	{te = p+1;}
	{act = 150;}
	goto st41;
tr381:
	{te = p+1;}
	{act = 184;}
	goto st41;
tr383:
	{te = p+1;}
	{act = 151;}
	goto st41;
tr385:
	{te = p+1;}
	{act = 186;}
	goto st41;
tr388:
	{te = p+1;}
	{act = 187;}
	goto st41;
tr389:
	{te = p+1;}
	{act = 153;}
	goto st41;
tr390:
	{te = p+1;}
	{act = 154;}
	goto st41;
tr392:
	{te = p+1;}
	{act = 42;}
	goto st41;
tr396:
	{te = p+1;}
	{act = 155;}
	goto st41;
tr401:
	{te = p+1;}
	{act = 106;}
	goto st41;
tr402:
	{te = p+1;}
	{act = 156;}
	goto st41;
tr412:
	{te = p+1;}
	{act = 206;}
	goto st41;
tr413:
	{te = p+1;}
	{act = 157;}
	goto st41;
tr416:
	{te = p+1;}
	{act = 159;}
	goto st41;
tr417:
	{te = p+1;}
	{act = 160;}
	goto st41;
tr419:
	{te = p+1;}
	{act = 162;}
	goto st41;
tr421:
	{te = p+1;}
	{act = 165;}
	goto st41;
tr423:
	{te = p+1;}
	{act = 164;}
	goto st41;
tr425:
	{te = p+1;}
	{act = 167;}
	goto st41;
tr427:
	{te = p+1;}
	{act = 170;}
	goto st41;
tr429:
	{te = p+1;}
	{act = 169;}
	goto st41;
tr430:
	{te = p+1;}
	{act = 171;}
	goto st41;
tr435:
	{te = p+1;}
	{act = 69;}
	goto st41;
tr439:
	{te = p+1;}
	{act = 172;}
	goto st41;
tr440:
	{te = p+1;}
	{act = 173;}
	goto st41;
tr446:
	{te = p+1;}
	{act = 107;}
	goto st41;
tr450:
	{te = p+1;}
	{act = 207;}
	goto st41;
tr451:
	{te = p+1;}
	{act = 175;}
	goto st41;
tr452:
	{te = p+1;}
	{act = 176;}
	goto st41;
tr453:
	{te = p+1;}
	{act = 188;}
	goto st41;
tr454:
	{te = p+1;}
	{act = 177;}
	goto st41;
tr455:
	{te = p+1;}
	{act = 178;}
	goto st41;
tr457:
	{te = p+1;}
	{act = 179;}
	goto st41;
tr460:
	{te = p+1;}
	{act = 208;}
	goto st41;
tr465:
	{te = p+1;}
	{act = 209;}
	goto st41;
tr470:
	{te = p+1;}
	{act = 190;}
	goto st41;
tr473:
	{te = p+1;}
	{act = 210;}
	goto st41;
tr474:
	{te = p+1;}
	{act = 211;}
	goto st41;
tr480:
	{te = p+1;}
	{act = 108;}
	goto st41;
tr483:
	{te = p+1;}
	{act = 180;}
	goto st41;
tr484:
	{te = p+1;}
	{act = 72;}
	goto st41;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( (*p) == 95 )
		goto tr84;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr0;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	switch( (*p) ) {
		case 67: goto tr156;
		case 68: goto tr157;
		case 95: goto tr84;
		case 99: goto tr156;
		case 100: goto tr157;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	switch( (*p) ) {
		case 39: goto tr159;
		case 95: goto tr84;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr158;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	switch( (*p) ) {
		case 84: goto st45;
		case 95: goto tr84;
		case 116: goto st45;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	switch( (*p) ) {
		case 68: goto tr161;
		case 95: goto tr84;
		case 100: goto tr161;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	switch( (*p) ) {
		case 68: goto tr162;
		case 95: goto tr84;
		case 100: goto tr162;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	switch( (*p) ) {
		case 77: goto st48;
		case 95: goto tr84;
		case 109: goto st48;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	switch( (*p) ) {
		case 80: goto st49;
		case 95: goto tr84;
		case 112: goto st49;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	switch( (*p) ) {
		case 67: goto tr165;
		case 95: goto tr84;
		case 99: goto tr165;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	switch( (*p) ) {
		case 67: goto st51;
		case 73: goto st52;
		case 79: goto st56;
		case 95: goto tr84;
		case 99: goto st51;
		case 105: goto st52;
		case 111: goto st56;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr166;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	switch( (*p) ) {
		case 39: goto tr171;
		case 95: goto tr84;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr170;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	switch( (*p) ) {
		case 78: goto st53;
		case 84: goto tr173;
		case 95: goto tr84;
		case 110: goto st53;
		case 116: goto tr173;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	switch( (*p) ) {
		case 65: goto st54;
		case 95: goto tr84;
		case 97: goto st54;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	switch( (*p) ) {
		case 82: goto st55;
		case 95: goto tr84;
		case 114: goto st55;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	switch( (*p) ) {
		case 89: goto tr176;
		case 95: goto tr84;
		case 121: goto tr176;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	switch( (*p) ) {
		case 79: goto st57;
		case 95: goto tr84;
		case 111: goto st57;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	switch( (*p) ) {
		case 76: goto tr178;
		case 95: goto tr84;
		case 108: goto tr178;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	switch( (*p) ) {
		case 65: goto st59;
		case 67: goto st66;
		case 80: goto st67;
		case 95: goto tr84;
		case 97: goto st59;
		case 99: goto st66;
		case 112: goto st67;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr179;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	switch( (*p) ) {
		case 76: goto st60;
		case 95: goto tr84;
		case 108: goto st60;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	switch( (*p) ) {
		case 76: goto st61;
		case 95: goto tr84;
		case 108: goto st61;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	if ( (*p) == 95 )
		goto st62;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr185;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	switch( (*p) ) {
		case 79: goto st63;
		case 80: goto st64;
		case 95: goto tr84;
		case 111: goto st63;
		case 112: goto st64;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	switch( (*p) ) {
		case 90: goto tr189;
		case 95: goto tr84;
		case 122: goto tr189;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	switch( (*p) ) {
		case 75: goto st65;
		case 95: goto tr84;
		case 107: goto st65;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	switch( (*p) ) {
		case 71: goto tr191;
		case 95: goto tr84;
		case 103: goto tr191;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	switch( (*p) ) {
		case 70: goto tr192;
		case 95: goto tr84;
		case 102: goto tr192;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	switch( (*p) ) {
		case 68: goto st68;
		case 73: goto st69;
		case 76: goto tr196;
		case 95: goto tr84;
		case 100: goto st68;
		case 105: goto st69;
		case 108: goto tr196;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr193;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	switch( (*p) ) {
		case 82: goto tr198;
		case 95: goto tr84;
		case 114: goto tr198;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr197;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	switch( (*p) ) {
		case 82: goto tr200;
		case 95: goto tr84;
		case 114: goto tr200;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr199;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	switch( (*p) ) {
		case 65: goto st71;
		case 69: goto st72;
		case 73: goto tr204;
		case 74: goto st83;
		case 83: goto tr206;
		case 95: goto tr84;
		case 97: goto st71;
		case 101: goto st72;
		case 105: goto tr204;
		case 106: goto st83;
		case 115: goto tr206;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr201;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	switch( (*p) ) {
		case 65: goto tr207;
		case 95: goto tr84;
		case 97: goto tr207;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	switch( (*p) ) {
		case 39: goto tr209;
		case 67: goto tr210;
		case 70: goto st73;
		case 95: goto tr84;
		case 99: goto tr210;
		case 102: goto st73;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr208;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	switch( (*p) ) {
		case 66: goto tr212;
		case 67: goto tr213;
		case 71: goto st74;
		case 73: goto st78;
		case 77: goto tr216;
		case 81: goto tr217;
		case 83: goto tr218;
		case 86: goto st80;
		case 87: goto tr220;
		case 95: goto tr84;
		case 98: goto tr212;
		case 99: goto tr213;
		case 103: goto st74;
		case 105: goto st78;
		case 109: goto tr216;
		case 113: goto tr217;
		case 115: goto tr218;
		case 118: goto st80;
		case 119: goto tr220;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	switch( (*p) ) {
		case 82: goto st75;
		case 95: goto tr84;
		case 114: goto st75;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	switch( (*p) ) {
		case 79: goto st76;
		case 95: goto tr84;
		case 111: goto st76;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
	switch( (*p) ) {
		case 85: goto st77;
		case 95: goto tr84;
		case 117: goto st77;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	switch( (*p) ) {
		case 80: goto tr224;
		case 95: goto tr84;
		case 112: goto tr224;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
	switch( (*p) ) {
		case 78: goto st79;
		case 95: goto tr84;
		case 110: goto st79;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
	switch( (*p) ) {
		case 69: goto tr226;
		case 95: goto tr84;
		case 101: goto tr226;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
	switch( (*p) ) {
		case 65: goto st81;
		case 95: goto tr84;
		case 97: goto st81;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	switch( (*p) ) {
		case 82: goto st82;
		case 95: goto tr84;
		case 114: goto st82;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	switch( (*p) ) {
		case 83: goto tr229;
		case 95: goto tr84;
		case 115: goto tr229;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
	switch( (*p) ) {
		case 78: goto st84;
		case 95: goto tr84;
		case 110: goto st84;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
	switch( (*p) ) {
		case 90: goto tr231;
		case 95: goto tr84;
		case 122: goto tr231;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
tr206:
	{te = p+1;}
	goto st85;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
	switch( (*p) ) {
		case 46: goto st18;
		case 95: goto tr84;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( (*p) ) {
		case 66: goto tr29;
		case 80: goto tr30;
		case 81: goto tr31;
		case 87: goto tr32;
		case 98: goto tr29;
		case 112: goto tr30;
		case 113: goto tr31;
		case 119: goto tr32;
	}
	goto tr28;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
	switch( (*p) ) {
		case 73: goto st87;
		case 76: goto st88;
		case 78: goto st90;
		case 88: goto st93;
		case 95: goto tr84;
		case 105: goto st87;
		case 108: goto st88;
		case 110: goto st90;
		case 120: goto st93;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr233;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	switch( (*p) ) {
		case 82: goto tr239;
		case 95: goto tr84;
		case 114: goto tr239;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr238;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
	switch( (*p) ) {
		case 83: goto st89;
		case 95: goto tr84;
		case 115: goto st89;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
	switch( (*p) ) {
		case 69: goto tr241;
		case 95: goto tr84;
		case 101: goto tr241;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
	switch( (*p) ) {
		case 68: goto st91;
		case 95: goto tr84;
		case 100: goto st91;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	switch( (*p) ) {
		case 73: goto st92;
		case 95: goto tr84;
		case 105: goto st92;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
	switch( (*p) ) {
		case 70: goto tr244;
		case 95: goto tr84;
		case 102: goto tr244;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
	switch( (*p) ) {
		case 84: goto st94;
		case 88: goto tr247;
		case 95: goto tr84;
		case 116: goto st94;
		case 120: goto tr247;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr245;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
	switch( (*p) ) {
		case 69: goto st95;
		case 95: goto tr84;
		case 101: goto st95;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
	switch( (*p) ) {
		case 82: goto st96;
		case 95: goto tr84;
		case 114: goto st96;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
	switch( (*p) ) {
		case 78: goto tr250;
		case 95: goto tr84;
		case 110: goto tr250;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
	switch( (*p) ) {
		case 80: goto st98;
		case 95: goto tr84;
		case 112: goto st98;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr251;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
	switch( (*p) ) {
		case 80: goto tr253;
		case 95: goto tr84;
		case 112: goto tr253;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
	switch( (*p) ) {
		case 76: goto st100;
		case 95: goto tr84;
		case 108: goto st100;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
	switch( (*p) ) {
		case 79: goto st101;
		case 95: goto tr84;
		case 111: goto st101;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
	switch( (*p) ) {
		case 66: goto st102;
		case 95: goto tr84;
		case 98: goto st102;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
	switch( (*p) ) {
		case 65: goto st103;
		case 95: goto tr84;
		case 97: goto st103;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
	switch( (*p) ) {
		case 76: goto tr258;
		case 95: goto tr84;
		case 108: goto tr258;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
	switch( (*p) ) {
		case 65: goto st105;
		case 76: goto st107;
		case 95: goto tr84;
		case 97: goto st105;
		case 108: goto st107;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr259;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
	switch( (*p) ) {
		case 76: goto st106;
		case 95: goto tr84;
		case 108: goto st106;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
	switch( (*p) ) {
		case 84: goto tr263;
		case 95: goto tr84;
		case 116: goto tr263;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
	switch( (*p) ) {
		case 39: goto tr265;
		case 95: goto tr84;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr264;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	switch( (*p) ) {
		case 68: goto st109;
		case 70: goto st111;
		case 73: goto st117;
		case 77: goto tr270;
		case 78: goto st118;
		case 79: goto st128;
		case 80: goto st129;
		case 88: goto st134;
		case 89: goto st135;
		case 95: goto tr84;
		case 100: goto st109;
		case 102: goto st111;
		case 105: goto st117;
		case 109: goto tr270;
		case 110: goto st118;
		case 111: goto st128;
		case 112: goto st129;
		case 120: goto st134;
		case 121: goto st135;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr266;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	switch( (*p) ) {
		case 69: goto st110;
		case 95: goto tr84;
		case 101: goto st110;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	switch( (*p) ) {
		case 84: goto tr277;
		case 95: goto tr84;
		case 116: goto tr277;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	switch( (*p) ) {
		case 68: goto st112;
		case 78: goto st114;
		case 95: goto tr84;
		case 100: goto st112;
		case 110: goto st114;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr278;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
	switch( (*p) ) {
		case 69: goto st113;
		case 95: goto tr84;
		case 101: goto st113;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
	switch( (*p) ) {
		case 70: goto tr282;
		case 95: goto tr84;
		case 102: goto tr282;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
	switch( (*p) ) {
		case 68: goto st115;
		case 95: goto tr84;
		case 100: goto st115;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	switch( (*p) ) {
		case 69: goto st116;
		case 95: goto tr84;
		case 101: goto st116;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	switch( (*p) ) {
		case 70: goto tr285;
		case 95: goto tr84;
		case 102: goto tr285;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	switch( (*p) ) {
		case 82: goto tr286;
		case 95: goto tr84;
		case 114: goto tr286;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	switch( (*p) ) {
		case 48: goto tr288;
		case 67: goto st119;
		case 68: goto st123;
		case 73: goto st124;
		case 86: goto st125;
		case 95: goto tr84;
		case 99: goto st119;
		case 100: goto st123;
		case 105: goto st124;
		case 118: goto st125;
	}
	if ( (*p) < 65 ) {
		if ( 49 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr287;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	switch( (*p) ) {
		case 76: goto st120;
		case 95: goto tr84;
		case 108: goto st120;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr293;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	switch( (*p) ) {
		case 85: goto st121;
		case 95: goto tr84;
		case 117: goto st121;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	switch( (*p) ) {
		case 68: goto st122;
		case 95: goto tr84;
		case 100: goto st122;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	switch( (*p) ) {
		case 69: goto tr297;
		case 95: goto tr84;
		case 101: goto tr297;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	switch( (*p) ) {
		case 82: goto tr299;
		case 95: goto tr84;
		case 114: goto tr299;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr298;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	switch( (*p) ) {
		case 82: goto tr301;
		case 95: goto tr84;
		case 114: goto tr301;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr300;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	switch( (*p) ) {
		case 79: goto st126;
		case 95: goto tr84;
		case 111: goto st126;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	switch( (*p) ) {
		case 75: goto st127;
		case 95: goto tr84;
		case 107: goto st127;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
	switch( (*p) ) {
		case 69: goto tr304;
		case 95: goto tr84;
		case 101: goto tr304;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
	switch( (*p) ) {
		case 69: goto tr305;
		case 73: goto tr306;
		case 95: goto tr84;
		case 101: goto tr305;
		case 105: goto tr306;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
	switch( (*p) ) {
		case 82: goto st130;
		case 83: goto st132;
		case 95: goto tr84;
		case 114: goto st130;
		case 115: goto st132;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr307;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	switch( (*p) ) {
		case 69: goto st131;
		case 95: goto tr84;
		case 101: goto st131;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
	switch( (*p) ) {
		case 83: goto tr311;
		case 95: goto tr84;
		case 115: goto tr311;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
	switch( (*p) ) {
		case 69: goto st133;
		case 95: goto tr84;
		case 101: goto st133;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
	switch( (*p) ) {
		case 84: goto tr313;
		case 95: goto tr84;
		case 116: goto tr313;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
	switch( (*p) ) {
		case 72: goto tr315;
		case 76: goto tr316;
		case 95: goto tr84;
		case 104: goto tr315;
		case 108: goto tr316;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr314;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
	switch( (*p) ) {
		case 72: goto tr318;
		case 76: goto tr319;
		case 95: goto tr84;
		case 104: goto tr318;
		case 108: goto tr319;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr317;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
	switch( (*p) ) {
		case 80: goto tr320;
		case 82: goto tr321;
		case 95: goto tr84;
		case 112: goto tr320;
		case 114: goto tr321;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
	switch( (*p) ) {
		case 68: goto st138;
		case 73: goto st143;
		case 79: goto tr325;
		case 83: goto st145;
		case 90: goto tr327;
		case 95: goto tr84;
		case 100: goto st138;
		case 105: goto st143;
		case 111: goto tr325;
		case 115: goto st145;
		case 122: goto tr327;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr84;
	} else
		goto tr84;
	goto tr322;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
	switch( (*p) ) {
		case 68: goto st139;
		case 73: goto st141;
		case 80: goto tr331;
		case 95: goto tr84;
		case 100: goto st139;
		case 105: goto st141;
		case 112: goto tr331;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr328;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
	switch( (*p) ) {
		case 82: goto tr333;
		case 83: goto st140;
		case 95: goto tr84;
		case 114: goto tr333;
		case 115: goto st140;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr332;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
	switch( (*p) ) {
		case 82: goto tr335;
		case 95: goto tr84;
		case 114: goto tr335;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	switch( (*p) ) {
		case 82: goto tr337;
		case 83: goto st142;
		case 95: goto tr84;
		case 114: goto tr337;
		case 115: goto st142;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr336;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
	switch( (*p) ) {
		case 82: goto tr339;
		case 95: goto tr84;
		case 114: goto tr339;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
	switch( (*p) ) {
		case 78: goto st144;
		case 95: goto tr84;
		case 110: goto st144;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	switch( (*p) ) {
		case 69: goto tr341;
		case 95: goto tr84;
		case 101: goto tr341;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
	switch( (*p) ) {
		case 68: goto st146;
		case 73: goto st148;
		case 84: goto st150;
		case 95: goto tr84;
		case 100: goto st146;
		case 105: goto st148;
		case 116: goto st150;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
	switch( (*p) ) {
		case 68: goto st147;
		case 82: goto tr346;
		case 95: goto tr84;
		case 100: goto st147;
		case 114: goto tr346;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
	switch( (*p) ) {
		case 82: goto tr347;
		case 95: goto tr84;
		case 114: goto tr347;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	switch( (*p) ) {
		case 68: goto st149;
		case 82: goto tr349;
		case 95: goto tr84;
		case 100: goto st149;
		case 114: goto tr349;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	switch( (*p) ) {
		case 82: goto tr350;
		case 95: goto tr84;
		case 114: goto tr350;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
	switch( (*p) ) {
		case 79: goto st151;
		case 95: goto tr84;
		case 111: goto st151;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
	switch( (*p) ) {
		case 70: goto st152;
		case 78: goto tr353;
		case 95: goto tr84;
		case 102: goto st152;
		case 110: goto tr353;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
	switch( (*p) ) {
		case 70: goto tr354;
		case 95: goto tr84;
		case 102: goto tr354;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
	switch( (*p) ) {
		case 76: goto st154;
		case 79: goto st155;
		case 85: goto st159;
		case 95: goto tr84;
		case 108: goto st154;
		case 111: goto st155;
		case 117: goto st159;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr355;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
	switch( (*p) ) {
		case 84: goto tr359;
		case 95: goto tr84;
		case 116: goto tr359;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
	switch( (*p) ) {
		case 68: goto st156;
		case 95: goto tr84;
		case 100: goto st156;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
	switch( (*p) ) {
		case 85: goto st157;
		case 95: goto tr84;
		case 117: goto st157;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
	switch( (*p) ) {
		case 76: goto st158;
		case 95: goto tr84;
		case 108: goto st158;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
	switch( (*p) ) {
		case 69: goto tr363;
		case 95: goto tr84;
		case 101: goto tr363;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
	switch( (*p) ) {
		case 76: goto tr364;
		case 95: goto tr84;
		case 108: goto tr364;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
	switch( (*p) ) {
		case 67: goto tr365;
		case 69: goto st161;
		case 79: goto st162;
		case 90: goto tr368;
		case 95: goto tr84;
		case 99: goto tr365;
		case 101: goto st161;
		case 111: goto st162;
		case 122: goto tr368;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 89 ) {
		if ( 97 <= (*p) && (*p) <= 121 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
	switch( (*p) ) {
		case 71: goto tr369;
		case 95: goto tr84;
		case 103: goto tr369;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
	switch( (*p) ) {
		case 80: goto tr370;
		case 95: goto tr84;
		case 112: goto tr370;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
	switch( (*p) ) {
		case 82: goto st164;
		case 84: goto st165;
		case 85: goto st170;
		case 95: goto tr84;
		case 114: goto st164;
		case 116: goto st165;
		case 117: goto st170;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st164:
	if ( ++p == pe )
		goto _test_eof164;
case 164:
	switch( (*p) ) {
		case 71: goto tr375;
		case 95: goto tr84;
		case 103: goto tr375;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr374;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
	switch( (*p) ) {
		case 68: goto st166;
		case 73: goto st168;
		case 95: goto tr84;
		case 100: goto st166;
		case 105: goto st168;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st166:
	if ( ++p == pe )
		goto _test_eof166;
case 166:
	switch( (*p) ) {
		case 77: goto st167;
		case 82: goto tr379;
		case 95: goto tr84;
		case 109: goto st167;
		case 114: goto tr379;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
	switch( (*p) ) {
		case 82: goto tr381;
		case 95: goto tr84;
		case 114: goto tr381;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr380;
st168:
	if ( ++p == pe )
		goto _test_eof168;
case 168:
	switch( (*p) ) {
		case 77: goto st169;
		case 82: goto tr383;
		case 95: goto tr84;
		case 109: goto st169;
		case 114: goto tr383;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
	switch( (*p) ) {
		case 82: goto tr385;
		case 95: goto tr84;
		case 114: goto tr385;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr384;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
	switch( (*p) ) {
		case 84: goto st171;
		case 95: goto tr84;
		case 116: goto st171;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st171:
	if ( ++p == pe )
		goto _test_eof171;
case 171:
	switch( (*p) ) {
		case 48: goto tr388;
		case 68: goto tr389;
		case 73: goto tr390;
		case 95: goto tr84;
		case 100: goto tr389;
		case 105: goto tr390;
	}
	if ( (*p) < 65 ) {
		if ( 49 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr387;
st172:
	if ( ++p == pe )
		goto _test_eof172;
case 172:
	switch( (*p) ) {
		case 69: goto tr392;
		case 79: goto st173;
		case 85: goto st174;
		case 95: goto tr84;
		case 101: goto tr392;
		case 111: goto st173;
		case 117: goto st174;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr391;
st173:
	if ( ++p == pe )
		goto _test_eof173;
case 173:
	switch( (*p) ) {
		case 80: goto tr396;
		case 95: goto tr84;
		case 112: goto tr396;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr395;
st174:
	if ( ++p == pe )
		goto _test_eof174;
case 174:
	switch( (*p) ) {
		case 66: goto st175;
		case 83: goto st178;
		case 95: goto tr84;
		case 98: goto st175;
		case 115: goto st178;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st175:
	if ( ++p == pe )
		goto _test_eof175;
case 175:
	switch( (*p) ) {
		case 76: goto st176;
		case 95: goto tr84;
		case 108: goto st176;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st176:
	if ( ++p == pe )
		goto _test_eof176;
case 176:
	switch( (*p) ) {
		case 73: goto st177;
		case 95: goto tr84;
		case 105: goto st177;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st177:
	if ( ++p == pe )
		goto _test_eof177;
case 177:
	switch( (*p) ) {
		case 67: goto tr401;
		case 95: goto tr84;
		case 99: goto tr401;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st178:
	if ( ++p == pe )
		goto _test_eof178;
case 178:
	switch( (*p) ) {
		case 72: goto tr402;
		case 95: goto tr84;
		case 104: goto tr402;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st179:
	if ( ++p == pe )
		goto _test_eof179;
case 179:
	switch( (*p) ) {
		case 68: goto st180;
		case 69: goto st184;
		case 76: goto st186;
		case 82: goto st188;
		case 83: goto st190;
		case 95: goto tr84;
		case 100: goto st180;
		case 101: goto st184;
		case 108: goto st186;
		case 114: goto st188;
		case 115: goto st190;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr403;
st180:
	if ( ++p == pe )
		goto _test_eof180;
case 180:
	switch( (*p) ) {
		case 77: goto st181;
		case 95: goto tr84;
		case 109: goto st181;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st181:
	if ( ++p == pe )
		goto _test_eof181;
case 181:
	switch( (*p) ) {
		case 79: goto st182;
		case 95: goto tr84;
		case 111: goto st182;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st182:
	if ( ++p == pe )
		goto _test_eof182;
case 182:
	switch( (*p) ) {
		case 68: goto st183;
		case 95: goto tr84;
		case 100: goto st183;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st183:
	if ( ++p == pe )
		goto _test_eof183;
case 183:
	switch( (*p) ) {
		case 69: goto tr412;
		case 95: goto tr84;
		case 101: goto tr412;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st184:
	if ( ++p == pe )
		goto _test_eof184;
case 184:
	switch( (*p) ) {
		case 83: goto tr413;
		case 84: goto st185;
		case 95: goto tr84;
		case 115: goto tr413;
		case 116: goto st185;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st185:
	if ( ++p == pe )
		goto _test_eof185;
case 185:
	switch( (*p) ) {
		case 73: goto tr416;
		case 78: goto tr417;
		case 95: goto tr84;
		case 105: goto tr416;
		case 110: goto tr417;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr415;
st186:
	if ( ++p == pe )
		goto _test_eof186;
case 186:
	switch( (*p) ) {
		case 65: goto tr419;
		case 67: goto st187;
		case 68: goto tr421;
		case 95: goto tr84;
		case 97: goto tr419;
		case 99: goto st187;
		case 100: goto tr421;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr418;
st187:
	if ( ++p == pe )
		goto _test_eof187;
case 187:
	switch( (*p) ) {
		case 65: goto tr423;
		case 95: goto tr84;
		case 97: goto tr423;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr422;
st188:
	if ( ++p == pe )
		goto _test_eof188;
case 188:
	switch( (*p) ) {
		case 65: goto tr425;
		case 67: goto st189;
		case 68: goto tr427;
		case 95: goto tr84;
		case 97: goto tr425;
		case 99: goto st189;
		case 100: goto tr427;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr424;
st189:
	if ( ++p == pe )
		goto _test_eof189;
case 189:
	switch( (*p) ) {
		case 65: goto tr429;
		case 95: goto tr84;
		case 97: goto tr429;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr428;
st190:
	if ( ++p == pe )
		goto _test_eof190;
case 190:
	switch( (*p) ) {
		case 84: goto tr430;
		case 95: goto tr84;
		case 116: goto tr430;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st191:
	if ( ++p == pe )
		goto _test_eof191;
case 191:
	switch( (*p) ) {
		case 66: goto st192;
		case 67: goto st193;
		case 69: goto st194;
		case 76: goto st202;
		case 80: goto tr435;
		case 82: goto st203;
		case 85: goto st204;
		case 89: goto st207;
		case 95: goto tr84;
		case 98: goto st192;
		case 99: goto st193;
		case 101: goto st194;
		case 108: goto st202;
		case 112: goto tr435;
		case 114: goto st203;
		case 117: goto st204;
		case 121: goto st207;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st192:
	if ( ++p == pe )
		goto _test_eof192;
case 192:
	switch( (*p) ) {
		case 67: goto tr439;
		case 95: goto tr84;
		case 99: goto tr439;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st193:
	if ( ++p == pe )
		goto _test_eof193;
case 193:
	switch( (*p) ) {
		case 70: goto tr440;
		case 95: goto tr84;
		case 102: goto tr440;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st194:
	if ( ++p == pe )
		goto _test_eof194;
case 194:
	switch( (*p) ) {
		case 67: goto st195;
		case 84: goto st199;
		case 95: goto tr84;
		case 99: goto st195;
		case 116: goto st199;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st195:
	if ( ++p == pe )
		goto _test_eof195;
case 195:
	switch( (*p) ) {
		case 84: goto st196;
		case 95: goto tr84;
		case 116: goto st196;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st196:
	if ( ++p == pe )
		goto _test_eof196;
case 196:
	switch( (*p) ) {
		case 73: goto st197;
		case 95: goto tr84;
		case 105: goto st197;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st197:
	if ( ++p == pe )
		goto _test_eof197;
case 197:
	switch( (*p) ) {
		case 79: goto st198;
		case 95: goto tr84;
		case 111: goto st198;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st198:
	if ( ++p == pe )
		goto _test_eof198;
case 198:
	switch( (*p) ) {
		case 78: goto tr446;
		case 95: goto tr84;
		case 110: goto tr446;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st199:
	if ( ++p == pe )
		goto _test_eof199;
case 199:
	switch( (*p) ) {
		case 85: goto st200;
		case 95: goto tr84;
		case 117: goto st200;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr447;
st200:
	if ( ++p == pe )
		goto _test_eof200;
case 200:
	switch( (*p) ) {
		case 83: goto st201;
		case 95: goto tr84;
		case 115: goto st201;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st201:
	if ( ++p == pe )
		goto _test_eof201;
case 201:
	switch( (*p) ) {
		case 82: goto tr450;
		case 95: goto tr84;
		case 114: goto tr450;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st202:
	if ( ++p == pe )
		goto _test_eof202;
case 202:
	switch( (*p) ) {
		case 65: goto tr451;
		case 76: goto tr452;
		case 80: goto tr453;
		case 95: goto tr84;
		case 97: goto tr451;
		case 108: goto tr452;
		case 112: goto tr453;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st203:
	if ( ++p == pe )
		goto _test_eof203;
case 203:
	switch( (*p) ) {
		case 65: goto tr454;
		case 76: goto tr455;
		case 95: goto tr84;
		case 97: goto tr454;
		case 108: goto tr455;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st204:
	if ( ++p == pe )
		goto _test_eof204;
case 204:
	switch( (*p) ) {
		case 66: goto tr457;
		case 82: goto st205;
		case 95: goto tr84;
		case 98: goto tr457;
		case 114: goto st205;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr456;
st205:
	if ( ++p == pe )
		goto _test_eof205;
case 205:
	switch( (*p) ) {
		case 69: goto st206;
		case 95: goto tr84;
		case 101: goto st206;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st206:
	if ( ++p == pe )
		goto _test_eof206;
case 206:
	switch( (*p) ) {
		case 83: goto tr460;
		case 95: goto tr84;
		case 115: goto tr460;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st207:
	if ( ++p == pe )
		goto _test_eof207;
case 207:
	switch( (*p) ) {
		case 83: goto st208;
		case 95: goto tr84;
		case 115: goto st208;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st208:
	if ( ++p == pe )
		goto _test_eof208;
case 208:
	switch( (*p) ) {
		case 67: goto st209;
		case 95: goto tr84;
		case 99: goto st209;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st209:
	if ( ++p == pe )
		goto _test_eof209;
case 209:
	switch( (*p) ) {
		case 65: goto st210;
		case 95: goto tr84;
		case 97: goto st210;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st210:
	if ( ++p == pe )
		goto _test_eof210;
case 210:
	switch( (*p) ) {
		case 76: goto st211;
		case 95: goto tr84;
		case 108: goto st211;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st211:
	if ( ++p == pe )
		goto _test_eof211;
case 211:
	switch( (*p) ) {
		case 76: goto tr465;
		case 95: goto tr84;
		case 108: goto tr465;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st212:
	if ( ++p == pe )
		goto _test_eof212;
case 212:
	switch( (*p) ) {
		case 83: goto st213;
		case 95: goto tr84;
		case 115: goto st213;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st213:
	if ( ++p == pe )
		goto _test_eof213;
case 213:
	switch( (*p) ) {
		case 84: goto st214;
		case 95: goto tr84;
		case 116: goto st214;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st214:
	if ( ++p == pe )
		goto _test_eof214;
case 214:
	switch( (*p) ) {
		case 73: goto st215;
		case 95: goto tr84;
		case 105: goto st215;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr468;
st215:
	if ( ++p == pe )
		goto _test_eof215;
case 215:
	switch( (*p) ) {
		case 79: goto tr470;
		case 95: goto tr84;
		case 111: goto tr470;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st216:
	if ( ++p == pe )
		goto _test_eof216;
case 216:
	switch( (*p) ) {
		case 77: goto st217;
		case 78: goto st218;
		case 95: goto tr84;
		case 109: goto st217;
		case 110: goto st218;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st217:
	if ( ++p == pe )
		goto _test_eof217;
case 217:
	switch( (*p) ) {
		case 65: goto tr473;
		case 83: goto tr474;
		case 95: goto tr84;
		case 97: goto tr473;
		case 115: goto tr474;
	}
	if ( (*p) < 66 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 98 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st218:
	if ( ++p == pe )
		goto _test_eof218;
case 218:
	switch( (*p) ) {
		case 68: goto st219;
		case 95: goto tr84;
		case 100: goto st219;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st219:
	if ( ++p == pe )
		goto _test_eof219;
case 219:
	switch( (*p) ) {
		case 69: goto st220;
		case 95: goto tr84;
		case 101: goto st220;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st220:
	if ( ++p == pe )
		goto _test_eof220;
case 220:
	switch( (*p) ) {
		case 70: goto st221;
		case 95: goto tr84;
		case 102: goto st221;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st221:
	if ( ++p == pe )
		goto _test_eof221;
case 221:
	switch( (*p) ) {
		case 73: goto st222;
		case 95: goto tr84;
		case 105: goto st222;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st222:
	if ( ++p == pe )
		goto _test_eof222;
case 222:
	switch( (*p) ) {
		case 78: goto st223;
		case 95: goto tr84;
		case 110: goto st223;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st223:
	if ( ++p == pe )
		goto _test_eof223;
case 223:
	switch( (*p) ) {
		case 69: goto tr480;
		case 95: goto tr84;
		case 101: goto tr480;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st224:
	if ( ++p == pe )
		goto _test_eof224;
case 224:
	switch( (*p) ) {
		case 79: goto st225;
		case 80: goto st226;
		case 95: goto tr84;
		case 111: goto st225;
		case 112: goto st226;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st225:
	if ( ++p == pe )
		goto _test_eof225;
case 225:
	switch( (*p) ) {
		case 82: goto tr483;
		case 95: goto tr84;
		case 114: goto tr483;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
st226:
	if ( ++p == pe )
		goto _test_eof226;
case 226:
	switch( (*p) ) {
		case 67: goto tr484;
		case 95: goto tr84;
		case 99: goto tr484;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr84;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr84;
	} else
		goto tr84;
	goto tr155;
tr96:
	{te = p+1;}
	goto st227;
st227:
	if ( ++p == pe )
		goto _test_eof227;
case 227:
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
		case 607: goto st228;
	}
	if ( _widec > 602 ) {
		if ( 609 <= _widec && _widec <= 634 )
			goto st228;
	} else if ( _widec >= 577 )
		goto st228;
	goto tr485;
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
		case 607: goto st228;
	}
	if ( _widec > 602 ) {
		if ( 609 <= _widec && _widec <= 634 )
			goto st228;
	} else if ( _widec >= 577 )
		goto st228;
	goto tr33;
st228:
	if ( ++p == pe )
		goto _test_eof228;
case 228:
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
		goto st228;
	if ( _widec < 577 ) {
		if ( 560 <= _widec && _widec <= 569 )
			goto st228;
	} else if ( _widec > 602 ) {
		if ( 609 <= _widec && _widec <= 634 )
			goto st228;
	} else
		goto st228;
	goto tr486;
tr97:
	{te = p+1;}
	{act = 56;}
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
		case 324: goto st42;
		case 326: goto st43;
		case 332: goto st44;
		case 334: goto st46;
		case 339: goto st47;
		case 351: goto tr84;
		case 356: goto st42;
		case 358: goto st43;
		case 364: goto st44;
		case 366: goto st46;
		case 371: goto st47;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr487;
		case 582: goto tr488;
		case 588: goto tr489;
		case 590: goto tr490;
		case 595: goto tr491;
		case 607: goto tr107;
		case 612: goto tr487;
		case 614: goto tr488;
		case 620: goto tr489;
		case 622: goto tr490;
		case 627: goto tr491;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr149;
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
		case 570: goto tr37;
	}
	goto tr0;
tr107:
	{te = p+1;}
	{act = 218;}
	goto st230;
tr118:
	{te = p+1;}
	{act = 38;}
	goto st230;
tr492:
	{te = p+1;}
	{act = 113;}
	goto st230;
tr493:
	{te = p+1;}
	{act = 114;}
	goto st230;
tr495:
	{te = p+1;}
	{act = 191;}
	goto st230;
tr496:
	{te = p+1;}
	{act = 115;}
	goto st230;
tr499:
	{te = p+1;}
	{act = 1;}
	goto st230;
tr504:
	{te = p+1;}
	{act = 116;}
	goto st230;
tr507:
	{te = p+1;}
	{act = 83;}
	goto st230;
tr509:
	{te = p+1;}
	{act = 192;}
	goto st230;
tr518:
	{te = p+1;}
	{act = 212;}
	goto st230;
tr520:
	{te = p+1;}
	{act = 213;}
	goto st230;
tr521:
	{te = p+1;}
	{act = 118;}
	goto st230;
tr524:
	{te = p+1;}
	{act = 124;}
	goto st230;
tr525:
	{te = p+1;}
	{act = 121;}
	goto st230;
tr526:
	{te = p+1;}
	{act = 123;}
	goto st230;
tr529:
	{te = p+1;}
	{act = 127;}
	goto st230;
tr532:
	{te = p+1;}
	{act = 125;}
	goto st230;
tr533:
	{te = p+1;}
	{act = 126;}
	goto st230;
tr535:
	{te = p+1;}
	{act = 84;}
	goto st230;
tr536:
	{te = p+1;}
	{act = 85;}
	goto st230;
tr539:
	{te = p+1;}
	{act = 89;}
	goto st230;
tr540:
	{te = p+1;}
	{act = 88;}
	goto st230;
tr541:
	{te = p+1;}
	{act = 90;}
	goto st230;
tr543:
	{te = p+1;}
	{act = 92;}
	goto st230;
tr547:
	{te = p+1;}
	{act = 86;}
	goto st230;
tr549:
	{te = p+1;}
	{act = 87;}
	goto st230;
tr552:
	{te = p+1;}
	{act = 91;}
	goto st230;
tr554:
	{te = p+1;}
	{act = 128;}
	goto st230;
tr559:
	{te = p+1;}
	{act = 61;}
	goto st230;
tr561:
	{te = p+1;}
	{act = 93;}
	goto st230;
tr564:
	{te = p+1;}
	{act = 94;}
	goto st230;
tr566:
	{te = p+1;}
	{act = 131;}
	goto st230;
tr569:
	{te = p+1;}
	{act = 95;}
	goto st230;
tr571:
	{te = p+1;}
	{act = 214;}
	goto st230;
tr576:
	{te = p+1;}
	{act = 96;}
	goto st230;
tr580:
	{te = p+1;}
	{act = 132;}
	goto st230;
tr584:
	{te = p+1;}
	{act = 133;}
	goto st230;
tr591:
	{te = p+1;}
	{act = 193;}
	goto st230;
tr595:
	{te = p+1;}
	{act = 98;}
	goto st230;
tr598:
	{te = p+1;}
	{act = 99;}
	goto st230;
tr599:
	{te = p+1;}
	{act = 59;}
	goto st230;
tr600:
	{te = p+1;}
	{act = 181;}
	goto st230;
tr608:
	{te = p+1;}
	{act = 100;}
	goto st230;
tr609:
	{te = p+1;}
	{act = 137;}
	goto st230;
tr610:
	{te = p+1;}
	{act = 139;}
	goto st230;
tr613:
	{te = p+1;}
	{act = 215;}
	goto st230;
tr614:
	{te = p+1;}
	{act = 194;}
	goto st230;
tr615:
	{te = p+1;}
	{act = 195;}
	goto st230;
tr619:
	{te = p+1;}
	{act = 196;}
	goto st230;
tr621:
	{te = p+1;}
	{act = 197;}
	goto st230;
tr622:
	{te = p+1;}
	{act = 51;}
	goto st230;
tr623:
	{te = p+1;}
	{act = 54;}
	goto st230;
tr624:
	{te = p+1;}
	{act = 52;}
	goto st230;
tr625:
	{te = p+1;}
	{act = 55;}
	goto st230;
tr626:
	{te = p+1;}
	{act = 140;}
	goto st230;
tr627:
	{te = p+1;}
	{act = 141;}
	goto st230;
tr630:
	{te = p+1;}
	{act = 46;}
	goto st230;
tr632:
	{te = p+1;}
	{act = 45;}
	goto st230;
tr635:
	{te = p+1;}
	{act = 200;}
	goto st230;
tr636:
	{te = p+1;}
	{act = 144;}
	goto st230;
tr638:
	{te = p+1;}
	{act = 198;}
	goto st230;
tr639:
	{te = p+1;}
	{act = 146;}
	goto st230;
tr641:
	{te = p+1;}
	{act = 199;}
	goto st230;
tr643:
	{te = p+1;}
	{act = 101;}
	goto st230;
tr648:
	{te = p+1;}
	{act = 201;}
	goto st230;
tr649:
	{te = p+1;}
	{act = 203;}
	goto st230;
tr651:
	{te = p+1;}
	{act = 202;}
	goto st230;
tr652:
	{te = p+1;}
	{act = 204;}
	goto st230;
tr655:
	{te = p+1;}
	{act = 103;}
	goto st230;
tr656:
	{te = p+1;}
	{act = 102;}
	goto st230;
tr660:
	{te = p+1;}
	{act = 182;}
	goto st230;
tr664:
	{te = p+1;}
	{act = 104;}
	goto st230;
tr665:
	{te = p+1;}
	{act = 205;}
	goto st230;
tr666:
	{te = p+1;}
	{act = 39;}
	goto st230;
tr669:
	{te = p+1;}
	{act = 37;}
	goto st230;
tr670:
	{te = p+1;}
	{act = 147;}
	goto st230;
tr671:
	{te = p+1;}
	{act = 148;}
	goto st230;
tr675:
	{te = p+1;}
	{act = 105;}
	goto st230;
tr679:
	{te = p+1;}
	{act = 150;}
	goto st230;
tr680:
	{te = p+1;}
	{act = 184;}
	goto st230;
tr682:
	{te = p+1;}
	{act = 151;}
	goto st230;
tr683:
	{te = p+1;}
	{act = 186;}
	goto st230;
tr685:
	{te = p+1;}
	{act = 187;}
	goto st230;
tr686:
	{te = p+1;}
	{act = 153;}
	goto st230;
tr687:
	{te = p+1;}
	{act = 154;}
	goto st230;
tr688:
	{te = p+1;}
	{act = 42;}
	goto st230;
tr691:
	{te = p+1;}
	{act = 155;}
	goto st230;
tr696:
	{te = p+1;}
	{act = 106;}
	goto st230;
tr697:
	{te = p+1;}
	{act = 156;}
	goto st230;
tr706:
	{te = p+1;}
	{act = 206;}
	goto st230;
tr707:
	{te = p+1;}
	{act = 157;}
	goto st230;
tr709:
	{te = p+1;}
	{act = 159;}
	goto st230;
tr710:
	{te = p+1;}
	{act = 160;}
	goto st230;
tr711:
	{te = p+1;}
	{act = 162;}
	goto st230;
tr713:
	{te = p+1;}
	{act = 165;}
	goto st230;
tr714:
	{te = p+1;}
	{act = 164;}
	goto st230;
tr715:
	{te = p+1;}
	{act = 167;}
	goto st230;
tr717:
	{te = p+1;}
	{act = 170;}
	goto st230;
tr718:
	{te = p+1;}
	{act = 169;}
	goto st230;
tr719:
	{te = p+1;}
	{act = 171;}
	goto st230;
tr724:
	{te = p+1;}
	{act = 69;}
	goto st230;
tr728:
	{te = p+1;}
	{act = 172;}
	goto st230;
tr729:
	{te = p+1;}
	{act = 173;}
	goto st230;
tr735:
	{te = p+1;}
	{act = 107;}
	goto st230;
tr738:
	{te = p+1;}
	{act = 207;}
	goto st230;
tr739:
	{te = p+1;}
	{act = 175;}
	goto st230;
tr740:
	{te = p+1;}
	{act = 176;}
	goto st230;
tr741:
	{te = p+1;}
	{act = 188;}
	goto st230;
tr742:
	{te = p+1;}
	{act = 177;}
	goto st230;
tr743:
	{te = p+1;}
	{act = 178;}
	goto st230;
tr744:
	{te = p+1;}
	{act = 179;}
	goto st230;
tr747:
	{te = p+1;}
	{act = 208;}
	goto st230;
tr752:
	{te = p+1;}
	{act = 209;}
	goto st230;
tr756:
	{te = p+1;}
	{act = 190;}
	goto st230;
tr759:
	{te = p+1;}
	{act = 210;}
	goto st230;
tr760:
	{te = p+1;}
	{act = 211;}
	goto st230;
tr766:
	{te = p+1;}
	{act = 108;}
	goto st230;
tr769:
	{te = p+1;}
	{act = 180;}
	goto st230;
tr770:
	{te = p+1;}
	{act = 72;}
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
		case 351: goto tr84;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 607: goto tr107;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr0;
tr487:
	{te = p+1;}
	{act = 218;}
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
		case 323: goto tr156;
		case 324: goto tr157;
		case 351: goto tr84;
		case 355: goto tr156;
		case 356: goto tr157;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr492;
		case 580: goto tr493;
		case 607: goto tr107;
		case 611: goto tr492;
		case 612: goto tr493;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr488:
	{te = p+1;}
	{act = 68;}
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
		case 39: goto tr159;
		case 351: goto tr84;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 607: goto tr107;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr158;
tr489:
	{te = p+1;}
	{act = 218;}
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
		case 340: goto st45;
		case 351: goto tr84;
		case 372: goto st45;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr494;
		case 607: goto tr107;
		case 628: goto tr494;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr494:
	{te = p+1;}
	{act = 218;}
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
		case 324: goto tr161;
		case 351: goto tr84;
		case 356: goto tr161;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr495;
		case 607: goto tr107;
		case 612: goto tr495;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr490:
	{te = p+1;}
	{act = 218;}
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
		case 324: goto tr162;
		case 351: goto tr84;
		case 356: goto tr162;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr496;
		case 607: goto tr107;
		case 612: goto tr496;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr491:
	{te = p+1;}
	{act = 218;}
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
		case 333: goto st48;
		case 351: goto tr84;
		case 365: goto st48;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 589: goto tr497;
		case 607: goto tr107;
		case 621: goto tr497;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr497:
	{te = p+1;}
	{act = 218;}
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
		case 336: goto st49;
		case 351: goto tr84;
		case 368: goto st49;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 592: goto tr498;
		case 607: goto tr107;
		case 624: goto tr498;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr498:
	{te = p+1;}
	{act = 218;}
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
		case 323: goto tr165;
		case 351: goto tr84;
		case 355: goto tr165;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr499;
		case 607: goto tr107;
		case 611: goto tr499;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr98:
	{te = p+1;}
	{act = 47;}
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
		case 323: goto st51;
		case 329: goto st52;
		case 335: goto st56;
		case 351: goto tr84;
		case 355: goto st51;
		case 361: goto st52;
		case 367: goto st56;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr500;
		case 585: goto tr501;
		case 591: goto tr502;
		case 607: goto tr107;
		case 611: goto tr500;
		case 617: goto tr501;
		case 623: goto tr502;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr166;
tr500:
	{te = p+1;}
	{act = 63;}
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
		case 39: goto tr171;
		case 351: goto tr84;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 607: goto tr107;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr170;
tr501:
	{te = p+1;}
	{act = 218;}
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
		case 334: goto st53;
		case 340: goto tr173;
		case 351: goto tr84;
		case 366: goto st53;
		case 372: goto tr173;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 590: goto tr503;
		case 596: goto tr504;
		case 607: goto tr107;
		case 622: goto tr503;
		case 628: goto tr504;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr503:
	{te = p+1;}
	{act = 218;}
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
		case 321: goto st54;
		case 351: goto tr84;
		case 353: goto st54;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr505;
		case 607: goto tr107;
		case 609: goto tr505;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr505:
	{te = p+1;}
	{act = 218;}
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
		case 338: goto st55;
		case 351: goto tr84;
		case 370: goto st55;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr506;
		case 607: goto tr107;
		case 626: goto tr506;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr506:
	{te = p+1;}
	{act = 218;}
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
		case 345: goto tr176;
		case 351: goto tr84;
		case 377: goto tr176;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 601: goto tr507;
		case 607: goto tr107;
		case 633: goto tr507;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr502:
	{te = p+1;}
	{act = 218;}
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
		case 335: goto st57;
		case 351: goto tr84;
		case 367: goto st57;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr508;
		case 607: goto tr107;
		case 623: goto tr508;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr508:
	{te = p+1;}
	{act = 218;}
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
		case 332: goto tr178;
		case 351: goto tr84;
		case 364: goto tr178;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr509;
		case 607: goto tr107;
		case 620: goto tr509;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr99:
	{te = p+1;}
	{act = 40;}
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
		case 321: goto st59;
		case 323: goto st66;
		case 336: goto st67;
		case 351: goto tr84;
		case 353: goto st59;
		case 355: goto st66;
		case 368: goto st67;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr510;
		case 579: goto tr511;
		case 592: goto tr512;
		case 607: goto tr107;
		case 609: goto tr510;
		case 611: goto tr511;
		case 624: goto tr512;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr179;
tr510:
	{te = p+1;}
	{act = 218;}
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
		case 332: goto st60;
		case 351: goto tr84;
		case 364: goto st60;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr513;
		case 607: goto tr107;
		case 620: goto tr513;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr513:
	{te = p+1;}
	{act = 218;}
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
		case 332: goto st61;
		case 351: goto tr84;
		case 364: goto st61;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr514;
		case 607: goto tr107;
		case 620: goto tr514;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr514:
	{te = p+1;}
	{act = 117;}
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
		case 351: goto st62;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 607: goto tr515;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr185;
tr515:
	{te = p+1;}
	{act = 218;}
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
		case 335: goto st63;
		case 336: goto st64;
		case 351: goto tr84;
		case 367: goto st63;
		case 368: goto st64;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr516;
		case 592: goto tr517;
		case 607: goto tr107;
		case 623: goto tr516;
		case 624: goto tr517;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr516:
	{te = p+1;}
	{act = 218;}
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
		case 346: goto tr189;
		case 351: goto tr84;
		case 378: goto tr189;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 602: goto tr518;
		case 607: goto tr107;
		case 634: goto tr518;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr517:
	{te = p+1;}
	{act = 218;}
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
		case 331: goto st65;
		case 351: goto tr84;
		case 363: goto st65;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 587: goto tr519;
		case 607: goto tr107;
		case 619: goto tr519;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr519:
	{te = p+1;}
	{act = 218;}
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
		case 327: goto tr191;
		case 351: goto tr84;
		case 359: goto tr191;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 583: goto tr520;
		case 607: goto tr107;
		case 615: goto tr520;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr511:
	{te = p+1;}
	{act = 218;}
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
		case 326: goto tr192;
		case 351: goto tr84;
		case 358: goto tr192;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr521;
		case 607: goto tr107;
		case 614: goto tr521;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr512:
	{te = p+1;}
	{act = 119;}
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
		case 324: goto st68;
		case 329: goto st69;
		case 332: goto tr196;
		case 351: goto tr84;
		case 356: goto st68;
		case 361: goto st69;
		case 364: goto tr196;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr522;
		case 585: goto tr523;
		case 588: goto tr524;
		case 607: goto tr107;
		case 612: goto tr522;
		case 617: goto tr523;
		case 620: goto tr524;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr193;
tr522:
	{te = p+1;}
	{act = 120;}
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
		case 338: goto tr198;
		case 351: goto tr84;
		case 370: goto tr198;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr525;
		case 607: goto tr107;
		case 626: goto tr525;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr197;
tr523:
	{te = p+1;}
	{act = 122;}
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
		case 338: goto tr200;
		case 351: goto tr84;
		case 370: goto tr200;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr526;
		case 607: goto tr107;
		case 626: goto tr526;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr199;
tr100:
	{te = p+1;}
	{act = 48;}
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
		case 321: goto st71;
		case 325: goto st72;
		case 329: goto tr204;
		case 330: goto st83;
		case 339: goto tr206;
		case 351: goto tr84;
		case 353: goto st71;
		case 357: goto st72;
		case 361: goto tr204;
		case 362: goto st83;
		case 371: goto tr206;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr527;
		case 581: goto tr528;
		case 585: goto tr529;
		case 586: goto tr530;
		case 595: goto tr531;
		case 607: goto tr107;
		case 609: goto tr527;
		case 613: goto tr528;
		case 617: goto tr529;
		case 618: goto tr530;
		case 627: goto tr531;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr201;
tr527:
	{te = p+1;}
	{act = 218;}
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
		case 321: goto tr207;
		case 351: goto tr84;
		case 353: goto tr207;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr532;
		case 607: goto tr107;
		case 609: goto tr532;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr528:
	{te = p+1;}
	{act = 64;}
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
		case 39: goto tr209;
		case 323: goto tr210;
		case 326: goto st73;
		case 351: goto tr84;
		case 355: goto tr210;
		case 358: goto st73;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr533;
		case 582: goto tr534;
		case 607: goto tr107;
		case 611: goto tr533;
		case 614: goto tr534;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr208;
tr534:
	{te = p+1;}
	{act = 218;}
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
		case 322: goto tr212;
		case 323: goto tr213;
		case 327: goto st74;
		case 329: goto st78;
		case 333: goto tr216;
		case 337: goto tr217;
		case 339: goto tr218;
		case 342: goto st80;
		case 343: goto tr220;
		case 351: goto tr84;
		case 354: goto tr212;
		case 355: goto tr213;
		case 359: goto st74;
		case 361: goto st78;
		case 365: goto tr216;
		case 369: goto tr217;
		case 371: goto tr218;
		case 374: goto st80;
		case 375: goto tr220;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 578: goto tr535;
		case 579: goto tr536;
		case 583: goto tr537;
		case 585: goto tr538;
		case 589: goto tr539;
		case 593: goto tr540;
		case 595: goto tr541;
		case 598: goto tr542;
		case 599: goto tr543;
		case 607: goto tr107;
		case 610: goto tr535;
		case 611: goto tr536;
		case 615: goto tr537;
		case 617: goto tr538;
		case 621: goto tr539;
		case 625: goto tr540;
		case 627: goto tr541;
		case 630: goto tr542;
		case 631: goto tr543;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr537:
	{te = p+1;}
	{act = 218;}
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
		case 338: goto st75;
		case 351: goto tr84;
		case 370: goto st75;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr544;
		case 607: goto tr107;
		case 626: goto tr544;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr544:
	{te = p+1;}
	{act = 218;}
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
		case 335: goto st76;
		case 351: goto tr84;
		case 367: goto st76;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr545;
		case 607: goto tr107;
		case 623: goto tr545;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr545:
	{te = p+1;}
	{act = 218;}
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
		case 341: goto st77;
		case 351: goto tr84;
		case 373: goto st77;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 597: goto tr546;
		case 607: goto tr107;
		case 629: goto tr546;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr546:
	{te = p+1;}
	{act = 218;}
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
		case 336: goto tr224;
		case 351: goto tr84;
		case 368: goto tr224;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 592: goto tr547;
		case 607: goto tr107;
		case 624: goto tr547;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr538:
	{te = p+1;}
	{act = 218;}
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
		case 334: goto st79;
		case 351: goto tr84;
		case 366: goto st79;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 590: goto tr548;
		case 607: goto tr107;
		case 622: goto tr548;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr548:
	{te = p+1;}
	{act = 218;}
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
		case 325: goto tr226;
		case 351: goto tr84;
		case 357: goto tr226;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr549;
		case 607: goto tr107;
		case 613: goto tr549;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr542:
	{te = p+1;}
	{act = 218;}
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
		case 321: goto st81;
		case 351: goto tr84;
		case 353: goto st81;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr550;
		case 607: goto tr107;
		case 609: goto tr550;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr550:
	{te = p+1;}
	{act = 218;}
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
		case 338: goto st82;
		case 351: goto tr84;
		case 370: goto st82;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr551;
		case 607: goto tr107;
		case 626: goto tr551;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr551:
	{te = p+1;}
	{act = 218;}
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
		case 339: goto tr229;
		case 351: goto tr84;
		case 371: goto tr229;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr552;
		case 607: goto tr107;
		case 627: goto tr552;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr530:
	{te = p+1;}
	{act = 218;}
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
		case 334: goto st84;
		case 351: goto tr84;
		case 366: goto st84;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 590: goto tr553;
		case 607: goto tr107;
		case 622: goto tr553;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr553:
	{te = p+1;}
	{act = 218;}
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
		case 346: goto tr231;
		case 351: goto tr84;
		case 378: goto tr231;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 602: goto tr554;
		case 607: goto tr107;
		case 634: goto tr554;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr531:
	{te = p+1;}
	{act = 218;}
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
		case 46: goto st18;
		case 351: goto tr84;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 607: goto tr107;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr101:
	{te = p+1;}
	{act = 49;}
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
		case 329: goto st87;
		case 332: goto st88;
		case 334: goto st90;
		case 344: goto st93;
		case 351: goto tr84;
		case 361: goto st87;
		case 364: goto st88;
		case 366: goto st90;
		case 376: goto st93;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 585: goto tr555;
		case 588: goto tr556;
		case 590: goto tr557;
		case 600: goto tr558;
		case 607: goto tr107;
		case 617: goto tr555;
		case 620: goto tr556;
		case 622: goto tr557;
		case 632: goto tr558;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr233;
tr555:
	{te = p+1;}
	{act = 129;}
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
		case 338: goto tr239;
		case 351: goto tr84;
		case 370: goto tr239;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr559;
		case 607: goto tr107;
		case 626: goto tr559;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr238;
tr556:
	{te = p+1;}
	{act = 218;}
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
		case 339: goto st89;
		case 351: goto tr84;
		case 371: goto st89;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr560;
		case 607: goto tr107;
		case 627: goto tr560;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr560:
	{te = p+1;}
	{act = 218;}
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
		case 325: goto tr241;
		case 351: goto tr84;
		case 357: goto tr241;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr561;
		case 607: goto tr107;
		case 613: goto tr561;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr557:
	{te = p+1;}
	{act = 218;}
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
		case 324: goto st91;
		case 351: goto tr84;
		case 356: goto st91;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr562;
		case 607: goto tr107;
		case 612: goto tr562;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr562:
	{te = p+1;}
	{act = 218;}
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
		case 329: goto st92;
		case 351: goto tr84;
		case 361: goto st92;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 585: goto tr563;
		case 607: goto tr107;
		case 617: goto tr563;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr563:
	{te = p+1;}
	{act = 218;}
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
		case 326: goto tr244;
		case 351: goto tr84;
		case 358: goto tr244;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr564;
		case 607: goto tr107;
		case 614: goto tr564;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr558:
	{te = p+1;}
	{act = 130;}
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
		case 340: goto st94;
		case 344: goto tr247;
		case 351: goto tr84;
		case 372: goto st94;
		case 376: goto tr247;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr565;
		case 600: goto tr566;
		case 607: goto tr107;
		case 628: goto tr565;
		case 632: goto tr566;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr245;
tr565:
	{te = p+1;}
	{act = 218;}
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
		case 325: goto st95;
		case 351: goto tr84;
		case 357: goto st95;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr567;
		case 607: goto tr107;
		case 613: goto tr567;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr567:
	{te = p+1;}
	{act = 218;}
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
		case 338: goto st96;
		case 351: goto tr84;
		case 370: goto st96;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr568;
		case 607: goto tr107;
		case 626: goto tr568;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr568:
	{te = p+1;}
	{act = 218;}
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
		case 334: goto tr250;
		case 351: goto tr84;
		case 366: goto tr250;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 590: goto tr569;
		case 607: goto tr107;
		case 622: goto tr569;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr102:
	{te = p+1;}
	{act = 57;}
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
		case 336: goto st98;
		case 351: goto tr84;
		case 368: goto st98;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 592: goto tr570;
		case 607: goto tr107;
		case 624: goto tr570;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr251;
tr570:
	{te = p+1;}
	{act = 218;}
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
		case 336: goto tr253;
		case 351: goto tr84;
		case 368: goto tr253;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 592: goto tr571;
		case 607: goto tr107;
		case 624: goto tr571;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr103:
	{te = p+1;}
	{act = 218;}
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
		case 332: goto st100;
		case 351: goto tr84;
		case 364: goto st100;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr572;
		case 607: goto tr107;
		case 620: goto tr572;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr572:
	{te = p+1;}
	{act = 218;}
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
		case 335: goto st101;
		case 351: goto tr84;
		case 367: goto st101;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr573;
		case 607: goto tr107;
		case 623: goto tr573;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr573:
	{te = p+1;}
	{act = 218;}
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
		case 322: goto st102;
		case 351: goto tr84;
		case 354: goto st102;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 578: goto tr574;
		case 607: goto tr107;
		case 610: goto tr574;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr574:
	{te = p+1;}
	{act = 218;}
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
		case 321: goto st103;
		case 351: goto tr84;
		case 353: goto st103;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr575;
		case 607: goto tr107;
		case 609: goto tr575;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr575:
	{te = p+1;}
	{act = 218;}
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
		case 332: goto tr258;
		case 351: goto tr84;
		case 364: goto tr258;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr576;
		case 607: goto tr107;
		case 620: goto tr576;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr104:
	{te = p+1;}
	{act = 50;}
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
		case 321: goto st105;
		case 332: goto st107;
		case 351: goto tr84;
		case 353: goto st105;
		case 364: goto st107;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr577;
		case 588: goto tr578;
		case 607: goto tr107;
		case 609: goto tr577;
		case 620: goto tr578;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr259;
tr577:
	{te = p+1;}
	{act = 218;}
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
		case 332: goto st106;
		case 351: goto tr84;
		case 364: goto st106;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr579;
		case 607: goto tr107;
		case 620: goto tr579;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr579:
	{te = p+1;}
	{act = 218;}
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
		case 340: goto tr263;
		case 351: goto tr84;
		case 372: goto tr263;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr580;
		case 607: goto tr107;
		case 628: goto tr580;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr578:
	{te = p+1;}
	{act = 65;}
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
		case 39: goto tr265;
		case 351: goto tr84;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 607: goto tr107;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr264;
tr105:
	{te = p+1;}
	{act = 58;}
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
		case 324: goto st109;
		case 326: goto st111;
		case 329: goto st117;
		case 333: goto tr270;
		case 334: goto st118;
		case 335: goto st128;
		case 336: goto st129;
		case 344: goto st134;
		case 345: goto st135;
		case 351: goto tr84;
		case 356: goto st109;
		case 358: goto st111;
		case 361: goto st117;
		case 365: goto tr270;
		case 366: goto st118;
		case 367: goto st128;
		case 368: goto st129;
		case 376: goto st134;
		case 377: goto st135;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr581;
		case 582: goto tr582;
		case 585: goto tr583;
		case 589: goto tr584;
		case 590: goto tr585;
		case 591: goto tr586;
		case 592: goto tr587;
		case 600: goto tr588;
		case 601: goto tr589;
		case 607: goto tr107;
		case 612: goto tr581;
		case 614: goto tr582;
		case 617: goto tr583;
		case 621: goto tr584;
		case 622: goto tr585;
		case 623: goto tr586;
		case 624: goto tr587;
		case 632: goto tr588;
		case 633: goto tr589;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr266;
tr581:
	{te = p+1;}
	{act = 218;}
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
		case 325: goto st110;
		case 351: goto tr84;
		case 357: goto st110;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr590;
		case 607: goto tr107;
		case 613: goto tr590;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr590:
	{te = p+1;}
	{act = 218;}
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
		case 340: goto tr277;
		case 351: goto tr84;
		case 372: goto tr277;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr591;
		case 607: goto tr107;
		case 628: goto tr591;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr582:
	{te = p+1;}
	{act = 97;}
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
		case 324: goto st112;
		case 334: goto st114;
		case 351: goto tr84;
		case 356: goto st112;
		case 366: goto st114;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr592;
		case 590: goto tr593;
		case 607: goto tr107;
		case 612: goto tr592;
		case 622: goto tr593;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr278;
tr592:
	{te = p+1;}
	{act = 218;}
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
		case 325: goto st113;
		case 351: goto tr84;
		case 357: goto st113;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr594;
		case 607: goto tr107;
		case 613: goto tr594;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr594:
	{te = p+1;}
	{act = 218;}
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
		case 326: goto tr282;
		case 351: goto tr84;
		case 358: goto tr282;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr595;
		case 607: goto tr107;
		case 614: goto tr595;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr593:
	{te = p+1;}
	{act = 218;}
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
		case 324: goto st115;
		case 351: goto tr84;
		case 356: goto st115;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr596;
		case 607: goto tr107;
		case 612: goto tr596;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr596:
	{te = p+1;}
	{act = 218;}
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
		case 325: goto st116;
		case 351: goto tr84;
		case 357: goto st116;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr597;
		case 607: goto tr107;
		case 613: goto tr597;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr597:
	{te = p+1;}
	{act = 218;}
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
		case 326: goto tr285;
		case 351: goto tr84;
		case 358: goto tr285;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr598;
		case 607: goto tr107;
		case 614: goto tr598;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr583:
	{te = p+1;}
	{act = 218;}
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
		case 338: goto tr286;
		case 351: goto tr84;
		case 370: goto tr286;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr599;
		case 607: goto tr107;
		case 626: goto tr599;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr585:
	{te = p+1;}
	{act = 134;}
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
		case 304: goto tr288;
		case 323: goto st119;
		case 324: goto st123;
		case 329: goto st124;
		case 342: goto st125;
		case 351: goto tr84;
		case 355: goto st119;
		case 356: goto st123;
		case 361: goto st124;
		case 374: goto st125;
		case 521: goto st20;
		case 544: goto st20;
		case 560: goto tr600;
		case 570: goto tr37;
		case 579: goto tr601;
		case 580: goto tr602;
		case 585: goto tr603;
		case 598: goto tr604;
		case 607: goto tr107;
		case 611: goto tr601;
		case 612: goto tr602;
		case 617: goto tr603;
		case 630: goto tr604;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 305 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 561 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr287;
tr601:
	{te = p+1;}
	{act = 135;}
	goto st308;
st308:
	if ( ++p == pe )
		goto _test_eof308;
case 308:
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
		case 332: goto st120;
		case 351: goto tr84;
		case 364: goto st120;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr605;
		case 607: goto tr107;
		case 620: goto tr605;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr293;
tr605:
	{te = p+1;}
	{act = 218;}
	goto st309;
st309:
	if ( ++p == pe )
		goto _test_eof309;
case 309:
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
		case 341: goto st121;
		case 351: goto tr84;
		case 373: goto st121;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 597: goto tr606;
		case 607: goto tr107;
		case 629: goto tr606;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr606:
	{te = p+1;}
	{act = 218;}
	goto st310;
st310:
	if ( ++p == pe )
		goto _test_eof310;
case 310:
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
		case 324: goto st122;
		case 351: goto tr84;
		case 356: goto st122;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr607;
		case 607: goto tr107;
		case 612: goto tr607;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr607:
	{te = p+1;}
	{act = 218;}
	goto st311;
st311:
	if ( ++p == pe )
		goto _test_eof311;
case 311:
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
		case 325: goto tr297;
		case 351: goto tr84;
		case 357: goto tr297;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr608;
		case 607: goto tr107;
		case 613: goto tr608;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr602:
	{te = p+1;}
	{act = 136;}
	goto st312;
st312:
	if ( ++p == pe )
		goto _test_eof312;
case 312:
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
		case 338: goto tr299;
		case 351: goto tr84;
		case 370: goto tr299;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr609;
		case 607: goto tr107;
		case 626: goto tr609;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr298;
tr603:
	{te = p+1;}
	{act = 138;}
	goto st313;
st313:
	if ( ++p == pe )
		goto _test_eof313;
case 313:
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
		case 338: goto tr301;
		case 351: goto tr84;
		case 370: goto tr301;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr610;
		case 607: goto tr107;
		case 626: goto tr610;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr300;
tr604:
	{te = p+1;}
	{act = 218;}
	goto st314;
st314:
	if ( ++p == pe )
		goto _test_eof314;
case 314:
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
		case 335: goto st126;
		case 351: goto tr84;
		case 367: goto st126;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr611;
		case 607: goto tr107;
		case 623: goto tr611;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr611:
	{te = p+1;}
	{act = 218;}
	goto st315;
st315:
	if ( ++p == pe )
		goto _test_eof315;
case 315:
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
		case 331: goto st127;
		case 351: goto tr84;
		case 363: goto st127;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 587: goto tr612;
		case 607: goto tr107;
		case 619: goto tr612;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr612:
	{te = p+1;}
	{act = 218;}
	goto st316;
st316:
	if ( ++p == pe )
		goto _test_eof316;
case 316:
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
		case 325: goto tr304;
		case 351: goto tr84;
		case 357: goto tr304;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr613;
		case 607: goto tr107;
		case 613: goto tr613;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr586:
	{te = p+1;}
	{act = 218;}
	goto st317;
st317:
	if ( ++p == pe )
		goto _test_eof317;
case 317:
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
		case 325: goto tr305;
		case 329: goto tr306;
		case 351: goto tr84;
		case 357: goto tr305;
		case 361: goto tr306;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr614;
		case 585: goto tr615;
		case 607: goto tr107;
		case 613: goto tr614;
		case 617: goto tr615;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr587:
	{te = p+1;}
	{act = 70;}
	goto st318;
st318:
	if ( ++p == pe )
		goto _test_eof318;
case 318:
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
		case 338: goto st130;
		case 339: goto st132;
		case 351: goto tr84;
		case 370: goto st130;
		case 371: goto st132;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr616;
		case 595: goto tr617;
		case 607: goto tr107;
		case 626: goto tr616;
		case 627: goto tr617;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr307;
tr616:
	{te = p+1;}
	{act = 218;}
	goto st319;
st319:
	if ( ++p == pe )
		goto _test_eof319;
case 319:
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
		case 325: goto st131;
		case 351: goto tr84;
		case 357: goto st131;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr618;
		case 607: goto tr107;
		case 613: goto tr618;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr618:
	{te = p+1;}
	{act = 218;}
	goto st320;
st320:
	if ( ++p == pe )
		goto _test_eof320;
case 320:
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
		case 339: goto tr311;
		case 351: goto tr84;
		case 371: goto tr311;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr619;
		case 607: goto tr107;
		case 627: goto tr619;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr617:
	{te = p+1;}
	{act = 218;}
	goto st321;
st321:
	if ( ++p == pe )
		goto _test_eof321;
case 321:
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
		case 325: goto st133;
		case 351: goto tr84;
		case 357: goto st133;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr620;
		case 607: goto tr107;
		case 613: goto tr620;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr620:
	{te = p+1;}
	{act = 218;}
	goto st322;
st322:
	if ( ++p == pe )
		goto _test_eof322;
case 322:
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
		case 340: goto tr313;
		case 351: goto tr84;
		case 372: goto tr313;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr621;
		case 607: goto tr107;
		case 628: goto tr621;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr588:
	{te = p+1;}
	{act = 66;}
	goto st323;
st323:
	if ( ++p == pe )
		goto _test_eof323;
case 323:
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
		case 328: goto tr315;
		case 332: goto tr316;
		case 351: goto tr84;
		case 360: goto tr315;
		case 364: goto tr316;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 584: goto tr622;
		case 588: goto tr623;
		case 607: goto tr107;
		case 616: goto tr622;
		case 620: goto tr623;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr314;
tr589:
	{te = p+1;}
	{act = 67;}
	goto st324;
st324:
	if ( ++p == pe )
		goto _test_eof324;
case 324:
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
		case 328: goto tr318;
		case 332: goto tr319;
		case 351: goto tr84;
		case 360: goto tr318;
		case 364: goto tr319;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 584: goto tr624;
		case 588: goto tr625;
		case 607: goto tr107;
		case 616: goto tr624;
		case 620: goto tr625;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr317;
tr106:
	{te = p+1;}
	{act = 218;}
	goto st325;
st325:
	if ( ++p == pe )
		goto _test_eof325;
case 325:
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
		case 336: goto tr320;
		case 338: goto tr321;
		case 351: goto tr84;
		case 368: goto tr320;
		case 370: goto tr321;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 592: goto tr626;
		case 594: goto tr627;
		case 607: goto tr107;
		case 624: goto tr626;
		case 626: goto tr627;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr108:
	{te = p+1;}
	{act = 53;}
	goto st326;
st326:
	if ( ++p == pe )
		goto _test_eof326;
case 326:
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
		case 324: goto st138;
		case 329: goto st143;
		case 335: goto tr325;
		case 339: goto st145;
		case 346: goto tr327;
		case 351: goto tr84;
		case 356: goto st138;
		case 361: goto st143;
		case 367: goto tr325;
		case 371: goto st145;
		case 378: goto tr327;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr628;
		case 585: goto tr629;
		case 591: goto tr630;
		case 595: goto tr631;
		case 602: goto tr632;
		case 607: goto tr107;
		case 612: goto tr628;
		case 617: goto tr629;
		case 623: goto tr630;
		case 627: goto tr631;
		case 634: goto tr632;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr322;
tr628:
	{te = p+1;}
	{act = 142;}
	goto st327;
st327:
	if ( ++p == pe )
		goto _test_eof327;
case 327:
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
		case 324: goto st139;
		case 329: goto st141;
		case 336: goto tr331;
		case 351: goto tr84;
		case 356: goto st139;
		case 361: goto st141;
		case 368: goto tr331;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr633;
		case 585: goto tr634;
		case 592: goto tr635;
		case 607: goto tr107;
		case 612: goto tr633;
		case 617: goto tr634;
		case 624: goto tr635;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr328;
tr633:
	{te = p+1;}
	{act = 143;}
	goto st328;
st328:
	if ( ++p == pe )
		goto _test_eof328;
case 328:
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
		case 338: goto tr333;
		case 339: goto st140;
		case 351: goto tr84;
		case 370: goto tr333;
		case 371: goto st140;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr636;
		case 595: goto tr637;
		case 607: goto tr107;
		case 626: goto tr636;
		case 627: goto tr637;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr332;
tr637:
	{te = p+1;}
	{act = 218;}
	goto st329;
st329:
	if ( ++p == pe )
		goto _test_eof329;
case 329:
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
		case 338: goto tr335;
		case 351: goto tr84;
		case 370: goto tr335;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr638;
		case 607: goto tr107;
		case 626: goto tr638;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr634:
	{te = p+1;}
	{act = 145;}
	goto st330;
st330:
	if ( ++p == pe )
		goto _test_eof330;
case 330:
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
		case 338: goto tr337;
		case 339: goto st142;
		case 351: goto tr84;
		case 370: goto tr337;
		case 371: goto st142;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr639;
		case 595: goto tr640;
		case 607: goto tr107;
		case 626: goto tr639;
		case 627: goto tr640;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr336;
tr640:
	{te = p+1;}
	{act = 218;}
	goto st331;
st331:
	if ( ++p == pe )
		goto _test_eof331;
case 331:
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
		case 338: goto tr339;
		case 351: goto tr84;
		case 370: goto tr339;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr641;
		case 607: goto tr107;
		case 626: goto tr641;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr629:
	{te = p+1;}
	{act = 218;}
	goto st332;
st332:
	if ( ++p == pe )
		goto _test_eof332;
case 332:
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
		case 334: goto st144;
		case 351: goto tr84;
		case 366: goto st144;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 590: goto tr642;
		case 607: goto tr107;
		case 622: goto tr642;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr642:
	{te = p+1;}
	{act = 218;}
	goto st333;
st333:
	if ( ++p == pe )
		goto _test_eof333;
case 333:
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
		case 325: goto tr341;
		case 351: goto tr84;
		case 357: goto tr341;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr643;
		case 607: goto tr107;
		case 613: goto tr643;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr631:
	{te = p+1;}
	{act = 218;}
	goto st334;
st334:
	if ( ++p == pe )
		goto _test_eof334;
case 334:
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
		case 324: goto st146;
		case 329: goto st148;
		case 340: goto st150;
		case 351: goto tr84;
		case 356: goto st146;
		case 361: goto st148;
		case 372: goto st150;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr644;
		case 585: goto tr645;
		case 596: goto tr646;
		case 607: goto tr107;
		case 612: goto tr644;
		case 617: goto tr645;
		case 628: goto tr646;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr644:
	{te = p+1;}
	{act = 218;}
	goto st335;
st335:
	if ( ++p == pe )
		goto _test_eof335;
case 335:
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
		case 324: goto st147;
		case 338: goto tr346;
		case 351: goto tr84;
		case 356: goto st147;
		case 370: goto tr346;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr647;
		case 594: goto tr648;
		case 607: goto tr107;
		case 612: goto tr647;
		case 626: goto tr648;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr647:
	{te = p+1;}
	{act = 218;}
	goto st336;
st336:
	if ( ++p == pe )
		goto _test_eof336;
case 336:
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
		case 338: goto tr347;
		case 351: goto tr84;
		case 370: goto tr347;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr649;
		case 607: goto tr107;
		case 626: goto tr649;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr645:
	{te = p+1;}
	{act = 218;}
	goto st337;
st337:
	if ( ++p == pe )
		goto _test_eof337;
case 337:
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
		case 324: goto st149;
		case 338: goto tr349;
		case 351: goto tr84;
		case 356: goto st149;
		case 370: goto tr349;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr650;
		case 594: goto tr651;
		case 607: goto tr107;
		case 612: goto tr650;
		case 626: goto tr651;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr650:
	{te = p+1;}
	{act = 218;}
	goto st338;
st338:
	if ( ++p == pe )
		goto _test_eof338;
case 338:
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
		case 338: goto tr350;
		case 351: goto tr84;
		case 370: goto tr350;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr652;
		case 607: goto tr107;
		case 626: goto tr652;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr646:
	{te = p+1;}
	{act = 218;}
	goto st339;
st339:
	if ( ++p == pe )
		goto _test_eof339;
case 339:
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
		case 335: goto st151;
		case 351: goto tr84;
		case 367: goto st151;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr653;
		case 607: goto tr107;
		case 623: goto tr653;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr653:
	{te = p+1;}
	{act = 218;}
	goto st340;
st340:
	if ( ++p == pe )
		goto _test_eof340;
case 340:
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
		case 326: goto st152;
		case 334: goto tr353;
		case 351: goto tr84;
		case 358: goto st152;
		case 366: goto tr353;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr654;
		case 590: goto tr655;
		case 607: goto tr107;
		case 614: goto tr654;
		case 622: goto tr655;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr654:
	{te = p+1;}
	{act = 218;}
	goto st341;
st341:
	if ( ++p == pe )
		goto _test_eof341;
case 341:
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
		case 326: goto tr354;
		case 351: goto tr84;
		case 358: goto tr354;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr656;
		case 607: goto tr107;
		case 614: goto tr656;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr109:
	{te = p+1;}
	{act = 44;}
	goto st342;
st342:
	if ( ++p == pe )
		goto _test_eof342;
case 342:
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
		case 332: goto st154;
		case 335: goto st155;
		case 341: goto st159;
		case 351: goto tr84;
		case 364: goto st154;
		case 367: goto st155;
		case 373: goto st159;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr657;
		case 591: goto tr658;
		case 597: goto tr659;
		case 607: goto tr107;
		case 620: goto tr657;
		case 623: goto tr658;
		case 629: goto tr659;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr355;
tr657:
	{te = p+1;}
	{act = 218;}
	goto st343;
st343:
	if ( ++p == pe )
		goto _test_eof343;
case 343:
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
		case 340: goto tr359;
		case 351: goto tr84;
		case 372: goto tr359;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr660;
		case 607: goto tr107;
		case 628: goto tr660;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr658:
	{te = p+1;}
	{act = 218;}
	goto st344;
st344:
	if ( ++p == pe )
		goto _test_eof344;
case 344:
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
		case 324: goto st156;
		case 351: goto tr84;
		case 356: goto st156;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr661;
		case 607: goto tr107;
		case 612: goto tr661;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr661:
	{te = p+1;}
	{act = 218;}
	goto st345;
st345:
	if ( ++p == pe )
		goto _test_eof345;
case 345:
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
		case 341: goto st157;
		case 351: goto tr84;
		case 373: goto st157;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 597: goto tr662;
		case 607: goto tr107;
		case 629: goto tr662;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr662:
	{te = p+1;}
	{act = 218;}
	goto st346;
st346:
	if ( ++p == pe )
		goto _test_eof346;
case 346:
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
		case 332: goto st158;
		case 351: goto tr84;
		case 364: goto st158;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr663;
		case 607: goto tr107;
		case 620: goto tr663;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr663:
	{te = p+1;}
	{act = 218;}
	goto st347;
st347:
	if ( ++p == pe )
		goto _test_eof347;
case 347:
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
		case 325: goto tr363;
		case 351: goto tr84;
		case 357: goto tr363;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr664;
		case 607: goto tr107;
		case 613: goto tr664;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr659:
	{te = p+1;}
	{act = 218;}
	goto st348;
st348:
	if ( ++p == pe )
		goto _test_eof348;
case 348:
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
		case 332: goto tr364;
		case 351: goto tr84;
		case 364: goto tr364;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr665;
		case 607: goto tr107;
		case 620: goto tr665;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr110:
	{te = p+1;}
	{act = 218;}
	goto st349;
st349:
	if ( ++p == pe )
		goto _test_eof349;
case 349:
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
		case 323: goto tr365;
		case 325: goto st161;
		case 335: goto st162;
		case 346: goto tr368;
		case 351: goto tr84;
		case 355: goto tr365;
		case 357: goto st161;
		case 367: goto st162;
		case 378: goto tr368;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr666;
		case 581: goto tr667;
		case 591: goto tr668;
		case 602: goto tr669;
		case 607: goto tr107;
		case 611: goto tr666;
		case 613: goto tr667;
		case 623: goto tr668;
		case 634: goto tr669;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 345 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 377 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 601 ) {
			if ( 609 <= _widec && _widec <= 633 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr667:
	{te = p+1;}
	{act = 218;}
	goto st350;
st350:
	if ( ++p == pe )
		goto _test_eof350;
case 350:
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
		case 327: goto tr369;
		case 351: goto tr84;
		case 359: goto tr369;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 583: goto tr670;
		case 607: goto tr107;
		case 615: goto tr670;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr668:
	{te = p+1;}
	{act = 218;}
	goto st351;
st351:
	if ( ++p == pe )
		goto _test_eof351;
case 351:
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
		case 336: goto tr370;
		case 351: goto tr84;
		case 368: goto tr370;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 592: goto tr671;
		case 607: goto tr107;
		case 624: goto tr671;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr111:
	{te = p+1;}
	{act = 218;}
	goto st352;
st352:
	if ( ++p == pe )
		goto _test_eof352;
case 352:
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
		case 338: goto st164;
		case 340: goto st165;
		case 341: goto st170;
		case 351: goto tr84;
		case 370: goto st164;
		case 372: goto st165;
		case 373: goto st170;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr672;
		case 596: goto tr673;
		case 597: goto tr674;
		case 607: goto tr107;
		case 626: goto tr672;
		case 628: goto tr673;
		case 629: goto tr674;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr672:
	{te = p+1;}
	{act = 149;}
	goto st353;
st353:
	if ( ++p == pe )
		goto _test_eof353;
case 353:
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
		case 327: goto tr375;
		case 351: goto tr84;
		case 359: goto tr375;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 583: goto tr675;
		case 607: goto tr107;
		case 615: goto tr675;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr374;
tr673:
	{te = p+1;}
	{act = 218;}
	goto st354;
st354:
	if ( ++p == pe )
		goto _test_eof354;
case 354:
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
		case 329: goto st168;
		case 351: goto tr84;
		case 356: goto st166;
		case 361: goto st168;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr676;
		case 585: goto tr677;
		case 607: goto tr107;
		case 612: goto tr676;
		case 617: goto tr677;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr676:
	{te = p+1;}
	{act = 218;}
	goto st355;
st355:
	if ( ++p == pe )
		goto _test_eof355;
case 355:
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
		case 333: goto st167;
		case 338: goto tr379;
		case 351: goto tr84;
		case 365: goto st167;
		case 370: goto tr379;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 589: goto tr678;
		case 594: goto tr679;
		case 607: goto tr107;
		case 621: goto tr678;
		case 626: goto tr679;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr678:
	{te = p+1;}
	{act = 183;}
	goto st356;
st356:
	if ( ++p == pe )
		goto _test_eof356;
case 356:
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
		case 338: goto tr381;
		case 351: goto tr84;
		case 370: goto tr381;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr680;
		case 607: goto tr107;
		case 626: goto tr680;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr380;
tr677:
	{te = p+1;}
	{act = 218;}
	goto st357;
st357:
	if ( ++p == pe )
		goto _test_eof357;
case 357:
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
		case 333: goto st169;
		case 338: goto tr383;
		case 351: goto tr84;
		case 365: goto st169;
		case 370: goto tr383;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 589: goto tr681;
		case 594: goto tr682;
		case 607: goto tr107;
		case 621: goto tr681;
		case 626: goto tr682;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr681:
	{te = p+1;}
	{act = 185;}
	goto st358;
st358:
	if ( ++p == pe )
		goto _test_eof358;
case 358:
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
		case 338: goto tr385;
		case 351: goto tr84;
		case 370: goto tr385;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr683;
		case 607: goto tr107;
		case 626: goto tr683;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr384;
tr674:
	{te = p+1;}
	{act = 218;}
	goto st359;
st359:
	if ( ++p == pe )
		goto _test_eof359;
case 359:
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
		case 340: goto st171;
		case 351: goto tr84;
		case 372: goto st171;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr684;
		case 607: goto tr107;
		case 628: goto tr684;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr684:
	{te = p+1;}
	{act = 152;}
	goto st360;
st360:
	if ( ++p == pe )
		goto _test_eof360;
case 360:
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
		case 304: goto tr388;
		case 324: goto tr389;
		case 329: goto tr390;
		case 351: goto tr84;
		case 356: goto tr389;
		case 361: goto tr390;
		case 521: goto st20;
		case 544: goto st20;
		case 560: goto tr685;
		case 570: goto tr37;
		case 580: goto tr686;
		case 585: goto tr687;
		case 607: goto tr107;
		case 612: goto tr686;
		case 617: goto tr687;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 305 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 561 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr387;
tr112:
	{te = p+1;}
	{act = 43;}
	goto st361;
st361:
	if ( ++p == pe )
		goto _test_eof361;
case 361:
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
		case 325: goto tr392;
		case 335: goto st173;
		case 341: goto st174;
		case 351: goto tr84;
		case 357: goto tr392;
		case 367: goto st173;
		case 373: goto st174;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr688;
		case 591: goto tr689;
		case 597: goto tr690;
		case 607: goto tr107;
		case 613: goto tr688;
		case 623: goto tr689;
		case 629: goto tr690;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr391;
tr689:
	{te = p+1;}
	{act = 41;}
	goto st362;
st362:
	if ( ++p == pe )
		goto _test_eof362;
case 362:
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
		case 336: goto tr396;
		case 351: goto tr84;
		case 368: goto tr396;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 592: goto tr691;
		case 607: goto tr107;
		case 624: goto tr691;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr395;
tr690:
	{te = p+1;}
	{act = 218;}
	goto st363;
st363:
	if ( ++p == pe )
		goto _test_eof363;
case 363:
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
		case 322: goto st175;
		case 339: goto st178;
		case 351: goto tr84;
		case 354: goto st175;
		case 371: goto st178;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 578: goto tr692;
		case 595: goto tr693;
		case 607: goto tr107;
		case 610: goto tr692;
		case 627: goto tr693;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr692:
	{te = p+1;}
	{act = 218;}
	goto st364;
st364:
	if ( ++p == pe )
		goto _test_eof364;
case 364:
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
		case 332: goto st176;
		case 351: goto tr84;
		case 364: goto st176;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr694;
		case 607: goto tr107;
		case 620: goto tr694;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr694:
	{te = p+1;}
	{act = 218;}
	goto st365;
st365:
	if ( ++p == pe )
		goto _test_eof365;
case 365:
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
		case 329: goto st177;
		case 351: goto tr84;
		case 361: goto st177;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 585: goto tr695;
		case 607: goto tr107;
		case 617: goto tr695;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr695:
	{te = p+1;}
	{act = 218;}
	goto st366;
st366:
	if ( ++p == pe )
		goto _test_eof366;
case 366:
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
		case 323: goto tr401;
		case 351: goto tr84;
		case 355: goto tr401;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr696;
		case 607: goto tr107;
		case 611: goto tr696;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr693:
	{te = p+1;}
	{act = 218;}
	goto st367;
st367:
	if ( ++p == pe )
		goto _test_eof367;
case 367:
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
		case 328: goto tr402;
		case 351: goto tr84;
		case 360: goto tr402;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 584: goto tr697;
		case 607: goto tr107;
		case 616: goto tr697;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr113:
	{te = p+1;}
	{act = 60;}
	goto st368;
st368:
	if ( ++p == pe )
		goto _test_eof368;
case 368:
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
		case 324: goto st180;
		case 325: goto st184;
		case 332: goto st186;
		case 338: goto st188;
		case 339: goto st190;
		case 351: goto tr84;
		case 356: goto st180;
		case 357: goto st184;
		case 364: goto st186;
		case 370: goto st188;
		case 371: goto st190;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr698;
		case 581: goto tr699;
		case 588: goto tr700;
		case 594: goto tr701;
		case 595: goto tr702;
		case 607: goto tr107;
		case 612: goto tr698;
		case 613: goto tr699;
		case 620: goto tr700;
		case 626: goto tr701;
		case 627: goto tr702;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr403;
tr698:
	{te = p+1;}
	{act = 218;}
	goto st369;
st369:
	if ( ++p == pe )
		goto _test_eof369;
case 369:
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
		case 333: goto st181;
		case 351: goto tr84;
		case 365: goto st181;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 589: goto tr703;
		case 607: goto tr107;
		case 621: goto tr703;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr703:
	{te = p+1;}
	{act = 218;}
	goto st370;
st370:
	if ( ++p == pe )
		goto _test_eof370;
case 370:
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
		case 335: goto st182;
		case 351: goto tr84;
		case 367: goto st182;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr704;
		case 607: goto tr107;
		case 623: goto tr704;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr704:
	{te = p+1;}
	{act = 218;}
	goto st371;
st371:
	if ( ++p == pe )
		goto _test_eof371;
case 371:
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
		case 324: goto st183;
		case 351: goto tr84;
		case 356: goto st183;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr705;
		case 607: goto tr107;
		case 612: goto tr705;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr705:
	{te = p+1;}
	{act = 218;}
	goto st372;
st372:
	if ( ++p == pe )
		goto _test_eof372;
case 372:
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
		case 325: goto tr412;
		case 351: goto tr84;
		case 357: goto tr412;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr706;
		case 607: goto tr107;
		case 613: goto tr706;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr699:
	{te = p+1;}
	{act = 218;}
	goto st373;
st373:
	if ( ++p == pe )
		goto _test_eof373;
case 373:
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
		case 339: goto tr413;
		case 340: goto st185;
		case 351: goto tr84;
		case 371: goto tr413;
		case 372: goto st185;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr707;
		case 596: goto tr708;
		case 607: goto tr107;
		case 627: goto tr707;
		case 628: goto tr708;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr708:
	{te = p+1;}
	{act = 158;}
	goto st374;
st374:
	if ( ++p == pe )
		goto _test_eof374;
case 374:
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
		case 329: goto tr416;
		case 334: goto tr417;
		case 351: goto tr84;
		case 361: goto tr416;
		case 366: goto tr417;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 585: goto tr709;
		case 590: goto tr710;
		case 607: goto tr107;
		case 617: goto tr709;
		case 622: goto tr710;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr415;
tr700:
	{te = p+1;}
	{act = 161;}
	goto st375;
st375:
	if ( ++p == pe )
		goto _test_eof375;
case 375:
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
		case 321: goto tr419;
		case 323: goto st187;
		case 324: goto tr421;
		case 351: goto tr84;
		case 353: goto tr419;
		case 355: goto st187;
		case 356: goto tr421;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr711;
		case 579: goto tr712;
		case 580: goto tr713;
		case 607: goto tr107;
		case 609: goto tr711;
		case 611: goto tr712;
		case 612: goto tr713;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr418;
tr712:
	{te = p+1;}
	{act = 163;}
	goto st376;
st376:
	if ( ++p == pe )
		goto _test_eof376;
case 376:
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
		case 321: goto tr423;
		case 351: goto tr84;
		case 353: goto tr423;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr714;
		case 607: goto tr107;
		case 609: goto tr714;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr422;
tr701:
	{te = p+1;}
	{act = 166;}
	goto st377;
st377:
	if ( ++p == pe )
		goto _test_eof377;
case 377:
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
		case 321: goto tr425;
		case 323: goto st189;
		case 324: goto tr427;
		case 351: goto tr84;
		case 353: goto tr425;
		case 355: goto st189;
		case 356: goto tr427;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr715;
		case 579: goto tr716;
		case 580: goto tr717;
		case 607: goto tr107;
		case 609: goto tr715;
		case 611: goto tr716;
		case 612: goto tr717;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr424;
tr716:
	{te = p+1;}
	{act = 168;}
	goto st378;
st378:
	if ( ++p == pe )
		goto _test_eof378;
case 378:
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
		case 321: goto tr429;
		case 351: goto tr84;
		case 353: goto tr429;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr718;
		case 607: goto tr107;
		case 609: goto tr718;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr428;
tr702:
	{te = p+1;}
	{act = 218;}
	goto st379;
st379:
	if ( ++p == pe )
		goto _test_eof379;
case 379:
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
		case 340: goto tr430;
		case 351: goto tr84;
		case 372: goto tr430;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr719;
		case 607: goto tr107;
		case 628: goto tr719;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr114:
	{te = p+1;}
	{act = 218;}
	goto st380;
st380:
	if ( ++p == pe )
		goto _test_eof380;
case 380:
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
		case 322: goto st192;
		case 323: goto st193;
		case 325: goto st194;
		case 332: goto st202;
		case 336: goto tr435;
		case 338: goto st203;
		case 341: goto st204;
		case 345: goto st207;
		case 351: goto tr84;
		case 354: goto st192;
		case 355: goto st193;
		case 357: goto st194;
		case 364: goto st202;
		case 368: goto tr435;
		case 370: goto st203;
		case 373: goto st204;
		case 377: goto st207;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 578: goto tr720;
		case 579: goto tr721;
		case 581: goto tr722;
		case 588: goto tr723;
		case 592: goto tr724;
		case 594: goto tr725;
		case 597: goto tr726;
		case 601: goto tr727;
		case 607: goto tr107;
		case 610: goto tr720;
		case 611: goto tr721;
		case 613: goto tr722;
		case 620: goto tr723;
		case 624: goto tr724;
		case 626: goto tr725;
		case 629: goto tr726;
		case 633: goto tr727;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr720:
	{te = p+1;}
	{act = 218;}
	goto st381;
st381:
	if ( ++p == pe )
		goto _test_eof381;
case 381:
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
		case 323: goto tr439;
		case 351: goto tr84;
		case 355: goto tr439;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr728;
		case 607: goto tr107;
		case 611: goto tr728;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr721:
	{te = p+1;}
	{act = 218;}
	goto st382;
st382:
	if ( ++p == pe )
		goto _test_eof382;
case 382:
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
		case 326: goto tr440;
		case 351: goto tr84;
		case 358: goto tr440;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr729;
		case 607: goto tr107;
		case 614: goto tr729;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr722:
	{te = p+1;}
	{act = 218;}
	goto st383;
st383:
	if ( ++p == pe )
		goto _test_eof383;
case 383:
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
		case 323: goto st195;
		case 340: goto st199;
		case 351: goto tr84;
		case 355: goto st195;
		case 372: goto st199;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr730;
		case 596: goto tr731;
		case 607: goto tr107;
		case 611: goto tr730;
		case 628: goto tr731;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr730:
	{te = p+1;}
	{act = 218;}
	goto st384;
st384:
	if ( ++p == pe )
		goto _test_eof384;
case 384:
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
		case 340: goto st196;
		case 351: goto tr84;
		case 372: goto st196;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr732;
		case 607: goto tr107;
		case 628: goto tr732;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr732:
	{te = p+1;}
	{act = 218;}
	goto st385;
st385:
	if ( ++p == pe )
		goto _test_eof385;
case 385:
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
		case 329: goto st197;
		case 351: goto tr84;
		case 361: goto st197;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 585: goto tr733;
		case 607: goto tr107;
		case 617: goto tr733;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr733:
	{te = p+1;}
	{act = 218;}
	goto st386;
st386:
	if ( ++p == pe )
		goto _test_eof386;
case 386:
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
		case 335: goto st198;
		case 351: goto tr84;
		case 367: goto st198;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr734;
		case 607: goto tr107;
		case 623: goto tr734;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr734:
	{te = p+1;}
	{act = 218;}
	goto st387;
st387:
	if ( ++p == pe )
		goto _test_eof387;
case 387:
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
		case 334: goto tr446;
		case 351: goto tr84;
		case 366: goto tr446;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 590: goto tr735;
		case 607: goto tr107;
		case 622: goto tr735;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr731:
	{te = p+1;}
	{act = 174;}
	goto st388;
st388:
	if ( ++p == pe )
		goto _test_eof388;
case 388:
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
		case 341: goto st200;
		case 351: goto tr84;
		case 373: goto st200;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 597: goto tr736;
		case 607: goto tr107;
		case 629: goto tr736;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr447;
tr736:
	{te = p+1;}
	{act = 218;}
	goto st389;
st389:
	if ( ++p == pe )
		goto _test_eof389;
case 389:
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
		case 339: goto st201;
		case 351: goto tr84;
		case 371: goto st201;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr737;
		case 607: goto tr107;
		case 627: goto tr737;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr737:
	{te = p+1;}
	{act = 218;}
	goto st390;
st390:
	if ( ++p == pe )
		goto _test_eof390;
case 390:
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
		case 338: goto tr450;
		case 351: goto tr84;
		case 370: goto tr450;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr738;
		case 607: goto tr107;
		case 626: goto tr738;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr723:
	{te = p+1;}
	{act = 218;}
	goto st391;
st391:
	if ( ++p == pe )
		goto _test_eof391;
case 391:
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
		case 321: goto tr451;
		case 332: goto tr452;
		case 336: goto tr453;
		case 351: goto tr84;
		case 353: goto tr451;
		case 364: goto tr452;
		case 368: goto tr453;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr739;
		case 588: goto tr740;
		case 592: goto tr741;
		case 607: goto tr107;
		case 609: goto tr739;
		case 620: goto tr740;
		case 624: goto tr741;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr725:
	{te = p+1;}
	{act = 218;}
	goto st392;
st392:
	if ( ++p == pe )
		goto _test_eof392;
case 392:
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
		case 321: goto tr454;
		case 332: goto tr455;
		case 351: goto tr84;
		case 353: goto tr454;
		case 364: goto tr455;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr742;
		case 588: goto tr743;
		case 607: goto tr107;
		case 609: goto tr742;
		case 620: goto tr743;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr726:
	{te = p+1;}
	{act = 71;}
	goto st393;
st393:
	if ( ++p == pe )
		goto _test_eof393;
case 393:
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
		case 322: goto tr457;
		case 338: goto st205;
		case 351: goto tr84;
		case 354: goto tr457;
		case 370: goto st205;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 578: goto tr744;
		case 594: goto tr745;
		case 607: goto tr107;
		case 610: goto tr744;
		case 626: goto tr745;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr456;
tr745:
	{te = p+1;}
	{act = 218;}
	goto st394;
st394:
	if ( ++p == pe )
		goto _test_eof394;
case 394:
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
		case 325: goto st206;
		case 351: goto tr84;
		case 357: goto st206;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr746;
		case 607: goto tr107;
		case 613: goto tr746;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr746:
	{te = p+1;}
	{act = 218;}
	goto st395;
st395:
	if ( ++p == pe )
		goto _test_eof395;
case 395:
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
		case 339: goto tr460;
		case 351: goto tr84;
		case 371: goto tr460;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr747;
		case 607: goto tr107;
		case 627: goto tr747;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr727:
	{te = p+1;}
	{act = 218;}
	goto st396;
st396:
	if ( ++p == pe )
		goto _test_eof396;
case 396:
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
		case 339: goto st208;
		case 351: goto tr84;
		case 371: goto st208;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr748;
		case 607: goto tr107;
		case 627: goto tr748;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr748:
	{te = p+1;}
	{act = 218;}
	goto st397;
st397:
	if ( ++p == pe )
		goto _test_eof397;
case 397:
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
		case 323: goto st209;
		case 351: goto tr84;
		case 355: goto st209;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr749;
		case 607: goto tr107;
		case 611: goto tr749;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr749:
	{te = p+1;}
	{act = 218;}
	goto st398;
st398:
	if ( ++p == pe )
		goto _test_eof398;
case 398:
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
		case 321: goto st210;
		case 351: goto tr84;
		case 353: goto st210;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr750;
		case 607: goto tr107;
		case 609: goto tr750;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr750:
	{te = p+1;}
	{act = 218;}
	goto st399;
st399:
	if ( ++p == pe )
		goto _test_eof399;
case 399:
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
		case 332: goto st211;
		case 351: goto tr84;
		case 364: goto st211;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr751;
		case 607: goto tr107;
		case 620: goto tr751;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr751:
	{te = p+1;}
	{act = 218;}
	goto st400;
st400:
	if ( ++p == pe )
		goto _test_eof400;
case 400:
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
		case 332: goto tr465;
		case 351: goto tr84;
		case 364: goto tr465;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 588: goto tr752;
		case 607: goto tr107;
		case 620: goto tr752;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr115:
	{te = p+1;}
	{act = 218;}
	goto st401;
st401:
	if ( ++p == pe )
		goto _test_eof401;
case 401:
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
		case 339: goto st213;
		case 351: goto tr84;
		case 371: goto st213;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 595: goto tr753;
		case 607: goto tr107;
		case 627: goto tr753;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr753:
	{te = p+1;}
	{act = 218;}
	goto st402;
st402:
	if ( ++p == pe )
		goto _test_eof402;
case 402:
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
		case 340: goto st214;
		case 351: goto tr84;
		case 372: goto st214;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 596: goto tr754;
		case 607: goto tr107;
		case 628: goto tr754;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr754:
	{te = p+1;}
	{act = 189;}
	goto st403;
st403:
	if ( ++p == pe )
		goto _test_eof403;
case 403:
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
		case 329: goto st215;
		case 351: goto tr84;
		case 361: goto st215;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 585: goto tr755;
		case 607: goto tr107;
		case 617: goto tr755;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr468;
tr755:
	{te = p+1;}
	{act = 218;}
	goto st404;
st404:
	if ( ++p == pe )
		goto _test_eof404;
case 404:
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
		case 335: goto tr470;
		case 351: goto tr84;
		case 367: goto tr470;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr756;
		case 607: goto tr107;
		case 623: goto tr756;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr116:
	{te = p+1;}
	{act = 218;}
	goto st405;
st405:
	if ( ++p == pe )
		goto _test_eof405;
case 405:
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
		case 333: goto st217;
		case 334: goto st218;
		case 351: goto tr84;
		case 365: goto st217;
		case 366: goto st218;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 589: goto tr757;
		case 590: goto tr758;
		case 607: goto tr107;
		case 621: goto tr757;
		case 622: goto tr758;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr757:
	{te = p+1;}
	{act = 218;}
	goto st406;
st406:
	if ( ++p == pe )
		goto _test_eof406;
case 406:
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
		case 321: goto tr473;
		case 339: goto tr474;
		case 351: goto tr84;
		case 353: goto tr473;
		case 371: goto tr474;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 577: goto tr759;
		case 595: goto tr760;
		case 607: goto tr107;
		case 609: goto tr759;
		case 627: goto tr760;
	}
	if ( _widec < 354 ) {
		if ( _widec > 313 ) {
			if ( 322 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 578 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 610 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr758:
	{te = p+1;}
	{act = 218;}
	goto st407;
st407:
	if ( ++p == pe )
		goto _test_eof407;
case 407:
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
		case 324: goto st219;
		case 351: goto tr84;
		case 356: goto st219;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 580: goto tr761;
		case 607: goto tr107;
		case 612: goto tr761;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr761:
	{te = p+1;}
	{act = 218;}
	goto st408;
st408:
	if ( ++p == pe )
		goto _test_eof408;
case 408:
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
		case 325: goto st220;
		case 351: goto tr84;
		case 357: goto st220;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr762;
		case 607: goto tr107;
		case 613: goto tr762;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr762:
	{te = p+1;}
	{act = 218;}
	goto st409;
st409:
	if ( ++p == pe )
		goto _test_eof409;
case 409:
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
		case 326: goto st221;
		case 351: goto tr84;
		case 358: goto st221;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 582: goto tr763;
		case 607: goto tr107;
		case 614: goto tr763;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr763:
	{te = p+1;}
	{act = 218;}
	goto st410;
st410:
	if ( ++p == pe )
		goto _test_eof410;
case 410:
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
		case 329: goto st222;
		case 351: goto tr84;
		case 361: goto st222;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 585: goto tr764;
		case 607: goto tr107;
		case 617: goto tr764;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr764:
	{te = p+1;}
	{act = 218;}
	goto st411;
st411:
	if ( ++p == pe )
		goto _test_eof411;
case 411:
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
		case 334: goto st223;
		case 351: goto tr84;
		case 366: goto st223;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 590: goto tr765;
		case 607: goto tr107;
		case 622: goto tr765;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr765:
	{te = p+1;}
	{act = 218;}
	goto st412;
st412:
	if ( ++p == pe )
		goto _test_eof412;
case 412:
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
		case 325: goto tr480;
		case 351: goto tr84;
		case 357: goto tr480;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 581: goto tr766;
		case 607: goto tr107;
		case 613: goto tr766;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr117:
	{te = p+1;}
	{act = 218;}
	goto st413;
st413:
	if ( ++p == pe )
		goto _test_eof413;
case 413:
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
		case 335: goto st225;
		case 336: goto st226;
		case 351: goto tr84;
		case 367: goto st225;
		case 368: goto st226;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 591: goto tr767;
		case 592: goto tr768;
		case 607: goto tr107;
		case 623: goto tr767;
		case 624: goto tr768;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr767:
	{te = p+1;}
	{act = 218;}
	goto st414;
st414:
	if ( ++p == pe )
		goto _test_eof414;
case 414:
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
		case 338: goto tr483;
		case 351: goto tr84;
		case 370: goto tr483;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 594: goto tr769;
		case 607: goto tr107;
		case 626: goto tr769;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
tr768:
	{te = p+1;}
	{act = 218;}
	goto st415;
st415:
	if ( ++p == pe )
		goto _test_eof415;
case 415:
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
		case 323: goto tr484;
		case 351: goto tr84;
		case 355: goto tr484;
		case 521: goto st20;
		case 544: goto st20;
		case 570: goto tr37;
		case 579: goto tr770;
		case 607: goto tr107;
		case 611: goto tr770;
	}
	if ( _widec < 353 ) {
		if ( _widec > 313 ) {
			if ( 321 <= _widec && _widec <= 346 )
				goto tr84;
		} else if ( _widec >= 304 )
			goto tr84;
	} else if ( _widec > 378 ) {
		if ( _widec < 577 ) {
			if ( 560 <= _widec && _widec <= 569 )
				goto tr107;
		} else if ( _widec > 602 ) {
			if ( 609 <= _widec && _widec <= 634 )
				goto tr107;
		} else
			goto tr107;
	} else
		goto tr84;
	goto tr155;
	}
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof1: cs = 1; goto _test_eof; 
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 
	_test_eof27: cs = 27; goto _test_eof; 
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
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof34: cs = 34; goto _test_eof; 
	_test_eof35: cs = 35; goto _test_eof; 
	_test_eof36: cs = 36; goto _test_eof; 
	_test_eof37: cs = 37; goto _test_eof; 
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
	_test_eof81: cs = 81; goto _test_eof; 
	_test_eof82: cs = 82; goto _test_eof; 
	_test_eof83: cs = 83; goto _test_eof; 
	_test_eof84: cs = 84; goto _test_eof; 
	_test_eof85: cs = 85; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
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
	_test_eof174: cs = 174; goto _test_eof; 
	_test_eof175: cs = 175; goto _test_eof; 
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
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof228: cs = 228; goto _test_eof; 
	_test_eof229: cs = 229; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
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
	_test_eof308: cs = 308; goto _test_eof; 
	_test_eof309: cs = 309; goto _test_eof; 
	_test_eof310: cs = 310; goto _test_eof; 
	_test_eof311: cs = 311; goto _test_eof; 
	_test_eof312: cs = 312; goto _test_eof; 
	_test_eof313: cs = 313; goto _test_eof; 
	_test_eof314: cs = 314; goto _test_eof; 
	_test_eof315: cs = 315; goto _test_eof; 
	_test_eof316: cs = 316; goto _test_eof; 
	_test_eof317: cs = 317; goto _test_eof; 
	_test_eof318: cs = 318; goto _test_eof; 
	_test_eof319: cs = 319; goto _test_eof; 
	_test_eof320: cs = 320; goto _test_eof; 
	_test_eof321: cs = 321; goto _test_eof; 
	_test_eof322: cs = 322; goto _test_eof; 
	_test_eof323: cs = 323; goto _test_eof; 
	_test_eof324: cs = 324; goto _test_eof; 
	_test_eof325: cs = 325; goto _test_eof; 
	_test_eof326: cs = 326; goto _test_eof; 
	_test_eof327: cs = 327; goto _test_eof; 
	_test_eof328: cs = 328; goto _test_eof; 
	_test_eof329: cs = 329; goto _test_eof; 
	_test_eof330: cs = 330; goto _test_eof; 
	_test_eof331: cs = 331; goto _test_eof; 
	_test_eof332: cs = 332; goto _test_eof; 
	_test_eof333: cs = 333; goto _test_eof; 
	_test_eof334: cs = 334; goto _test_eof; 
	_test_eof335: cs = 335; goto _test_eof; 
	_test_eof336: cs = 336; goto _test_eof; 
	_test_eof337: cs = 337; goto _test_eof; 
	_test_eof338: cs = 338; goto _test_eof; 
	_test_eof339: cs = 339; goto _test_eof; 
	_test_eof340: cs = 340; goto _test_eof; 
	_test_eof341: cs = 341; goto _test_eof; 
	_test_eof342: cs = 342; goto _test_eof; 
	_test_eof343: cs = 343; goto _test_eof; 
	_test_eof344: cs = 344; goto _test_eof; 
	_test_eof345: cs = 345; goto _test_eof; 
	_test_eof346: cs = 346; goto _test_eof; 
	_test_eof347: cs = 347; goto _test_eof; 
	_test_eof348: cs = 348; goto _test_eof; 
	_test_eof349: cs = 349; goto _test_eof; 
	_test_eof350: cs = 350; goto _test_eof; 
	_test_eof351: cs = 351; goto _test_eof; 
	_test_eof352: cs = 352; goto _test_eof; 
	_test_eof353: cs = 353; goto _test_eof; 
	_test_eof354: cs = 354; goto _test_eof; 
	_test_eof355: cs = 355; goto _test_eof; 
	_test_eof356: cs = 356; goto _test_eof; 
	_test_eof357: cs = 357; goto _test_eof; 
	_test_eof358: cs = 358; goto _test_eof; 
	_test_eof359: cs = 359; goto _test_eof; 
	_test_eof360: cs = 360; goto _test_eof; 
	_test_eof361: cs = 361; goto _test_eof; 
	_test_eof362: cs = 362; goto _test_eof; 
	_test_eof363: cs = 363; goto _test_eof; 
	_test_eof364: cs = 364; goto _test_eof; 
	_test_eof365: cs = 365; goto _test_eof; 
	_test_eof366: cs = 366; goto _test_eof; 
	_test_eof367: cs = 367; goto _test_eof; 
	_test_eof368: cs = 368; goto _test_eof; 
	_test_eof369: cs = 369; goto _test_eof; 
	_test_eof370: cs = 370; goto _test_eof; 
	_test_eof371: cs = 371; goto _test_eof; 
	_test_eof372: cs = 372; goto _test_eof; 
	_test_eof373: cs = 373; goto _test_eof; 
	_test_eof374: cs = 374; goto _test_eof; 
	_test_eof375: cs = 375; goto _test_eof; 
	_test_eof376: cs = 376; goto _test_eof; 
	_test_eof377: cs = 377; goto _test_eof; 
	_test_eof378: cs = 378; goto _test_eof; 
	_test_eof379: cs = 379; goto _test_eof; 
	_test_eof380: cs = 380; goto _test_eof; 
	_test_eof381: cs = 381; goto _test_eof; 
	_test_eof382: cs = 382; goto _test_eof; 
	_test_eof383: cs = 383; goto _test_eof; 
	_test_eof384: cs = 384; goto _test_eof; 
	_test_eof385: cs = 385; goto _test_eof; 
	_test_eof386: cs = 386; goto _test_eof; 
	_test_eof387: cs = 387; goto _test_eof; 
	_test_eof388: cs = 388; goto _test_eof; 
	_test_eof389: cs = 389; goto _test_eof; 
	_test_eof390: cs = 390; goto _test_eof; 
	_test_eof391: cs = 391; goto _test_eof; 
	_test_eof392: cs = 392; goto _test_eof; 
	_test_eof393: cs = 393; goto _test_eof; 
	_test_eof394: cs = 394; goto _test_eof; 
	_test_eof395: cs = 395; goto _test_eof; 
	_test_eof396: cs = 396; goto _test_eof; 
	_test_eof397: cs = 397; goto _test_eof; 
	_test_eof398: cs = 398; goto _test_eof; 
	_test_eof399: cs = 399; goto _test_eof; 
	_test_eof400: cs = 400; goto _test_eof; 
	_test_eof401: cs = 401; goto _test_eof; 
	_test_eof402: cs = 402; goto _test_eof; 
	_test_eof403: cs = 403; goto _test_eof; 
	_test_eof404: cs = 404; goto _test_eof; 
	_test_eof405: cs = 405; goto _test_eof; 
	_test_eof406: cs = 406; goto _test_eof; 
	_test_eof407: cs = 407; goto _test_eof; 
	_test_eof408: cs = 408; goto _test_eof; 
	_test_eof409: cs = 409; goto _test_eof; 
	_test_eof410: cs = 410; goto _test_eof; 
	_test_eof411: cs = 411; goto _test_eof; 
	_test_eof412: cs = 412; goto _test_eof; 
	_test_eof413: cs = 413; goto _test_eof; 
	_test_eof414: cs = 414; goto _test_eof; 
	_test_eof415: cs = 415; goto _test_eof; 
	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 22: goto tr119;
	case 23: goto tr0;
	case 24: goto tr0;
	case 1: goto tr0;
	case 2: goto tr0;
	case 25: goto tr124;
	case 26: goto tr125;
	case 27: goto tr127;
	case 3: goto tr3;
	case 4: goto tr3;
	case 5: goto tr3;
	case 6: goto tr3;
	case 7: goto tr3;
	case 8: goto tr3;
	case 9: goto tr3;
	case 10: goto tr3;
	case 11: goto tr3;
	case 12: goto tr3;
	case 13: goto tr3;
	case 14: goto tr3;
	case 15: goto tr3;
	case 28: goto tr128;
	case 29: goto tr130;
	case 30: goto tr130;
	case 31: goto tr130;
	case 16: goto tr0;
	case 32: goto tr134;
	case 33: goto tr0;
	case 17: goto tr26;
	case 34: goto tr136;
	case 35: goto tr137;
	case 36: goto tr138;
	case 37: goto tr142;
	case 38: goto tr144;
	case 39: goto tr147;
	case 40: goto tr149;
	case 41: goto tr0;
	case 42: goto tr155;
	case 43: goto tr158;
	case 44: goto tr155;
	case 45: goto tr155;
	case 46: goto tr155;
	case 47: goto tr155;
	case 48: goto tr155;
	case 49: goto tr155;
	case 50: goto tr166;
	case 51: goto tr170;
	case 52: goto tr155;
	case 53: goto tr155;
	case 54: goto tr155;
	case 55: goto tr155;
	case 56: goto tr155;
	case 57: goto tr155;
	case 58: goto tr179;
	case 59: goto tr155;
	case 60: goto tr155;
	case 61: goto tr185;
	case 62: goto tr155;
	case 63: goto tr155;
	case 64: goto tr155;
	case 65: goto tr155;
	case 66: goto tr155;
	case 67: goto tr193;
	case 68: goto tr197;
	case 69: goto tr199;
	case 70: goto tr201;
	case 71: goto tr155;
	case 72: goto tr208;
	case 73: goto tr155;
	case 74: goto tr155;
	case 75: goto tr155;
	case 76: goto tr155;
	case 77: goto tr155;
	case 78: goto tr155;
	case 79: goto tr155;
	case 80: goto tr155;
	case 81: goto tr155;
	case 82: goto tr155;
	case 83: goto tr155;
	case 84: goto tr155;
	case 85: goto tr155;
	case 18: goto tr28;
	case 86: goto tr233;
	case 87: goto tr238;
	case 88: goto tr155;
	case 89: goto tr155;
	case 90: goto tr155;
	case 91: goto tr155;
	case 92: goto tr155;
	case 93: goto tr245;
	case 94: goto tr155;
	case 95: goto tr155;
	case 96: goto tr155;
	case 97: goto tr251;
	case 98: goto tr155;
	case 99: goto tr155;
	case 100: goto tr155;
	case 101: goto tr155;
	case 102: goto tr155;
	case 103: goto tr155;
	case 104: goto tr259;
	case 105: goto tr155;
	case 106: goto tr155;
	case 107: goto tr264;
	case 108: goto tr266;
	case 109: goto tr155;
	case 110: goto tr155;
	case 111: goto tr278;
	case 112: goto tr155;
	case 113: goto tr155;
	case 114: goto tr155;
	case 115: goto tr155;
	case 116: goto tr155;
	case 117: goto tr155;
	case 118: goto tr287;
	case 119: goto tr293;
	case 120: goto tr155;
	case 121: goto tr155;
	case 122: goto tr155;
	case 123: goto tr298;
	case 124: goto tr300;
	case 125: goto tr155;
	case 126: goto tr155;
	case 127: goto tr155;
	case 128: goto tr155;
	case 129: goto tr307;
	case 130: goto tr155;
	case 131: goto tr155;
	case 132: goto tr155;
	case 133: goto tr155;
	case 134: goto tr314;
	case 135: goto tr317;
	case 136: goto tr155;
	case 137: goto tr322;
	case 138: goto tr328;
	case 139: goto tr332;
	case 140: goto tr155;
	case 141: goto tr336;
	case 142: goto tr155;
	case 143: goto tr155;
	case 144: goto tr155;
	case 145: goto tr155;
	case 146: goto tr155;
	case 147: goto tr155;
	case 148: goto tr155;
	case 149: goto tr155;
	case 150: goto tr155;
	case 151: goto tr155;
	case 152: goto tr155;
	case 153: goto tr355;
	case 154: goto tr155;
	case 155: goto tr155;
	case 156: goto tr155;
	case 157: goto tr155;
	case 158: goto tr155;
	case 159: goto tr155;
	case 160: goto tr155;
	case 161: goto tr155;
	case 162: goto tr155;
	case 163: goto tr155;
	case 164: goto tr374;
	case 165: goto tr155;
	case 166: goto tr155;
	case 167: goto tr380;
	case 168: goto tr155;
	case 169: goto tr384;
	case 170: goto tr155;
	case 171: goto tr387;
	case 172: goto tr391;
	case 173: goto tr395;
	case 174: goto tr155;
	case 175: goto tr155;
	case 176: goto tr155;
	case 177: goto tr155;
	case 178: goto tr155;
	case 179: goto tr403;
	case 180: goto tr155;
	case 181: goto tr155;
	case 182: goto tr155;
	case 183: goto tr155;
	case 184: goto tr155;
	case 185: goto tr415;
	case 186: goto tr418;
	case 187: goto tr422;
	case 188: goto tr424;
	case 189: goto tr428;
	case 190: goto tr155;
	case 191: goto tr155;
	case 192: goto tr155;
	case 193: goto tr155;
	case 194: goto tr155;
	case 195: goto tr155;
	case 196: goto tr155;
	case 197: goto tr155;
	case 198: goto tr155;
	case 199: goto tr447;
	case 200: goto tr155;
	case 201: goto tr155;
	case 202: goto tr155;
	case 203: goto tr155;
	case 204: goto tr456;
	case 205: goto tr155;
	case 206: goto tr155;
	case 207: goto tr155;
	case 208: goto tr155;
	case 209: goto tr155;
	case 210: goto tr155;
	case 211: goto tr155;
	case 212: goto tr155;
	case 213: goto tr155;
	case 214: goto tr468;
	case 215: goto tr155;
	case 216: goto tr155;
	case 217: goto tr155;
	case 218: goto tr155;
	case 219: goto tr155;
	case 220: goto tr155;
	case 221: goto tr155;
	case 222: goto tr155;
	case 223: goto tr155;
	case 224: goto tr155;
	case 225: goto tr155;
	case 226: goto tr155;
	case 227: goto tr485;
	case 19: goto tr33;
	case 228: goto tr486;
	case 229: goto tr149;
	case 20: goto tr0;
	case 230: goto tr0;
	case 231: goto tr155;
	case 232: goto tr158;
	case 233: goto tr155;
	case 234: goto tr155;
	case 235: goto tr155;
	case 236: goto tr155;
	case 237: goto tr155;
	case 238: goto tr155;
	case 239: goto tr166;
	case 240: goto tr170;
	case 241: goto tr155;
	case 242: goto tr155;
	case 243: goto tr155;
	case 244: goto tr155;
	case 245: goto tr155;
	case 246: goto tr155;
	case 247: goto tr179;
	case 248: goto tr155;
	case 249: goto tr155;
	case 250: goto tr185;
	case 251: goto tr155;
	case 252: goto tr155;
	case 253: goto tr155;
	case 254: goto tr155;
	case 255: goto tr155;
	case 256: goto tr193;
	case 257: goto tr197;
	case 258: goto tr199;
	case 259: goto tr201;
	case 260: goto tr155;
	case 261: goto tr208;
	case 262: goto tr155;
	case 263: goto tr155;
	case 264: goto tr155;
	case 265: goto tr155;
	case 266: goto tr155;
	case 267: goto tr155;
	case 268: goto tr155;
	case 269: goto tr155;
	case 270: goto tr155;
	case 271: goto tr155;
	case 272: goto tr155;
	case 273: goto tr155;
	case 274: goto tr155;
	case 275: goto tr233;
	case 276: goto tr238;
	case 277: goto tr155;
	case 278: goto tr155;
	case 279: goto tr155;
	case 280: goto tr155;
	case 281: goto tr155;
	case 282: goto tr245;
	case 283: goto tr155;
	case 284: goto tr155;
	case 285: goto tr155;
	case 286: goto tr251;
	case 287: goto tr155;
	case 288: goto tr155;
	case 289: goto tr155;
	case 290: goto tr155;
	case 291: goto tr155;
	case 292: goto tr155;
	case 293: goto tr259;
	case 294: goto tr155;
	case 295: goto tr155;
	case 296: goto tr264;
	case 297: goto tr266;
	case 298: goto tr155;
	case 299: goto tr155;
	case 300: goto tr278;
	case 301: goto tr155;
	case 302: goto tr155;
	case 303: goto tr155;
	case 304: goto tr155;
	case 305: goto tr155;
	case 306: goto tr155;
	case 307: goto tr287;
	case 308: goto tr293;
	case 309: goto tr155;
	case 310: goto tr155;
	case 311: goto tr155;
	case 312: goto tr298;
	case 313: goto tr300;
	case 314: goto tr155;
	case 315: goto tr155;
	case 316: goto tr155;
	case 317: goto tr155;
	case 318: goto tr307;
	case 319: goto tr155;
	case 320: goto tr155;
	case 321: goto tr155;
	case 322: goto tr155;
	case 323: goto tr314;
	case 324: goto tr317;
	case 325: goto tr155;
	case 326: goto tr322;
	case 327: goto tr328;
	case 328: goto tr332;
	case 329: goto tr155;
	case 330: goto tr336;
	case 331: goto tr155;
	case 332: goto tr155;
	case 333: goto tr155;
	case 334: goto tr155;
	case 335: goto tr155;
	case 336: goto tr155;
	case 337: goto tr155;
	case 338: goto tr155;
	case 339: goto tr155;
	case 340: goto tr155;
	case 341: goto tr155;
	case 342: goto tr355;
	case 343: goto tr155;
	case 344: goto tr155;
	case 345: goto tr155;
	case 346: goto tr155;
	case 347: goto tr155;
	case 348: goto tr155;
	case 349: goto tr155;
	case 350: goto tr155;
	case 351: goto tr155;
	case 352: goto tr155;
	case 353: goto tr374;
	case 354: goto tr155;
	case 355: goto tr155;
	case 356: goto tr380;
	case 357: goto tr155;
	case 358: goto tr384;
	case 359: goto tr155;
	case 360: goto tr387;
	case 361: goto tr391;
	case 362: goto tr395;
	case 363: goto tr155;
	case 364: goto tr155;
	case 365: goto tr155;
	case 366: goto tr155;
	case 367: goto tr155;
	case 368: goto tr403;
	case 369: goto tr155;
	case 370: goto tr155;
	case 371: goto tr155;
	case 372: goto tr155;
	case 373: goto tr155;
	case 374: goto tr415;
	case 375: goto tr418;
	case 376: goto tr422;
	case 377: goto tr424;
	case 378: goto tr428;
	case 379: goto tr155;
	case 380: goto tr155;
	case 381: goto tr155;
	case 382: goto tr155;
	case 383: goto tr155;
	case 384: goto tr155;
	case 385: goto tr155;
	case 386: goto tr155;
	case 387: goto tr155;
	case 388: goto tr447;
	case 389: goto tr155;
	case 390: goto tr155;
	case 391: goto tr155;
	case 392: goto tr155;
	case 393: goto tr456;
	case 394: goto tr155;
	case 395: goto tr155;
	case 396: goto tr155;
	case 397: goto tr155;
	case 398: goto tr155;
	case 399: goto tr155;
	case 400: goto tr155;
	case 401: goto tr155;
	case 402: goto tr155;
	case 403: goto tr468;
	case 404: goto tr155;
	case 405: goto tr155;
	case 406: goto tr155;
	case 407: goto tr155;
	case 408: goto tr155;
	case 409: goto tr155;
	case 410: goto tr155;
	case 411: goto tr155;
	case 412: goto tr155;
	case 413: goto tr155;
	case 414: goto tr155;
	case 415: goto tr155;
	}
	}
	_out: {}
	}
 return sym.tok;
}
