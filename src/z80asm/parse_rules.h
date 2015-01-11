static const int parser_start = 1;
static const int parser_first_final = 1479;
static const int parser_error = 0;
static const int parser_en_defgroup_open = 1448;
static const int parser_en_defgroup_line = 1450;
static const int parser_en_defvars_open = 1458;
static const int parser_en_defvars_line = 1460;
static const int parser_en_main = 1;
static void _parse_init(void)
{
 current_sm = SM_MAIN;
}
static Bool _parse_statement(Bool compile_active)
{
 int start_num_errors = get_num_errors();;
 static Str *name = NULL;
 static Str *stmt_label = NULL;
 int value1 = 0;
 INIT_OBJ(Str, &name); Str_clear(name);
 INIT_OBJ(Str, &stmt_label); Str_clear(stmt_label);
	{
	}
 switch (current_sm)
 {
 case SM_MAIN: cs = parser_en_main; break;
 case SM_DEFVARS_OPEN: cs = parser_en_defvars_open; scan_expect_operands(); break;
 case SM_DEFVARS_LINE: cs = parser_en_defvars_line; scan_expect_operands(); break;
 case SM_DEFGROUP_OPEN: cs = parser_en_defgroup_open; scan_expect_operands(); break;
 case SM_DEFGROUP_LINE: cs = parser_en_defgroup_line; scan_expect_operands(); break;
 default: assert(0);
 }
 p = pe = eof = expr_start = NULL;
 while ( eof == NULL || eof != pe )
 {
  read_token();
	{
	int _widec;
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
case 1:
	switch( ( ((int) p->tok)) ) {
		case 0: goto st1479;
		case 4: goto tr2;
		case 12: goto st1479;
		case 83: goto st1437;
		case 84: goto st3;
		case 85: goto st1439;
		case 86: goto st1444;
		case 91: goto st11;
		case 92: goto st55;
		case 93: goto st111;
		case 94: goto st149;
		case 95: goto st182;
		case 96: goto st226;
		case 97: goto st227;
		case 98: goto st265;
		case 99: goto st266;
		case 100: goto st267;
		case 101: goto st268;
		case 102: goto st269;
		case 103: goto st270;
		case 104: goto st271;
		case 105: goto st310;
		case 106: goto st311;
		case 107: goto st315;
		case 108: goto st316;
		case 109: goto st329;
		case 110: goto st330;
		case 111: goto st331;
		case 112: goto st335;
		case 113: goto st360;
		case 114: goto st399;
		case 115: goto st400;
		case 116: goto st401;
		case 117: goto st402;
		case 118: goto st403;
		case 119: goto st452;
		case 120: goto st476;
		case 121: goto st920;
		case 122: goto st921;
		case 123: goto st922;
		case 124: goto st923;
		case 125: goto st924;
		case 126: goto st925;
		case 127: goto st926;
		case 128: goto st964;
		case 129: goto st965;
		case 130: goto st966;
		case 131: goto st981;
		case 132: goto st982;
		case 133: goto st983;
		case 134: goto st990;
		case 135: goto st997;
		case 136: goto st1030;
		case 137: goto st1039;
		case 138: goto st1040;
		case 139: goto st1041;
		case 140: goto st1070;
		case 141: goto st1071;
		case 142: goto st1100;
		case 143: goto st1101;
		case 144: goto st1102;
		case 145: goto st1131;
		case 146: goto st1132;
		case 147: goto st1161;
		case 148: goto st1162;
		case 149: goto st1163;
		case 150: goto st1167;
		case 151: goto st1211;
		case 152: goto st1212;
		case 153: goto st1245;
		case 154: goto st1274;
		case 155: goto st1303;
		case 156: goto st1332;
		case 157: goto st1361;
		case 158: goto st1399;
	}
	goto st0;
st0:
cs = 0;
	goto _out;
tr75:
	{ if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; }
	goto st1479;
tr79:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; };
       if (compile_active && ! expr_error) defs(expr_value, 0); }
	goto st1479;
tr88:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; };
       if (compile_active && ! expr_error) defs(value1, expr_value); }
	goto st1479;
tr93:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; };
       if (compile_active && ! expr_error) defs(value1, expr_value); }
	goto st1479;
tr96:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; };
       if (compile_active && ! expr_error) defs(expr_value, 0); }
	goto st1479;
tr118:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_ADC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr123:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_ADC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr126:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_C )); }; }
	goto st1479;
tr127:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_B )); }; }
	goto st1479;
tr128:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_D )); }; }
	goto st1479;
tr129:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_E )); }; }
	goto st1479;
tr130:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_H )); }; }
	goto st1479;
tr131:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADC( REG_H )); }; }
	goto st1479;
tr132:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADC( REG_H )); }; }
	goto st1479;
tr133:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_L )); }; }
	goto st1479;
tr134:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADC( REG_L )); }; }
	goto st1479;
tr135:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADC( REG_L )); }; }
	goto st1479;
tr136:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_A )); }; }
	goto st1479;
tr139:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC( REG_idx )); }; }
	goto st1479;
tr151:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_ADC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr160:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_ADC( REG_idx ) ) << 8); }; }
	goto st1479;
tr172:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_ADC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr181:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_ADC( REG_idx ) ) << 8); }; }
	goto st1479;
tr187:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC16( REG_BC )); }; }
	goto st1479;
tr188:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC16( REG_DE )); }; }
	goto st1479;
tr189:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC16( REG_HL )); }; }
	goto st1479;
tr190:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADC16( REG_SP )); }; }
	goto st1479;
tr211:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_ADD_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr216:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_ADD_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr219:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_C )); }; }
	goto st1479;
tr220:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_B )); }; }
	goto st1479;
tr221:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_D )); }; }
	goto st1479;
tr222:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_E )); }; }
	goto st1479;
tr223:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_H )); }; }
	goto st1479;
tr224:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADD( REG_H )); }; }
	goto st1479;
tr225:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADD( REG_H )); }; }
	goto st1479;
tr226:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_L )); }; }
	goto st1479;
tr227:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADD( REG_L )); }; }
	goto st1479;
tr228:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADD( REG_L )); }; }
	goto st1479;
tr229:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_A )); }; }
	goto st1479;
tr232:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_ADD( REG_idx )); }; }
	goto st1479;
tr244:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_ADD( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr253:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_ADD( REG_idx ) ) << 8); }; }
	goto st1479;
tr265:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_ADD( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr274:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_ADD( REG_idx ) ) << 8); }; }
	goto st1479;
tr280:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_ADD16( REG_BC )); }; }
	goto st1479;
tr281:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_ADD16( REG_DE )); }; }
	goto st1479;
tr282:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_ADD16( REG_HL )); }; }
	goto st1479;
tr283:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_ADD16( REG_SP )); }; }
	goto st1479;
tr289:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADD16( REG_BC )); }; }
	goto st1479;
tr290:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADD16( REG_DE )); }; }
	goto st1479;
tr291:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADD16( REG_HL )); }; }
	goto st1479;
tr292:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_ADD16( REG_SP )); }; }
	goto st1479;
tr298:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADD16( REG_BC )); }; }
	goto st1479;
tr299:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADD16( REG_DE )); }; }
	goto st1479;
tr300:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADD16( REG_HL )); }; }
	goto st1479;
tr301:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_ADD16( REG_SP )); }; }
	goto st1479;
tr319:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_AND_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr324:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_AND_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr327:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_C )); }; }
	goto st1479;
tr328:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_B )); }; }
	goto st1479;
tr329:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_D )); }; }
	goto st1479;
tr330:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_E )); }; }
	goto st1479;
tr331:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_H )); }; }
	goto st1479;
tr332:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_AND( REG_H )); }; }
	goto st1479;
tr333:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_AND( REG_H )); }; }
	goto st1479;
tr334:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_L )); }; }
	goto st1479;
tr335:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_AND( REG_L )); }; }
	goto st1479;
tr336:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_AND( REG_L )); }; }
	goto st1479;
tr337:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_A )); }; }
	goto st1479;
tr340:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_AND( REG_idx )); }; }
	goto st1479;
tr352:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_AND( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr361:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_AND( REG_idx ) ) << 8); }; }
	goto st1479;
tr373:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_AND( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr382:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_AND( REG_idx ) ) << 8); }; }
	goto st1479;
tr401:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_C )); };
    }
	goto st1479;
tr402:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_B )); };
    }
	goto st1479;
tr403:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_D )); };
    }
	goto st1479;
tr404:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_E )); };
    }
	goto st1479;
tr405:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_H )); };
    }
	goto st1479;
tr406:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_L )); };
    }
	goto st1479;
tr407:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_A )); };
    }
	goto st1479;
tr408:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_BIT( expr_value, REG_idx )); };
    }
	goto st1479;
tr420:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_BIT( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1479;
tr429:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_BIT( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_BIT( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1479;
tr441:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_BIT( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1479;
tr450:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_BIT( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_BIT( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1479;
tr465:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_CALL), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr470:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_CALL), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr477:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_NZ, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr482:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_NZ, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr489:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_Z, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr494:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_Z, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr501:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_NC, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr506:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_NC, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr513:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_C, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr518:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_C, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr525:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_PO, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr530:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_PO, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr537:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_PE, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr542:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_PE, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr549:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_P, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr554:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_P, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr561:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_M, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr566:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_call_flag(FLAG_M, expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr569:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CCF); }; }
	goto st1479;
tr587:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_CP_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr592:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_CP_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr595:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_C )); }; }
	goto st1479;
tr596:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_B )); }; }
	goto st1479;
tr597:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_D )); }; }
	goto st1479;
tr598:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_E )); }; }
	goto st1479;
tr599:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_H )); }; }
	goto st1479;
tr600:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_CP( REG_H )); }; }
	goto st1479;
tr601:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_CP( REG_H )); }; }
	goto st1479;
tr602:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_L )); }; }
	goto st1479;
tr603:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_CP( REG_L )); }; }
	goto st1479;
tr604:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_CP( REG_L )); }; }
	goto st1479;
tr605:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_A )); }; }
	goto st1479;
tr608:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CP( REG_idx )); }; }
	goto st1479;
tr620:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_CP( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr629:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_CP( REG_idx ) ) << 8); }; }
	goto st1479;
tr641:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_CP( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr650:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_CP( REG_idx ) ) << 8); }; }
	goto st1479;
tr651:
	{ { if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_emul((Z80_CPD), "rcmx_cpd"); } }; }
	goto st1479;
tr652:
	{ { if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_emul((Z80_CPDR), "rcmx_cpdr"); } }; }
	goto st1479;
tr653:
	{ { if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_emul((Z80_CPI), "rcmx_cpi"); } }; }
	goto st1479;
tr654:
	{ { if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_emul((Z80_CPIR), "rcmx_cpir"); } }; }
	goto st1479;
tr655:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_CPL); }; }
	goto st1479;
tr656:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DAA); }; }
	goto st1479;
tr677:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_C )); }; }
	goto st1479;
tr678:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_B )); }; }
	goto st1479;
tr679:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_D )); }; }
	goto st1479;
tr680:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_E )); }; }
	goto st1479;
tr681:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_H )); }; }
	goto st1479;
tr682:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_DEC( REG_H )); }; }
	goto st1479;
tr683:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_DEC( REG_H )); }; }
	goto st1479;
tr684:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_L )); }; }
	goto st1479;
tr685:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_DEC( REG_L )); }; }
	goto st1479;
tr686:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_DEC( REG_L )); }; }
	goto st1479;
tr687:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_A )); }; }
	goto st1479;
tr688:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_BC + Z80_DEC16( REG_BC )); }; }
	goto st1479;
tr689:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_DE + Z80_DEC16( REG_DE )); }; }
	goto st1479;
tr690:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_DEC16( REG_HL )); }; }
	goto st1479;
tr691:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_DEC16( REG_IX )); }; }
	goto st1479;
tr692:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_DEC16( REG_IY )); }; }
	goto st1479;
tr693:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_SP + Z80_DEC16( REG_SP )); }; }
	goto st1479;
tr694:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DEC( REG_idx )); }; }
	goto st1479;
tr706:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_DEC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr715:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_DEC( REG_idx ) ) << 8); }; }
	goto st1479;
tr727:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_DEC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr736:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_DEC( REG_idx ) ) << 8); }; }
	goto st1479;
tr737:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_DI); }; }
	goto st1479;
tr741:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_DJNZ), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr746:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_DJNZ), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr749:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_EI); }; }
	goto st1479;
tr755:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_EX_DE_HL); }; }
	goto st1479;
tr759:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_EX_AF_AF); }; }
	goto st1479;
tr760:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_EX_AF_AF); }; }
	goto st1479;
tr765:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_EX_IND_SP_HL); }; }
	goto st1479;
tr766:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_EX_IND_SP_idx); }; }
	goto st1479;
tr767:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_EX_IND_SP_idx); }; }
	goto st1479;
tr768:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_EXX); }; }
	goto st1479;
tr769:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_HALT); }; }
	goto st1479;
tr773:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IM( expr_value )); };
    }
	goto st1479;
tr778:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IM( expr_value )); };
    }
	goto st1479;
tr790:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IN_REG_C( REG_C )); }; }
	goto st1479;
tr793:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IN_REG_C( REG_B )); }; }
	goto st1479;
tr796:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IN_REG_C( REG_D )); }; }
	goto st1479;
tr799:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IN_REG_C( REG_E )); }; }
	goto st1479;
tr802:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IN_REG_C( REG_H )); }; }
	goto st1479;
tr805:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IN_REG_C( REG_L )); }; }
	goto st1479;
tr811:
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_IN_A_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr816:
	{ expr_open_parens--; }
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_IN_A_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr819:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IN_REG_C( REG_A )); }; }
	goto st1479;
tr840:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_C )); }; }
	goto st1479;
tr841:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_B )); }; }
	goto st1479;
tr842:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_D )); }; }
	goto st1479;
tr843:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_E )); }; }
	goto st1479;
tr844:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_H )); }; }
	goto st1479;
tr845:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_INC( REG_H )); }; }
	goto st1479;
tr846:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_INC( REG_H )); }; }
	goto st1479;
tr847:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_L )); }; }
	goto st1479;
tr848:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_INC( REG_L )); }; }
	goto st1479;
tr849:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_INC( REG_L )); }; }
	goto st1479;
tr850:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_A )); }; }
	goto st1479;
tr851:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_BC + Z80_INC16( REG_BC )); }; }
	goto st1479;
tr852:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_DE + Z80_INC16( REG_DE )); }; }
	goto st1479;
tr853:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_INC16( REG_HL )); }; }
	goto st1479;
tr854:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_INC16( REG_IX )); }; }
	goto st1479;
tr855:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_INC16( REG_IY )); }; }
	goto st1479;
tr856:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_SP + Z80_INC16( REG_SP )); }; }
	goto st1479;
tr857:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INC( REG_idx )); }; }
	goto st1479;
tr869:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_INC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr878:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_INC( REG_idx ) ) << 8); }; }
	goto st1479;
tr890:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_INC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr899:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_INC( REG_idx ) ) << 8); }; }
	goto st1479;
tr900:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_IND); }; }
	goto st1479;
tr901:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INDR); }; }
	goto st1479;
tr902:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INI); }; }
	goto st1479;
tr903:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_INIR); }; }
	goto st1479;
tr918:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr923:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr930:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr935:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr942:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr947:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr954:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr959:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr966:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr971:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr978:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PO )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr983:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PO )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr990:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PE )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr995:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PE )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1002:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_P )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1007:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_P )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1014:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_M )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1019:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_JP_FLAG( FLAG_M )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1022:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_JP_idx); }; }
	goto st1479;
tr1024:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_JP_idx); }; }
	goto st1479;
tr1026:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_JP_idx); }; }
	goto st1479;
tr1034:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1039:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1046:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1051:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1058:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1063:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1070:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1075:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1082:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1087:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_jr((Z80_JR_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1131:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_IND_NN_A), expr); } else OBJ_DELETE(expr); };
   }
	goto st1479;
tr1132:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_IND_nn_dd( REG_BC )), expr); } else OBJ_DELETE(expr); };
   }
	goto st1479;
tr1133:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_IND_nn_dd( REG_DE )), expr); } else OBJ_DELETE(expr); };
   }
	goto st1479;
tr1134:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_HL + Z80_LD_IND_nn_idx), expr); } else OBJ_DELETE(expr); };
   }
	goto st1479;
tr1135:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IX + Z80_LD_IND_nn_idx), expr); } else OBJ_DELETE(expr); };
   }
	goto st1479;
tr1136:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IY + Z80_LD_IND_nn_idx), expr); } else OBJ_DELETE(expr); };
   }
	goto st1479;
tr1137:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_IND_nn_dd( REG_SP )), expr); } else OBJ_DELETE(expr); };
   }
	goto st1479;
tr1159:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_C == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_C )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1164:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_C == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_C )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1167:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_C )); }; }
	goto st1479;
tr1168:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_B )); }; }
	goto st1479;
tr1169:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_D )); }; }
	goto st1479;
tr1170:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_E )); }; }
	goto st1479;
tr1171:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_H )); }; }
	goto st1479;
tr1172:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_C, REG_IXH )); }; }
	goto st1479;
tr1173:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_C, REG_IYH )); }; }
	goto st1479;
tr1174:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_L )); }; }
	goto st1479;
tr1175:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_C, REG_IXL )); }; }
	goto st1479;
tr1176:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_C, REG_IYL )); }; }
	goto st1479;
tr1177:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_A )); }; }
	goto st1479;
tr1178:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_C, REG_idx )); }; }
	goto st1479;
tr1190:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_C, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1199:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_C, REG_idx ) ) << 8); }; }
	goto st1479;
tr1211:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_C, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1220:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_C, REG_idx ) ) << 8); }; }
	goto st1479;
tr1239:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_B == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_B )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1244:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_B == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_B )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1247:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_C )); }; }
	goto st1479;
tr1248:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_B )); }; }
	goto st1479;
tr1249:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_D )); }; }
	goto st1479;
tr1250:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_E )); }; }
	goto st1479;
tr1251:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_H )); }; }
	goto st1479;
tr1252:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_B, REG_IXH )); }; }
	goto st1479;
tr1253:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_B, REG_IYH )); }; }
	goto st1479;
tr1254:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_L )); }; }
	goto st1479;
tr1255:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_B, REG_IXL )); }; }
	goto st1479;
tr1256:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_B, REG_IYL )); }; }
	goto st1479;
tr1257:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_A )); }; }
	goto st1479;
tr1258:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_B, REG_idx )); }; }
	goto st1479;
tr1270:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_B, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1279:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_B, REG_idx ) ) << 8); }; }
	goto st1479;
tr1291:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_B, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1300:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_B, REG_idx ) ) << 8); }; }
	goto st1479;
tr1319:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_D == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_D )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1324:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_D == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_D )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1327:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_C )); }; }
	goto st1479;
tr1328:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_B )); }; }
	goto st1479;
tr1329:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_D )); }; }
	goto st1479;
tr1330:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_E )); }; }
	goto st1479;
tr1331:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_H )); }; }
	goto st1479;
tr1332:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_D, REG_IXH )); }; }
	goto st1479;
tr1333:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_D, REG_IYH )); }; }
	goto st1479;
tr1334:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_L )); }; }
	goto st1479;
tr1335:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_D, REG_IXL )); }; }
	goto st1479;
tr1336:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_D, REG_IYL )); }; }
	goto st1479;
tr1337:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_A )); }; }
	goto st1479;
tr1338:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_D, REG_idx )); }; }
	goto st1479;
tr1350:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_D, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1359:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_D, REG_idx ) ) << 8); }; }
	goto st1479;
tr1371:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_D, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1380:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_D, REG_idx ) ) << 8); }; }
	goto st1479;
tr1399:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_E == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_E )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1404:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_E == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_E )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1407:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_C )); }; }
	goto st1479;
tr1408:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_B )); }; }
	goto st1479;
tr1409:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_D )); }; }
	goto st1479;
tr1410:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_E )); }; }
	goto st1479;
tr1411:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_H )); }; }
	goto st1479;
tr1412:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_E, REG_IXH )); }; }
	goto st1479;
tr1413:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_E, REG_IYH )); }; }
	goto st1479;
tr1414:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_L )); }; }
	goto st1479;
tr1415:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_E, REG_IXL )); }; }
	goto st1479;
tr1416:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_E, REG_IYL )); }; }
	goto st1479;
tr1417:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_A )); }; }
	goto st1479;
tr1418:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_E, REG_idx )); }; }
	goto st1479;
tr1430:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_E, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1439:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_E, REG_idx ) ) << 8); }; }
	goto st1479;
tr1451:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_E, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1460:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_E, REG_idx ) ) << 8); }; }
	goto st1479;
tr1475:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_H == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_H )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1480:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_H == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_H )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1483:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_C )); }; }
	goto st1479;
tr1484:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_B )); }; }
	goto st1479;
tr1485:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_D )); }; }
	goto st1479;
tr1486:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_E )); }; }
	goto st1479;
tr1487:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_H )); }; }
	goto st1479;
tr1488:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_L )); }; }
	goto st1479;
tr1489:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_A )); }; }
	goto st1479;
tr1490:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_H, REG_idx )); }; }
	goto st1479;
tr1502:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_H, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1511:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_H, REG_idx ) ) << 8); }; }
	goto st1479;
tr1523:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_H, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1532:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_H, REG_idx ) ) << 8); }; }
	goto st1479;
tr1544:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1549:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1552:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_C )); }; }
	goto st1479;
tr1553:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_B )); }; }
	goto st1479;
tr1554:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_D )); }; }
	goto st1479;
tr1555:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_E )); }; }
	goto st1479;
tr1556:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_IXH )); }; }
	goto st1479;
tr1557:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_IXL )); }; }
	goto st1479;
tr1558:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_A )); }; }
	goto st1479;
tr1570:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1575:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1578:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_C )); }; }
	goto st1479;
tr1579:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_B )); }; }
	goto st1479;
tr1580:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_D )); }; }
	goto st1479;
tr1581:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_E )); }; }
	goto st1479;
tr1582:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_IYH )); }; }
	goto st1479;
tr1583:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_IYL )); }; }
	goto st1479;
tr1584:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_A )); }; }
	goto st1479;
tr1599:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_L == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_L )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1604:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_L == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_L )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1607:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_C )); }; }
	goto st1479;
tr1608:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_B )); }; }
	goto st1479;
tr1609:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_D )); }; }
	goto st1479;
tr1610:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_E )); }; }
	goto st1479;
tr1611:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_H )); }; }
	goto st1479;
tr1612:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_L )); }; }
	goto st1479;
tr1613:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_A )); }; }
	goto st1479;
tr1614:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_L, REG_idx )); }; }
	goto st1479;
tr1626:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_L, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1635:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_L, REG_idx ) ) << 8); }; }
	goto st1479;
tr1647:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_L, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1656:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_L, REG_idx ) ) << 8); }; }
	goto st1479;
tr1668:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1673:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1676:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_C )); }; }
	goto st1479;
tr1677:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_B )); }; }
	goto st1479;
tr1678:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_D )); }; }
	goto st1479;
tr1679:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_E )); }; }
	goto st1479;
tr1680:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_IXH )); }; }
	goto st1479;
tr1681:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_IXL )); }; }
	goto st1479;
tr1682:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_A )); }; }
	goto st1479;
tr1694:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1699:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1702:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_C )); }; }
	goto st1479;
tr1703:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_B )); }; }
	goto st1479;
tr1704:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_D )); }; }
	goto st1479;
tr1705:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_E )); }; }
	goto st1479;
tr1706:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_IYH )); }; }
	goto st1479;
tr1707:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_IYL )); }; }
	goto st1479;
tr1708:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_A )); }; }
	goto st1479;
tr1733:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_A == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_A )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1738:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_A == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_A )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1741:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_C )); }; }
	goto st1479;
tr1742:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_B )); }; }
	goto st1479;
tr1743:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_D )); }; }
	goto st1479;
tr1744:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_E )); }; }
	goto st1479;
tr1745:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_H )); }; }
	goto st1479;
tr1746:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_A, REG_IXH )); }; }
	goto st1479;
tr1747:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_A, REG_IYH )); }; }
	goto st1479;
tr1748:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_L )); }; }
	goto st1479;
tr1749:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_r_r( REG_A, REG_IXL )); }; }
	goto st1479;
tr1750:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_r_r( REG_A, REG_IYL )); }; }
	goto st1479;
tr1751:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_A )); }; }
	goto st1479;
tr1752:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_A_I); }; }
	goto st1479;
tr1753:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_A_IIR); }; }
	goto st1479;
tr1754:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_A_R); }; }
	goto st1479;
tr1755:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_A_EIR); }; }
	goto st1479;
tr1756:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_A_IND_dd( REG_IND_BC )); }; }
	goto st1479;
tr1757:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_A_IND_dd( REG_IND_DE )); }; }
	goto st1479;
tr1758:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_A, REG_idx )); }; }
	goto st1479;
tr1770:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_A, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1779:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_A, REG_idx ) ) << 8); }; }
	goto st1479;
tr1791:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_A, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1800:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_A, REG_idx ) ) << 8); }; }
	goto st1479;
tr1803:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_I_A); }; }
	goto st1479;
tr1806:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_IIR_A); }; }
	goto st1479;
tr1809:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_R_A); }; }
	goto st1479;
tr1812:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_EIR_A); }; }
	goto st1479;
tr1817:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_BC == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_BC + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_BC + Z80_LD_dd_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1822:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_BC == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_BC + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_BC + Z80_LD_dd_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1829:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_DE == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_DE + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_DE + Z80_LD_dd_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1834:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_DE == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_DE + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_DE + Z80_LD_dd_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1841:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_HL == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_HL + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_HL + Z80_LD_dd_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1846:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_HL == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_HL + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_HL + Z80_LD_dd_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1853:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IX == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IX + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IX + Z80_LD_dd_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1858:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IX == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IX + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IX + Z80_LD_dd_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1865:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IY == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IY + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IY + Z80_LD_dd_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1870:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IY == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IY + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_IY + Z80_LD_dd_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1880:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_SP == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_SP + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_SP + Z80_LD_dd_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1885:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_SP == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_SP + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_nn((P_SP + Z80_LD_dd_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1479;
tr1888:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_LD_SP_idx); }; }
	goto st1479;
tr1889:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_LD_SP_idx); }; }
	goto st1479;
tr1890:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_LD_SP_idx); }; }
	goto st1479;
tr1893:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_IND_dd_A( REG_IND_BC )); }; }
	goto st1479;
tr1896:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_IND_dd_A( REG_IND_DE )); }; }
	goto st1479;
tr1908:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1913:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_LD_r_n( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1916:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_idx, REG_C )); }; }
	goto st1479;
tr1917:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_idx, REG_B )); }; }
	goto st1479;
tr1918:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_idx, REG_D )); }; }
	goto st1479;
tr1919:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_idx, REG_E )); }; }
	goto st1479;
tr1920:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_idx, REG_H )); }; }
	goto st1479;
tr1921:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_idx, REG_L )); }; }
	goto st1479;
tr1922:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LD_r_r( REG_idx, REG_A )); }; }
	goto st1479;
tr1945:
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx_n((P_IX + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1479;
tr1950:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx_n((P_IX + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1479;
tr1953:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1954:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_B )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1955:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_D )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1956:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_E )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1957:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_H )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1958:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_L )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1959:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_A )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1979:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n(((P_IX + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1984:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n(((P_IX + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr1987:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_C ) ) << 8); }; }
	goto st1479;
tr1988:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_B ) ) << 8); }; }
	goto st1479;
tr1989:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_D ) ) << 8); }; }
	goto st1479;
tr1990:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_E ) ) << 8); }; }
	goto st1479;
tr1991:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_H ) ) << 8); }; }
	goto st1479;
tr1992:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_L ) ) << 8); }; }
	goto st1479;
tr1993:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_A ) ) << 8); }; }
	goto st1479;
tr2016:
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx_n((P_IY + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1479;
tr2021:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx_n((P_IY + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1479;
tr2024:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2025:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_B )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2026:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_D )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2027:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_E )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2028:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_H )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2029:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_L )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2030:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_A )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2050:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n(((P_IY + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2055:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n(((P_IY + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2058:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_C ) ) << 8); }; }
	goto st1479;
tr2059:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_B ) ) << 8); }; }
	goto st1479;
tr2060:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_D ) ) << 8); }; }
	goto st1479;
tr2061:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_E ) ) << 8); }; }
	goto st1479;
tr2062:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_H ) ) << 8); }; }
	goto st1479;
tr2063:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_L ) ) << 8); }; }
	goto st1479;
tr2064:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_A ) ) << 8); }; }
	goto st1479;
tr2065:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LDD); }; }
	goto st1479;
tr2066:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LDDR); }; }
	goto st1479;
tr2067:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LDI); }; }
	goto st1479;
tr2068:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_LDIR); }; }
	goto st1479;
tr2069:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_NEG); }; }
	goto st1479;
tr2070:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_NOP); }; }
	goto st1479;
tr2088:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_OR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2093:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_OR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2096:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_C )); }; }
	goto st1479;
tr2097:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_B )); }; }
	goto st1479;
tr2098:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_D )); }; }
	goto st1479;
tr2099:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_E )); }; }
	goto st1479;
tr2100:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_H )); }; }
	goto st1479;
tr2101:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_OR( REG_H )); }; }
	goto st1479;
tr2102:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_OR( REG_H )); }; }
	goto st1479;
tr2103:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_L )); }; }
	goto st1479;
tr2104:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_OR( REG_L )); }; }
	goto st1479;
tr2105:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_OR( REG_L )); }; }
	goto st1479;
tr2106:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_A )); }; }
	goto st1479;
tr2109:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OR( REG_idx )); }; }
	goto st1479;
tr2121:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_OR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2130:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_OR( REG_idx ) ) << 8); }; }
	goto st1479;
tr2142:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_OR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2151:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_OR( REG_idx ) ) << 8); }; }
	goto st1479;
tr2152:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OTDR); }; }
	goto st1479;
tr2153:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OTIR); }; }
	goto st1479;
tr2164:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_OUT_n_A), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2176:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUT_C_REG( REG_C )); }; }
	goto st1479;
tr2177:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUT_C_REG( REG_B )); }; }
	goto st1479;
tr2178:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUT_C_REG( REG_D )); }; }
	goto st1479;
tr2179:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUT_C_REG( REG_E )); }; }
	goto st1479;
tr2180:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUT_C_REG( REG_H )); }; }
	goto st1479;
tr2181:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUT_C_REG( REG_L )); }; }
	goto st1479;
tr2182:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUT_C_REG( REG_A )); }; }
	goto st1479;
tr2183:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUTD); }; }
	goto st1479;
tr2184:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_OUTI); }; }
	goto st1479;
tr2191:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_BC + Z80_POP( REG_BC )); }; }
	goto st1479;
tr2192:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_DE + Z80_POP( REG_DE )); }; }
	goto st1479;
tr2193:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_POP( REG_HL )); }; }
	goto st1479;
tr2194:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_POP( REG_IX )); }; }
	goto st1479;
tr2195:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_POP( REG_IY )); }; }
	goto st1479;
tr2196:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_AF + Z80_POP( REG_AF )); }; }
	goto st1479;
tr2203:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_BC + Z80_PUSH( REG_BC )); }; }
	goto st1479;
tr2204:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_DE + Z80_PUSH( REG_DE )); }; }
	goto st1479;
tr2205:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_HL + Z80_PUSH( REG_HL )); }; }
	goto st1479;
tr2206:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_PUSH( REG_IX )); }; }
	goto st1479;
tr2207:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_PUSH( REG_IY )); }; }
	goto st1479;
tr2208:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_AF + Z80_PUSH( REG_AF )); }; }
	goto st1479;
tr2227:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_C )); };
    }
	goto st1479;
tr2228:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_B )); };
    }
	goto st1479;
tr2229:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_D )); };
    }
	goto st1479;
tr2230:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_E )); };
    }
	goto st1479;
tr2231:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_H )); };
    }
	goto st1479;
tr2232:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_L )); };
    }
	goto st1479;
tr2233:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_A )); };
    }
	goto st1479;
tr2234:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RES( expr_value, REG_idx )); };
    }
	goto st1479;
tr2246:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RES( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1479;
tr2255:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RES( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RES( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1479;
tr2267:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RES( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1479;
tr2276:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RES( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RES( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1479;
tr2280:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET); }; }
	goto st1479;
tr2289:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_NZ )); }; }
	goto st1479;
tr2290:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_Z )); }; }
	goto st1479;
tr2291:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_NC )); }; }
	goto st1479;
tr2292:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_C )); }; }
	goto st1479;
tr2293:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_PO )); }; }
	goto st1479;
tr2294:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_PE )); }; }
	goto st1479;
tr2295:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_P )); }; }
	goto st1479;
tr2296:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RET_FLAG( FLAG_M )); }; }
	goto st1479;
tr2297:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RETI); }; }
	goto st1479;
tr2298:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RETN); }; }
	goto st1479;
tr2309:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_C )); }; }
	goto st1479;
tr2310:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_B )); }; }
	goto st1479;
tr2311:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_D )); }; }
	goto st1479;
tr2312:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_E )); }; }
	goto st1479;
tr2313:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_H )); }; }
	goto st1479;
tr2314:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_L )); }; }
	goto st1479;
tr2315:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_A )); }; }
	goto st1479;
tr2316:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RL( REG_idx )); }; }
	goto st1479;
tr2328:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1479;
tr2337:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1479;
tr2349:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1479;
tr2358:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1479;
tr2359:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLA); }; }
	goto st1479;
tr2370:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_C )); }; }
	goto st1479;
tr2371:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_B )); }; }
	goto st1479;
tr2372:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_D )); }; }
	goto st1479;
tr2373:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_E )); }; }
	goto st1479;
tr2374:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_H )); }; }
	goto st1479;
tr2375:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_L )); }; }
	goto st1479;
tr2376:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_A )); }; }
	goto st1479;
tr2377:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLC( REG_idx )); }; }
	goto st1479;
tr2389:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RLC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2398:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RLC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RLC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2410:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RLC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2419:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RLC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RLC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2420:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RLCA); }; }
	goto st1479;
tr2421:
	{ { if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_emul((Z80_RLD), "rcmx_rld"); } }; }
	goto st1479;
tr2432:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_C )); }; }
	goto st1479;
tr2433:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_B )); }; }
	goto st1479;
tr2434:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_D )); }; }
	goto st1479;
tr2435:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_E )); }; }
	goto st1479;
tr2436:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_H )); }; }
	goto st1479;
tr2437:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_L )); }; }
	goto st1479;
tr2438:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_A )); }; }
	goto st1479;
tr2439:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RR( REG_idx )); }; }
	goto st1479;
tr2451:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RR( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1479;
tr2460:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RR( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RR( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1479;
tr2472:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RR( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1479;
tr2481:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RR( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RR( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1479;
tr2482:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRA); }; }
	goto st1479;
tr2493:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_C )); }; }
	goto st1479;
tr2494:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_B )); }; }
	goto st1479;
tr2495:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_D )); }; }
	goto st1479;
tr2496:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_E )); }; }
	goto st1479;
tr2497:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_H )); }; }
	goto st1479;
tr2498:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_L )); }; }
	goto st1479;
tr2499:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_A )); }; }
	goto st1479;
tr2500:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRC( REG_idx )); }; }
	goto st1479;
tr2512:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RRC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2521:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RRC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RRC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2533:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RRC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2542:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RRC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RRC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2543:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RRCA); }; }
	goto st1479;
tr2544:
	{ { if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_emul((Z80_RRD), "rcmx_rrd"); } }; }
	goto st1479;
tr2548:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RST( expr_value )); };
    }
	goto st1479;
tr2553:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_RST( expr_value )); };
    }
	goto st1479;
tr2574:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_SBC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2579:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_SBC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2582:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_C )); }; }
	goto st1479;
tr2583:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_B )); }; }
	goto st1479;
tr2584:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_D )); }; }
	goto st1479;
tr2585:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_E )); }; }
	goto st1479;
tr2586:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_H )); }; }
	goto st1479;
tr2587:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_SBC( REG_H )); }; }
	goto st1479;
tr2588:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_SBC( REG_H )); }; }
	goto st1479;
tr2589:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_L )); }; }
	goto st1479;
tr2590:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_SBC( REG_L )); }; }
	goto st1479;
tr2591:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_SBC( REG_L )); }; }
	goto st1479;
tr2592:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_A )); }; }
	goto st1479;
tr2595:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC( REG_idx )); }; }
	goto st1479;
tr2607:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_SBC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2616:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_SBC( REG_idx ) ) << 8); }; }
	goto st1479;
tr2628:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_SBC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2637:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_SBC( REG_idx ) ) << 8); }; }
	goto st1479;
tr2643:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC16( REG_BC )); }; }
	goto st1479;
tr2644:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC16( REG_DE )); }; }
	goto st1479;
tr2645:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC16( REG_HL )); }; }
	goto st1479;
tr2646:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SBC16( REG_SP )); }; }
	goto st1479;
tr2647:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SCF); }; }
	goto st1479;
tr2666:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_C )); };
    }
	goto st1479;
tr2667:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_B )); };
    }
	goto st1479;
tr2668:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_D )); };
    }
	goto st1479;
tr2669:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_E )); };
    }
	goto st1479;
tr2670:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_H )); };
    }
	goto st1479;
tr2671:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_L )); };
    }
	goto st1479;
tr2672:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_A )); };
    }
	goto st1479;
tr2673:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SET( expr_value, REG_idx )); };
    }
	goto st1479;
tr2685:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SET( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1479;
tr2694:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SET( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SET( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1479;
tr2706:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SET( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1479;
tr2715:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SET( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SET( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1479;
tr2729:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_C )); }; }
	goto st1479;
tr2730:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_B )); }; }
	goto st1479;
tr2731:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_D )); }; }
	goto st1479;
tr2732:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_E )); }; }
	goto st1479;
tr2733:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_H )); }; }
	goto st1479;
tr2734:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_L )); }; }
	goto st1479;
tr2735:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_A )); }; }
	goto st1479;
tr2736:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLA( REG_idx )); }; }
	goto st1479;
tr2748:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SLA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2757:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SLA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2769:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SLA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2778:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SLA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2789:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_C )); }; }
	goto st1479;
tr2790:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_B )); }; }
	goto st1479;
tr2791:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_D )); }; }
	goto st1479;
tr2792:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_E )); }; }
	goto st1479;
tr2793:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_H )); }; }
	goto st1479;
tr2794:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_L )); }; }
	goto st1479;
tr2795:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_A )); }; }
	goto st1479;
tr2796:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SLL( REG_idx )); }; }
	goto st1479;
tr2808:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SLL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2817:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SLL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2829:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SLL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2838:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SLL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2849:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_C )); }; }
	goto st1479;
tr2850:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_B )); }; }
	goto st1479;
tr2851:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_D )); }; }
	goto st1479;
tr2852:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_E )); }; }
	goto st1479;
tr2853:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_H )); }; }
	goto st1479;
tr2854:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_L )); }; }
	goto st1479;
tr2855:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_A )); }; }
	goto st1479;
tr2856:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRA( REG_idx )); }; }
	goto st1479;
tr2868:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SRA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2877:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SRA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2889:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SRA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2898:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SRA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2909:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_C )); }; }
	goto st1479;
tr2910:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_B )); }; }
	goto st1479;
tr2911:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_D )); }; }
	goto st1479;
tr2912:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_E )); }; }
	goto st1479;
tr2913:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_H )); }; }
	goto st1479;
tr2914:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_L )); }; }
	goto st1479;
tr2915:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_A )); }; }
	goto st1479;
tr2916:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SRL( REG_idx )); }; }
	goto st1479;
tr2928:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SRL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2937:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SRL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2949:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SRL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1479;
tr2958:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SRL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1479;
tr2976:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_SUB_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2981:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_SUB_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr2984:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_C )); }; }
	goto st1479;
tr2985:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_B )); }; }
	goto st1479;
tr2986:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_D )); }; }
	goto st1479;
tr2987:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_E )); }; }
	goto st1479;
tr2988:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_H )); }; }
	goto st1479;
tr2989:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_SUB( REG_H )); }; }
	goto st1479;
tr2990:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_SUB( REG_H )); }; }
	goto st1479;
tr2991:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_L )); }; }
	goto st1479;
tr2992:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_SUB( REG_L )); }; }
	goto st1479;
tr2993:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_SUB( REG_L )); }; }
	goto st1479;
tr2994:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_A )); }; }
	goto st1479;
tr2997:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_SUB( REG_idx )); }; }
	goto st1479;
tr3009:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_SUB( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr3018:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_SUB( REG_idx ) ) << 8); }; }
	goto st1479;
tr3030:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_SUB( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr3039:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_SUB( REG_idx ) ) << 8); }; }
	goto st1479;
tr3057:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_XOR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr3062:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_n((Z80_XOR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr3065:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_C )); }; }
	goto st1479;
tr3066:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_B )); }; }
	goto st1479;
tr3067:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_D )); }; }
	goto st1479;
tr3068:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_E )); }; }
	goto st1479;
tr3069:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_H )); }; }
	goto st1479;
tr3070:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_XOR( REG_H )); }; }
	goto st1479;
tr3071:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_XOR( REG_H )); }; }
	goto st1479;
tr3072:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_L )); }; }
	goto st1479;
tr3073:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IX + Z80_XOR( REG_L )); }; }
	goto st1479;
tr3074:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(P_IY + Z80_XOR( REG_L )); }; }
	goto st1479;
tr3075:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_A )); }; }
	goto st1479;
tr3078:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(Z80_XOR( REG_idx )); }; }
	goto st1479;
tr3090:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IX + Z80_XOR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr3099:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IX + Z80_XOR( REG_idx ) ) << 8); }; }
	goto st1479;
tr3111:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode_idx((P_IY + Z80_XOR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1479;
tr3120:
	{ if (compile_active) { if (stmt_label->len) { if (compile_active) { define_symbol(stmt_label->str, get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label->len = 0; }; add_opcode(( P_IY + Z80_XOR( REG_idx ) ) << 8); }; }
	goto st1479;
tr3121:
	{ defgroup_start(0);
       current_sm = SM_DEFGROUP_OPEN; }
	goto st1479;
tr3123:
	{ defgroup_start(0);
       current_sm = SM_DEFGROUP_LINE; }
	goto st1479;
tr3127:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_start(expr_value);
    current_sm = SM_DEFVARS_OPEN;
    }
	goto st1479;
tr3133:
	{ if (! expr_error)
    defvars_start(expr_value);
    current_sm = SM_DEFVARS_LINE;
    }
	goto st1479;
tr3134:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_start(expr_value);
    current_sm = SM_DEFVARS_OPEN;
    }
	goto st1479;
tr3141:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    set_origin_directive(expr_value);
    }
	goto st1479;
tr3146:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    set_origin_directive(expr_value);
    }
	goto st1479;
st1479:
	if ( ++p == pe )
		goto _test_eof1479;
case 1479:
	goto st0;
tr2:
	{ Str_set_n(stmt_label, p->tstart, p->tlen); }
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr75;
		case 84: goto st3;
		case 91: goto st11;
		case 92: goto st55;
		case 93: goto st111;
		case 94: goto st149;
		case 95: goto st182;
		case 96: goto st226;
		case 97: goto st227;
		case 98: goto st265;
		case 99: goto st266;
		case 100: goto st267;
		case 101: goto st268;
		case 102: goto st269;
		case 103: goto st270;
		case 104: goto st271;
		case 105: goto st310;
		case 106: goto st311;
		case 107: goto st315;
		case 108: goto st316;
		case 109: goto st329;
		case 110: goto st330;
		case 111: goto st331;
		case 112: goto st335;
		case 113: goto st360;
		case 114: goto st399;
		case 115: goto st400;
		case 116: goto st401;
		case 117: goto st402;
		case 118: goto st403;
		case 119: goto st452;
		case 120: goto st476;
		case 121: goto st920;
		case 122: goto st921;
		case 123: goto st922;
		case 124: goto st923;
		case 125: goto st924;
		case 126: goto st925;
		case 127: goto st926;
		case 128: goto st964;
		case 129: goto st965;
		case 130: goto st966;
		case 131: goto st981;
		case 132: goto st982;
		case 133: goto st983;
		case 134: goto st990;
		case 135: goto st997;
		case 136: goto st1030;
		case 137: goto st1039;
		case 138: goto st1040;
		case 139: goto st1041;
		case 140: goto st1070;
		case 141: goto st1071;
		case 142: goto st1100;
		case 143: goto st1101;
		case 144: goto st1102;
		case 145: goto st1131;
		case 146: goto st1132;
		case 147: goto st1161;
		case 148: goto st1162;
		case 149: goto st1163;
		case 150: goto st1167;
		case 151: goto st1211;
		case 152: goto st1212;
		case 153: goto st1245;
		case 154: goto st1274;
		case 155: goto st1303;
		case 156: goto st1332;
		case 157: goto st1361;
		case 158: goto st1399;
	}
	goto st0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr76;
		case 5: goto tr76;
		case 8: goto tr76;
		case 18: goto tr78;
		case 21: goto tr77;
		case 23: goto tr77;
		case 36: goto tr78;
		case 44: goto tr77;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr77;
	goto st0;
tr76:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st4;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr79;
		case 22: goto tr81;
		case 131091: goto st10;
		case 131109: goto st10;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st5;
		} else if ( _widec >= 15 )
			goto st5;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st5;
		} else if ( _widec >= 38 )
			goto st5;
	} else
		goto st5;
	goto st0;
tr77:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st5;
tr78:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st5;
tr84:
	{ expr_open_parens++; }
	goto st5;
tr97:
	{ expr_open_parens--; }
	goto st5;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st4;
		case 5: goto st4;
		case 8: goto st4;
		case 13: goto st5;
		case 18: goto tr84;
		case 21: goto st5;
		case 23: goto st5;
		case 36: goto tr84;
		case 44: goto st5;
	}
	goto st0;
tr81:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ value1 = expr_error ? 0 : expr_value; }
	goto st6;
tr98:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ value1 = expr_error ? 0 : expr_value; }
	goto st6;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr85;
		case 5: goto tr85;
		case 8: goto tr85;
		case 18: goto tr87;
		case 21: goto tr86;
		case 23: goto tr86;
		case 36: goto tr87;
		case 44: goto tr86;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr86;
	goto st0;
tr85:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st7;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr88;
		case 23: goto st8;
		case 131091: goto st9;
		case 131109: goto st9;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st8;
		} else if ( _widec >= 15 )
			goto st8;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st8;
		} else if ( _widec >= 38 )
			goto st8;
	} else
		goto st8;
	goto st0;
tr86:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st8;
tr87:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st8;
tr92:
	{ expr_open_parens++; }
	goto st8;
tr94:
	{ expr_open_parens--; }
	goto st8;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st7;
		case 5: goto st7;
		case 8: goto st7;
		case 13: goto st8;
		case 18: goto tr92;
		case 21: goto st8;
		case 23: goto st8;
		case 36: goto tr92;
		case 44: goto st8;
	}
	goto st0;
tr95:
	{ expr_open_parens--; }
	goto st9;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr93;
		case 23: goto tr94;
		case 131091: goto tr95;
		case 131109: goto tr95;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr94;
		} else if ( _widec >= 15 )
			goto tr94;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr94;
		} else if ( _widec >= 38 )
			goto tr94;
	} else
		goto tr94;
	goto st0;
tr99:
	{ expr_open_parens--; }
	goto st10;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr96;
		case 22: goto tr98;
		case 131091: goto tr99;
		case 131109: goto tr99;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr97;
		} else if ( _widec >= 15 )
			goto tr97;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr97;
		} else if ( _widec >= 38 )
			goto tr97;
	} else
		goto tr97;
	goto st0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr100;
		case 5: goto tr100;
		case 8: goto tr100;
		case 18: goto tr102;
		case 21: goto tr101;
		case 23: goto tr101;
		case 36: goto tr102;
		case 44: goto tr101;
		case 48: goto st15;
		case 53: goto st16;
		case 54: goto st17;
		case 55: goto st18;
		case 56: goto st19;
		case 57: goto st20;
		case 58: goto st21;
		case 59: goto st22;
		case 60: goto st23;
		case 61: goto st24;
		case 62: goto st25;
		case 71: goto st49;
		case 79: goto st28;
		case 80: goto st29;
		case 81: goto st39;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr101;
	goto st0;
tr100:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st12;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr118;
		case 23: goto st13;
		case 131091: goto st14;
		case 131109: goto st14;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st13;
		} else if ( _widec >= 15 )
			goto st13;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st13;
		} else if ( _widec >= 38 )
			goto st13;
	} else
		goto st13;
	goto st0;
tr101:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st13;
tr102:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st13;
tr122:
	{ expr_open_parens++; }
	goto st13;
tr124:
	{ expr_open_parens--; }
	goto st13;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st12;
		case 5: goto st12;
		case 8: goto st12;
		case 13: goto st13;
		case 18: goto tr122;
		case 21: goto st13;
		case 23: goto st13;
		case 36: goto tr122;
		case 44: goto st13;
	}
	goto st0;
tr125:
	{ expr_open_parens--; }
	goto st14;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr123;
		case 23: goto tr124;
		case 131091: goto tr125;
		case 131109: goto tr125;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr124;
		} else if ( _widec >= 15 )
			goto tr124;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr124;
		} else if ( _widec >= 38 )
			goto tr124;
	} else
		goto tr124;
	goto st0;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	if ( ( ((int) p->tok)) == 12 )
		goto tr126;
	goto st0;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	if ( ( ((int) p->tok)) == 12 )
		goto tr127;
	goto st0;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	if ( ( ((int) p->tok)) == 12 )
		goto tr128;
	goto st0;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	if ( ( ((int) p->tok)) == 12 )
		goto tr129;
	goto st0;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	if ( ( ((int) p->tok)) == 12 )
		goto tr130;
	goto st0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	if ( ( ((int) p->tok)) == 12 )
		goto tr131;
	goto st0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	if ( ( ((int) p->tok)) == 12 )
		goto tr132;
	goto st0;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	if ( ( ((int) p->tok)) == 12 )
		goto tr133;
	goto st0;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( ( ((int) p->tok)) == 12 )
		goto tr134;
	goto st0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	if ( ( ((int) p->tok)) == 12 )
		goto tr135;
	goto st0;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr136;
		case 22: goto st26;
	}
	goto st0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr100;
		case 5: goto tr100;
		case 8: goto tr100;
		case 18: goto tr102;
		case 21: goto tr101;
		case 23: goto tr101;
		case 36: goto tr102;
		case 44: goto tr101;
		case 48: goto st15;
		case 53: goto st16;
		case 54: goto st17;
		case 55: goto st18;
		case 56: goto st19;
		case 57: goto st20;
		case 58: goto st21;
		case 59: goto st22;
		case 60: goto st23;
		case 61: goto st24;
		case 62: goto st27;
		case 79: goto st28;
		case 80: goto st29;
		case 81: goto st39;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr101;
	goto st0;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	if ( ( ((int) p->tok)) == 12 )
		goto tr136;
	goto st0;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	if ( ( ((int) p->tok)) == 12 )
		goto tr139;
	goto st0;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr140;
		case 5: goto tr140;
		case 8: goto tr140;
		case 18: goto tr142;
		case 19: goto st38;
		case 21: goto tr141;
		case 23: goto tr141;
		case 36: goto tr142;
		case 44: goto tr141;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr141;
	goto st0;
tr140:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st30;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st31;
		case 65555: goto tr145;
		case 131091: goto tr146;
		case 131109: goto st36;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st31;
		} else if ( _widec >= 15 )
			goto st31;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st31;
		} else if ( _widec >= 38 )
			goto st31;
	} else
		goto st31;
	goto st0;
tr149:
	{ expr_open_parens++; }
	goto st31;
tr152:
	{ expr_open_parens--; }
	goto st31;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st32;
		case 5: goto st32;
		case 8: goto st32;
		case 13: goto st31;
		case 18: goto tr149;
		case 21: goto st31;
		case 23: goto st31;
		case 36: goto tr149;
		case 44: goto st31;
	}
	goto st0;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st31;
		case 65555: goto tr145;
		case 131091: goto st34;
		case 131109: goto st34;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st31;
		} else if ( _widec >= 15 )
			goto st31;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st31;
		} else if ( _widec >= 38 )
			goto st31;
	} else
		goto st31;
	goto st0;
tr145:
	{ push_expr(expr_start, p); }
	goto st33;
tr153:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st33;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	if ( ( ((int) p->tok)) == 12 )
		goto tr151;
	goto st0;
tr154:
	{ expr_open_parens--; }
	goto st34;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr152;
		case 65555: goto tr153;
		case 131091: goto tr154;
		case 131109: goto tr154;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr152;
		} else if ( _widec >= 15 )
			goto tr152;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr152;
		} else if ( _widec >= 38 )
			goto tr152;
	} else
		goto tr152;
	goto st0;
tr146:
	{ push_expr(expr_start, p); }
	goto st35;
tr155:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st35;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr151;
		case 23: goto tr152;
		case 65555: goto tr153;
		case 131091: goto tr155;
		case 131109: goto tr156;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr152;
		} else if ( _widec >= 15 )
			goto tr152;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr152;
		} else if ( _widec >= 38 )
			goto tr152;
	} else
		goto tr152;
	goto st0;
tr156:
	{ expr_open_parens--; }
	goto st36;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr152;
		case 65555: goto tr153;
		case 131091: goto tr155;
		case 131109: goto tr156;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr152;
		} else if ( _widec >= 15 )
			goto tr152;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr152;
		} else if ( _widec >= 38 )
			goto tr152;
	} else
		goto tr152;
	goto st0;
tr141:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st37;
tr142:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st37;
tr159:
	{ expr_open_parens++; }
	goto st37;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st30;
		case 5: goto st30;
		case 8: goto st30;
		case 13: goto st37;
		case 18: goto tr159;
		case 21: goto st37;
		case 23: goto st37;
		case 36: goto tr159;
		case 44: goto st37;
	}
	goto st0;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	if ( ( ((int) p->tok)) == 12 )
		goto tr160;
	goto st0;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr161;
		case 5: goto tr161;
		case 8: goto tr161;
		case 18: goto tr163;
		case 19: goto st48;
		case 21: goto tr162;
		case 23: goto tr162;
		case 36: goto tr163;
		case 44: goto tr162;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr162;
	goto st0;
tr161:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st40;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st41;
		case 65555: goto tr166;
		case 131091: goto tr167;
		case 131109: goto st46;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st41;
		} else if ( _widec >= 15 )
			goto st41;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st41;
		} else if ( _widec >= 38 )
			goto st41;
	} else
		goto st41;
	goto st0;
tr170:
	{ expr_open_parens++; }
	goto st41;
tr173:
	{ expr_open_parens--; }
	goto st41;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st42;
		case 5: goto st42;
		case 8: goto st42;
		case 13: goto st41;
		case 18: goto tr170;
		case 21: goto st41;
		case 23: goto st41;
		case 36: goto tr170;
		case 44: goto st41;
	}
	goto st0;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st41;
		case 65555: goto tr166;
		case 131091: goto st44;
		case 131109: goto st44;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st41;
		} else if ( _widec >= 15 )
			goto st41;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st41;
		} else if ( _widec >= 38 )
			goto st41;
	} else
		goto st41;
	goto st0;
tr166:
	{ push_expr(expr_start, p); }
	goto st43;
tr174:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st43;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	if ( ( ((int) p->tok)) == 12 )
		goto tr172;
	goto st0;
tr175:
	{ expr_open_parens--; }
	goto st44;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr173;
		case 65555: goto tr174;
		case 131091: goto tr175;
		case 131109: goto tr175;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr173;
		} else if ( _widec >= 15 )
			goto tr173;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr173;
		} else if ( _widec >= 38 )
			goto tr173;
	} else
		goto tr173;
	goto st0;
tr167:
	{ push_expr(expr_start, p); }
	goto st45;
tr176:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st45;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr172;
		case 23: goto tr173;
		case 65555: goto tr174;
		case 131091: goto tr176;
		case 131109: goto tr177;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr173;
		} else if ( _widec >= 15 )
			goto tr173;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr173;
		} else if ( _widec >= 38 )
			goto tr173;
	} else
		goto tr173;
	goto st0;
tr177:
	{ expr_open_parens--; }
	goto st46;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr173;
		case 65555: goto tr174;
		case 131091: goto tr176;
		case 131109: goto tr177;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr173;
		} else if ( _widec >= 15 )
			goto tr173;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr173;
		} else if ( _widec >= 38 )
			goto tr173;
	} else
		goto tr173;
	goto st0;
tr162:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st47;
tr163:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st47;
tr180:
	{ expr_open_parens++; }
	goto st47;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st40;
		case 5: goto st40;
		case 8: goto st40;
		case 13: goto st47;
		case 18: goto tr180;
		case 21: goto st47;
		case 23: goto st47;
		case 36: goto tr180;
		case 44: goto st47;
	}
	goto st0;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	if ( ( ((int) p->tok)) == 12 )
		goto tr181;
	goto st0;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	if ( ( ((int) p->tok)) == 22 )
		goto st50;
	goto st0;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st51;
		case 70: goto st52;
		case 71: goto st53;
		case 75: goto st54;
	}
	goto st0;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	if ( ( ((int) p->tok)) == 12 )
		goto tr187;
	goto st0;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	if ( ( ((int) p->tok)) == 12 )
		goto tr188;
	goto st0;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	if ( ( ((int) p->tok)) == 12 )
		goto tr189;
	goto st0;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	if ( ( ((int) p->tok)) == 12 )
		goto tr190;
	goto st0;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr191;
		case 5: goto tr191;
		case 8: goto tr191;
		case 18: goto tr193;
		case 21: goto tr192;
		case 23: goto tr192;
		case 36: goto tr193;
		case 44: goto tr192;
		case 48: goto st59;
		case 53: goto st60;
		case 54: goto st61;
		case 55: goto st62;
		case 56: goto st63;
		case 57: goto st64;
		case 58: goto st65;
		case 59: goto st66;
		case 60: goto st67;
		case 61: goto st68;
		case 62: goto st69;
		case 71: goto st93;
		case 72: goto st99;
		case 73: goto st105;
		case 79: goto st72;
		case 80: goto st73;
		case 81: goto st83;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr192;
	goto st0;
tr191:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st56;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr211;
		case 23: goto st57;
		case 131091: goto st58;
		case 131109: goto st58;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st57;
		} else if ( _widec >= 15 )
			goto st57;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st57;
		} else if ( _widec >= 38 )
			goto st57;
	} else
		goto st57;
	goto st0;
tr192:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st57;
tr193:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st57;
tr215:
	{ expr_open_parens++; }
	goto st57;
tr217:
	{ expr_open_parens--; }
	goto st57;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st56;
		case 5: goto st56;
		case 8: goto st56;
		case 13: goto st57;
		case 18: goto tr215;
		case 21: goto st57;
		case 23: goto st57;
		case 36: goto tr215;
		case 44: goto st57;
	}
	goto st0;
tr218:
	{ expr_open_parens--; }
	goto st58;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr216;
		case 23: goto tr217;
		case 131091: goto tr218;
		case 131109: goto tr218;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr217;
		} else if ( _widec >= 15 )
			goto tr217;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr217;
		} else if ( _widec >= 38 )
			goto tr217;
	} else
		goto tr217;
	goto st0;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	if ( ( ((int) p->tok)) == 12 )
		goto tr219;
	goto st0;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	if ( ( ((int) p->tok)) == 12 )
		goto tr220;
	goto st0;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	if ( ( ((int) p->tok)) == 12 )
		goto tr221;
	goto st0;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	if ( ( ((int) p->tok)) == 12 )
		goto tr222;
	goto st0;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	if ( ( ((int) p->tok)) == 12 )
		goto tr223;
	goto st0;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	if ( ( ((int) p->tok)) == 12 )
		goto tr224;
	goto st0;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	if ( ( ((int) p->tok)) == 12 )
		goto tr225;
	goto st0;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	if ( ( ((int) p->tok)) == 12 )
		goto tr226;
	goto st0;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	if ( ( ((int) p->tok)) == 12 )
		goto tr227;
	goto st0;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	if ( ( ((int) p->tok)) == 12 )
		goto tr228;
	goto st0;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr229;
		case 22: goto st70;
	}
	goto st0;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr191;
		case 5: goto tr191;
		case 8: goto tr191;
		case 18: goto tr193;
		case 21: goto tr192;
		case 23: goto tr192;
		case 36: goto tr193;
		case 44: goto tr192;
		case 48: goto st59;
		case 53: goto st60;
		case 54: goto st61;
		case 55: goto st62;
		case 56: goto st63;
		case 57: goto st64;
		case 58: goto st65;
		case 59: goto st66;
		case 60: goto st67;
		case 61: goto st68;
		case 62: goto st71;
		case 79: goto st72;
		case 80: goto st73;
		case 81: goto st83;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr192;
	goto st0;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	if ( ( ((int) p->tok)) == 12 )
		goto tr229;
	goto st0;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	if ( ( ((int) p->tok)) == 12 )
		goto tr232;
	goto st0;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr233;
		case 5: goto tr233;
		case 8: goto tr233;
		case 18: goto tr235;
		case 19: goto st82;
		case 21: goto tr234;
		case 23: goto tr234;
		case 36: goto tr235;
		case 44: goto tr234;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr234;
	goto st0;
tr233:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st74;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st75;
		case 65555: goto tr238;
		case 131091: goto tr239;
		case 131109: goto st80;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st75;
		} else if ( _widec >= 15 )
			goto st75;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st75;
		} else if ( _widec >= 38 )
			goto st75;
	} else
		goto st75;
	goto st0;
tr242:
	{ expr_open_parens++; }
	goto st75;
tr245:
	{ expr_open_parens--; }
	goto st75;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st76;
		case 5: goto st76;
		case 8: goto st76;
		case 13: goto st75;
		case 18: goto tr242;
		case 21: goto st75;
		case 23: goto st75;
		case 36: goto tr242;
		case 44: goto st75;
	}
	goto st0;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st75;
		case 65555: goto tr238;
		case 131091: goto st78;
		case 131109: goto st78;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st75;
		} else if ( _widec >= 15 )
			goto st75;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st75;
		} else if ( _widec >= 38 )
			goto st75;
	} else
		goto st75;
	goto st0;
tr238:
	{ push_expr(expr_start, p); }
	goto st77;
tr246:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st77;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	if ( ( ((int) p->tok)) == 12 )
		goto tr244;
	goto st0;
tr247:
	{ expr_open_parens--; }
	goto st78;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr245;
		case 65555: goto tr246;
		case 131091: goto tr247;
		case 131109: goto tr247;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr245;
		} else if ( _widec >= 15 )
			goto tr245;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr245;
		} else if ( _widec >= 38 )
			goto tr245;
	} else
		goto tr245;
	goto st0;
tr239:
	{ push_expr(expr_start, p); }
	goto st79;
tr248:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st79;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr244;
		case 23: goto tr245;
		case 65555: goto tr246;
		case 131091: goto tr248;
		case 131109: goto tr249;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr245;
		} else if ( _widec >= 15 )
			goto tr245;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr245;
		} else if ( _widec >= 38 )
			goto tr245;
	} else
		goto tr245;
	goto st0;
tr249:
	{ expr_open_parens--; }
	goto st80;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr245;
		case 65555: goto tr246;
		case 131091: goto tr248;
		case 131109: goto tr249;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr245;
		} else if ( _widec >= 15 )
			goto tr245;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr245;
		} else if ( _widec >= 38 )
			goto tr245;
	} else
		goto tr245;
	goto st0;
tr234:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st81;
tr235:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st81;
tr252:
	{ expr_open_parens++; }
	goto st81;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st74;
		case 5: goto st74;
		case 8: goto st74;
		case 13: goto st81;
		case 18: goto tr252;
		case 21: goto st81;
		case 23: goto st81;
		case 36: goto tr252;
		case 44: goto st81;
	}
	goto st0;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	if ( ( ((int) p->tok)) == 12 )
		goto tr253;
	goto st0;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr254;
		case 5: goto tr254;
		case 8: goto tr254;
		case 18: goto tr256;
		case 19: goto st92;
		case 21: goto tr255;
		case 23: goto tr255;
		case 36: goto tr256;
		case 44: goto tr255;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr255;
	goto st0;
tr254:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st84;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st85;
		case 65555: goto tr259;
		case 131091: goto tr260;
		case 131109: goto st90;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st85;
		} else if ( _widec >= 15 )
			goto st85;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st85;
		} else if ( _widec >= 38 )
			goto st85;
	} else
		goto st85;
	goto st0;
tr263:
	{ expr_open_parens++; }
	goto st85;
tr266:
	{ expr_open_parens--; }
	goto st85;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st86;
		case 5: goto st86;
		case 8: goto st86;
		case 13: goto st85;
		case 18: goto tr263;
		case 21: goto st85;
		case 23: goto st85;
		case 36: goto tr263;
		case 44: goto st85;
	}
	goto st0;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st85;
		case 65555: goto tr259;
		case 131091: goto st88;
		case 131109: goto st88;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st85;
		} else if ( _widec >= 15 )
			goto st85;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st85;
		} else if ( _widec >= 38 )
			goto st85;
	} else
		goto st85;
	goto st0;
tr259:
	{ push_expr(expr_start, p); }
	goto st87;
tr267:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st87;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	if ( ( ((int) p->tok)) == 12 )
		goto tr265;
	goto st0;
tr268:
	{ expr_open_parens--; }
	goto st88;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr266;
		case 65555: goto tr267;
		case 131091: goto tr268;
		case 131109: goto tr268;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr266;
		} else if ( _widec >= 15 )
			goto tr266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr266;
		} else if ( _widec >= 38 )
			goto tr266;
	} else
		goto tr266;
	goto st0;
tr260:
	{ push_expr(expr_start, p); }
	goto st89;
tr269:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st89;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr265;
		case 23: goto tr266;
		case 65555: goto tr267;
		case 131091: goto tr269;
		case 131109: goto tr270;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr266;
		} else if ( _widec >= 15 )
			goto tr266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr266;
		} else if ( _widec >= 38 )
			goto tr266;
	} else
		goto tr266;
	goto st0;
tr270:
	{ expr_open_parens--; }
	goto st90;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr266;
		case 65555: goto tr267;
		case 131091: goto tr269;
		case 131109: goto tr270;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr266;
		} else if ( _widec >= 15 )
			goto tr266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr266;
		} else if ( _widec >= 38 )
			goto tr266;
	} else
		goto tr266;
	goto st0;
tr255:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st91;
tr256:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st91;
tr273:
	{ expr_open_parens++; }
	goto st91;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st84;
		case 5: goto st84;
		case 8: goto st84;
		case 13: goto st91;
		case 18: goto tr273;
		case 21: goto st91;
		case 23: goto st91;
		case 36: goto tr273;
		case 44: goto st91;
	}
	goto st0;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
	if ( ( ((int) p->tok)) == 12 )
		goto tr274;
	goto st0;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
	if ( ( ((int) p->tok)) == 22 )
		goto st94;
	goto st0;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st95;
		case 70: goto st96;
		case 71: goto st97;
		case 75: goto st98;
	}
	goto st0;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
	if ( ( ((int) p->tok)) == 12 )
		goto tr280;
	goto st0;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
	if ( ( ((int) p->tok)) == 12 )
		goto tr281;
	goto st0;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
	if ( ( ((int) p->tok)) == 12 )
		goto tr282;
	goto st0;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
	if ( ( ((int) p->tok)) == 12 )
		goto tr283;
	goto st0;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
	if ( ( ((int) p->tok)) == 22 )
		goto st100;
	goto st0;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st101;
		case 70: goto st102;
		case 72: goto st103;
		case 75: goto st104;
	}
	goto st0;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
	if ( ( ((int) p->tok)) == 12 )
		goto tr289;
	goto st0;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
	if ( ( ((int) p->tok)) == 12 )
		goto tr290;
	goto st0;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
	if ( ( ((int) p->tok)) == 12 )
		goto tr291;
	goto st0;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
	if ( ( ((int) p->tok)) == 12 )
		goto tr292;
	goto st0;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
	if ( ( ((int) p->tok)) == 22 )
		goto st106;
	goto st0;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st107;
		case 70: goto st108;
		case 73: goto st109;
		case 75: goto st110;
	}
	goto st0;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
	if ( ( ((int) p->tok)) == 12 )
		goto tr298;
	goto st0;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	if ( ( ((int) p->tok)) == 12 )
		goto tr299;
	goto st0;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	if ( ( ((int) p->tok)) == 12 )
		goto tr300;
	goto st0;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	if ( ( ((int) p->tok)) == 12 )
		goto tr301;
	goto st0;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr302;
		case 5: goto tr302;
		case 8: goto tr302;
		case 18: goto tr304;
		case 21: goto tr303;
		case 23: goto tr303;
		case 36: goto tr304;
		case 44: goto tr303;
		case 48: goto st115;
		case 53: goto st116;
		case 54: goto st117;
		case 55: goto st118;
		case 56: goto st119;
		case 57: goto st120;
		case 58: goto st121;
		case 59: goto st122;
		case 60: goto st123;
		case 61: goto st124;
		case 62: goto st125;
		case 79: goto st128;
		case 80: goto st129;
		case 81: goto st139;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr303;
	goto st0;
tr302:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st112;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr319;
		case 23: goto st113;
		case 131091: goto st114;
		case 131109: goto st114;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st113;
		} else if ( _widec >= 15 )
			goto st113;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st113;
		} else if ( _widec >= 38 )
			goto st113;
	} else
		goto st113;
	goto st0;
tr303:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st113;
tr304:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st113;
tr323:
	{ expr_open_parens++; }
	goto st113;
tr325:
	{ expr_open_parens--; }
	goto st113;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st112;
		case 5: goto st112;
		case 8: goto st112;
		case 13: goto st113;
		case 18: goto tr323;
		case 21: goto st113;
		case 23: goto st113;
		case 36: goto tr323;
		case 44: goto st113;
	}
	goto st0;
tr326:
	{ expr_open_parens--; }
	goto st114;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr324;
		case 23: goto tr325;
		case 131091: goto tr326;
		case 131109: goto tr326;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr325;
		} else if ( _widec >= 15 )
			goto tr325;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr325;
		} else if ( _widec >= 38 )
			goto tr325;
	} else
		goto tr325;
	goto st0;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	if ( ( ((int) p->tok)) == 12 )
		goto tr327;
	goto st0;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	if ( ( ((int) p->tok)) == 12 )
		goto tr328;
	goto st0;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	if ( ( ((int) p->tok)) == 12 )
		goto tr329;
	goto st0;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	if ( ( ((int) p->tok)) == 12 )
		goto tr330;
	goto st0;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	if ( ( ((int) p->tok)) == 12 )
		goto tr331;
	goto st0;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	if ( ( ((int) p->tok)) == 12 )
		goto tr332;
	goto st0;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	if ( ( ((int) p->tok)) == 12 )
		goto tr333;
	goto st0;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	if ( ( ((int) p->tok)) == 12 )
		goto tr334;
	goto st0;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	if ( ( ((int) p->tok)) == 12 )
		goto tr335;
	goto st0;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	if ( ( ((int) p->tok)) == 12 )
		goto tr336;
	goto st0;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr337;
		case 22: goto st126;
	}
	goto st0;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr302;
		case 5: goto tr302;
		case 8: goto tr302;
		case 18: goto tr304;
		case 21: goto tr303;
		case 23: goto tr303;
		case 36: goto tr304;
		case 44: goto tr303;
		case 48: goto st115;
		case 53: goto st116;
		case 54: goto st117;
		case 55: goto st118;
		case 56: goto st119;
		case 57: goto st120;
		case 58: goto st121;
		case 59: goto st122;
		case 60: goto st123;
		case 61: goto st124;
		case 62: goto st127;
		case 79: goto st128;
		case 80: goto st129;
		case 81: goto st139;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr303;
	goto st0;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
	if ( ( ((int) p->tok)) == 12 )
		goto tr337;
	goto st0;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
	if ( ( ((int) p->tok)) == 12 )
		goto tr340;
	goto st0;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr341;
		case 5: goto tr341;
		case 8: goto tr341;
		case 18: goto tr343;
		case 19: goto st138;
		case 21: goto tr342;
		case 23: goto tr342;
		case 36: goto tr343;
		case 44: goto tr342;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr342;
	goto st0;
tr341:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st130;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st131;
		case 65555: goto tr346;
		case 131091: goto tr347;
		case 131109: goto st136;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st131;
		} else if ( _widec >= 15 )
			goto st131;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st131;
		} else if ( _widec >= 38 )
			goto st131;
	} else
		goto st131;
	goto st0;
tr350:
	{ expr_open_parens++; }
	goto st131;
tr353:
	{ expr_open_parens--; }
	goto st131;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st132;
		case 5: goto st132;
		case 8: goto st132;
		case 13: goto st131;
		case 18: goto tr350;
		case 21: goto st131;
		case 23: goto st131;
		case 36: goto tr350;
		case 44: goto st131;
	}
	goto st0;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st131;
		case 65555: goto tr346;
		case 131091: goto st134;
		case 131109: goto st134;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st131;
		} else if ( _widec >= 15 )
			goto st131;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st131;
		} else if ( _widec >= 38 )
			goto st131;
	} else
		goto st131;
	goto st0;
tr346:
	{ push_expr(expr_start, p); }
	goto st133;
tr354:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st133;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
	if ( ( ((int) p->tok)) == 12 )
		goto tr352;
	goto st0;
tr355:
	{ expr_open_parens--; }
	goto st134;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr353;
		case 65555: goto tr354;
		case 131091: goto tr355;
		case 131109: goto tr355;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr353;
		} else if ( _widec >= 15 )
			goto tr353;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr353;
		} else if ( _widec >= 38 )
			goto tr353;
	} else
		goto tr353;
	goto st0;
tr347:
	{ push_expr(expr_start, p); }
	goto st135;
tr356:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st135;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr352;
		case 23: goto tr353;
		case 65555: goto tr354;
		case 131091: goto tr356;
		case 131109: goto tr357;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr353;
		} else if ( _widec >= 15 )
			goto tr353;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr353;
		} else if ( _widec >= 38 )
			goto tr353;
	} else
		goto tr353;
	goto st0;
tr357:
	{ expr_open_parens--; }
	goto st136;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr353;
		case 65555: goto tr354;
		case 131091: goto tr356;
		case 131109: goto tr357;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr353;
		} else if ( _widec >= 15 )
			goto tr353;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr353;
		} else if ( _widec >= 38 )
			goto tr353;
	} else
		goto tr353;
	goto st0;
tr342:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st137;
tr343:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st137;
tr360:
	{ expr_open_parens++; }
	goto st137;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st130;
		case 5: goto st130;
		case 8: goto st130;
		case 13: goto st137;
		case 18: goto tr360;
		case 21: goto st137;
		case 23: goto st137;
		case 36: goto tr360;
		case 44: goto st137;
	}
	goto st0;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
	if ( ( ((int) p->tok)) == 12 )
		goto tr361;
	goto st0;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr362;
		case 5: goto tr362;
		case 8: goto tr362;
		case 18: goto tr364;
		case 19: goto st148;
		case 21: goto tr363;
		case 23: goto tr363;
		case 36: goto tr364;
		case 44: goto tr363;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr363;
	goto st0;
tr362:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st140;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st141;
		case 65555: goto tr367;
		case 131091: goto tr368;
		case 131109: goto st146;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st141;
		} else if ( _widec >= 15 )
			goto st141;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st141;
		} else if ( _widec >= 38 )
			goto st141;
	} else
		goto st141;
	goto st0;
tr371:
	{ expr_open_parens++; }
	goto st141;
tr374:
	{ expr_open_parens--; }
	goto st141;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st142;
		case 5: goto st142;
		case 8: goto st142;
		case 13: goto st141;
		case 18: goto tr371;
		case 21: goto st141;
		case 23: goto st141;
		case 36: goto tr371;
		case 44: goto st141;
	}
	goto st0;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st141;
		case 65555: goto tr367;
		case 131091: goto st144;
		case 131109: goto st144;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st141;
		} else if ( _widec >= 15 )
			goto st141;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st141;
		} else if ( _widec >= 38 )
			goto st141;
	} else
		goto st141;
	goto st0;
tr367:
	{ push_expr(expr_start, p); }
	goto st143;
tr375:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st143;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
	if ( ( ((int) p->tok)) == 12 )
		goto tr373;
	goto st0;
tr376:
	{ expr_open_parens--; }
	goto st144;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr374;
		case 65555: goto tr375;
		case 131091: goto tr376;
		case 131109: goto tr376;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr374;
		} else if ( _widec >= 15 )
			goto tr374;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr374;
		} else if ( _widec >= 38 )
			goto tr374;
	} else
		goto tr374;
	goto st0;
tr368:
	{ push_expr(expr_start, p); }
	goto st145;
tr377:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st145;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr373;
		case 23: goto tr374;
		case 65555: goto tr375;
		case 131091: goto tr377;
		case 131109: goto tr378;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr374;
		} else if ( _widec >= 15 )
			goto tr374;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr374;
		} else if ( _widec >= 38 )
			goto tr374;
	} else
		goto tr374;
	goto st0;
tr378:
	{ expr_open_parens--; }
	goto st146;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr374;
		case 65555: goto tr375;
		case 131091: goto tr377;
		case 131109: goto tr378;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr374;
		} else if ( _widec >= 15 )
			goto tr374;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr374;
		} else if ( _widec >= 38 )
			goto tr374;
	} else
		goto tr374;
	goto st0;
tr363:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st147;
tr364:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st147;
tr381:
	{ expr_open_parens++; }
	goto st147;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st140;
		case 5: goto st140;
		case 8: goto st140;
		case 13: goto st147;
		case 18: goto tr381;
		case 21: goto st147;
		case 23: goto st147;
		case 36: goto tr381;
		case 44: goto st147;
	}
	goto st0;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	if ( ( ((int) p->tok)) == 12 )
		goto tr382;
	goto st0;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr383;
		case 5: goto tr383;
		case 8: goto tr383;
		case 18: goto tr385;
		case 21: goto tr384;
		case 23: goto tr384;
		case 36: goto tr385;
		case 44: goto tr384;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr384;
	goto st0;
tr383:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st150;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr387;
		case 131091: goto st181;
		case 131109: goto st181;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st151;
		} else if ( _widec >= 15 )
			goto st151;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st151;
		} else if ( _widec >= 38 )
			goto st151;
	} else
		goto st151;
	goto st0;
tr384:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st151;
tr385:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st151;
tr390:
	{ expr_open_parens++; }
	goto st151;
tr451:
	{ expr_open_parens--; }
	goto st151;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st150;
		case 5: goto st150;
		case 8: goto st150;
		case 13: goto st151;
		case 18: goto tr390;
		case 21: goto st151;
		case 23: goto st151;
		case 36: goto tr390;
		case 44: goto st151;
	}
	goto st0;
tr387:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st152;
tr452:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st152;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st153;
		case 53: goto st154;
		case 54: goto st155;
		case 55: goto st156;
		case 56: goto st157;
		case 59: goto st158;
		case 62: goto st159;
		case 79: goto st160;
		case 80: goto st161;
		case 81: goto st171;
	}
	goto st0;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
	if ( ( ((int) p->tok)) == 12 )
		goto tr401;
	goto st0;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
	if ( ( ((int) p->tok)) == 12 )
		goto tr402;
	goto st0;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
	if ( ( ((int) p->tok)) == 12 )
		goto tr403;
	goto st0;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
	if ( ( ((int) p->tok)) == 12 )
		goto tr404;
	goto st0;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
	if ( ( ((int) p->tok)) == 12 )
		goto tr405;
	goto st0;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
	if ( ( ((int) p->tok)) == 12 )
		goto tr406;
	goto st0;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
	if ( ( ((int) p->tok)) == 12 )
		goto tr407;
	goto st0;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
	if ( ( ((int) p->tok)) == 12 )
		goto tr408;
	goto st0;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr409;
		case 5: goto tr409;
		case 8: goto tr409;
		case 18: goto tr411;
		case 19: goto st170;
		case 21: goto tr410;
		case 23: goto tr410;
		case 36: goto tr411;
		case 44: goto tr410;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr410;
	goto st0;
tr409:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st162;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st163;
		case 65555: goto tr414;
		case 131091: goto tr415;
		case 131109: goto st168;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st163;
		} else if ( _widec >= 15 )
			goto st163;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st163;
		} else if ( _widec >= 38 )
			goto st163;
	} else
		goto st163;
	goto st0;
tr418:
	{ expr_open_parens++; }
	goto st163;
tr421:
	{ expr_open_parens--; }
	goto st163;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st164;
		case 5: goto st164;
		case 8: goto st164;
		case 13: goto st163;
		case 18: goto tr418;
		case 21: goto st163;
		case 23: goto st163;
		case 36: goto tr418;
		case 44: goto st163;
	}
	goto st0;
st164:
	if ( ++p == pe )
		goto _test_eof164;
case 164:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st163;
		case 65555: goto tr414;
		case 131091: goto st166;
		case 131109: goto st166;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st163;
		} else if ( _widec >= 15 )
			goto st163;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st163;
		} else if ( _widec >= 38 )
			goto st163;
	} else
		goto st163;
	goto st0;
tr414:
	{ push_expr(expr_start, p); }
	goto st165;
tr422:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st165;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
	if ( ( ((int) p->tok)) == 12 )
		goto tr420;
	goto st0;
tr423:
	{ expr_open_parens--; }
	goto st166;
st166:
	if ( ++p == pe )
		goto _test_eof166;
case 166:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr421;
		case 65555: goto tr422;
		case 131091: goto tr423;
		case 131109: goto tr423;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr421;
		} else if ( _widec >= 15 )
			goto tr421;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr421;
		} else if ( _widec >= 38 )
			goto tr421;
	} else
		goto tr421;
	goto st0;
tr415:
	{ push_expr(expr_start, p); }
	goto st167;
tr424:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st167;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr420;
		case 23: goto tr421;
		case 65555: goto tr422;
		case 131091: goto tr424;
		case 131109: goto tr425;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr421;
		} else if ( _widec >= 15 )
			goto tr421;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr421;
		} else if ( _widec >= 38 )
			goto tr421;
	} else
		goto tr421;
	goto st0;
tr425:
	{ expr_open_parens--; }
	goto st168;
st168:
	if ( ++p == pe )
		goto _test_eof168;
case 168:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr421;
		case 65555: goto tr422;
		case 131091: goto tr424;
		case 131109: goto tr425;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr421;
		} else if ( _widec >= 15 )
			goto tr421;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr421;
		} else if ( _widec >= 38 )
			goto tr421;
	} else
		goto tr421;
	goto st0;
tr410:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st169;
tr411:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st169;
tr428:
	{ expr_open_parens++; }
	goto st169;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st162;
		case 5: goto st162;
		case 8: goto st162;
		case 13: goto st169;
		case 18: goto tr428;
		case 21: goto st169;
		case 23: goto st169;
		case 36: goto tr428;
		case 44: goto st169;
	}
	goto st0;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
	if ( ( ((int) p->tok)) == 12 )
		goto tr429;
	goto st0;
st171:
	if ( ++p == pe )
		goto _test_eof171;
case 171:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr430;
		case 5: goto tr430;
		case 8: goto tr430;
		case 18: goto tr432;
		case 19: goto st180;
		case 21: goto tr431;
		case 23: goto tr431;
		case 36: goto tr432;
		case 44: goto tr431;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr431;
	goto st0;
tr430:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st172;
st172:
	if ( ++p == pe )
		goto _test_eof172;
case 172:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st173;
		case 65555: goto tr435;
		case 131091: goto tr436;
		case 131109: goto st178;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st173;
		} else if ( _widec >= 15 )
			goto st173;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st173;
		} else if ( _widec >= 38 )
			goto st173;
	} else
		goto st173;
	goto st0;
tr439:
	{ expr_open_parens++; }
	goto st173;
tr442:
	{ expr_open_parens--; }
	goto st173;
st173:
	if ( ++p == pe )
		goto _test_eof173;
case 173:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st174;
		case 5: goto st174;
		case 8: goto st174;
		case 13: goto st173;
		case 18: goto tr439;
		case 21: goto st173;
		case 23: goto st173;
		case 36: goto tr439;
		case 44: goto st173;
	}
	goto st0;
st174:
	if ( ++p == pe )
		goto _test_eof174;
case 174:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st173;
		case 65555: goto tr435;
		case 131091: goto st176;
		case 131109: goto st176;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st173;
		} else if ( _widec >= 15 )
			goto st173;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st173;
		} else if ( _widec >= 38 )
			goto st173;
	} else
		goto st173;
	goto st0;
tr435:
	{ push_expr(expr_start, p); }
	goto st175;
tr443:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st175;
st175:
	if ( ++p == pe )
		goto _test_eof175;
case 175:
	if ( ( ((int) p->tok)) == 12 )
		goto tr441;
	goto st0;
tr444:
	{ expr_open_parens--; }
	goto st176;
st176:
	if ( ++p == pe )
		goto _test_eof176;
case 176:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr442;
		case 65555: goto tr443;
		case 131091: goto tr444;
		case 131109: goto tr444;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr442;
		} else if ( _widec >= 15 )
			goto tr442;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr442;
		} else if ( _widec >= 38 )
			goto tr442;
	} else
		goto tr442;
	goto st0;
tr436:
	{ push_expr(expr_start, p); }
	goto st177;
tr445:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st177;
st177:
	if ( ++p == pe )
		goto _test_eof177;
case 177:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr441;
		case 23: goto tr442;
		case 65555: goto tr443;
		case 131091: goto tr445;
		case 131109: goto tr446;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr442;
		} else if ( _widec >= 15 )
			goto tr442;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr442;
		} else if ( _widec >= 38 )
			goto tr442;
	} else
		goto tr442;
	goto st0;
tr446:
	{ expr_open_parens--; }
	goto st178;
st178:
	if ( ++p == pe )
		goto _test_eof178;
case 178:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr442;
		case 65555: goto tr443;
		case 131091: goto tr445;
		case 131109: goto tr446;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr442;
		} else if ( _widec >= 15 )
			goto tr442;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr442;
		} else if ( _widec >= 38 )
			goto tr442;
	} else
		goto tr442;
	goto st0;
tr431:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st179;
tr432:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st179;
tr449:
	{ expr_open_parens++; }
	goto st179;
st179:
	if ( ++p == pe )
		goto _test_eof179;
case 179:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st172;
		case 5: goto st172;
		case 8: goto st172;
		case 13: goto st179;
		case 18: goto tr449;
		case 21: goto st179;
		case 23: goto st179;
		case 36: goto tr449;
		case 44: goto st179;
	}
	goto st0;
st180:
	if ( ++p == pe )
		goto _test_eof180;
case 180:
	if ( ( ((int) p->tok)) == 12 )
		goto tr450;
	goto st0;
tr453:
	{ expr_open_parens--; }
	goto st181;
st181:
	if ( ++p == pe )
		goto _test_eof181;
case 181:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr452;
		case 131091: goto tr453;
		case 131109: goto tr453;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr451;
		} else if ( _widec >= 15 )
			goto tr451;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr451;
		} else if ( _widec >= 38 )
			goto tr451;
	} else
		goto tr451;
	goto st0;
st182:
	if ( ++p == pe )
		goto _test_eof182;
case 182:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr454;
		case 5: goto tr454;
		case 8: goto tr454;
		case 18: goto tr456;
		case 21: goto tr455;
		case 23: goto tr455;
		case 36: goto tr456;
		case 44: goto tr455;
		case 45: goto st186;
		case 46: goto st191;
		case 47: goto st196;
		case 48: goto st201;
		case 49: goto st206;
		case 50: goto st211;
		case 51: goto st216;
		case 52: goto st221;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr455;
	goto st0;
tr454:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st183;
st183:
	if ( ++p == pe )
		goto _test_eof183;
case 183:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr465;
		case 23: goto st184;
		case 131091: goto st185;
		case 131109: goto st185;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st184;
		} else if ( _widec >= 15 )
			goto st184;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st184;
		} else if ( _widec >= 38 )
			goto st184;
	} else
		goto st184;
	goto st0;
tr455:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st184;
tr456:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st184;
tr469:
	{ expr_open_parens++; }
	goto st184;
tr471:
	{ expr_open_parens--; }
	goto st184;
st184:
	if ( ++p == pe )
		goto _test_eof184;
case 184:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st183;
		case 5: goto st183;
		case 8: goto st183;
		case 13: goto st184;
		case 18: goto tr469;
		case 21: goto st184;
		case 23: goto st184;
		case 36: goto tr469;
		case 44: goto st184;
	}
	goto st0;
tr472:
	{ expr_open_parens--; }
	goto st185;
st185:
	if ( ++p == pe )
		goto _test_eof185;
case 185:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr470;
		case 23: goto tr471;
		case 131091: goto tr472;
		case 131109: goto tr472;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr471;
		} else if ( _widec >= 15 )
			goto tr471;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr471;
		} else if ( _widec >= 38 )
			goto tr471;
	} else
		goto tr471;
	goto st0;
st186:
	if ( ++p == pe )
		goto _test_eof186;
case 186:
	if ( ( ((int) p->tok)) == 22 )
		goto st187;
	goto st0;
st187:
	if ( ++p == pe )
		goto _test_eof187;
case 187:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr474;
		case 5: goto tr474;
		case 8: goto tr474;
		case 18: goto tr476;
		case 21: goto tr475;
		case 23: goto tr475;
		case 36: goto tr476;
		case 44: goto tr475;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr475;
	goto st0;
tr474:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st188;
st188:
	if ( ++p == pe )
		goto _test_eof188;
case 188:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr477;
		case 23: goto st189;
		case 131091: goto st190;
		case 131109: goto st190;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st189;
		} else if ( _widec >= 15 )
			goto st189;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st189;
		} else if ( _widec >= 38 )
			goto st189;
	} else
		goto st189;
	goto st0;
tr475:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st189;
tr476:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st189;
tr481:
	{ expr_open_parens++; }
	goto st189;
tr483:
	{ expr_open_parens--; }
	goto st189;
st189:
	if ( ++p == pe )
		goto _test_eof189;
case 189:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st188;
		case 5: goto st188;
		case 8: goto st188;
		case 13: goto st189;
		case 18: goto tr481;
		case 21: goto st189;
		case 23: goto st189;
		case 36: goto tr481;
		case 44: goto st189;
	}
	goto st0;
tr484:
	{ expr_open_parens--; }
	goto st190;
st190:
	if ( ++p == pe )
		goto _test_eof190;
case 190:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr482;
		case 23: goto tr483;
		case 131091: goto tr484;
		case 131109: goto tr484;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr483;
		} else if ( _widec >= 15 )
			goto tr483;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr483;
		} else if ( _widec >= 38 )
			goto tr483;
	} else
		goto tr483;
	goto st0;
st191:
	if ( ++p == pe )
		goto _test_eof191;
case 191:
	if ( ( ((int) p->tok)) == 22 )
		goto st192;
	goto st0;
st192:
	if ( ++p == pe )
		goto _test_eof192;
case 192:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr486;
		case 5: goto tr486;
		case 8: goto tr486;
		case 18: goto tr488;
		case 21: goto tr487;
		case 23: goto tr487;
		case 36: goto tr488;
		case 44: goto tr487;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr487;
	goto st0;
tr486:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st193;
st193:
	if ( ++p == pe )
		goto _test_eof193;
case 193:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr489;
		case 23: goto st194;
		case 131091: goto st195;
		case 131109: goto st195;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st194;
		} else if ( _widec >= 15 )
			goto st194;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st194;
		} else if ( _widec >= 38 )
			goto st194;
	} else
		goto st194;
	goto st0;
tr487:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st194;
tr488:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st194;
tr493:
	{ expr_open_parens++; }
	goto st194;
tr495:
	{ expr_open_parens--; }
	goto st194;
st194:
	if ( ++p == pe )
		goto _test_eof194;
case 194:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st193;
		case 5: goto st193;
		case 8: goto st193;
		case 13: goto st194;
		case 18: goto tr493;
		case 21: goto st194;
		case 23: goto st194;
		case 36: goto tr493;
		case 44: goto st194;
	}
	goto st0;
tr496:
	{ expr_open_parens--; }
	goto st195;
st195:
	if ( ++p == pe )
		goto _test_eof195;
case 195:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr494;
		case 23: goto tr495;
		case 131091: goto tr496;
		case 131109: goto tr496;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr495;
		} else if ( _widec >= 15 )
			goto tr495;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr495;
		} else if ( _widec >= 38 )
			goto tr495;
	} else
		goto tr495;
	goto st0;
st196:
	if ( ++p == pe )
		goto _test_eof196;
case 196:
	if ( ( ((int) p->tok)) == 22 )
		goto st197;
	goto st0;
st197:
	if ( ++p == pe )
		goto _test_eof197;
case 197:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr498;
		case 5: goto tr498;
		case 8: goto tr498;
		case 18: goto tr500;
		case 21: goto tr499;
		case 23: goto tr499;
		case 36: goto tr500;
		case 44: goto tr499;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr499;
	goto st0;
tr498:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st198;
st198:
	if ( ++p == pe )
		goto _test_eof198;
case 198:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr501;
		case 23: goto st199;
		case 131091: goto st200;
		case 131109: goto st200;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st199;
		} else if ( _widec >= 15 )
			goto st199;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st199;
		} else if ( _widec >= 38 )
			goto st199;
	} else
		goto st199;
	goto st0;
tr499:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st199;
tr500:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st199;
tr505:
	{ expr_open_parens++; }
	goto st199;
tr507:
	{ expr_open_parens--; }
	goto st199;
st199:
	if ( ++p == pe )
		goto _test_eof199;
case 199:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st198;
		case 5: goto st198;
		case 8: goto st198;
		case 13: goto st199;
		case 18: goto tr505;
		case 21: goto st199;
		case 23: goto st199;
		case 36: goto tr505;
		case 44: goto st199;
	}
	goto st0;
tr508:
	{ expr_open_parens--; }
	goto st200;
st200:
	if ( ++p == pe )
		goto _test_eof200;
case 200:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr506;
		case 23: goto tr507;
		case 131091: goto tr508;
		case 131109: goto tr508;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr507;
		} else if ( _widec >= 15 )
			goto tr507;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr507;
		} else if ( _widec >= 38 )
			goto tr507;
	} else
		goto tr507;
	goto st0;
st201:
	if ( ++p == pe )
		goto _test_eof201;
case 201:
	if ( ( ((int) p->tok)) == 22 )
		goto st202;
	goto st0;
st202:
	if ( ++p == pe )
		goto _test_eof202;
case 202:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr510;
		case 5: goto tr510;
		case 8: goto tr510;
		case 18: goto tr512;
		case 21: goto tr511;
		case 23: goto tr511;
		case 36: goto tr512;
		case 44: goto tr511;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr511;
	goto st0;
tr510:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st203;
st203:
	if ( ++p == pe )
		goto _test_eof203;
case 203:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr513;
		case 23: goto st204;
		case 131091: goto st205;
		case 131109: goto st205;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st204;
		} else if ( _widec >= 15 )
			goto st204;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st204;
		} else if ( _widec >= 38 )
			goto st204;
	} else
		goto st204;
	goto st0;
tr511:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st204;
tr512:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st204;
tr517:
	{ expr_open_parens++; }
	goto st204;
tr519:
	{ expr_open_parens--; }
	goto st204;
st204:
	if ( ++p == pe )
		goto _test_eof204;
case 204:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st203;
		case 5: goto st203;
		case 8: goto st203;
		case 13: goto st204;
		case 18: goto tr517;
		case 21: goto st204;
		case 23: goto st204;
		case 36: goto tr517;
		case 44: goto st204;
	}
	goto st0;
tr520:
	{ expr_open_parens--; }
	goto st205;
st205:
	if ( ++p == pe )
		goto _test_eof205;
case 205:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr518;
		case 23: goto tr519;
		case 131091: goto tr520;
		case 131109: goto tr520;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr519;
		} else if ( _widec >= 15 )
			goto tr519;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr519;
		} else if ( _widec >= 38 )
			goto tr519;
	} else
		goto tr519;
	goto st0;
st206:
	if ( ++p == pe )
		goto _test_eof206;
case 206:
	if ( ( ((int) p->tok)) == 22 )
		goto st207;
	goto st0;
st207:
	if ( ++p == pe )
		goto _test_eof207;
case 207:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr522;
		case 5: goto tr522;
		case 8: goto tr522;
		case 18: goto tr524;
		case 21: goto tr523;
		case 23: goto tr523;
		case 36: goto tr524;
		case 44: goto tr523;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr523;
	goto st0;
tr522:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st208;
st208:
	if ( ++p == pe )
		goto _test_eof208;
case 208:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr525;
		case 23: goto st209;
		case 131091: goto st210;
		case 131109: goto st210;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st209;
		} else if ( _widec >= 15 )
			goto st209;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st209;
		} else if ( _widec >= 38 )
			goto st209;
	} else
		goto st209;
	goto st0;
tr523:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st209;
tr524:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st209;
tr529:
	{ expr_open_parens++; }
	goto st209;
tr531:
	{ expr_open_parens--; }
	goto st209;
st209:
	if ( ++p == pe )
		goto _test_eof209;
case 209:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st208;
		case 5: goto st208;
		case 8: goto st208;
		case 13: goto st209;
		case 18: goto tr529;
		case 21: goto st209;
		case 23: goto st209;
		case 36: goto tr529;
		case 44: goto st209;
	}
	goto st0;
tr532:
	{ expr_open_parens--; }
	goto st210;
st210:
	if ( ++p == pe )
		goto _test_eof210;
case 210:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr530;
		case 23: goto tr531;
		case 131091: goto tr532;
		case 131109: goto tr532;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr531;
		} else if ( _widec >= 15 )
			goto tr531;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr531;
		} else if ( _widec >= 38 )
			goto tr531;
	} else
		goto tr531;
	goto st0;
st211:
	if ( ++p == pe )
		goto _test_eof211;
case 211:
	if ( ( ((int) p->tok)) == 22 )
		goto st212;
	goto st0;
st212:
	if ( ++p == pe )
		goto _test_eof212;
case 212:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr534;
		case 5: goto tr534;
		case 8: goto tr534;
		case 18: goto tr536;
		case 21: goto tr535;
		case 23: goto tr535;
		case 36: goto tr536;
		case 44: goto tr535;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr535;
	goto st0;
tr534:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st213;
st213:
	if ( ++p == pe )
		goto _test_eof213;
case 213:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr537;
		case 23: goto st214;
		case 131091: goto st215;
		case 131109: goto st215;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st214;
		} else if ( _widec >= 15 )
			goto st214;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st214;
		} else if ( _widec >= 38 )
			goto st214;
	} else
		goto st214;
	goto st0;
tr535:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st214;
tr536:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st214;
tr541:
	{ expr_open_parens++; }
	goto st214;
tr543:
	{ expr_open_parens--; }
	goto st214;
st214:
	if ( ++p == pe )
		goto _test_eof214;
case 214:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st213;
		case 5: goto st213;
		case 8: goto st213;
		case 13: goto st214;
		case 18: goto tr541;
		case 21: goto st214;
		case 23: goto st214;
		case 36: goto tr541;
		case 44: goto st214;
	}
	goto st0;
tr544:
	{ expr_open_parens--; }
	goto st215;
st215:
	if ( ++p == pe )
		goto _test_eof215;
case 215:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr542;
		case 23: goto tr543;
		case 131091: goto tr544;
		case 131109: goto tr544;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr543;
		} else if ( _widec >= 15 )
			goto tr543;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr543;
		} else if ( _widec >= 38 )
			goto tr543;
	} else
		goto tr543;
	goto st0;
st216:
	if ( ++p == pe )
		goto _test_eof216;
case 216:
	if ( ( ((int) p->tok)) == 22 )
		goto st217;
	goto st0;
st217:
	if ( ++p == pe )
		goto _test_eof217;
case 217:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr546;
		case 5: goto tr546;
		case 8: goto tr546;
		case 18: goto tr548;
		case 21: goto tr547;
		case 23: goto tr547;
		case 36: goto tr548;
		case 44: goto tr547;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr547;
	goto st0;
tr546:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st218;
st218:
	if ( ++p == pe )
		goto _test_eof218;
case 218:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr549;
		case 23: goto st219;
		case 131091: goto st220;
		case 131109: goto st220;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st219;
		} else if ( _widec >= 15 )
			goto st219;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st219;
		} else if ( _widec >= 38 )
			goto st219;
	} else
		goto st219;
	goto st0;
tr547:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st219;
tr548:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st219;
tr553:
	{ expr_open_parens++; }
	goto st219;
tr555:
	{ expr_open_parens--; }
	goto st219;
st219:
	if ( ++p == pe )
		goto _test_eof219;
case 219:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st218;
		case 5: goto st218;
		case 8: goto st218;
		case 13: goto st219;
		case 18: goto tr553;
		case 21: goto st219;
		case 23: goto st219;
		case 36: goto tr553;
		case 44: goto st219;
	}
	goto st0;
tr556:
	{ expr_open_parens--; }
	goto st220;
st220:
	if ( ++p == pe )
		goto _test_eof220;
case 220:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr554;
		case 23: goto tr555;
		case 131091: goto tr556;
		case 131109: goto tr556;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr555;
		} else if ( _widec >= 15 )
			goto tr555;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr555;
		} else if ( _widec >= 38 )
			goto tr555;
	} else
		goto tr555;
	goto st0;
st221:
	if ( ++p == pe )
		goto _test_eof221;
case 221:
	if ( ( ((int) p->tok)) == 22 )
		goto st222;
	goto st0;
st222:
	if ( ++p == pe )
		goto _test_eof222;
case 222:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr558;
		case 5: goto tr558;
		case 8: goto tr558;
		case 18: goto tr560;
		case 21: goto tr559;
		case 23: goto tr559;
		case 36: goto tr560;
		case 44: goto tr559;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr559;
	goto st0;
tr558:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st223;
st223:
	if ( ++p == pe )
		goto _test_eof223;
case 223:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr561;
		case 23: goto st224;
		case 131091: goto st225;
		case 131109: goto st225;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st224;
		} else if ( _widec >= 15 )
			goto st224;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st224;
		} else if ( _widec >= 38 )
			goto st224;
	} else
		goto st224;
	goto st0;
tr559:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st224;
tr560:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st224;
tr565:
	{ expr_open_parens++; }
	goto st224;
tr567:
	{ expr_open_parens--; }
	goto st224;
st224:
	if ( ++p == pe )
		goto _test_eof224;
case 224:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st223;
		case 5: goto st223;
		case 8: goto st223;
		case 13: goto st224;
		case 18: goto tr565;
		case 21: goto st224;
		case 23: goto st224;
		case 36: goto tr565;
		case 44: goto st224;
	}
	goto st0;
tr568:
	{ expr_open_parens--; }
	goto st225;
st225:
	if ( ++p == pe )
		goto _test_eof225;
case 225:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr566;
		case 23: goto tr567;
		case 131091: goto tr568;
		case 131109: goto tr568;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr567;
		} else if ( _widec >= 15 )
			goto tr567;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr567;
		} else if ( _widec >= 38 )
			goto tr567;
	} else
		goto tr567;
	goto st0;
st226:
	if ( ++p == pe )
		goto _test_eof226;
case 226:
	if ( ( ((int) p->tok)) == 12 )
		goto tr569;
	goto st0;
st227:
	if ( ++p == pe )
		goto _test_eof227;
case 227:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr570;
		case 5: goto tr570;
		case 8: goto tr570;
		case 18: goto tr572;
		case 21: goto tr571;
		case 23: goto tr571;
		case 36: goto tr572;
		case 44: goto tr571;
		case 48: goto st231;
		case 53: goto st232;
		case 54: goto st233;
		case 55: goto st234;
		case 56: goto st235;
		case 57: goto st236;
		case 58: goto st237;
		case 59: goto st238;
		case 60: goto st239;
		case 61: goto st240;
		case 62: goto st241;
		case 79: goto st244;
		case 80: goto st245;
		case 81: goto st255;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr571;
	goto st0;
tr570:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st228;
st228:
	if ( ++p == pe )
		goto _test_eof228;
case 228:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr587;
		case 23: goto st229;
		case 131091: goto st230;
		case 131109: goto st230;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st229;
		} else if ( _widec >= 15 )
			goto st229;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st229;
		} else if ( _widec >= 38 )
			goto st229;
	} else
		goto st229;
	goto st0;
tr571:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st229;
tr572:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st229;
tr591:
	{ expr_open_parens++; }
	goto st229;
tr593:
	{ expr_open_parens--; }
	goto st229;
st229:
	if ( ++p == pe )
		goto _test_eof229;
case 229:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st228;
		case 5: goto st228;
		case 8: goto st228;
		case 13: goto st229;
		case 18: goto tr591;
		case 21: goto st229;
		case 23: goto st229;
		case 36: goto tr591;
		case 44: goto st229;
	}
	goto st0;
tr594:
	{ expr_open_parens--; }
	goto st230;
st230:
	if ( ++p == pe )
		goto _test_eof230;
case 230:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr592;
		case 23: goto tr593;
		case 131091: goto tr594;
		case 131109: goto tr594;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr593;
		} else if ( _widec >= 15 )
			goto tr593;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr593;
		} else if ( _widec >= 38 )
			goto tr593;
	} else
		goto tr593;
	goto st0;
st231:
	if ( ++p == pe )
		goto _test_eof231;
case 231:
	if ( ( ((int) p->tok)) == 12 )
		goto tr595;
	goto st0;
st232:
	if ( ++p == pe )
		goto _test_eof232;
case 232:
	if ( ( ((int) p->tok)) == 12 )
		goto tr596;
	goto st0;
st233:
	if ( ++p == pe )
		goto _test_eof233;
case 233:
	if ( ( ((int) p->tok)) == 12 )
		goto tr597;
	goto st0;
st234:
	if ( ++p == pe )
		goto _test_eof234;
case 234:
	if ( ( ((int) p->tok)) == 12 )
		goto tr598;
	goto st0;
st235:
	if ( ++p == pe )
		goto _test_eof235;
case 235:
	if ( ( ((int) p->tok)) == 12 )
		goto tr599;
	goto st0;
st236:
	if ( ++p == pe )
		goto _test_eof236;
case 236:
	if ( ( ((int) p->tok)) == 12 )
		goto tr600;
	goto st0;
st237:
	if ( ++p == pe )
		goto _test_eof237;
case 237:
	if ( ( ((int) p->tok)) == 12 )
		goto tr601;
	goto st0;
st238:
	if ( ++p == pe )
		goto _test_eof238;
case 238:
	if ( ( ((int) p->tok)) == 12 )
		goto tr602;
	goto st0;
st239:
	if ( ++p == pe )
		goto _test_eof239;
case 239:
	if ( ( ((int) p->tok)) == 12 )
		goto tr603;
	goto st0;
st240:
	if ( ++p == pe )
		goto _test_eof240;
case 240:
	if ( ( ((int) p->tok)) == 12 )
		goto tr604;
	goto st0;
st241:
	if ( ++p == pe )
		goto _test_eof241;
case 241:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr605;
		case 22: goto st242;
	}
	goto st0;
st242:
	if ( ++p == pe )
		goto _test_eof242;
case 242:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr570;
		case 5: goto tr570;
		case 8: goto tr570;
		case 18: goto tr572;
		case 21: goto tr571;
		case 23: goto tr571;
		case 36: goto tr572;
		case 44: goto tr571;
		case 48: goto st231;
		case 53: goto st232;
		case 54: goto st233;
		case 55: goto st234;
		case 56: goto st235;
		case 57: goto st236;
		case 58: goto st237;
		case 59: goto st238;
		case 60: goto st239;
		case 61: goto st240;
		case 62: goto st243;
		case 79: goto st244;
		case 80: goto st245;
		case 81: goto st255;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr571;
	goto st0;
st243:
	if ( ++p == pe )
		goto _test_eof243;
case 243:
	if ( ( ((int) p->tok)) == 12 )
		goto tr605;
	goto st0;
st244:
	if ( ++p == pe )
		goto _test_eof244;
case 244:
	if ( ( ((int) p->tok)) == 12 )
		goto tr608;
	goto st0;
st245:
	if ( ++p == pe )
		goto _test_eof245;
case 245:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr609;
		case 5: goto tr609;
		case 8: goto tr609;
		case 18: goto tr611;
		case 19: goto st254;
		case 21: goto tr610;
		case 23: goto tr610;
		case 36: goto tr611;
		case 44: goto tr610;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr610;
	goto st0;
tr609:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st246;
st246:
	if ( ++p == pe )
		goto _test_eof246;
case 246:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st247;
		case 65555: goto tr614;
		case 131091: goto tr615;
		case 131109: goto st252;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st247;
		} else if ( _widec >= 15 )
			goto st247;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st247;
		} else if ( _widec >= 38 )
			goto st247;
	} else
		goto st247;
	goto st0;
tr618:
	{ expr_open_parens++; }
	goto st247;
tr621:
	{ expr_open_parens--; }
	goto st247;
st247:
	if ( ++p == pe )
		goto _test_eof247;
case 247:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st248;
		case 5: goto st248;
		case 8: goto st248;
		case 13: goto st247;
		case 18: goto tr618;
		case 21: goto st247;
		case 23: goto st247;
		case 36: goto tr618;
		case 44: goto st247;
	}
	goto st0;
st248:
	if ( ++p == pe )
		goto _test_eof248;
case 248:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st247;
		case 65555: goto tr614;
		case 131091: goto st250;
		case 131109: goto st250;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st247;
		} else if ( _widec >= 15 )
			goto st247;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st247;
		} else if ( _widec >= 38 )
			goto st247;
	} else
		goto st247;
	goto st0;
tr614:
	{ push_expr(expr_start, p); }
	goto st249;
tr622:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st249;
st249:
	if ( ++p == pe )
		goto _test_eof249;
case 249:
	if ( ( ((int) p->tok)) == 12 )
		goto tr620;
	goto st0;
tr623:
	{ expr_open_parens--; }
	goto st250;
st250:
	if ( ++p == pe )
		goto _test_eof250;
case 250:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr621;
		case 65555: goto tr622;
		case 131091: goto tr623;
		case 131109: goto tr623;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr621;
		} else if ( _widec >= 15 )
			goto tr621;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr621;
		} else if ( _widec >= 38 )
			goto tr621;
	} else
		goto tr621;
	goto st0;
tr615:
	{ push_expr(expr_start, p); }
	goto st251;
tr624:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st251;
st251:
	if ( ++p == pe )
		goto _test_eof251;
case 251:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr620;
		case 23: goto tr621;
		case 65555: goto tr622;
		case 131091: goto tr624;
		case 131109: goto tr625;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr621;
		} else if ( _widec >= 15 )
			goto tr621;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr621;
		} else if ( _widec >= 38 )
			goto tr621;
	} else
		goto tr621;
	goto st0;
tr625:
	{ expr_open_parens--; }
	goto st252;
st252:
	if ( ++p == pe )
		goto _test_eof252;
case 252:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr621;
		case 65555: goto tr622;
		case 131091: goto tr624;
		case 131109: goto tr625;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr621;
		} else if ( _widec >= 15 )
			goto tr621;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr621;
		} else if ( _widec >= 38 )
			goto tr621;
	} else
		goto tr621;
	goto st0;
tr610:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st253;
tr611:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st253;
tr628:
	{ expr_open_parens++; }
	goto st253;
st253:
	if ( ++p == pe )
		goto _test_eof253;
case 253:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st246;
		case 5: goto st246;
		case 8: goto st246;
		case 13: goto st253;
		case 18: goto tr628;
		case 21: goto st253;
		case 23: goto st253;
		case 36: goto tr628;
		case 44: goto st253;
	}
	goto st0;
st254:
	if ( ++p == pe )
		goto _test_eof254;
case 254:
	if ( ( ((int) p->tok)) == 12 )
		goto tr629;
	goto st0;
st255:
	if ( ++p == pe )
		goto _test_eof255;
case 255:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr630;
		case 5: goto tr630;
		case 8: goto tr630;
		case 18: goto tr632;
		case 19: goto st264;
		case 21: goto tr631;
		case 23: goto tr631;
		case 36: goto tr632;
		case 44: goto tr631;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr631;
	goto st0;
tr630:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st256;
st256:
	if ( ++p == pe )
		goto _test_eof256;
case 256:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st257;
		case 65555: goto tr635;
		case 131091: goto tr636;
		case 131109: goto st262;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st257;
		} else if ( _widec >= 15 )
			goto st257;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st257;
		} else if ( _widec >= 38 )
			goto st257;
	} else
		goto st257;
	goto st0;
tr639:
	{ expr_open_parens++; }
	goto st257;
tr642:
	{ expr_open_parens--; }
	goto st257;
st257:
	if ( ++p == pe )
		goto _test_eof257;
case 257:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st258;
		case 5: goto st258;
		case 8: goto st258;
		case 13: goto st257;
		case 18: goto tr639;
		case 21: goto st257;
		case 23: goto st257;
		case 36: goto tr639;
		case 44: goto st257;
	}
	goto st0;
st258:
	if ( ++p == pe )
		goto _test_eof258;
case 258:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st257;
		case 65555: goto tr635;
		case 131091: goto st260;
		case 131109: goto st260;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st257;
		} else if ( _widec >= 15 )
			goto st257;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st257;
		} else if ( _widec >= 38 )
			goto st257;
	} else
		goto st257;
	goto st0;
tr635:
	{ push_expr(expr_start, p); }
	goto st259;
tr643:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st259;
st259:
	if ( ++p == pe )
		goto _test_eof259;
case 259:
	if ( ( ((int) p->tok)) == 12 )
		goto tr641;
	goto st0;
tr644:
	{ expr_open_parens--; }
	goto st260;
st260:
	if ( ++p == pe )
		goto _test_eof260;
case 260:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr642;
		case 65555: goto tr643;
		case 131091: goto tr644;
		case 131109: goto tr644;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr642;
		} else if ( _widec >= 15 )
			goto tr642;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr642;
		} else if ( _widec >= 38 )
			goto tr642;
	} else
		goto tr642;
	goto st0;
tr636:
	{ push_expr(expr_start, p); }
	goto st261;
tr645:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st261;
st261:
	if ( ++p == pe )
		goto _test_eof261;
case 261:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr641;
		case 23: goto tr642;
		case 65555: goto tr643;
		case 131091: goto tr645;
		case 131109: goto tr646;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr642;
		} else if ( _widec >= 15 )
			goto tr642;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr642;
		} else if ( _widec >= 38 )
			goto tr642;
	} else
		goto tr642;
	goto st0;
tr646:
	{ expr_open_parens--; }
	goto st262;
st262:
	if ( ++p == pe )
		goto _test_eof262;
case 262:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr642;
		case 65555: goto tr643;
		case 131091: goto tr645;
		case 131109: goto tr646;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr642;
		} else if ( _widec >= 15 )
			goto tr642;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr642;
		} else if ( _widec >= 38 )
			goto tr642;
	} else
		goto tr642;
	goto st0;
tr631:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st263;
tr632:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st263;
tr649:
	{ expr_open_parens++; }
	goto st263;
st263:
	if ( ++p == pe )
		goto _test_eof263;
case 263:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st256;
		case 5: goto st256;
		case 8: goto st256;
		case 13: goto st263;
		case 18: goto tr649;
		case 21: goto st263;
		case 23: goto st263;
		case 36: goto tr649;
		case 44: goto st263;
	}
	goto st0;
st264:
	if ( ++p == pe )
		goto _test_eof264;
case 264:
	if ( ( ((int) p->tok)) == 12 )
		goto tr650;
	goto st0;
st265:
	if ( ++p == pe )
		goto _test_eof265;
case 265:
	if ( ( ((int) p->tok)) == 12 )
		goto tr651;
	goto st0;
st266:
	if ( ++p == pe )
		goto _test_eof266;
case 266:
	if ( ( ((int) p->tok)) == 12 )
		goto tr652;
	goto st0;
st267:
	if ( ++p == pe )
		goto _test_eof267;
case 267:
	if ( ( ((int) p->tok)) == 12 )
		goto tr653;
	goto st0;
st268:
	if ( ++p == pe )
		goto _test_eof268;
case 268:
	if ( ( ((int) p->tok)) == 12 )
		goto tr654;
	goto st0;
st269:
	if ( ++p == pe )
		goto _test_eof269;
case 269:
	if ( ( ((int) p->tok)) == 12 )
		goto tr655;
	goto st0;
st270:
	if ( ++p == pe )
		goto _test_eof270;
case 270:
	if ( ( ((int) p->tok)) == 12 )
		goto tr656;
	goto st0;
st271:
	if ( ++p == pe )
		goto _test_eof271;
case 271:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st272;
		case 53: goto st273;
		case 54: goto st274;
		case 55: goto st275;
		case 56: goto st276;
		case 57: goto st277;
		case 58: goto st278;
		case 59: goto st279;
		case 60: goto st280;
		case 61: goto st281;
		case 62: goto st282;
		case 69: goto st283;
		case 70: goto st284;
		case 71: goto st285;
		case 72: goto st286;
		case 73: goto st287;
		case 75: goto st288;
		case 79: goto st289;
		case 80: goto st290;
		case 81: goto st300;
	}
	goto st0;
st272:
	if ( ++p == pe )
		goto _test_eof272;
case 272:
	if ( ( ((int) p->tok)) == 12 )
		goto tr677;
	goto st0;
st273:
	if ( ++p == pe )
		goto _test_eof273;
case 273:
	if ( ( ((int) p->tok)) == 12 )
		goto tr678;
	goto st0;
st274:
	if ( ++p == pe )
		goto _test_eof274;
case 274:
	if ( ( ((int) p->tok)) == 12 )
		goto tr679;
	goto st0;
st275:
	if ( ++p == pe )
		goto _test_eof275;
case 275:
	if ( ( ((int) p->tok)) == 12 )
		goto tr680;
	goto st0;
st276:
	if ( ++p == pe )
		goto _test_eof276;
case 276:
	if ( ( ((int) p->tok)) == 12 )
		goto tr681;
	goto st0;
st277:
	if ( ++p == pe )
		goto _test_eof277;
case 277:
	if ( ( ((int) p->tok)) == 12 )
		goto tr682;
	goto st0;
st278:
	if ( ++p == pe )
		goto _test_eof278;
case 278:
	if ( ( ((int) p->tok)) == 12 )
		goto tr683;
	goto st0;
st279:
	if ( ++p == pe )
		goto _test_eof279;
case 279:
	if ( ( ((int) p->tok)) == 12 )
		goto tr684;
	goto st0;
st280:
	if ( ++p == pe )
		goto _test_eof280;
case 280:
	if ( ( ((int) p->tok)) == 12 )
		goto tr685;
	goto st0;
st281:
	if ( ++p == pe )
		goto _test_eof281;
case 281:
	if ( ( ((int) p->tok)) == 12 )
		goto tr686;
	goto st0;
st282:
	if ( ++p == pe )
		goto _test_eof282;
case 282:
	if ( ( ((int) p->tok)) == 12 )
		goto tr687;
	goto st0;
st283:
	if ( ++p == pe )
		goto _test_eof283;
case 283:
	if ( ( ((int) p->tok)) == 12 )
		goto tr688;
	goto st0;
st284:
	if ( ++p == pe )
		goto _test_eof284;
case 284:
	if ( ( ((int) p->tok)) == 12 )
		goto tr689;
	goto st0;
st285:
	if ( ++p == pe )
		goto _test_eof285;
case 285:
	if ( ( ((int) p->tok)) == 12 )
		goto tr690;
	goto st0;
st286:
	if ( ++p == pe )
		goto _test_eof286;
case 286:
	if ( ( ((int) p->tok)) == 12 )
		goto tr691;
	goto st0;
st287:
	if ( ++p == pe )
		goto _test_eof287;
case 287:
	if ( ( ((int) p->tok)) == 12 )
		goto tr692;
	goto st0;
st288:
	if ( ++p == pe )
		goto _test_eof288;
case 288:
	if ( ( ((int) p->tok)) == 12 )
		goto tr693;
	goto st0;
st289:
	if ( ++p == pe )
		goto _test_eof289;
case 289:
	if ( ( ((int) p->tok)) == 12 )
		goto tr694;
	goto st0;
st290:
	if ( ++p == pe )
		goto _test_eof290;
case 290:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr695;
		case 5: goto tr695;
		case 8: goto tr695;
		case 18: goto tr697;
		case 19: goto st299;
		case 21: goto tr696;
		case 23: goto tr696;
		case 36: goto tr697;
		case 44: goto tr696;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr696;
	goto st0;
tr695:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st291;
st291:
	if ( ++p == pe )
		goto _test_eof291;
case 291:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st292;
		case 65555: goto tr700;
		case 131091: goto tr701;
		case 131109: goto st297;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st292;
		} else if ( _widec >= 15 )
			goto st292;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st292;
		} else if ( _widec >= 38 )
			goto st292;
	} else
		goto st292;
	goto st0;
tr704:
	{ expr_open_parens++; }
	goto st292;
tr707:
	{ expr_open_parens--; }
	goto st292;
st292:
	if ( ++p == pe )
		goto _test_eof292;
case 292:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st293;
		case 5: goto st293;
		case 8: goto st293;
		case 13: goto st292;
		case 18: goto tr704;
		case 21: goto st292;
		case 23: goto st292;
		case 36: goto tr704;
		case 44: goto st292;
	}
	goto st0;
st293:
	if ( ++p == pe )
		goto _test_eof293;
case 293:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st292;
		case 65555: goto tr700;
		case 131091: goto st295;
		case 131109: goto st295;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st292;
		} else if ( _widec >= 15 )
			goto st292;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st292;
		} else if ( _widec >= 38 )
			goto st292;
	} else
		goto st292;
	goto st0;
tr700:
	{ push_expr(expr_start, p); }
	goto st294;
tr708:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st294;
st294:
	if ( ++p == pe )
		goto _test_eof294;
case 294:
	if ( ( ((int) p->tok)) == 12 )
		goto tr706;
	goto st0;
tr709:
	{ expr_open_parens--; }
	goto st295;
st295:
	if ( ++p == pe )
		goto _test_eof295;
case 295:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr707;
		case 65555: goto tr708;
		case 131091: goto tr709;
		case 131109: goto tr709;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr707;
		} else if ( _widec >= 15 )
			goto tr707;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr707;
		} else if ( _widec >= 38 )
			goto tr707;
	} else
		goto tr707;
	goto st0;
tr701:
	{ push_expr(expr_start, p); }
	goto st296;
tr710:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st296;
st296:
	if ( ++p == pe )
		goto _test_eof296;
case 296:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr706;
		case 23: goto tr707;
		case 65555: goto tr708;
		case 131091: goto tr710;
		case 131109: goto tr711;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr707;
		} else if ( _widec >= 15 )
			goto tr707;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr707;
		} else if ( _widec >= 38 )
			goto tr707;
	} else
		goto tr707;
	goto st0;
tr711:
	{ expr_open_parens--; }
	goto st297;
st297:
	if ( ++p == pe )
		goto _test_eof297;
case 297:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr707;
		case 65555: goto tr708;
		case 131091: goto tr710;
		case 131109: goto tr711;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr707;
		} else if ( _widec >= 15 )
			goto tr707;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr707;
		} else if ( _widec >= 38 )
			goto tr707;
	} else
		goto tr707;
	goto st0;
tr696:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st298;
tr697:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st298;
tr714:
	{ expr_open_parens++; }
	goto st298;
st298:
	if ( ++p == pe )
		goto _test_eof298;
case 298:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st291;
		case 5: goto st291;
		case 8: goto st291;
		case 13: goto st298;
		case 18: goto tr714;
		case 21: goto st298;
		case 23: goto st298;
		case 36: goto tr714;
		case 44: goto st298;
	}
	goto st0;
st299:
	if ( ++p == pe )
		goto _test_eof299;
case 299:
	if ( ( ((int) p->tok)) == 12 )
		goto tr715;
	goto st0;
st300:
	if ( ++p == pe )
		goto _test_eof300;
case 300:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr716;
		case 5: goto tr716;
		case 8: goto tr716;
		case 18: goto tr718;
		case 19: goto st309;
		case 21: goto tr717;
		case 23: goto tr717;
		case 36: goto tr718;
		case 44: goto tr717;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr717;
	goto st0;
tr716:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st301;
st301:
	if ( ++p == pe )
		goto _test_eof301;
case 301:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st302;
		case 65555: goto tr721;
		case 131091: goto tr722;
		case 131109: goto st307;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st302;
		} else if ( _widec >= 15 )
			goto st302;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st302;
		} else if ( _widec >= 38 )
			goto st302;
	} else
		goto st302;
	goto st0;
tr725:
	{ expr_open_parens++; }
	goto st302;
tr728:
	{ expr_open_parens--; }
	goto st302;
st302:
	if ( ++p == pe )
		goto _test_eof302;
case 302:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st303;
		case 5: goto st303;
		case 8: goto st303;
		case 13: goto st302;
		case 18: goto tr725;
		case 21: goto st302;
		case 23: goto st302;
		case 36: goto tr725;
		case 44: goto st302;
	}
	goto st0;
st303:
	if ( ++p == pe )
		goto _test_eof303;
case 303:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st302;
		case 65555: goto tr721;
		case 131091: goto st305;
		case 131109: goto st305;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st302;
		} else if ( _widec >= 15 )
			goto st302;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st302;
		} else if ( _widec >= 38 )
			goto st302;
	} else
		goto st302;
	goto st0;
tr721:
	{ push_expr(expr_start, p); }
	goto st304;
tr729:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st304;
st304:
	if ( ++p == pe )
		goto _test_eof304;
case 304:
	if ( ( ((int) p->tok)) == 12 )
		goto tr727;
	goto st0;
tr730:
	{ expr_open_parens--; }
	goto st305;
st305:
	if ( ++p == pe )
		goto _test_eof305;
case 305:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr728;
		case 65555: goto tr729;
		case 131091: goto tr730;
		case 131109: goto tr730;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr728;
		} else if ( _widec >= 15 )
			goto tr728;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr728;
		} else if ( _widec >= 38 )
			goto tr728;
	} else
		goto tr728;
	goto st0;
tr722:
	{ push_expr(expr_start, p); }
	goto st306;
tr731:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st306;
st306:
	if ( ++p == pe )
		goto _test_eof306;
case 306:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr727;
		case 23: goto tr728;
		case 65555: goto tr729;
		case 131091: goto tr731;
		case 131109: goto tr732;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr728;
		} else if ( _widec >= 15 )
			goto tr728;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr728;
		} else if ( _widec >= 38 )
			goto tr728;
	} else
		goto tr728;
	goto st0;
tr732:
	{ expr_open_parens--; }
	goto st307;
st307:
	if ( ++p == pe )
		goto _test_eof307;
case 307:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr728;
		case 65555: goto tr729;
		case 131091: goto tr731;
		case 131109: goto tr732;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr728;
		} else if ( _widec >= 15 )
			goto tr728;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr728;
		} else if ( _widec >= 38 )
			goto tr728;
	} else
		goto tr728;
	goto st0;
tr717:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st308;
tr718:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st308;
tr735:
	{ expr_open_parens++; }
	goto st308;
st308:
	if ( ++p == pe )
		goto _test_eof308;
case 308:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st301;
		case 5: goto st301;
		case 8: goto st301;
		case 13: goto st308;
		case 18: goto tr735;
		case 21: goto st308;
		case 23: goto st308;
		case 36: goto tr735;
		case 44: goto st308;
	}
	goto st0;
st309:
	if ( ++p == pe )
		goto _test_eof309;
case 309:
	if ( ( ((int) p->tok)) == 12 )
		goto tr736;
	goto st0;
st310:
	if ( ++p == pe )
		goto _test_eof310;
case 310:
	if ( ( ((int) p->tok)) == 12 )
		goto tr737;
	goto st0;
st311:
	if ( ++p == pe )
		goto _test_eof311;
case 311:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr738;
		case 5: goto tr738;
		case 8: goto tr738;
		case 18: goto tr740;
		case 21: goto tr739;
		case 23: goto tr739;
		case 36: goto tr740;
		case 44: goto tr739;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr739;
	goto st0;
tr738:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st312;
st312:
	if ( ++p == pe )
		goto _test_eof312;
case 312:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr741;
		case 23: goto st313;
		case 131091: goto st314;
		case 131109: goto st314;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st313;
		} else if ( _widec >= 15 )
			goto st313;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st313;
		} else if ( _widec >= 38 )
			goto st313;
	} else
		goto st313;
	goto st0;
tr739:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st313;
tr740:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st313;
tr745:
	{ expr_open_parens++; }
	goto st313;
tr747:
	{ expr_open_parens--; }
	goto st313;
st313:
	if ( ++p == pe )
		goto _test_eof313;
case 313:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st312;
		case 5: goto st312;
		case 8: goto st312;
		case 13: goto st313;
		case 18: goto tr745;
		case 21: goto st313;
		case 23: goto st313;
		case 36: goto tr745;
		case 44: goto st313;
	}
	goto st0;
tr748:
	{ expr_open_parens--; }
	goto st314;
st314:
	if ( ++p == pe )
		goto _test_eof314;
case 314:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr746;
		case 23: goto tr747;
		case 131091: goto tr748;
		case 131109: goto tr748;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr747;
		} else if ( _widec >= 15 )
			goto tr747;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr747;
		} else if ( _widec >= 38 )
			goto tr747;
	} else
		goto tr747;
	goto st0;
st315:
	if ( ++p == pe )
		goto _test_eof315;
case 315:
	if ( ( ((int) p->tok)) == 12 )
		goto tr749;
	goto st0;
st316:
	if ( ++p == pe )
		goto _test_eof316;
case 316:
	switch( ( ((int) p->tok)) ) {
		case 70: goto st317;
		case 74: goto st320;
		case 82: goto st324;
	}
	goto st0;
st317:
	if ( ++p == pe )
		goto _test_eof317;
case 317:
	if ( ( ((int) p->tok)) == 22 )
		goto st318;
	goto st0;
st318:
	if ( ++p == pe )
		goto _test_eof318;
case 318:
	if ( ( ((int) p->tok)) == 71 )
		goto st319;
	goto st0;
st319:
	if ( ++p == pe )
		goto _test_eof319;
case 319:
	if ( ( ((int) p->tok)) == 12 )
		goto tr755;
	goto st0;
st320:
	if ( ++p == pe )
		goto _test_eof320;
case 320:
	if ( ( ((int) p->tok)) == 22 )
		goto st321;
	goto st0;
st321:
	if ( ++p == pe )
		goto _test_eof321;
case 321:
	switch( ( ((int) p->tok)) ) {
		case 74: goto st322;
		case 76: goto st323;
	}
	goto st0;
st322:
	if ( ++p == pe )
		goto _test_eof322;
case 322:
	if ( ( ((int) p->tok)) == 12 )
		goto tr759;
	goto st0;
st323:
	if ( ++p == pe )
		goto _test_eof323;
case 323:
	if ( ( ((int) p->tok)) == 12 )
		goto tr760;
	goto st0;
st324:
	if ( ++p == pe )
		goto _test_eof324;
case 324:
	if ( ( ((int) p->tok)) == 22 )
		goto st325;
	goto st0;
st325:
	if ( ++p == pe )
		goto _test_eof325;
case 325:
	switch( ( ((int) p->tok)) ) {
		case 71: goto st326;
		case 72: goto st327;
		case 73: goto st328;
	}
	goto st0;
st326:
	if ( ++p == pe )
		goto _test_eof326;
case 326:
	if ( ( ((int) p->tok)) == 12 )
		goto tr765;
	goto st0;
st327:
	if ( ++p == pe )
		goto _test_eof327;
case 327:
	if ( ( ((int) p->tok)) == 12 )
		goto tr766;
	goto st0;
st328:
	if ( ++p == pe )
		goto _test_eof328;
case 328:
	if ( ( ((int) p->tok)) == 12 )
		goto tr767;
	goto st0;
st329:
	if ( ++p == pe )
		goto _test_eof329;
case 329:
	if ( ( ((int) p->tok)) == 12 )
		goto tr768;
	goto st0;
st330:
	if ( ++p == pe )
		goto _test_eof330;
case 330:
	if ( ( ((int) p->tok)) == 12 )
		goto tr769;
	goto st0;
st331:
	if ( ++p == pe )
		goto _test_eof331;
case 331:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr770;
		case 5: goto tr770;
		case 8: goto tr770;
		case 18: goto tr772;
		case 21: goto tr771;
		case 23: goto tr771;
		case 36: goto tr772;
		case 44: goto tr771;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr771;
	goto st0;
tr770:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st332;
st332:
	if ( ++p == pe )
		goto _test_eof332;
case 332:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr773;
		case 23: goto st333;
		case 131091: goto st334;
		case 131109: goto st334;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st333;
		} else if ( _widec >= 15 )
			goto st333;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st333;
		} else if ( _widec >= 38 )
			goto st333;
	} else
		goto st333;
	goto st0;
tr771:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st333;
tr772:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st333;
tr777:
	{ expr_open_parens++; }
	goto st333;
tr779:
	{ expr_open_parens--; }
	goto st333;
st333:
	if ( ++p == pe )
		goto _test_eof333;
case 333:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st332;
		case 5: goto st332;
		case 8: goto st332;
		case 13: goto st333;
		case 18: goto tr777;
		case 21: goto st333;
		case 23: goto st333;
		case 36: goto tr777;
		case 44: goto st333;
	}
	goto st0;
tr780:
	{ expr_open_parens--; }
	goto st334;
st334:
	if ( ++p == pe )
		goto _test_eof334;
case 334:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr778;
		case 23: goto tr779;
		case 131091: goto tr780;
		case 131109: goto tr780;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr779;
		} else if ( _widec >= 15 )
			goto tr779;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr779;
		} else if ( _widec >= 38 )
			goto tr779;
	} else
		goto tr779;
	goto st0;
st335:
	if ( ++p == pe )
		goto _test_eof335;
case 335:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st336;
		case 53: goto st339;
		case 54: goto st342;
		case 55: goto st345;
		case 56: goto st348;
		case 59: goto st351;
		case 62: goto st354;
	}
	goto st0;
st336:
	if ( ++p == pe )
		goto _test_eof336;
case 336:
	if ( ( ((int) p->tok)) == 22 )
		goto st337;
	goto st0;
st337:
	if ( ++p == pe )
		goto _test_eof337;
case 337:
	if ( ( ((int) p->tok)) == 68 )
		goto st338;
	goto st0;
st338:
	if ( ++p == pe )
		goto _test_eof338;
case 338:
	if ( ( ((int) p->tok)) == 12 )
		goto tr790;
	goto st0;
st339:
	if ( ++p == pe )
		goto _test_eof339;
case 339:
	if ( ( ((int) p->tok)) == 22 )
		goto st340;
	goto st0;
st340:
	if ( ++p == pe )
		goto _test_eof340;
case 340:
	if ( ( ((int) p->tok)) == 68 )
		goto st341;
	goto st0;
st341:
	if ( ++p == pe )
		goto _test_eof341;
case 341:
	if ( ( ((int) p->tok)) == 12 )
		goto tr793;
	goto st0;
st342:
	if ( ++p == pe )
		goto _test_eof342;
case 342:
	if ( ( ((int) p->tok)) == 22 )
		goto st343;
	goto st0;
st343:
	if ( ++p == pe )
		goto _test_eof343;
case 343:
	if ( ( ((int) p->tok)) == 68 )
		goto st344;
	goto st0;
st344:
	if ( ++p == pe )
		goto _test_eof344;
case 344:
	if ( ( ((int) p->tok)) == 12 )
		goto tr796;
	goto st0;
st345:
	if ( ++p == pe )
		goto _test_eof345;
case 345:
	if ( ( ((int) p->tok)) == 22 )
		goto st346;
	goto st0;
st346:
	if ( ++p == pe )
		goto _test_eof346;
case 346:
	if ( ( ((int) p->tok)) == 68 )
		goto st347;
	goto st0;
st347:
	if ( ++p == pe )
		goto _test_eof347;
case 347:
	if ( ( ((int) p->tok)) == 12 )
		goto tr799;
	goto st0;
st348:
	if ( ++p == pe )
		goto _test_eof348;
case 348:
	if ( ( ((int) p->tok)) == 22 )
		goto st349;
	goto st0;
st349:
	if ( ++p == pe )
		goto _test_eof349;
case 349:
	if ( ( ((int) p->tok)) == 68 )
		goto st350;
	goto st0;
st350:
	if ( ++p == pe )
		goto _test_eof350;
case 350:
	if ( ( ((int) p->tok)) == 12 )
		goto tr802;
	goto st0;
st351:
	if ( ++p == pe )
		goto _test_eof351;
case 351:
	if ( ( ((int) p->tok)) == 22 )
		goto st352;
	goto st0;
st352:
	if ( ++p == pe )
		goto _test_eof352;
case 352:
	if ( ( ((int) p->tok)) == 68 )
		goto st353;
	goto st0;
st353:
	if ( ++p == pe )
		goto _test_eof353;
case 353:
	if ( ( ((int) p->tok)) == 12 )
		goto tr805;
	goto st0;
st354:
	if ( ++p == pe )
		goto _test_eof354;
case 354:
	if ( ( ((int) p->tok)) == 22 )
		goto st355;
	goto st0;
st355:
	if ( ++p == pe )
		goto _test_eof355;
case 355:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr807;
		case 5: goto tr807;
		case 8: goto tr807;
		case 18: goto tr809;
		case 21: goto tr808;
		case 23: goto tr808;
		case 36: goto tr809;
		case 44: goto tr808;
		case 68: goto st359;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr808;
	goto st0;
tr807:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st356;
st356:
	if ( ++p == pe )
		goto _test_eof356;
case 356:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr811;
		case 23: goto st357;
		case 131091: goto st358;
		case 131109: goto st358;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st357;
		} else if ( _widec >= 15 )
			goto st357;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st357;
		} else if ( _widec >= 38 )
			goto st357;
	} else
		goto st357;
	goto st0;
tr815:
	{ expr_open_parens++; }
	goto st357;
tr817:
	{ expr_open_parens--; }
	goto st357;
tr808:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st357;
tr809:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st357;
st357:
	if ( ++p == pe )
		goto _test_eof357;
case 357:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st356;
		case 5: goto st356;
		case 8: goto st356;
		case 13: goto st357;
		case 18: goto tr815;
		case 21: goto st357;
		case 23: goto st357;
		case 36: goto tr815;
		case 44: goto st357;
	}
	goto st0;
tr818:
	{ expr_open_parens--; }
	goto st358;
st358:
	if ( ++p == pe )
		goto _test_eof358;
case 358:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr816;
		case 23: goto tr817;
		case 131091: goto tr818;
		case 131109: goto tr818;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr817;
		} else if ( _widec >= 15 )
			goto tr817;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr817;
		} else if ( _widec >= 38 )
			goto tr817;
	} else
		goto tr817;
	goto st0;
st359:
	if ( ++p == pe )
		goto _test_eof359;
case 359:
	if ( ( ((int) p->tok)) == 12 )
		goto tr819;
	goto st0;
st360:
	if ( ++p == pe )
		goto _test_eof360;
case 360:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st361;
		case 53: goto st362;
		case 54: goto st363;
		case 55: goto st364;
		case 56: goto st365;
		case 57: goto st366;
		case 58: goto st367;
		case 59: goto st368;
		case 60: goto st369;
		case 61: goto st370;
		case 62: goto st371;
		case 69: goto st372;
		case 70: goto st373;
		case 71: goto st374;
		case 72: goto st375;
		case 73: goto st376;
		case 75: goto st377;
		case 79: goto st378;
		case 80: goto st379;
		case 81: goto st389;
	}
	goto st0;
st361:
	if ( ++p == pe )
		goto _test_eof361;
case 361:
	if ( ( ((int) p->tok)) == 12 )
		goto tr840;
	goto st0;
st362:
	if ( ++p == pe )
		goto _test_eof362;
case 362:
	if ( ( ((int) p->tok)) == 12 )
		goto tr841;
	goto st0;
st363:
	if ( ++p == pe )
		goto _test_eof363;
case 363:
	if ( ( ((int) p->tok)) == 12 )
		goto tr842;
	goto st0;
st364:
	if ( ++p == pe )
		goto _test_eof364;
case 364:
	if ( ( ((int) p->tok)) == 12 )
		goto tr843;
	goto st0;
st365:
	if ( ++p == pe )
		goto _test_eof365;
case 365:
	if ( ( ((int) p->tok)) == 12 )
		goto tr844;
	goto st0;
st366:
	if ( ++p == pe )
		goto _test_eof366;
case 366:
	if ( ( ((int) p->tok)) == 12 )
		goto tr845;
	goto st0;
st367:
	if ( ++p == pe )
		goto _test_eof367;
case 367:
	if ( ( ((int) p->tok)) == 12 )
		goto tr846;
	goto st0;
st368:
	if ( ++p == pe )
		goto _test_eof368;
case 368:
	if ( ( ((int) p->tok)) == 12 )
		goto tr847;
	goto st0;
st369:
	if ( ++p == pe )
		goto _test_eof369;
case 369:
	if ( ( ((int) p->tok)) == 12 )
		goto tr848;
	goto st0;
st370:
	if ( ++p == pe )
		goto _test_eof370;
case 370:
	if ( ( ((int) p->tok)) == 12 )
		goto tr849;
	goto st0;
st371:
	if ( ++p == pe )
		goto _test_eof371;
case 371:
	if ( ( ((int) p->tok)) == 12 )
		goto tr850;
	goto st0;
st372:
	if ( ++p == pe )
		goto _test_eof372;
case 372:
	if ( ( ((int) p->tok)) == 12 )
		goto tr851;
	goto st0;
st373:
	if ( ++p == pe )
		goto _test_eof373;
case 373:
	if ( ( ((int) p->tok)) == 12 )
		goto tr852;
	goto st0;
st374:
	if ( ++p == pe )
		goto _test_eof374;
case 374:
	if ( ( ((int) p->tok)) == 12 )
		goto tr853;
	goto st0;
st375:
	if ( ++p == pe )
		goto _test_eof375;
case 375:
	if ( ( ((int) p->tok)) == 12 )
		goto tr854;
	goto st0;
st376:
	if ( ++p == pe )
		goto _test_eof376;
case 376:
	if ( ( ((int) p->tok)) == 12 )
		goto tr855;
	goto st0;
st377:
	if ( ++p == pe )
		goto _test_eof377;
case 377:
	if ( ( ((int) p->tok)) == 12 )
		goto tr856;
	goto st0;
st378:
	if ( ++p == pe )
		goto _test_eof378;
case 378:
	if ( ( ((int) p->tok)) == 12 )
		goto tr857;
	goto st0;
st379:
	if ( ++p == pe )
		goto _test_eof379;
case 379:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr858;
		case 5: goto tr858;
		case 8: goto tr858;
		case 18: goto tr860;
		case 19: goto st388;
		case 21: goto tr859;
		case 23: goto tr859;
		case 36: goto tr860;
		case 44: goto tr859;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr859;
	goto st0;
tr858:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st380;
st380:
	if ( ++p == pe )
		goto _test_eof380;
case 380:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st381;
		case 65555: goto tr863;
		case 131091: goto tr864;
		case 131109: goto st386;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st381;
		} else if ( _widec >= 15 )
			goto st381;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st381;
		} else if ( _widec >= 38 )
			goto st381;
	} else
		goto st381;
	goto st0;
tr867:
	{ expr_open_parens++; }
	goto st381;
tr870:
	{ expr_open_parens--; }
	goto st381;
st381:
	if ( ++p == pe )
		goto _test_eof381;
case 381:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st382;
		case 5: goto st382;
		case 8: goto st382;
		case 13: goto st381;
		case 18: goto tr867;
		case 21: goto st381;
		case 23: goto st381;
		case 36: goto tr867;
		case 44: goto st381;
	}
	goto st0;
st382:
	if ( ++p == pe )
		goto _test_eof382;
case 382:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st381;
		case 65555: goto tr863;
		case 131091: goto st384;
		case 131109: goto st384;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st381;
		} else if ( _widec >= 15 )
			goto st381;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st381;
		} else if ( _widec >= 38 )
			goto st381;
	} else
		goto st381;
	goto st0;
tr863:
	{ push_expr(expr_start, p); }
	goto st383;
tr871:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st383;
st383:
	if ( ++p == pe )
		goto _test_eof383;
case 383:
	if ( ( ((int) p->tok)) == 12 )
		goto tr869;
	goto st0;
tr872:
	{ expr_open_parens--; }
	goto st384;
st384:
	if ( ++p == pe )
		goto _test_eof384;
case 384:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr870;
		case 65555: goto tr871;
		case 131091: goto tr872;
		case 131109: goto tr872;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr870;
		} else if ( _widec >= 15 )
			goto tr870;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr870;
		} else if ( _widec >= 38 )
			goto tr870;
	} else
		goto tr870;
	goto st0;
tr864:
	{ push_expr(expr_start, p); }
	goto st385;
tr873:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st385;
st385:
	if ( ++p == pe )
		goto _test_eof385;
case 385:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr869;
		case 23: goto tr870;
		case 65555: goto tr871;
		case 131091: goto tr873;
		case 131109: goto tr874;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr870;
		} else if ( _widec >= 15 )
			goto tr870;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr870;
		} else if ( _widec >= 38 )
			goto tr870;
	} else
		goto tr870;
	goto st0;
tr874:
	{ expr_open_parens--; }
	goto st386;
st386:
	if ( ++p == pe )
		goto _test_eof386;
case 386:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr870;
		case 65555: goto tr871;
		case 131091: goto tr873;
		case 131109: goto tr874;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr870;
		} else if ( _widec >= 15 )
			goto tr870;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr870;
		} else if ( _widec >= 38 )
			goto tr870;
	} else
		goto tr870;
	goto st0;
tr859:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st387;
tr860:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st387;
tr877:
	{ expr_open_parens++; }
	goto st387;
st387:
	if ( ++p == pe )
		goto _test_eof387;
case 387:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st380;
		case 5: goto st380;
		case 8: goto st380;
		case 13: goto st387;
		case 18: goto tr877;
		case 21: goto st387;
		case 23: goto st387;
		case 36: goto tr877;
		case 44: goto st387;
	}
	goto st0;
st388:
	if ( ++p == pe )
		goto _test_eof388;
case 388:
	if ( ( ((int) p->tok)) == 12 )
		goto tr878;
	goto st0;
st389:
	if ( ++p == pe )
		goto _test_eof389;
case 389:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr879;
		case 5: goto tr879;
		case 8: goto tr879;
		case 18: goto tr881;
		case 19: goto st398;
		case 21: goto tr880;
		case 23: goto tr880;
		case 36: goto tr881;
		case 44: goto tr880;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr880;
	goto st0;
tr879:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st390;
st390:
	if ( ++p == pe )
		goto _test_eof390;
case 390:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st391;
		case 65555: goto tr884;
		case 131091: goto tr885;
		case 131109: goto st396;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st391;
		} else if ( _widec >= 15 )
			goto st391;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st391;
		} else if ( _widec >= 38 )
			goto st391;
	} else
		goto st391;
	goto st0;
tr888:
	{ expr_open_parens++; }
	goto st391;
tr891:
	{ expr_open_parens--; }
	goto st391;
st391:
	if ( ++p == pe )
		goto _test_eof391;
case 391:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st392;
		case 5: goto st392;
		case 8: goto st392;
		case 13: goto st391;
		case 18: goto tr888;
		case 21: goto st391;
		case 23: goto st391;
		case 36: goto tr888;
		case 44: goto st391;
	}
	goto st0;
st392:
	if ( ++p == pe )
		goto _test_eof392;
case 392:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st391;
		case 65555: goto tr884;
		case 131091: goto st394;
		case 131109: goto st394;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st391;
		} else if ( _widec >= 15 )
			goto st391;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st391;
		} else if ( _widec >= 38 )
			goto st391;
	} else
		goto st391;
	goto st0;
tr884:
	{ push_expr(expr_start, p); }
	goto st393;
tr892:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st393;
st393:
	if ( ++p == pe )
		goto _test_eof393;
case 393:
	if ( ( ((int) p->tok)) == 12 )
		goto tr890;
	goto st0;
tr893:
	{ expr_open_parens--; }
	goto st394;
st394:
	if ( ++p == pe )
		goto _test_eof394;
case 394:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr891;
		case 65555: goto tr892;
		case 131091: goto tr893;
		case 131109: goto tr893;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr891;
		} else if ( _widec >= 15 )
			goto tr891;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr891;
		} else if ( _widec >= 38 )
			goto tr891;
	} else
		goto tr891;
	goto st0;
tr885:
	{ push_expr(expr_start, p); }
	goto st395;
tr894:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st395;
st395:
	if ( ++p == pe )
		goto _test_eof395;
case 395:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr890;
		case 23: goto tr891;
		case 65555: goto tr892;
		case 131091: goto tr894;
		case 131109: goto tr895;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr891;
		} else if ( _widec >= 15 )
			goto tr891;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr891;
		} else if ( _widec >= 38 )
			goto tr891;
	} else
		goto tr891;
	goto st0;
tr895:
	{ expr_open_parens--; }
	goto st396;
st396:
	if ( ++p == pe )
		goto _test_eof396;
case 396:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr891;
		case 65555: goto tr892;
		case 131091: goto tr894;
		case 131109: goto tr895;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr891;
		} else if ( _widec >= 15 )
			goto tr891;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr891;
		} else if ( _widec >= 38 )
			goto tr891;
	} else
		goto tr891;
	goto st0;
tr880:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st397;
tr881:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st397;
tr898:
	{ expr_open_parens++; }
	goto st397;
st397:
	if ( ++p == pe )
		goto _test_eof397;
case 397:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st390;
		case 5: goto st390;
		case 8: goto st390;
		case 13: goto st397;
		case 18: goto tr898;
		case 21: goto st397;
		case 23: goto st397;
		case 36: goto tr898;
		case 44: goto st397;
	}
	goto st0;
st398:
	if ( ++p == pe )
		goto _test_eof398;
case 398:
	if ( ( ((int) p->tok)) == 12 )
		goto tr899;
	goto st0;
st399:
	if ( ++p == pe )
		goto _test_eof399;
case 399:
	if ( ( ((int) p->tok)) == 12 )
		goto tr900;
	goto st0;
st400:
	if ( ++p == pe )
		goto _test_eof400;
case 400:
	if ( ( ((int) p->tok)) == 12 )
		goto tr901;
	goto st0;
st401:
	if ( ++p == pe )
		goto _test_eof401;
case 401:
	if ( ( ((int) p->tok)) == 12 )
		goto tr902;
	goto st0;
st402:
	if ( ++p == pe )
		goto _test_eof402;
case 402:
	if ( ( ((int) p->tok)) == 12 )
		goto tr903;
	goto st0;
st403:
	if ( ++p == pe )
		goto _test_eof403;
case 403:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr904;
		case 5: goto tr904;
		case 8: goto tr904;
		case 18: goto tr906;
		case 21: goto tr905;
		case 23: goto tr905;
		case 36: goto tr906;
		case 44: goto tr905;
		case 45: goto st407;
		case 46: goto st412;
		case 47: goto st417;
		case 48: goto st422;
		case 49: goto st427;
		case 50: goto st432;
		case 51: goto st437;
		case 52: goto st442;
		case 79: goto st447;
		case 80: goto st448;
		case 81: goto st450;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr905;
	goto st0;
tr904:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st404;
st404:
	if ( ++p == pe )
		goto _test_eof404;
case 404:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr918;
		case 23: goto st405;
		case 131091: goto st406;
		case 131109: goto st406;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st405;
		} else if ( _widec >= 15 )
			goto st405;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st405;
		} else if ( _widec >= 38 )
			goto st405;
	} else
		goto st405;
	goto st0;
tr905:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st405;
tr906:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st405;
tr922:
	{ expr_open_parens++; }
	goto st405;
tr924:
	{ expr_open_parens--; }
	goto st405;
st405:
	if ( ++p == pe )
		goto _test_eof405;
case 405:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st404;
		case 5: goto st404;
		case 8: goto st404;
		case 13: goto st405;
		case 18: goto tr922;
		case 21: goto st405;
		case 23: goto st405;
		case 36: goto tr922;
		case 44: goto st405;
	}
	goto st0;
tr925:
	{ expr_open_parens--; }
	goto st406;
st406:
	if ( ++p == pe )
		goto _test_eof406;
case 406:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr923;
		case 23: goto tr924;
		case 131091: goto tr925;
		case 131109: goto tr925;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr924;
		} else if ( _widec >= 15 )
			goto tr924;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr924;
		} else if ( _widec >= 38 )
			goto tr924;
	} else
		goto tr924;
	goto st0;
st407:
	if ( ++p == pe )
		goto _test_eof407;
case 407:
	if ( ( ((int) p->tok)) == 22 )
		goto st408;
	goto st0;
st408:
	if ( ++p == pe )
		goto _test_eof408;
case 408:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr927;
		case 5: goto tr927;
		case 8: goto tr927;
		case 18: goto tr929;
		case 21: goto tr928;
		case 23: goto tr928;
		case 36: goto tr929;
		case 44: goto tr928;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr928;
	goto st0;
tr927:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st409;
st409:
	if ( ++p == pe )
		goto _test_eof409;
case 409:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr930;
		case 23: goto st410;
		case 131091: goto st411;
		case 131109: goto st411;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st410;
		} else if ( _widec >= 15 )
			goto st410;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st410;
		} else if ( _widec >= 38 )
			goto st410;
	} else
		goto st410;
	goto st0;
tr928:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st410;
tr929:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st410;
tr934:
	{ expr_open_parens++; }
	goto st410;
tr936:
	{ expr_open_parens--; }
	goto st410;
st410:
	if ( ++p == pe )
		goto _test_eof410;
case 410:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st409;
		case 5: goto st409;
		case 8: goto st409;
		case 13: goto st410;
		case 18: goto tr934;
		case 21: goto st410;
		case 23: goto st410;
		case 36: goto tr934;
		case 44: goto st410;
	}
	goto st0;
tr937:
	{ expr_open_parens--; }
	goto st411;
st411:
	if ( ++p == pe )
		goto _test_eof411;
case 411:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr935;
		case 23: goto tr936;
		case 131091: goto tr937;
		case 131109: goto tr937;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr936;
		} else if ( _widec >= 15 )
			goto tr936;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr936;
		} else if ( _widec >= 38 )
			goto tr936;
	} else
		goto tr936;
	goto st0;
st412:
	if ( ++p == pe )
		goto _test_eof412;
case 412:
	if ( ( ((int) p->tok)) == 22 )
		goto st413;
	goto st0;
st413:
	if ( ++p == pe )
		goto _test_eof413;
case 413:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr939;
		case 5: goto tr939;
		case 8: goto tr939;
		case 18: goto tr941;
		case 21: goto tr940;
		case 23: goto tr940;
		case 36: goto tr941;
		case 44: goto tr940;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr940;
	goto st0;
tr939:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st414;
st414:
	if ( ++p == pe )
		goto _test_eof414;
case 414:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr942;
		case 23: goto st415;
		case 131091: goto st416;
		case 131109: goto st416;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st415;
		} else if ( _widec >= 15 )
			goto st415;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st415;
		} else if ( _widec >= 38 )
			goto st415;
	} else
		goto st415;
	goto st0;
tr940:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st415;
tr941:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st415;
tr946:
	{ expr_open_parens++; }
	goto st415;
tr948:
	{ expr_open_parens--; }
	goto st415;
st415:
	if ( ++p == pe )
		goto _test_eof415;
case 415:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st414;
		case 5: goto st414;
		case 8: goto st414;
		case 13: goto st415;
		case 18: goto tr946;
		case 21: goto st415;
		case 23: goto st415;
		case 36: goto tr946;
		case 44: goto st415;
	}
	goto st0;
tr949:
	{ expr_open_parens--; }
	goto st416;
st416:
	if ( ++p == pe )
		goto _test_eof416;
case 416:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr947;
		case 23: goto tr948;
		case 131091: goto tr949;
		case 131109: goto tr949;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr948;
		} else if ( _widec >= 15 )
			goto tr948;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr948;
		} else if ( _widec >= 38 )
			goto tr948;
	} else
		goto tr948;
	goto st0;
st417:
	if ( ++p == pe )
		goto _test_eof417;
case 417:
	if ( ( ((int) p->tok)) == 22 )
		goto st418;
	goto st0;
st418:
	if ( ++p == pe )
		goto _test_eof418;
case 418:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr951;
		case 5: goto tr951;
		case 8: goto tr951;
		case 18: goto tr953;
		case 21: goto tr952;
		case 23: goto tr952;
		case 36: goto tr953;
		case 44: goto tr952;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr952;
	goto st0;
tr951:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st419;
st419:
	if ( ++p == pe )
		goto _test_eof419;
case 419:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr954;
		case 23: goto st420;
		case 131091: goto st421;
		case 131109: goto st421;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st420;
		} else if ( _widec >= 15 )
			goto st420;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st420;
		} else if ( _widec >= 38 )
			goto st420;
	} else
		goto st420;
	goto st0;
tr952:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st420;
tr953:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st420;
tr958:
	{ expr_open_parens++; }
	goto st420;
tr960:
	{ expr_open_parens--; }
	goto st420;
st420:
	if ( ++p == pe )
		goto _test_eof420;
case 420:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st419;
		case 5: goto st419;
		case 8: goto st419;
		case 13: goto st420;
		case 18: goto tr958;
		case 21: goto st420;
		case 23: goto st420;
		case 36: goto tr958;
		case 44: goto st420;
	}
	goto st0;
tr961:
	{ expr_open_parens--; }
	goto st421;
st421:
	if ( ++p == pe )
		goto _test_eof421;
case 421:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr959;
		case 23: goto tr960;
		case 131091: goto tr961;
		case 131109: goto tr961;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr960;
		} else if ( _widec >= 15 )
			goto tr960;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr960;
		} else if ( _widec >= 38 )
			goto tr960;
	} else
		goto tr960;
	goto st0;
st422:
	if ( ++p == pe )
		goto _test_eof422;
case 422:
	if ( ( ((int) p->tok)) == 22 )
		goto st423;
	goto st0;
st423:
	if ( ++p == pe )
		goto _test_eof423;
case 423:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr963;
		case 5: goto tr963;
		case 8: goto tr963;
		case 18: goto tr965;
		case 21: goto tr964;
		case 23: goto tr964;
		case 36: goto tr965;
		case 44: goto tr964;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr964;
	goto st0;
tr963:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st424;
st424:
	if ( ++p == pe )
		goto _test_eof424;
case 424:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr966;
		case 23: goto st425;
		case 131091: goto st426;
		case 131109: goto st426;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st425;
		} else if ( _widec >= 15 )
			goto st425;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st425;
		} else if ( _widec >= 38 )
			goto st425;
	} else
		goto st425;
	goto st0;
tr964:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st425;
tr965:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st425;
tr970:
	{ expr_open_parens++; }
	goto st425;
tr972:
	{ expr_open_parens--; }
	goto st425;
st425:
	if ( ++p == pe )
		goto _test_eof425;
case 425:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st424;
		case 5: goto st424;
		case 8: goto st424;
		case 13: goto st425;
		case 18: goto tr970;
		case 21: goto st425;
		case 23: goto st425;
		case 36: goto tr970;
		case 44: goto st425;
	}
	goto st0;
tr973:
	{ expr_open_parens--; }
	goto st426;
st426:
	if ( ++p == pe )
		goto _test_eof426;
case 426:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr971;
		case 23: goto tr972;
		case 131091: goto tr973;
		case 131109: goto tr973;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr972;
		} else if ( _widec >= 15 )
			goto tr972;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr972;
		} else if ( _widec >= 38 )
			goto tr972;
	} else
		goto tr972;
	goto st0;
st427:
	if ( ++p == pe )
		goto _test_eof427;
case 427:
	if ( ( ((int) p->tok)) == 22 )
		goto st428;
	goto st0;
st428:
	if ( ++p == pe )
		goto _test_eof428;
case 428:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr975;
		case 5: goto tr975;
		case 8: goto tr975;
		case 18: goto tr977;
		case 21: goto tr976;
		case 23: goto tr976;
		case 36: goto tr977;
		case 44: goto tr976;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr976;
	goto st0;
tr975:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st429;
st429:
	if ( ++p == pe )
		goto _test_eof429;
case 429:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr978;
		case 23: goto st430;
		case 131091: goto st431;
		case 131109: goto st431;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st430;
		} else if ( _widec >= 15 )
			goto st430;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st430;
		} else if ( _widec >= 38 )
			goto st430;
	} else
		goto st430;
	goto st0;
tr976:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st430;
tr977:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st430;
tr982:
	{ expr_open_parens++; }
	goto st430;
tr984:
	{ expr_open_parens--; }
	goto st430;
st430:
	if ( ++p == pe )
		goto _test_eof430;
case 430:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st429;
		case 5: goto st429;
		case 8: goto st429;
		case 13: goto st430;
		case 18: goto tr982;
		case 21: goto st430;
		case 23: goto st430;
		case 36: goto tr982;
		case 44: goto st430;
	}
	goto st0;
tr985:
	{ expr_open_parens--; }
	goto st431;
st431:
	if ( ++p == pe )
		goto _test_eof431;
case 431:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr983;
		case 23: goto tr984;
		case 131091: goto tr985;
		case 131109: goto tr985;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr984;
		} else if ( _widec >= 15 )
			goto tr984;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr984;
		} else if ( _widec >= 38 )
			goto tr984;
	} else
		goto tr984;
	goto st0;
st432:
	if ( ++p == pe )
		goto _test_eof432;
case 432:
	if ( ( ((int) p->tok)) == 22 )
		goto st433;
	goto st0;
st433:
	if ( ++p == pe )
		goto _test_eof433;
case 433:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr987;
		case 5: goto tr987;
		case 8: goto tr987;
		case 18: goto tr989;
		case 21: goto tr988;
		case 23: goto tr988;
		case 36: goto tr989;
		case 44: goto tr988;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr988;
	goto st0;
tr987:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st434;
st434:
	if ( ++p == pe )
		goto _test_eof434;
case 434:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr990;
		case 23: goto st435;
		case 131091: goto st436;
		case 131109: goto st436;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st435;
		} else if ( _widec >= 15 )
			goto st435;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st435;
		} else if ( _widec >= 38 )
			goto st435;
	} else
		goto st435;
	goto st0;
tr988:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st435;
tr989:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st435;
tr994:
	{ expr_open_parens++; }
	goto st435;
tr996:
	{ expr_open_parens--; }
	goto st435;
st435:
	if ( ++p == pe )
		goto _test_eof435;
case 435:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st434;
		case 5: goto st434;
		case 8: goto st434;
		case 13: goto st435;
		case 18: goto tr994;
		case 21: goto st435;
		case 23: goto st435;
		case 36: goto tr994;
		case 44: goto st435;
	}
	goto st0;
tr997:
	{ expr_open_parens--; }
	goto st436;
st436:
	if ( ++p == pe )
		goto _test_eof436;
case 436:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr995;
		case 23: goto tr996;
		case 131091: goto tr997;
		case 131109: goto tr997;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr996;
		} else if ( _widec >= 15 )
			goto tr996;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr996;
		} else if ( _widec >= 38 )
			goto tr996;
	} else
		goto tr996;
	goto st0;
st437:
	if ( ++p == pe )
		goto _test_eof437;
case 437:
	if ( ( ((int) p->tok)) == 22 )
		goto st438;
	goto st0;
st438:
	if ( ++p == pe )
		goto _test_eof438;
case 438:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr999;
		case 5: goto tr999;
		case 8: goto tr999;
		case 18: goto tr1001;
		case 21: goto tr1000;
		case 23: goto tr1000;
		case 36: goto tr1001;
		case 44: goto tr1000;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1000;
	goto st0;
tr999:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st439;
st439:
	if ( ++p == pe )
		goto _test_eof439;
case 439:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1002;
		case 23: goto st440;
		case 131091: goto st441;
		case 131109: goto st441;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st440;
		} else if ( _widec >= 15 )
			goto st440;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st440;
		} else if ( _widec >= 38 )
			goto st440;
	} else
		goto st440;
	goto st0;
tr1000:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st440;
tr1001:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st440;
tr1006:
	{ expr_open_parens++; }
	goto st440;
tr1008:
	{ expr_open_parens--; }
	goto st440;
st440:
	if ( ++p == pe )
		goto _test_eof440;
case 440:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st439;
		case 5: goto st439;
		case 8: goto st439;
		case 13: goto st440;
		case 18: goto tr1006;
		case 21: goto st440;
		case 23: goto st440;
		case 36: goto tr1006;
		case 44: goto st440;
	}
	goto st0;
tr1009:
	{ expr_open_parens--; }
	goto st441;
st441:
	if ( ++p == pe )
		goto _test_eof441;
case 441:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1007;
		case 23: goto tr1008;
		case 131091: goto tr1009;
		case 131109: goto tr1009;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1008;
		} else if ( _widec >= 15 )
			goto tr1008;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1008;
		} else if ( _widec >= 38 )
			goto tr1008;
	} else
		goto tr1008;
	goto st0;
st442:
	if ( ++p == pe )
		goto _test_eof442;
case 442:
	if ( ( ((int) p->tok)) == 22 )
		goto st443;
	goto st0;
st443:
	if ( ++p == pe )
		goto _test_eof443;
case 443:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1011;
		case 5: goto tr1011;
		case 8: goto tr1011;
		case 18: goto tr1013;
		case 21: goto tr1012;
		case 23: goto tr1012;
		case 36: goto tr1013;
		case 44: goto tr1012;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1012;
	goto st0;
tr1011:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st444;
st444:
	if ( ++p == pe )
		goto _test_eof444;
case 444:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1014;
		case 23: goto st445;
		case 131091: goto st446;
		case 131109: goto st446;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st445;
		} else if ( _widec >= 15 )
			goto st445;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st445;
		} else if ( _widec >= 38 )
			goto st445;
	} else
		goto st445;
	goto st0;
tr1012:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st445;
tr1013:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st445;
tr1018:
	{ expr_open_parens++; }
	goto st445;
tr1020:
	{ expr_open_parens--; }
	goto st445;
st445:
	if ( ++p == pe )
		goto _test_eof445;
case 445:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st444;
		case 5: goto st444;
		case 8: goto st444;
		case 13: goto st445;
		case 18: goto tr1018;
		case 21: goto st445;
		case 23: goto st445;
		case 36: goto tr1018;
		case 44: goto st445;
	}
	goto st0;
tr1021:
	{ expr_open_parens--; }
	goto st446;
st446:
	if ( ++p == pe )
		goto _test_eof446;
case 446:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1019;
		case 23: goto tr1020;
		case 131091: goto tr1021;
		case 131109: goto tr1021;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1020;
		} else if ( _widec >= 15 )
			goto tr1020;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1020;
		} else if ( _widec >= 38 )
			goto tr1020;
	} else
		goto tr1020;
	goto st0;
st447:
	if ( ++p == pe )
		goto _test_eof447;
case 447:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1022;
	goto st0;
st448:
	if ( ++p == pe )
		goto _test_eof448;
case 448:
	if ( ( ((int) p->tok)) == 19 )
		goto st449;
	goto st0;
st449:
	if ( ++p == pe )
		goto _test_eof449;
case 449:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1024;
	goto st0;
st450:
	if ( ++p == pe )
		goto _test_eof450;
case 450:
	if ( ( ((int) p->tok)) == 19 )
		goto st451;
	goto st0;
st451:
	if ( ++p == pe )
		goto _test_eof451;
case 451:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1026;
	goto st0;
st452:
	if ( ++p == pe )
		goto _test_eof452;
case 452:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1027;
		case 5: goto tr1027;
		case 8: goto tr1027;
		case 18: goto tr1029;
		case 21: goto tr1028;
		case 23: goto tr1028;
		case 36: goto tr1029;
		case 44: goto tr1028;
		case 45: goto st456;
		case 46: goto st461;
		case 47: goto st466;
		case 48: goto st471;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1028;
	goto st0;
tr1027:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st453;
st453:
	if ( ++p == pe )
		goto _test_eof453;
case 453:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1034;
		case 23: goto st454;
		case 131091: goto st455;
		case 131109: goto st455;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st454;
		} else if ( _widec >= 15 )
			goto st454;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st454;
		} else if ( _widec >= 38 )
			goto st454;
	} else
		goto st454;
	goto st0;
tr1028:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st454;
tr1029:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st454;
tr1038:
	{ expr_open_parens++; }
	goto st454;
tr1040:
	{ expr_open_parens--; }
	goto st454;
st454:
	if ( ++p == pe )
		goto _test_eof454;
case 454:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st453;
		case 5: goto st453;
		case 8: goto st453;
		case 13: goto st454;
		case 18: goto tr1038;
		case 21: goto st454;
		case 23: goto st454;
		case 36: goto tr1038;
		case 44: goto st454;
	}
	goto st0;
tr1041:
	{ expr_open_parens--; }
	goto st455;
st455:
	if ( ++p == pe )
		goto _test_eof455;
case 455:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1039;
		case 23: goto tr1040;
		case 131091: goto tr1041;
		case 131109: goto tr1041;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1040;
		} else if ( _widec >= 15 )
			goto tr1040;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1040;
		} else if ( _widec >= 38 )
			goto tr1040;
	} else
		goto tr1040;
	goto st0;
st456:
	if ( ++p == pe )
		goto _test_eof456;
case 456:
	if ( ( ((int) p->tok)) == 22 )
		goto st457;
	goto st0;
st457:
	if ( ++p == pe )
		goto _test_eof457;
case 457:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1043;
		case 5: goto tr1043;
		case 8: goto tr1043;
		case 18: goto tr1045;
		case 21: goto tr1044;
		case 23: goto tr1044;
		case 36: goto tr1045;
		case 44: goto tr1044;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1044;
	goto st0;
tr1043:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st458;
st458:
	if ( ++p == pe )
		goto _test_eof458;
case 458:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1046;
		case 23: goto st459;
		case 131091: goto st460;
		case 131109: goto st460;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st459;
		} else if ( _widec >= 15 )
			goto st459;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st459;
		} else if ( _widec >= 38 )
			goto st459;
	} else
		goto st459;
	goto st0;
tr1044:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st459;
tr1045:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st459;
tr1050:
	{ expr_open_parens++; }
	goto st459;
tr1052:
	{ expr_open_parens--; }
	goto st459;
st459:
	if ( ++p == pe )
		goto _test_eof459;
case 459:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st458;
		case 5: goto st458;
		case 8: goto st458;
		case 13: goto st459;
		case 18: goto tr1050;
		case 21: goto st459;
		case 23: goto st459;
		case 36: goto tr1050;
		case 44: goto st459;
	}
	goto st0;
tr1053:
	{ expr_open_parens--; }
	goto st460;
st460:
	if ( ++p == pe )
		goto _test_eof460;
case 460:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1051;
		case 23: goto tr1052;
		case 131091: goto tr1053;
		case 131109: goto tr1053;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1052;
		} else if ( _widec >= 15 )
			goto tr1052;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1052;
		} else if ( _widec >= 38 )
			goto tr1052;
	} else
		goto tr1052;
	goto st0;
st461:
	if ( ++p == pe )
		goto _test_eof461;
case 461:
	if ( ( ((int) p->tok)) == 22 )
		goto st462;
	goto st0;
st462:
	if ( ++p == pe )
		goto _test_eof462;
case 462:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1055;
		case 5: goto tr1055;
		case 8: goto tr1055;
		case 18: goto tr1057;
		case 21: goto tr1056;
		case 23: goto tr1056;
		case 36: goto tr1057;
		case 44: goto tr1056;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1056;
	goto st0;
tr1055:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st463;
st463:
	if ( ++p == pe )
		goto _test_eof463;
case 463:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1058;
		case 23: goto st464;
		case 131091: goto st465;
		case 131109: goto st465;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st464;
		} else if ( _widec >= 15 )
			goto st464;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st464;
		} else if ( _widec >= 38 )
			goto st464;
	} else
		goto st464;
	goto st0;
tr1056:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st464;
tr1057:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st464;
tr1062:
	{ expr_open_parens++; }
	goto st464;
tr1064:
	{ expr_open_parens--; }
	goto st464;
st464:
	if ( ++p == pe )
		goto _test_eof464;
case 464:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st463;
		case 5: goto st463;
		case 8: goto st463;
		case 13: goto st464;
		case 18: goto tr1062;
		case 21: goto st464;
		case 23: goto st464;
		case 36: goto tr1062;
		case 44: goto st464;
	}
	goto st0;
tr1065:
	{ expr_open_parens--; }
	goto st465;
st465:
	if ( ++p == pe )
		goto _test_eof465;
case 465:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1063;
		case 23: goto tr1064;
		case 131091: goto tr1065;
		case 131109: goto tr1065;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1064;
		} else if ( _widec >= 15 )
			goto tr1064;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1064;
		} else if ( _widec >= 38 )
			goto tr1064;
	} else
		goto tr1064;
	goto st0;
st466:
	if ( ++p == pe )
		goto _test_eof466;
case 466:
	if ( ( ((int) p->tok)) == 22 )
		goto st467;
	goto st0;
st467:
	if ( ++p == pe )
		goto _test_eof467;
case 467:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1067;
		case 5: goto tr1067;
		case 8: goto tr1067;
		case 18: goto tr1069;
		case 21: goto tr1068;
		case 23: goto tr1068;
		case 36: goto tr1069;
		case 44: goto tr1068;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1068;
	goto st0;
tr1067:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st468;
st468:
	if ( ++p == pe )
		goto _test_eof468;
case 468:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1070;
		case 23: goto st469;
		case 131091: goto st470;
		case 131109: goto st470;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st469;
		} else if ( _widec >= 15 )
			goto st469;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st469;
		} else if ( _widec >= 38 )
			goto st469;
	} else
		goto st469;
	goto st0;
tr1068:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st469;
tr1069:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st469;
tr1074:
	{ expr_open_parens++; }
	goto st469;
tr1076:
	{ expr_open_parens--; }
	goto st469;
st469:
	if ( ++p == pe )
		goto _test_eof469;
case 469:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st468;
		case 5: goto st468;
		case 8: goto st468;
		case 13: goto st469;
		case 18: goto tr1074;
		case 21: goto st469;
		case 23: goto st469;
		case 36: goto tr1074;
		case 44: goto st469;
	}
	goto st0;
tr1077:
	{ expr_open_parens--; }
	goto st470;
st470:
	if ( ++p == pe )
		goto _test_eof470;
case 470:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1075;
		case 23: goto tr1076;
		case 131091: goto tr1077;
		case 131109: goto tr1077;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1076;
		} else if ( _widec >= 15 )
			goto tr1076;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1076;
		} else if ( _widec >= 38 )
			goto tr1076;
	} else
		goto tr1076;
	goto st0;
st471:
	if ( ++p == pe )
		goto _test_eof471;
case 471:
	if ( ( ((int) p->tok)) == 22 )
		goto st472;
	goto st0;
st472:
	if ( ++p == pe )
		goto _test_eof472;
case 472:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1079;
		case 5: goto tr1079;
		case 8: goto tr1079;
		case 18: goto tr1081;
		case 21: goto tr1080;
		case 23: goto tr1080;
		case 36: goto tr1081;
		case 44: goto tr1080;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1080;
	goto st0;
tr1079:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st473;
st473:
	if ( ++p == pe )
		goto _test_eof473;
case 473:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1082;
		case 23: goto st474;
		case 131091: goto st475;
		case 131109: goto st475;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st474;
		} else if ( _widec >= 15 )
			goto st474;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st474;
		} else if ( _widec >= 38 )
			goto st474;
	} else
		goto st474;
	goto st0;
tr1080:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st474;
tr1081:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st474;
tr1086:
	{ expr_open_parens++; }
	goto st474;
tr1088:
	{ expr_open_parens--; }
	goto st474;
st474:
	if ( ++p == pe )
		goto _test_eof474;
case 474:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st473;
		case 5: goto st473;
		case 8: goto st473;
		case 13: goto st474;
		case 18: goto tr1086;
		case 21: goto st474;
		case 23: goto st474;
		case 36: goto tr1086;
		case 44: goto st474;
	}
	goto st0;
tr1089:
	{ expr_open_parens--; }
	goto st475;
st475:
	if ( ++p == pe )
		goto _test_eof475;
case 475:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1087;
		case 23: goto tr1088;
		case 131091: goto tr1089;
		case 131109: goto tr1089;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1088;
		} else if ( _widec >= 15 )
			goto tr1088;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1088;
		} else if ( _widec >= 38 )
			goto tr1088;
	} else
		goto tr1088;
	goto st0;
st476:
	if ( ++p == pe )
		goto _test_eof476;
case 476:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1090;
		case 5: goto tr1090;
		case 8: goto tr1090;
		case 18: goto tr1092;
		case 21: goto tr1091;
		case 23: goto tr1091;
		case 36: goto tr1092;
		case 44: goto tr1091;
		case 48: goto st488;
		case 53: goto st525;
		case 54: goto st562;
		case 55: goto st599;
		case 56: goto st636;
		case 57: goto st669;
		case 58: goto st681;
		case 59: goto st693;
		case 60: goto st726;
		case 61: goto st738;
		case 62: goto st750;
		case 64: goto st793;
		case 65: goto st796;
		case 66: goto st799;
		case 67: goto st802;
		case 69: goto st805;
		case 70: goto st810;
		case 71: goto st815;
		case 72: goto st820;
		case 73: goto st825;
		case 75: goto st830;
		case 77: goto st838;
		case 78: goto st841;
		case 79: goto st844;
		case 80: goto st856;
		case 81: goto st888;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1091;
	goto st0;
tr1090:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st477;
st477:
	if ( ++p == pe )
		goto _test_eof477;
case 477:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr1120;
		case 131091: goto st487;
		case 131109: goto st487;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st478;
		} else if ( _widec >= 15 )
			goto st478;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st478;
		} else if ( _widec >= 38 )
			goto st478;
	} else
		goto st478;
	goto st0;
tr1091:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st478;
tr1092:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st478;
tr1123:
	{ expr_open_parens++; }
	goto st478;
tr1138:
	{ expr_open_parens--; }
	goto st478;
st478:
	if ( ++p == pe )
		goto _test_eof478;
case 478:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st477;
		case 5: goto st477;
		case 8: goto st477;
		case 13: goto st478;
		case 18: goto tr1123;
		case 21: goto st478;
		case 23: goto st478;
		case 36: goto tr1123;
		case 44: goto st478;
	}
	goto st0;
tr1120:
	{ push_expr(expr_start, p); }
	goto st479;
tr1139:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st479;
st479:
	if ( ++p == pe )
		goto _test_eof479;
case 479:
	switch( ( ((int) p->tok)) ) {
		case 62: goto st480;
		case 69: goto st481;
		case 70: goto st482;
		case 71: goto st483;
		case 72: goto st484;
		case 73: goto st485;
		case 75: goto st486;
	}
	goto st0;
st480:
	if ( ++p == pe )
		goto _test_eof480;
case 480:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1131;
	goto st0;
st481:
	if ( ++p == pe )
		goto _test_eof481;
case 481:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1132;
	goto st0;
st482:
	if ( ++p == pe )
		goto _test_eof482;
case 482:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1133;
	goto st0;
st483:
	if ( ++p == pe )
		goto _test_eof483;
case 483:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1134;
	goto st0;
st484:
	if ( ++p == pe )
		goto _test_eof484;
case 484:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1135;
	goto st0;
st485:
	if ( ++p == pe )
		goto _test_eof485;
case 485:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1136;
	goto st0;
st486:
	if ( ++p == pe )
		goto _test_eof486;
case 486:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1137;
	goto st0;
tr1140:
	{ expr_open_parens--; }
	goto st487;
st487:
	if ( ++p == pe )
		goto _test_eof487;
case 487:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr1139;
		case 131091: goto tr1140;
		case 131109: goto tr1140;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr1138;
		} else if ( _widec >= 15 )
			goto tr1138;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1138;
		} else if ( _widec >= 38 )
			goto tr1138;
	} else
		goto tr1138;
	goto st0;
st488:
	if ( ++p == pe )
		goto _test_eof488;
case 488:
	if ( ( ((int) p->tok)) == 22 )
		goto st489;
	goto st0;
st489:
	if ( ++p == pe )
		goto _test_eof489;
case 489:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1142;
		case 5: goto tr1142;
		case 8: goto tr1142;
		case 18: goto tr1144;
		case 21: goto tr1143;
		case 23: goto tr1143;
		case 36: goto tr1144;
		case 44: goto tr1143;
		case 48: goto st493;
		case 53: goto st494;
		case 54: goto st495;
		case 55: goto st496;
		case 56: goto st497;
		case 57: goto st498;
		case 58: goto st499;
		case 59: goto st500;
		case 60: goto st501;
		case 61: goto st502;
		case 62: goto st503;
		case 79: goto st504;
		case 80: goto st505;
		case 81: goto st515;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1143;
	goto st0;
tr1142:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st490;
st490:
	if ( ++p == pe )
		goto _test_eof490;
case 490:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1159;
		case 23: goto st491;
		case 131091: goto st492;
		case 131109: goto st492;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st491;
		} else if ( _widec >= 15 )
			goto st491;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st491;
		} else if ( _widec >= 38 )
			goto st491;
	} else
		goto st491;
	goto st0;
tr1143:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st491;
tr1144:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st491;
tr1163:
	{ expr_open_parens++; }
	goto st491;
tr1165:
	{ expr_open_parens--; }
	goto st491;
st491:
	if ( ++p == pe )
		goto _test_eof491;
case 491:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st490;
		case 5: goto st490;
		case 8: goto st490;
		case 13: goto st491;
		case 18: goto tr1163;
		case 21: goto st491;
		case 23: goto st491;
		case 36: goto tr1163;
		case 44: goto st491;
	}
	goto st0;
tr1166:
	{ expr_open_parens--; }
	goto st492;
st492:
	if ( ++p == pe )
		goto _test_eof492;
case 492:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1164;
		case 23: goto tr1165;
		case 131091: goto tr1166;
		case 131109: goto tr1166;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1165;
		} else if ( _widec >= 15 )
			goto tr1165;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1165;
		} else if ( _widec >= 38 )
			goto tr1165;
	} else
		goto tr1165;
	goto st0;
st493:
	if ( ++p == pe )
		goto _test_eof493;
case 493:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1167;
	goto st0;
st494:
	if ( ++p == pe )
		goto _test_eof494;
case 494:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1168;
	goto st0;
st495:
	if ( ++p == pe )
		goto _test_eof495;
case 495:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1169;
	goto st0;
st496:
	if ( ++p == pe )
		goto _test_eof496;
case 496:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1170;
	goto st0;
st497:
	if ( ++p == pe )
		goto _test_eof497;
case 497:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1171;
	goto st0;
st498:
	if ( ++p == pe )
		goto _test_eof498;
case 498:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1172;
	goto st0;
st499:
	if ( ++p == pe )
		goto _test_eof499;
case 499:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1173;
	goto st0;
st500:
	if ( ++p == pe )
		goto _test_eof500;
case 500:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1174;
	goto st0;
st501:
	if ( ++p == pe )
		goto _test_eof501;
case 501:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1175;
	goto st0;
st502:
	if ( ++p == pe )
		goto _test_eof502;
case 502:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1176;
	goto st0;
st503:
	if ( ++p == pe )
		goto _test_eof503;
case 503:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1177;
	goto st0;
st504:
	if ( ++p == pe )
		goto _test_eof504;
case 504:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1178;
	goto st0;
st505:
	if ( ++p == pe )
		goto _test_eof505;
case 505:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1179;
		case 5: goto tr1179;
		case 8: goto tr1179;
		case 18: goto tr1181;
		case 19: goto st514;
		case 21: goto tr1180;
		case 23: goto tr1180;
		case 36: goto tr1181;
		case 44: goto tr1180;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1180;
	goto st0;
tr1179:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st506;
st506:
	if ( ++p == pe )
		goto _test_eof506;
case 506:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st507;
		case 65555: goto tr1184;
		case 131091: goto tr1185;
		case 131109: goto st512;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st507;
		} else if ( _widec >= 15 )
			goto st507;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st507;
		} else if ( _widec >= 38 )
			goto st507;
	} else
		goto st507;
	goto st0;
tr1188:
	{ expr_open_parens++; }
	goto st507;
tr1191:
	{ expr_open_parens--; }
	goto st507;
st507:
	if ( ++p == pe )
		goto _test_eof507;
case 507:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st508;
		case 5: goto st508;
		case 8: goto st508;
		case 13: goto st507;
		case 18: goto tr1188;
		case 21: goto st507;
		case 23: goto st507;
		case 36: goto tr1188;
		case 44: goto st507;
	}
	goto st0;
st508:
	if ( ++p == pe )
		goto _test_eof508;
case 508:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st507;
		case 65555: goto tr1184;
		case 131091: goto st510;
		case 131109: goto st510;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st507;
		} else if ( _widec >= 15 )
			goto st507;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st507;
		} else if ( _widec >= 38 )
			goto st507;
	} else
		goto st507;
	goto st0;
tr1184:
	{ push_expr(expr_start, p); }
	goto st509;
tr1192:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st509;
st509:
	if ( ++p == pe )
		goto _test_eof509;
case 509:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1190;
	goto st0;
tr1193:
	{ expr_open_parens--; }
	goto st510;
st510:
	if ( ++p == pe )
		goto _test_eof510;
case 510:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1191;
		case 65555: goto tr1192;
		case 131091: goto tr1193;
		case 131109: goto tr1193;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1191;
		} else if ( _widec >= 15 )
			goto tr1191;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1191;
		} else if ( _widec >= 38 )
			goto tr1191;
	} else
		goto tr1191;
	goto st0;
tr1185:
	{ push_expr(expr_start, p); }
	goto st511;
tr1194:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st511;
st511:
	if ( ++p == pe )
		goto _test_eof511;
case 511:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1190;
		case 23: goto tr1191;
		case 65555: goto tr1192;
		case 131091: goto tr1194;
		case 131109: goto tr1195;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1191;
		} else if ( _widec >= 15 )
			goto tr1191;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1191;
		} else if ( _widec >= 38 )
			goto tr1191;
	} else
		goto tr1191;
	goto st0;
tr1195:
	{ expr_open_parens--; }
	goto st512;
st512:
	if ( ++p == pe )
		goto _test_eof512;
case 512:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1191;
		case 65555: goto tr1192;
		case 131091: goto tr1194;
		case 131109: goto tr1195;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1191;
		} else if ( _widec >= 15 )
			goto tr1191;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1191;
		} else if ( _widec >= 38 )
			goto tr1191;
	} else
		goto tr1191;
	goto st0;
tr1180:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st513;
tr1181:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st513;
tr1198:
	{ expr_open_parens++; }
	goto st513;
st513:
	if ( ++p == pe )
		goto _test_eof513;
case 513:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st506;
		case 5: goto st506;
		case 8: goto st506;
		case 13: goto st513;
		case 18: goto tr1198;
		case 21: goto st513;
		case 23: goto st513;
		case 36: goto tr1198;
		case 44: goto st513;
	}
	goto st0;
st514:
	if ( ++p == pe )
		goto _test_eof514;
case 514:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1199;
	goto st0;
st515:
	if ( ++p == pe )
		goto _test_eof515;
case 515:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1200;
		case 5: goto tr1200;
		case 8: goto tr1200;
		case 18: goto tr1202;
		case 19: goto st524;
		case 21: goto tr1201;
		case 23: goto tr1201;
		case 36: goto tr1202;
		case 44: goto tr1201;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1201;
	goto st0;
tr1200:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st516;
st516:
	if ( ++p == pe )
		goto _test_eof516;
case 516:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st517;
		case 65555: goto tr1205;
		case 131091: goto tr1206;
		case 131109: goto st522;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st517;
		} else if ( _widec >= 15 )
			goto st517;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st517;
		} else if ( _widec >= 38 )
			goto st517;
	} else
		goto st517;
	goto st0;
tr1209:
	{ expr_open_parens++; }
	goto st517;
tr1212:
	{ expr_open_parens--; }
	goto st517;
st517:
	if ( ++p == pe )
		goto _test_eof517;
case 517:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st518;
		case 5: goto st518;
		case 8: goto st518;
		case 13: goto st517;
		case 18: goto tr1209;
		case 21: goto st517;
		case 23: goto st517;
		case 36: goto tr1209;
		case 44: goto st517;
	}
	goto st0;
st518:
	if ( ++p == pe )
		goto _test_eof518;
case 518:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st517;
		case 65555: goto tr1205;
		case 131091: goto st520;
		case 131109: goto st520;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st517;
		} else if ( _widec >= 15 )
			goto st517;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st517;
		} else if ( _widec >= 38 )
			goto st517;
	} else
		goto st517;
	goto st0;
tr1205:
	{ push_expr(expr_start, p); }
	goto st519;
tr1213:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st519;
st519:
	if ( ++p == pe )
		goto _test_eof519;
case 519:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1211;
	goto st0;
tr1214:
	{ expr_open_parens--; }
	goto st520;
st520:
	if ( ++p == pe )
		goto _test_eof520;
case 520:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1212;
		case 65555: goto tr1213;
		case 131091: goto tr1214;
		case 131109: goto tr1214;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1212;
		} else if ( _widec >= 15 )
			goto tr1212;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1212;
		} else if ( _widec >= 38 )
			goto tr1212;
	} else
		goto tr1212;
	goto st0;
tr1206:
	{ push_expr(expr_start, p); }
	goto st521;
tr1215:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st521;
st521:
	if ( ++p == pe )
		goto _test_eof521;
case 521:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1211;
		case 23: goto tr1212;
		case 65555: goto tr1213;
		case 131091: goto tr1215;
		case 131109: goto tr1216;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1212;
		} else if ( _widec >= 15 )
			goto tr1212;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1212;
		} else if ( _widec >= 38 )
			goto tr1212;
	} else
		goto tr1212;
	goto st0;
tr1216:
	{ expr_open_parens--; }
	goto st522;
st522:
	if ( ++p == pe )
		goto _test_eof522;
case 522:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1212;
		case 65555: goto tr1213;
		case 131091: goto tr1215;
		case 131109: goto tr1216;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1212;
		} else if ( _widec >= 15 )
			goto tr1212;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1212;
		} else if ( _widec >= 38 )
			goto tr1212;
	} else
		goto tr1212;
	goto st0;
tr1201:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st523;
tr1202:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st523;
tr1219:
	{ expr_open_parens++; }
	goto st523;
st523:
	if ( ++p == pe )
		goto _test_eof523;
case 523:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st516;
		case 5: goto st516;
		case 8: goto st516;
		case 13: goto st523;
		case 18: goto tr1219;
		case 21: goto st523;
		case 23: goto st523;
		case 36: goto tr1219;
		case 44: goto st523;
	}
	goto st0;
st524:
	if ( ++p == pe )
		goto _test_eof524;
case 524:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1220;
	goto st0;
st525:
	if ( ++p == pe )
		goto _test_eof525;
case 525:
	if ( ( ((int) p->tok)) == 22 )
		goto st526;
	goto st0;
st526:
	if ( ++p == pe )
		goto _test_eof526;
case 526:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1222;
		case 5: goto tr1222;
		case 8: goto tr1222;
		case 18: goto tr1224;
		case 21: goto tr1223;
		case 23: goto tr1223;
		case 36: goto tr1224;
		case 44: goto tr1223;
		case 48: goto st530;
		case 53: goto st531;
		case 54: goto st532;
		case 55: goto st533;
		case 56: goto st534;
		case 57: goto st535;
		case 58: goto st536;
		case 59: goto st537;
		case 60: goto st538;
		case 61: goto st539;
		case 62: goto st540;
		case 79: goto st541;
		case 80: goto st542;
		case 81: goto st552;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1223;
	goto st0;
tr1222:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st527;
st527:
	if ( ++p == pe )
		goto _test_eof527;
case 527:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1239;
		case 23: goto st528;
		case 131091: goto st529;
		case 131109: goto st529;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st528;
		} else if ( _widec >= 15 )
			goto st528;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st528;
		} else if ( _widec >= 38 )
			goto st528;
	} else
		goto st528;
	goto st0;
tr1223:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st528;
tr1224:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st528;
tr1243:
	{ expr_open_parens++; }
	goto st528;
tr1245:
	{ expr_open_parens--; }
	goto st528;
st528:
	if ( ++p == pe )
		goto _test_eof528;
case 528:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st527;
		case 5: goto st527;
		case 8: goto st527;
		case 13: goto st528;
		case 18: goto tr1243;
		case 21: goto st528;
		case 23: goto st528;
		case 36: goto tr1243;
		case 44: goto st528;
	}
	goto st0;
tr1246:
	{ expr_open_parens--; }
	goto st529;
st529:
	if ( ++p == pe )
		goto _test_eof529;
case 529:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1244;
		case 23: goto tr1245;
		case 131091: goto tr1246;
		case 131109: goto tr1246;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1245;
		} else if ( _widec >= 15 )
			goto tr1245;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1245;
		} else if ( _widec >= 38 )
			goto tr1245;
	} else
		goto tr1245;
	goto st0;
st530:
	if ( ++p == pe )
		goto _test_eof530;
case 530:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1247;
	goto st0;
st531:
	if ( ++p == pe )
		goto _test_eof531;
case 531:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1248;
	goto st0;
st532:
	if ( ++p == pe )
		goto _test_eof532;
case 532:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1249;
	goto st0;
st533:
	if ( ++p == pe )
		goto _test_eof533;
case 533:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1250;
	goto st0;
st534:
	if ( ++p == pe )
		goto _test_eof534;
case 534:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1251;
	goto st0;
st535:
	if ( ++p == pe )
		goto _test_eof535;
case 535:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1252;
	goto st0;
st536:
	if ( ++p == pe )
		goto _test_eof536;
case 536:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1253;
	goto st0;
st537:
	if ( ++p == pe )
		goto _test_eof537;
case 537:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1254;
	goto st0;
st538:
	if ( ++p == pe )
		goto _test_eof538;
case 538:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1255;
	goto st0;
st539:
	if ( ++p == pe )
		goto _test_eof539;
case 539:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1256;
	goto st0;
st540:
	if ( ++p == pe )
		goto _test_eof540;
case 540:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1257;
	goto st0;
st541:
	if ( ++p == pe )
		goto _test_eof541;
case 541:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1258;
	goto st0;
st542:
	if ( ++p == pe )
		goto _test_eof542;
case 542:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1259;
		case 5: goto tr1259;
		case 8: goto tr1259;
		case 18: goto tr1261;
		case 19: goto st551;
		case 21: goto tr1260;
		case 23: goto tr1260;
		case 36: goto tr1261;
		case 44: goto tr1260;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1260;
	goto st0;
tr1259:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st543;
st543:
	if ( ++p == pe )
		goto _test_eof543;
case 543:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st544;
		case 65555: goto tr1264;
		case 131091: goto tr1265;
		case 131109: goto st549;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st544;
		} else if ( _widec >= 15 )
			goto st544;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st544;
		} else if ( _widec >= 38 )
			goto st544;
	} else
		goto st544;
	goto st0;
tr1268:
	{ expr_open_parens++; }
	goto st544;
tr1271:
	{ expr_open_parens--; }
	goto st544;
st544:
	if ( ++p == pe )
		goto _test_eof544;
case 544:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st545;
		case 5: goto st545;
		case 8: goto st545;
		case 13: goto st544;
		case 18: goto tr1268;
		case 21: goto st544;
		case 23: goto st544;
		case 36: goto tr1268;
		case 44: goto st544;
	}
	goto st0;
st545:
	if ( ++p == pe )
		goto _test_eof545;
case 545:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st544;
		case 65555: goto tr1264;
		case 131091: goto st547;
		case 131109: goto st547;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st544;
		} else if ( _widec >= 15 )
			goto st544;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st544;
		} else if ( _widec >= 38 )
			goto st544;
	} else
		goto st544;
	goto st0;
tr1264:
	{ push_expr(expr_start, p); }
	goto st546;
tr1272:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st546;
st546:
	if ( ++p == pe )
		goto _test_eof546;
case 546:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1270;
	goto st0;
tr1273:
	{ expr_open_parens--; }
	goto st547;
st547:
	if ( ++p == pe )
		goto _test_eof547;
case 547:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1271;
		case 65555: goto tr1272;
		case 131091: goto tr1273;
		case 131109: goto tr1273;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1271;
		} else if ( _widec >= 15 )
			goto tr1271;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1271;
		} else if ( _widec >= 38 )
			goto tr1271;
	} else
		goto tr1271;
	goto st0;
tr1265:
	{ push_expr(expr_start, p); }
	goto st548;
tr1274:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st548;
st548:
	if ( ++p == pe )
		goto _test_eof548;
case 548:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1270;
		case 23: goto tr1271;
		case 65555: goto tr1272;
		case 131091: goto tr1274;
		case 131109: goto tr1275;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1271;
		} else if ( _widec >= 15 )
			goto tr1271;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1271;
		} else if ( _widec >= 38 )
			goto tr1271;
	} else
		goto tr1271;
	goto st0;
tr1275:
	{ expr_open_parens--; }
	goto st549;
st549:
	if ( ++p == pe )
		goto _test_eof549;
case 549:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1271;
		case 65555: goto tr1272;
		case 131091: goto tr1274;
		case 131109: goto tr1275;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1271;
		} else if ( _widec >= 15 )
			goto tr1271;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1271;
		} else if ( _widec >= 38 )
			goto tr1271;
	} else
		goto tr1271;
	goto st0;
tr1260:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st550;
tr1261:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st550;
tr1278:
	{ expr_open_parens++; }
	goto st550;
st550:
	if ( ++p == pe )
		goto _test_eof550;
case 550:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st543;
		case 5: goto st543;
		case 8: goto st543;
		case 13: goto st550;
		case 18: goto tr1278;
		case 21: goto st550;
		case 23: goto st550;
		case 36: goto tr1278;
		case 44: goto st550;
	}
	goto st0;
st551:
	if ( ++p == pe )
		goto _test_eof551;
case 551:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1279;
	goto st0;
st552:
	if ( ++p == pe )
		goto _test_eof552;
case 552:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1280;
		case 5: goto tr1280;
		case 8: goto tr1280;
		case 18: goto tr1282;
		case 19: goto st561;
		case 21: goto tr1281;
		case 23: goto tr1281;
		case 36: goto tr1282;
		case 44: goto tr1281;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1281;
	goto st0;
tr1280:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st553;
st553:
	if ( ++p == pe )
		goto _test_eof553;
case 553:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st554;
		case 65555: goto tr1285;
		case 131091: goto tr1286;
		case 131109: goto st559;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st554;
		} else if ( _widec >= 15 )
			goto st554;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st554;
		} else if ( _widec >= 38 )
			goto st554;
	} else
		goto st554;
	goto st0;
tr1289:
	{ expr_open_parens++; }
	goto st554;
tr1292:
	{ expr_open_parens--; }
	goto st554;
st554:
	if ( ++p == pe )
		goto _test_eof554;
case 554:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st555;
		case 5: goto st555;
		case 8: goto st555;
		case 13: goto st554;
		case 18: goto tr1289;
		case 21: goto st554;
		case 23: goto st554;
		case 36: goto tr1289;
		case 44: goto st554;
	}
	goto st0;
st555:
	if ( ++p == pe )
		goto _test_eof555;
case 555:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st554;
		case 65555: goto tr1285;
		case 131091: goto st557;
		case 131109: goto st557;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st554;
		} else if ( _widec >= 15 )
			goto st554;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st554;
		} else if ( _widec >= 38 )
			goto st554;
	} else
		goto st554;
	goto st0;
tr1285:
	{ push_expr(expr_start, p); }
	goto st556;
tr1293:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st556;
st556:
	if ( ++p == pe )
		goto _test_eof556;
case 556:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1291;
	goto st0;
tr1294:
	{ expr_open_parens--; }
	goto st557;
st557:
	if ( ++p == pe )
		goto _test_eof557;
case 557:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1292;
		case 65555: goto tr1293;
		case 131091: goto tr1294;
		case 131109: goto tr1294;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1292;
		} else if ( _widec >= 15 )
			goto tr1292;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1292;
		} else if ( _widec >= 38 )
			goto tr1292;
	} else
		goto tr1292;
	goto st0;
tr1286:
	{ push_expr(expr_start, p); }
	goto st558;
tr1295:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st558;
st558:
	if ( ++p == pe )
		goto _test_eof558;
case 558:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1291;
		case 23: goto tr1292;
		case 65555: goto tr1293;
		case 131091: goto tr1295;
		case 131109: goto tr1296;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1292;
		} else if ( _widec >= 15 )
			goto tr1292;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1292;
		} else if ( _widec >= 38 )
			goto tr1292;
	} else
		goto tr1292;
	goto st0;
tr1296:
	{ expr_open_parens--; }
	goto st559;
st559:
	if ( ++p == pe )
		goto _test_eof559;
case 559:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1292;
		case 65555: goto tr1293;
		case 131091: goto tr1295;
		case 131109: goto tr1296;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1292;
		} else if ( _widec >= 15 )
			goto tr1292;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1292;
		} else if ( _widec >= 38 )
			goto tr1292;
	} else
		goto tr1292;
	goto st0;
tr1281:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st560;
tr1282:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st560;
tr1299:
	{ expr_open_parens++; }
	goto st560;
st560:
	if ( ++p == pe )
		goto _test_eof560;
case 560:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st553;
		case 5: goto st553;
		case 8: goto st553;
		case 13: goto st560;
		case 18: goto tr1299;
		case 21: goto st560;
		case 23: goto st560;
		case 36: goto tr1299;
		case 44: goto st560;
	}
	goto st0;
st561:
	if ( ++p == pe )
		goto _test_eof561;
case 561:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1300;
	goto st0;
st562:
	if ( ++p == pe )
		goto _test_eof562;
case 562:
	if ( ( ((int) p->tok)) == 22 )
		goto st563;
	goto st0;
st563:
	if ( ++p == pe )
		goto _test_eof563;
case 563:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1302;
		case 5: goto tr1302;
		case 8: goto tr1302;
		case 18: goto tr1304;
		case 21: goto tr1303;
		case 23: goto tr1303;
		case 36: goto tr1304;
		case 44: goto tr1303;
		case 48: goto st567;
		case 53: goto st568;
		case 54: goto st569;
		case 55: goto st570;
		case 56: goto st571;
		case 57: goto st572;
		case 58: goto st573;
		case 59: goto st574;
		case 60: goto st575;
		case 61: goto st576;
		case 62: goto st577;
		case 79: goto st578;
		case 80: goto st579;
		case 81: goto st589;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1303;
	goto st0;
tr1302:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st564;
st564:
	if ( ++p == pe )
		goto _test_eof564;
case 564:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1319;
		case 23: goto st565;
		case 131091: goto st566;
		case 131109: goto st566;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st565;
		} else if ( _widec >= 15 )
			goto st565;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st565;
		} else if ( _widec >= 38 )
			goto st565;
	} else
		goto st565;
	goto st0;
tr1303:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st565;
tr1304:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st565;
tr1323:
	{ expr_open_parens++; }
	goto st565;
tr1325:
	{ expr_open_parens--; }
	goto st565;
st565:
	if ( ++p == pe )
		goto _test_eof565;
case 565:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st564;
		case 5: goto st564;
		case 8: goto st564;
		case 13: goto st565;
		case 18: goto tr1323;
		case 21: goto st565;
		case 23: goto st565;
		case 36: goto tr1323;
		case 44: goto st565;
	}
	goto st0;
tr1326:
	{ expr_open_parens--; }
	goto st566;
st566:
	if ( ++p == pe )
		goto _test_eof566;
case 566:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1324;
		case 23: goto tr1325;
		case 131091: goto tr1326;
		case 131109: goto tr1326;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1325;
		} else if ( _widec >= 15 )
			goto tr1325;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1325;
		} else if ( _widec >= 38 )
			goto tr1325;
	} else
		goto tr1325;
	goto st0;
st567:
	if ( ++p == pe )
		goto _test_eof567;
case 567:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1327;
	goto st0;
st568:
	if ( ++p == pe )
		goto _test_eof568;
case 568:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1328;
	goto st0;
st569:
	if ( ++p == pe )
		goto _test_eof569;
case 569:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1329;
	goto st0;
st570:
	if ( ++p == pe )
		goto _test_eof570;
case 570:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1330;
	goto st0;
st571:
	if ( ++p == pe )
		goto _test_eof571;
case 571:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1331;
	goto st0;
st572:
	if ( ++p == pe )
		goto _test_eof572;
case 572:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1332;
	goto st0;
st573:
	if ( ++p == pe )
		goto _test_eof573;
case 573:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1333;
	goto st0;
st574:
	if ( ++p == pe )
		goto _test_eof574;
case 574:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1334;
	goto st0;
st575:
	if ( ++p == pe )
		goto _test_eof575;
case 575:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1335;
	goto st0;
st576:
	if ( ++p == pe )
		goto _test_eof576;
case 576:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1336;
	goto st0;
st577:
	if ( ++p == pe )
		goto _test_eof577;
case 577:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1337;
	goto st0;
st578:
	if ( ++p == pe )
		goto _test_eof578;
case 578:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1338;
	goto st0;
st579:
	if ( ++p == pe )
		goto _test_eof579;
case 579:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1339;
		case 5: goto tr1339;
		case 8: goto tr1339;
		case 18: goto tr1341;
		case 19: goto st588;
		case 21: goto tr1340;
		case 23: goto tr1340;
		case 36: goto tr1341;
		case 44: goto tr1340;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1340;
	goto st0;
tr1339:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st580;
st580:
	if ( ++p == pe )
		goto _test_eof580;
case 580:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st581;
		case 65555: goto tr1344;
		case 131091: goto tr1345;
		case 131109: goto st586;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st581;
		} else if ( _widec >= 15 )
			goto st581;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st581;
		} else if ( _widec >= 38 )
			goto st581;
	} else
		goto st581;
	goto st0;
tr1348:
	{ expr_open_parens++; }
	goto st581;
tr1351:
	{ expr_open_parens--; }
	goto st581;
st581:
	if ( ++p == pe )
		goto _test_eof581;
case 581:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st582;
		case 5: goto st582;
		case 8: goto st582;
		case 13: goto st581;
		case 18: goto tr1348;
		case 21: goto st581;
		case 23: goto st581;
		case 36: goto tr1348;
		case 44: goto st581;
	}
	goto st0;
st582:
	if ( ++p == pe )
		goto _test_eof582;
case 582:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st581;
		case 65555: goto tr1344;
		case 131091: goto st584;
		case 131109: goto st584;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st581;
		} else if ( _widec >= 15 )
			goto st581;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st581;
		} else if ( _widec >= 38 )
			goto st581;
	} else
		goto st581;
	goto st0;
tr1344:
	{ push_expr(expr_start, p); }
	goto st583;
tr1352:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st583;
st583:
	if ( ++p == pe )
		goto _test_eof583;
case 583:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1350;
	goto st0;
tr1353:
	{ expr_open_parens--; }
	goto st584;
st584:
	if ( ++p == pe )
		goto _test_eof584;
case 584:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1351;
		case 65555: goto tr1352;
		case 131091: goto tr1353;
		case 131109: goto tr1353;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1351;
		} else if ( _widec >= 15 )
			goto tr1351;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1351;
		} else if ( _widec >= 38 )
			goto tr1351;
	} else
		goto tr1351;
	goto st0;
tr1345:
	{ push_expr(expr_start, p); }
	goto st585;
tr1354:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st585;
st585:
	if ( ++p == pe )
		goto _test_eof585;
case 585:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1350;
		case 23: goto tr1351;
		case 65555: goto tr1352;
		case 131091: goto tr1354;
		case 131109: goto tr1355;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1351;
		} else if ( _widec >= 15 )
			goto tr1351;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1351;
		} else if ( _widec >= 38 )
			goto tr1351;
	} else
		goto tr1351;
	goto st0;
tr1355:
	{ expr_open_parens--; }
	goto st586;
st586:
	if ( ++p == pe )
		goto _test_eof586;
case 586:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1351;
		case 65555: goto tr1352;
		case 131091: goto tr1354;
		case 131109: goto tr1355;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1351;
		} else if ( _widec >= 15 )
			goto tr1351;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1351;
		} else if ( _widec >= 38 )
			goto tr1351;
	} else
		goto tr1351;
	goto st0;
tr1340:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st587;
tr1341:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st587;
tr1358:
	{ expr_open_parens++; }
	goto st587;
st587:
	if ( ++p == pe )
		goto _test_eof587;
case 587:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st580;
		case 5: goto st580;
		case 8: goto st580;
		case 13: goto st587;
		case 18: goto tr1358;
		case 21: goto st587;
		case 23: goto st587;
		case 36: goto tr1358;
		case 44: goto st587;
	}
	goto st0;
st588:
	if ( ++p == pe )
		goto _test_eof588;
case 588:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1359;
	goto st0;
st589:
	if ( ++p == pe )
		goto _test_eof589;
case 589:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1360;
		case 5: goto tr1360;
		case 8: goto tr1360;
		case 18: goto tr1362;
		case 19: goto st598;
		case 21: goto tr1361;
		case 23: goto tr1361;
		case 36: goto tr1362;
		case 44: goto tr1361;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1361;
	goto st0;
tr1360:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st590;
st590:
	if ( ++p == pe )
		goto _test_eof590;
case 590:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st591;
		case 65555: goto tr1365;
		case 131091: goto tr1366;
		case 131109: goto st596;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st591;
		} else if ( _widec >= 15 )
			goto st591;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st591;
		} else if ( _widec >= 38 )
			goto st591;
	} else
		goto st591;
	goto st0;
tr1369:
	{ expr_open_parens++; }
	goto st591;
tr1372:
	{ expr_open_parens--; }
	goto st591;
st591:
	if ( ++p == pe )
		goto _test_eof591;
case 591:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st592;
		case 5: goto st592;
		case 8: goto st592;
		case 13: goto st591;
		case 18: goto tr1369;
		case 21: goto st591;
		case 23: goto st591;
		case 36: goto tr1369;
		case 44: goto st591;
	}
	goto st0;
st592:
	if ( ++p == pe )
		goto _test_eof592;
case 592:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st591;
		case 65555: goto tr1365;
		case 131091: goto st594;
		case 131109: goto st594;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st591;
		} else if ( _widec >= 15 )
			goto st591;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st591;
		} else if ( _widec >= 38 )
			goto st591;
	} else
		goto st591;
	goto st0;
tr1365:
	{ push_expr(expr_start, p); }
	goto st593;
tr1373:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st593;
st593:
	if ( ++p == pe )
		goto _test_eof593;
case 593:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1371;
	goto st0;
tr1374:
	{ expr_open_parens--; }
	goto st594;
st594:
	if ( ++p == pe )
		goto _test_eof594;
case 594:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1372;
		case 65555: goto tr1373;
		case 131091: goto tr1374;
		case 131109: goto tr1374;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1372;
		} else if ( _widec >= 15 )
			goto tr1372;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1372;
		} else if ( _widec >= 38 )
			goto tr1372;
	} else
		goto tr1372;
	goto st0;
tr1366:
	{ push_expr(expr_start, p); }
	goto st595;
tr1375:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st595;
st595:
	if ( ++p == pe )
		goto _test_eof595;
case 595:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1371;
		case 23: goto tr1372;
		case 65555: goto tr1373;
		case 131091: goto tr1375;
		case 131109: goto tr1376;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1372;
		} else if ( _widec >= 15 )
			goto tr1372;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1372;
		} else if ( _widec >= 38 )
			goto tr1372;
	} else
		goto tr1372;
	goto st0;
tr1376:
	{ expr_open_parens--; }
	goto st596;
st596:
	if ( ++p == pe )
		goto _test_eof596;
case 596:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1372;
		case 65555: goto tr1373;
		case 131091: goto tr1375;
		case 131109: goto tr1376;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1372;
		} else if ( _widec >= 15 )
			goto tr1372;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1372;
		} else if ( _widec >= 38 )
			goto tr1372;
	} else
		goto tr1372;
	goto st0;
tr1361:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st597;
tr1362:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st597;
tr1379:
	{ expr_open_parens++; }
	goto st597;
st597:
	if ( ++p == pe )
		goto _test_eof597;
case 597:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st590;
		case 5: goto st590;
		case 8: goto st590;
		case 13: goto st597;
		case 18: goto tr1379;
		case 21: goto st597;
		case 23: goto st597;
		case 36: goto tr1379;
		case 44: goto st597;
	}
	goto st0;
st598:
	if ( ++p == pe )
		goto _test_eof598;
case 598:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1380;
	goto st0;
st599:
	if ( ++p == pe )
		goto _test_eof599;
case 599:
	if ( ( ((int) p->tok)) == 22 )
		goto st600;
	goto st0;
st600:
	if ( ++p == pe )
		goto _test_eof600;
case 600:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1382;
		case 5: goto tr1382;
		case 8: goto tr1382;
		case 18: goto tr1384;
		case 21: goto tr1383;
		case 23: goto tr1383;
		case 36: goto tr1384;
		case 44: goto tr1383;
		case 48: goto st604;
		case 53: goto st605;
		case 54: goto st606;
		case 55: goto st607;
		case 56: goto st608;
		case 57: goto st609;
		case 58: goto st610;
		case 59: goto st611;
		case 60: goto st612;
		case 61: goto st613;
		case 62: goto st614;
		case 79: goto st615;
		case 80: goto st616;
		case 81: goto st626;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1383;
	goto st0;
tr1382:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st601;
st601:
	if ( ++p == pe )
		goto _test_eof601;
case 601:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1399;
		case 23: goto st602;
		case 131091: goto st603;
		case 131109: goto st603;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st602;
		} else if ( _widec >= 15 )
			goto st602;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st602;
		} else if ( _widec >= 38 )
			goto st602;
	} else
		goto st602;
	goto st0;
tr1383:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st602;
tr1384:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st602;
tr1403:
	{ expr_open_parens++; }
	goto st602;
tr1405:
	{ expr_open_parens--; }
	goto st602;
st602:
	if ( ++p == pe )
		goto _test_eof602;
case 602:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st601;
		case 5: goto st601;
		case 8: goto st601;
		case 13: goto st602;
		case 18: goto tr1403;
		case 21: goto st602;
		case 23: goto st602;
		case 36: goto tr1403;
		case 44: goto st602;
	}
	goto st0;
tr1406:
	{ expr_open_parens--; }
	goto st603;
st603:
	if ( ++p == pe )
		goto _test_eof603;
case 603:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1404;
		case 23: goto tr1405;
		case 131091: goto tr1406;
		case 131109: goto tr1406;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1405;
		} else if ( _widec >= 15 )
			goto tr1405;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1405;
		} else if ( _widec >= 38 )
			goto tr1405;
	} else
		goto tr1405;
	goto st0;
st604:
	if ( ++p == pe )
		goto _test_eof604;
case 604:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1407;
	goto st0;
st605:
	if ( ++p == pe )
		goto _test_eof605;
case 605:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1408;
	goto st0;
st606:
	if ( ++p == pe )
		goto _test_eof606;
case 606:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1409;
	goto st0;
st607:
	if ( ++p == pe )
		goto _test_eof607;
case 607:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1410;
	goto st0;
st608:
	if ( ++p == pe )
		goto _test_eof608;
case 608:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1411;
	goto st0;
st609:
	if ( ++p == pe )
		goto _test_eof609;
case 609:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1412;
	goto st0;
st610:
	if ( ++p == pe )
		goto _test_eof610;
case 610:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1413;
	goto st0;
st611:
	if ( ++p == pe )
		goto _test_eof611;
case 611:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1414;
	goto st0;
st612:
	if ( ++p == pe )
		goto _test_eof612;
case 612:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1415;
	goto st0;
st613:
	if ( ++p == pe )
		goto _test_eof613;
case 613:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1416;
	goto st0;
st614:
	if ( ++p == pe )
		goto _test_eof614;
case 614:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1417;
	goto st0;
st615:
	if ( ++p == pe )
		goto _test_eof615;
case 615:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1418;
	goto st0;
st616:
	if ( ++p == pe )
		goto _test_eof616;
case 616:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1419;
		case 5: goto tr1419;
		case 8: goto tr1419;
		case 18: goto tr1421;
		case 19: goto st625;
		case 21: goto tr1420;
		case 23: goto tr1420;
		case 36: goto tr1421;
		case 44: goto tr1420;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1420;
	goto st0;
tr1419:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st617;
st617:
	if ( ++p == pe )
		goto _test_eof617;
case 617:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st618;
		case 65555: goto tr1424;
		case 131091: goto tr1425;
		case 131109: goto st623;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st618;
		} else if ( _widec >= 15 )
			goto st618;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st618;
		} else if ( _widec >= 38 )
			goto st618;
	} else
		goto st618;
	goto st0;
tr1428:
	{ expr_open_parens++; }
	goto st618;
tr1431:
	{ expr_open_parens--; }
	goto st618;
st618:
	if ( ++p == pe )
		goto _test_eof618;
case 618:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st619;
		case 5: goto st619;
		case 8: goto st619;
		case 13: goto st618;
		case 18: goto tr1428;
		case 21: goto st618;
		case 23: goto st618;
		case 36: goto tr1428;
		case 44: goto st618;
	}
	goto st0;
st619:
	if ( ++p == pe )
		goto _test_eof619;
case 619:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st618;
		case 65555: goto tr1424;
		case 131091: goto st621;
		case 131109: goto st621;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st618;
		} else if ( _widec >= 15 )
			goto st618;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st618;
		} else if ( _widec >= 38 )
			goto st618;
	} else
		goto st618;
	goto st0;
tr1424:
	{ push_expr(expr_start, p); }
	goto st620;
tr1432:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st620;
st620:
	if ( ++p == pe )
		goto _test_eof620;
case 620:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1430;
	goto st0;
tr1433:
	{ expr_open_parens--; }
	goto st621;
st621:
	if ( ++p == pe )
		goto _test_eof621;
case 621:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1431;
		case 65555: goto tr1432;
		case 131091: goto tr1433;
		case 131109: goto tr1433;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1431;
		} else if ( _widec >= 15 )
			goto tr1431;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1431;
		} else if ( _widec >= 38 )
			goto tr1431;
	} else
		goto tr1431;
	goto st0;
tr1425:
	{ push_expr(expr_start, p); }
	goto st622;
tr1434:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st622;
st622:
	if ( ++p == pe )
		goto _test_eof622;
case 622:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1430;
		case 23: goto tr1431;
		case 65555: goto tr1432;
		case 131091: goto tr1434;
		case 131109: goto tr1435;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1431;
		} else if ( _widec >= 15 )
			goto tr1431;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1431;
		} else if ( _widec >= 38 )
			goto tr1431;
	} else
		goto tr1431;
	goto st0;
tr1435:
	{ expr_open_parens--; }
	goto st623;
st623:
	if ( ++p == pe )
		goto _test_eof623;
case 623:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1431;
		case 65555: goto tr1432;
		case 131091: goto tr1434;
		case 131109: goto tr1435;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1431;
		} else if ( _widec >= 15 )
			goto tr1431;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1431;
		} else if ( _widec >= 38 )
			goto tr1431;
	} else
		goto tr1431;
	goto st0;
tr1420:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st624;
tr1421:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st624;
tr1438:
	{ expr_open_parens++; }
	goto st624;
st624:
	if ( ++p == pe )
		goto _test_eof624;
case 624:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st617;
		case 5: goto st617;
		case 8: goto st617;
		case 13: goto st624;
		case 18: goto tr1438;
		case 21: goto st624;
		case 23: goto st624;
		case 36: goto tr1438;
		case 44: goto st624;
	}
	goto st0;
st625:
	if ( ++p == pe )
		goto _test_eof625;
case 625:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1439;
	goto st0;
st626:
	if ( ++p == pe )
		goto _test_eof626;
case 626:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1440;
		case 5: goto tr1440;
		case 8: goto tr1440;
		case 18: goto tr1442;
		case 19: goto st635;
		case 21: goto tr1441;
		case 23: goto tr1441;
		case 36: goto tr1442;
		case 44: goto tr1441;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1441;
	goto st0;
tr1440:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st627;
st627:
	if ( ++p == pe )
		goto _test_eof627;
case 627:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st628;
		case 65555: goto tr1445;
		case 131091: goto tr1446;
		case 131109: goto st633;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st628;
		} else if ( _widec >= 15 )
			goto st628;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st628;
		} else if ( _widec >= 38 )
			goto st628;
	} else
		goto st628;
	goto st0;
tr1449:
	{ expr_open_parens++; }
	goto st628;
tr1452:
	{ expr_open_parens--; }
	goto st628;
st628:
	if ( ++p == pe )
		goto _test_eof628;
case 628:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st629;
		case 5: goto st629;
		case 8: goto st629;
		case 13: goto st628;
		case 18: goto tr1449;
		case 21: goto st628;
		case 23: goto st628;
		case 36: goto tr1449;
		case 44: goto st628;
	}
	goto st0;
st629:
	if ( ++p == pe )
		goto _test_eof629;
case 629:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st628;
		case 65555: goto tr1445;
		case 131091: goto st631;
		case 131109: goto st631;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st628;
		} else if ( _widec >= 15 )
			goto st628;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st628;
		} else if ( _widec >= 38 )
			goto st628;
	} else
		goto st628;
	goto st0;
tr1445:
	{ push_expr(expr_start, p); }
	goto st630;
tr1453:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st630;
st630:
	if ( ++p == pe )
		goto _test_eof630;
case 630:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1451;
	goto st0;
tr1454:
	{ expr_open_parens--; }
	goto st631;
st631:
	if ( ++p == pe )
		goto _test_eof631;
case 631:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1452;
		case 65555: goto tr1453;
		case 131091: goto tr1454;
		case 131109: goto tr1454;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1452;
		} else if ( _widec >= 15 )
			goto tr1452;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1452;
		} else if ( _widec >= 38 )
			goto tr1452;
	} else
		goto tr1452;
	goto st0;
tr1446:
	{ push_expr(expr_start, p); }
	goto st632;
tr1455:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st632;
st632:
	if ( ++p == pe )
		goto _test_eof632;
case 632:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1451;
		case 23: goto tr1452;
		case 65555: goto tr1453;
		case 131091: goto tr1455;
		case 131109: goto tr1456;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1452;
		} else if ( _widec >= 15 )
			goto tr1452;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1452;
		} else if ( _widec >= 38 )
			goto tr1452;
	} else
		goto tr1452;
	goto st0;
tr1456:
	{ expr_open_parens--; }
	goto st633;
st633:
	if ( ++p == pe )
		goto _test_eof633;
case 633:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1452;
		case 65555: goto tr1453;
		case 131091: goto tr1455;
		case 131109: goto tr1456;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1452;
		} else if ( _widec >= 15 )
			goto tr1452;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1452;
		} else if ( _widec >= 38 )
			goto tr1452;
	} else
		goto tr1452;
	goto st0;
tr1441:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st634;
tr1442:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st634;
tr1459:
	{ expr_open_parens++; }
	goto st634;
st634:
	if ( ++p == pe )
		goto _test_eof634;
case 634:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st627;
		case 5: goto st627;
		case 8: goto st627;
		case 13: goto st634;
		case 18: goto tr1459;
		case 21: goto st634;
		case 23: goto st634;
		case 36: goto tr1459;
		case 44: goto st634;
	}
	goto st0;
st635:
	if ( ++p == pe )
		goto _test_eof635;
case 635:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1460;
	goto st0;
st636:
	if ( ++p == pe )
		goto _test_eof636;
case 636:
	if ( ( ((int) p->tok)) == 22 )
		goto st637;
	goto st0;
st637:
	if ( ++p == pe )
		goto _test_eof637;
case 637:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1462;
		case 5: goto tr1462;
		case 8: goto tr1462;
		case 18: goto tr1464;
		case 21: goto tr1463;
		case 23: goto tr1463;
		case 36: goto tr1464;
		case 44: goto tr1463;
		case 48: goto st641;
		case 53: goto st642;
		case 54: goto st643;
		case 55: goto st644;
		case 56: goto st645;
		case 59: goto st646;
		case 62: goto st647;
		case 79: goto st648;
		case 80: goto st649;
		case 81: goto st659;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1463;
	goto st0;
tr1462:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st638;
st638:
	if ( ++p == pe )
		goto _test_eof638;
case 638:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1475;
		case 23: goto st639;
		case 131091: goto st640;
		case 131109: goto st640;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st639;
		} else if ( _widec >= 15 )
			goto st639;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st639;
		} else if ( _widec >= 38 )
			goto st639;
	} else
		goto st639;
	goto st0;
tr1463:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st639;
tr1464:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st639;
tr1479:
	{ expr_open_parens++; }
	goto st639;
tr1481:
	{ expr_open_parens--; }
	goto st639;
st639:
	if ( ++p == pe )
		goto _test_eof639;
case 639:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st638;
		case 5: goto st638;
		case 8: goto st638;
		case 13: goto st639;
		case 18: goto tr1479;
		case 21: goto st639;
		case 23: goto st639;
		case 36: goto tr1479;
		case 44: goto st639;
	}
	goto st0;
tr1482:
	{ expr_open_parens--; }
	goto st640;
st640:
	if ( ++p == pe )
		goto _test_eof640;
case 640:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1480;
		case 23: goto tr1481;
		case 131091: goto tr1482;
		case 131109: goto tr1482;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1481;
		} else if ( _widec >= 15 )
			goto tr1481;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1481;
		} else if ( _widec >= 38 )
			goto tr1481;
	} else
		goto tr1481;
	goto st0;
st641:
	if ( ++p == pe )
		goto _test_eof641;
case 641:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1483;
	goto st0;
st642:
	if ( ++p == pe )
		goto _test_eof642;
case 642:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1484;
	goto st0;
st643:
	if ( ++p == pe )
		goto _test_eof643;
case 643:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1485;
	goto st0;
st644:
	if ( ++p == pe )
		goto _test_eof644;
case 644:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1486;
	goto st0;
st645:
	if ( ++p == pe )
		goto _test_eof645;
case 645:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1487;
	goto st0;
st646:
	if ( ++p == pe )
		goto _test_eof646;
case 646:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1488;
	goto st0;
st647:
	if ( ++p == pe )
		goto _test_eof647;
case 647:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1489;
	goto st0;
st648:
	if ( ++p == pe )
		goto _test_eof648;
case 648:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1490;
	goto st0;
st649:
	if ( ++p == pe )
		goto _test_eof649;
case 649:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1491;
		case 5: goto tr1491;
		case 8: goto tr1491;
		case 18: goto tr1493;
		case 19: goto st658;
		case 21: goto tr1492;
		case 23: goto tr1492;
		case 36: goto tr1493;
		case 44: goto tr1492;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1492;
	goto st0;
tr1491:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st650;
st650:
	if ( ++p == pe )
		goto _test_eof650;
case 650:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st651;
		case 65555: goto tr1496;
		case 131091: goto tr1497;
		case 131109: goto st656;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st651;
		} else if ( _widec >= 15 )
			goto st651;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st651;
		} else if ( _widec >= 38 )
			goto st651;
	} else
		goto st651;
	goto st0;
tr1500:
	{ expr_open_parens++; }
	goto st651;
tr1503:
	{ expr_open_parens--; }
	goto st651;
st651:
	if ( ++p == pe )
		goto _test_eof651;
case 651:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st652;
		case 5: goto st652;
		case 8: goto st652;
		case 13: goto st651;
		case 18: goto tr1500;
		case 21: goto st651;
		case 23: goto st651;
		case 36: goto tr1500;
		case 44: goto st651;
	}
	goto st0;
st652:
	if ( ++p == pe )
		goto _test_eof652;
case 652:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st651;
		case 65555: goto tr1496;
		case 131091: goto st654;
		case 131109: goto st654;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st651;
		} else if ( _widec >= 15 )
			goto st651;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st651;
		} else if ( _widec >= 38 )
			goto st651;
	} else
		goto st651;
	goto st0;
tr1496:
	{ push_expr(expr_start, p); }
	goto st653;
tr1504:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st653;
st653:
	if ( ++p == pe )
		goto _test_eof653;
case 653:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1502;
	goto st0;
tr1505:
	{ expr_open_parens--; }
	goto st654;
st654:
	if ( ++p == pe )
		goto _test_eof654;
case 654:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1503;
		case 65555: goto tr1504;
		case 131091: goto tr1505;
		case 131109: goto tr1505;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1503;
		} else if ( _widec >= 15 )
			goto tr1503;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1503;
		} else if ( _widec >= 38 )
			goto tr1503;
	} else
		goto tr1503;
	goto st0;
tr1497:
	{ push_expr(expr_start, p); }
	goto st655;
tr1506:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st655;
st655:
	if ( ++p == pe )
		goto _test_eof655;
case 655:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1502;
		case 23: goto tr1503;
		case 65555: goto tr1504;
		case 131091: goto tr1506;
		case 131109: goto tr1507;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1503;
		} else if ( _widec >= 15 )
			goto tr1503;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1503;
		} else if ( _widec >= 38 )
			goto tr1503;
	} else
		goto tr1503;
	goto st0;
tr1507:
	{ expr_open_parens--; }
	goto st656;
st656:
	if ( ++p == pe )
		goto _test_eof656;
case 656:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1503;
		case 65555: goto tr1504;
		case 131091: goto tr1506;
		case 131109: goto tr1507;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1503;
		} else if ( _widec >= 15 )
			goto tr1503;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1503;
		} else if ( _widec >= 38 )
			goto tr1503;
	} else
		goto tr1503;
	goto st0;
tr1492:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st657;
tr1493:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st657;
tr1510:
	{ expr_open_parens++; }
	goto st657;
st657:
	if ( ++p == pe )
		goto _test_eof657;
case 657:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st650;
		case 5: goto st650;
		case 8: goto st650;
		case 13: goto st657;
		case 18: goto tr1510;
		case 21: goto st657;
		case 23: goto st657;
		case 36: goto tr1510;
		case 44: goto st657;
	}
	goto st0;
st658:
	if ( ++p == pe )
		goto _test_eof658;
case 658:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1511;
	goto st0;
st659:
	if ( ++p == pe )
		goto _test_eof659;
case 659:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1512;
		case 5: goto tr1512;
		case 8: goto tr1512;
		case 18: goto tr1514;
		case 19: goto st668;
		case 21: goto tr1513;
		case 23: goto tr1513;
		case 36: goto tr1514;
		case 44: goto tr1513;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1513;
	goto st0;
tr1512:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st660;
st660:
	if ( ++p == pe )
		goto _test_eof660;
case 660:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st661;
		case 65555: goto tr1517;
		case 131091: goto tr1518;
		case 131109: goto st666;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st661;
		} else if ( _widec >= 15 )
			goto st661;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st661;
		} else if ( _widec >= 38 )
			goto st661;
	} else
		goto st661;
	goto st0;
tr1521:
	{ expr_open_parens++; }
	goto st661;
tr1524:
	{ expr_open_parens--; }
	goto st661;
st661:
	if ( ++p == pe )
		goto _test_eof661;
case 661:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st662;
		case 5: goto st662;
		case 8: goto st662;
		case 13: goto st661;
		case 18: goto tr1521;
		case 21: goto st661;
		case 23: goto st661;
		case 36: goto tr1521;
		case 44: goto st661;
	}
	goto st0;
st662:
	if ( ++p == pe )
		goto _test_eof662;
case 662:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st661;
		case 65555: goto tr1517;
		case 131091: goto st664;
		case 131109: goto st664;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st661;
		} else if ( _widec >= 15 )
			goto st661;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st661;
		} else if ( _widec >= 38 )
			goto st661;
	} else
		goto st661;
	goto st0;
tr1517:
	{ push_expr(expr_start, p); }
	goto st663;
tr1525:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st663;
st663:
	if ( ++p == pe )
		goto _test_eof663;
case 663:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1523;
	goto st0;
tr1526:
	{ expr_open_parens--; }
	goto st664;
st664:
	if ( ++p == pe )
		goto _test_eof664;
case 664:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1524;
		case 65555: goto tr1525;
		case 131091: goto tr1526;
		case 131109: goto tr1526;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1524;
		} else if ( _widec >= 15 )
			goto tr1524;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1524;
		} else if ( _widec >= 38 )
			goto tr1524;
	} else
		goto tr1524;
	goto st0;
tr1518:
	{ push_expr(expr_start, p); }
	goto st665;
tr1527:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st665;
st665:
	if ( ++p == pe )
		goto _test_eof665;
case 665:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1523;
		case 23: goto tr1524;
		case 65555: goto tr1525;
		case 131091: goto tr1527;
		case 131109: goto tr1528;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1524;
		} else if ( _widec >= 15 )
			goto tr1524;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1524;
		} else if ( _widec >= 38 )
			goto tr1524;
	} else
		goto tr1524;
	goto st0;
tr1528:
	{ expr_open_parens--; }
	goto st666;
st666:
	if ( ++p == pe )
		goto _test_eof666;
case 666:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1524;
		case 65555: goto tr1525;
		case 131091: goto tr1527;
		case 131109: goto tr1528;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1524;
		} else if ( _widec >= 15 )
			goto tr1524;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1524;
		} else if ( _widec >= 38 )
			goto tr1524;
	} else
		goto tr1524;
	goto st0;
tr1513:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st667;
tr1514:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st667;
tr1531:
	{ expr_open_parens++; }
	goto st667;
st667:
	if ( ++p == pe )
		goto _test_eof667;
case 667:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st660;
		case 5: goto st660;
		case 8: goto st660;
		case 13: goto st667;
		case 18: goto tr1531;
		case 21: goto st667;
		case 23: goto st667;
		case 36: goto tr1531;
		case 44: goto st667;
	}
	goto st0;
st668:
	if ( ++p == pe )
		goto _test_eof668;
case 668:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1532;
	goto st0;
st669:
	if ( ++p == pe )
		goto _test_eof669;
case 669:
	if ( ( ((int) p->tok)) == 22 )
		goto st670;
	goto st0;
st670:
	if ( ++p == pe )
		goto _test_eof670;
case 670:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1534;
		case 5: goto tr1534;
		case 8: goto tr1534;
		case 18: goto tr1536;
		case 21: goto tr1535;
		case 23: goto tr1535;
		case 36: goto tr1536;
		case 44: goto tr1535;
		case 48: goto st674;
		case 53: goto st675;
		case 54: goto st676;
		case 55: goto st677;
		case 57: goto st678;
		case 60: goto st679;
		case 62: goto st680;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1535;
	goto st0;
tr1534:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st671;
st671:
	if ( ++p == pe )
		goto _test_eof671;
case 671:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1544;
		case 23: goto st672;
		case 131091: goto st673;
		case 131109: goto st673;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st672;
		} else if ( _widec >= 15 )
			goto st672;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st672;
		} else if ( _widec >= 38 )
			goto st672;
	} else
		goto st672;
	goto st0;
tr1535:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st672;
tr1536:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st672;
tr1548:
	{ expr_open_parens++; }
	goto st672;
tr1550:
	{ expr_open_parens--; }
	goto st672;
st672:
	if ( ++p == pe )
		goto _test_eof672;
case 672:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st671;
		case 5: goto st671;
		case 8: goto st671;
		case 13: goto st672;
		case 18: goto tr1548;
		case 21: goto st672;
		case 23: goto st672;
		case 36: goto tr1548;
		case 44: goto st672;
	}
	goto st0;
tr1551:
	{ expr_open_parens--; }
	goto st673;
st673:
	if ( ++p == pe )
		goto _test_eof673;
case 673:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1549;
		case 23: goto tr1550;
		case 131091: goto tr1551;
		case 131109: goto tr1551;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1550;
		} else if ( _widec >= 15 )
			goto tr1550;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1550;
		} else if ( _widec >= 38 )
			goto tr1550;
	} else
		goto tr1550;
	goto st0;
st674:
	if ( ++p == pe )
		goto _test_eof674;
case 674:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1552;
	goto st0;
st675:
	if ( ++p == pe )
		goto _test_eof675;
case 675:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1553;
	goto st0;
st676:
	if ( ++p == pe )
		goto _test_eof676;
case 676:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1554;
	goto st0;
st677:
	if ( ++p == pe )
		goto _test_eof677;
case 677:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1555;
	goto st0;
st678:
	if ( ++p == pe )
		goto _test_eof678;
case 678:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1556;
	goto st0;
st679:
	if ( ++p == pe )
		goto _test_eof679;
case 679:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1557;
	goto st0;
st680:
	if ( ++p == pe )
		goto _test_eof680;
case 680:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1558;
	goto st0;
st681:
	if ( ++p == pe )
		goto _test_eof681;
case 681:
	if ( ( ((int) p->tok)) == 22 )
		goto st682;
	goto st0;
st682:
	if ( ++p == pe )
		goto _test_eof682;
case 682:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1560;
		case 5: goto tr1560;
		case 8: goto tr1560;
		case 18: goto tr1562;
		case 21: goto tr1561;
		case 23: goto tr1561;
		case 36: goto tr1562;
		case 44: goto tr1561;
		case 48: goto st686;
		case 53: goto st687;
		case 54: goto st688;
		case 55: goto st689;
		case 58: goto st690;
		case 61: goto st691;
		case 62: goto st692;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1561;
	goto st0;
tr1560:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st683;
st683:
	if ( ++p == pe )
		goto _test_eof683;
case 683:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1570;
		case 23: goto st684;
		case 131091: goto st685;
		case 131109: goto st685;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st684;
		} else if ( _widec >= 15 )
			goto st684;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st684;
		} else if ( _widec >= 38 )
			goto st684;
	} else
		goto st684;
	goto st0;
tr1561:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st684;
tr1562:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st684;
tr1574:
	{ expr_open_parens++; }
	goto st684;
tr1576:
	{ expr_open_parens--; }
	goto st684;
st684:
	if ( ++p == pe )
		goto _test_eof684;
case 684:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st683;
		case 5: goto st683;
		case 8: goto st683;
		case 13: goto st684;
		case 18: goto tr1574;
		case 21: goto st684;
		case 23: goto st684;
		case 36: goto tr1574;
		case 44: goto st684;
	}
	goto st0;
tr1577:
	{ expr_open_parens--; }
	goto st685;
st685:
	if ( ++p == pe )
		goto _test_eof685;
case 685:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1575;
		case 23: goto tr1576;
		case 131091: goto tr1577;
		case 131109: goto tr1577;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1576;
		} else if ( _widec >= 15 )
			goto tr1576;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1576;
		} else if ( _widec >= 38 )
			goto tr1576;
	} else
		goto tr1576;
	goto st0;
st686:
	if ( ++p == pe )
		goto _test_eof686;
case 686:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1578;
	goto st0;
st687:
	if ( ++p == pe )
		goto _test_eof687;
case 687:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1579;
	goto st0;
st688:
	if ( ++p == pe )
		goto _test_eof688;
case 688:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1580;
	goto st0;
st689:
	if ( ++p == pe )
		goto _test_eof689;
case 689:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1581;
	goto st0;
st690:
	if ( ++p == pe )
		goto _test_eof690;
case 690:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1582;
	goto st0;
st691:
	if ( ++p == pe )
		goto _test_eof691;
case 691:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1583;
	goto st0;
st692:
	if ( ++p == pe )
		goto _test_eof692;
case 692:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1584;
	goto st0;
st693:
	if ( ++p == pe )
		goto _test_eof693;
case 693:
	if ( ( ((int) p->tok)) == 22 )
		goto st694;
	goto st0;
st694:
	if ( ++p == pe )
		goto _test_eof694;
case 694:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1586;
		case 5: goto tr1586;
		case 8: goto tr1586;
		case 18: goto tr1588;
		case 21: goto tr1587;
		case 23: goto tr1587;
		case 36: goto tr1588;
		case 44: goto tr1587;
		case 48: goto st698;
		case 53: goto st699;
		case 54: goto st700;
		case 55: goto st701;
		case 56: goto st702;
		case 59: goto st703;
		case 62: goto st704;
		case 79: goto st705;
		case 80: goto st706;
		case 81: goto st716;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1587;
	goto st0;
tr1586:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st695;
st695:
	if ( ++p == pe )
		goto _test_eof695;
case 695:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1599;
		case 23: goto st696;
		case 131091: goto st697;
		case 131109: goto st697;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st696;
		} else if ( _widec >= 15 )
			goto st696;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st696;
		} else if ( _widec >= 38 )
			goto st696;
	} else
		goto st696;
	goto st0;
tr1587:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st696;
tr1588:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st696;
tr1603:
	{ expr_open_parens++; }
	goto st696;
tr1605:
	{ expr_open_parens--; }
	goto st696;
st696:
	if ( ++p == pe )
		goto _test_eof696;
case 696:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st695;
		case 5: goto st695;
		case 8: goto st695;
		case 13: goto st696;
		case 18: goto tr1603;
		case 21: goto st696;
		case 23: goto st696;
		case 36: goto tr1603;
		case 44: goto st696;
	}
	goto st0;
tr1606:
	{ expr_open_parens--; }
	goto st697;
st697:
	if ( ++p == pe )
		goto _test_eof697;
case 697:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1604;
		case 23: goto tr1605;
		case 131091: goto tr1606;
		case 131109: goto tr1606;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1605;
		} else if ( _widec >= 15 )
			goto tr1605;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1605;
		} else if ( _widec >= 38 )
			goto tr1605;
	} else
		goto tr1605;
	goto st0;
st698:
	if ( ++p == pe )
		goto _test_eof698;
case 698:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1607;
	goto st0;
st699:
	if ( ++p == pe )
		goto _test_eof699;
case 699:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1608;
	goto st0;
st700:
	if ( ++p == pe )
		goto _test_eof700;
case 700:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1609;
	goto st0;
st701:
	if ( ++p == pe )
		goto _test_eof701;
case 701:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1610;
	goto st0;
st702:
	if ( ++p == pe )
		goto _test_eof702;
case 702:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1611;
	goto st0;
st703:
	if ( ++p == pe )
		goto _test_eof703;
case 703:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1612;
	goto st0;
st704:
	if ( ++p == pe )
		goto _test_eof704;
case 704:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1613;
	goto st0;
st705:
	if ( ++p == pe )
		goto _test_eof705;
case 705:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1614;
	goto st0;
st706:
	if ( ++p == pe )
		goto _test_eof706;
case 706:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1615;
		case 5: goto tr1615;
		case 8: goto tr1615;
		case 18: goto tr1617;
		case 19: goto st715;
		case 21: goto tr1616;
		case 23: goto tr1616;
		case 36: goto tr1617;
		case 44: goto tr1616;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1616;
	goto st0;
tr1615:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st707;
st707:
	if ( ++p == pe )
		goto _test_eof707;
case 707:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st708;
		case 65555: goto tr1620;
		case 131091: goto tr1621;
		case 131109: goto st713;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st708;
		} else if ( _widec >= 15 )
			goto st708;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st708;
		} else if ( _widec >= 38 )
			goto st708;
	} else
		goto st708;
	goto st0;
tr1624:
	{ expr_open_parens++; }
	goto st708;
tr1627:
	{ expr_open_parens--; }
	goto st708;
st708:
	if ( ++p == pe )
		goto _test_eof708;
case 708:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st709;
		case 5: goto st709;
		case 8: goto st709;
		case 13: goto st708;
		case 18: goto tr1624;
		case 21: goto st708;
		case 23: goto st708;
		case 36: goto tr1624;
		case 44: goto st708;
	}
	goto st0;
st709:
	if ( ++p == pe )
		goto _test_eof709;
case 709:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st708;
		case 65555: goto tr1620;
		case 131091: goto st711;
		case 131109: goto st711;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st708;
		} else if ( _widec >= 15 )
			goto st708;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st708;
		} else if ( _widec >= 38 )
			goto st708;
	} else
		goto st708;
	goto st0;
tr1620:
	{ push_expr(expr_start, p); }
	goto st710;
tr1628:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st710;
st710:
	if ( ++p == pe )
		goto _test_eof710;
case 710:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1626;
	goto st0;
tr1629:
	{ expr_open_parens--; }
	goto st711;
st711:
	if ( ++p == pe )
		goto _test_eof711;
case 711:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1627;
		case 65555: goto tr1628;
		case 131091: goto tr1629;
		case 131109: goto tr1629;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1627;
		} else if ( _widec >= 15 )
			goto tr1627;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1627;
		} else if ( _widec >= 38 )
			goto tr1627;
	} else
		goto tr1627;
	goto st0;
tr1621:
	{ push_expr(expr_start, p); }
	goto st712;
tr1630:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st712;
st712:
	if ( ++p == pe )
		goto _test_eof712;
case 712:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1626;
		case 23: goto tr1627;
		case 65555: goto tr1628;
		case 131091: goto tr1630;
		case 131109: goto tr1631;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1627;
		} else if ( _widec >= 15 )
			goto tr1627;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1627;
		} else if ( _widec >= 38 )
			goto tr1627;
	} else
		goto tr1627;
	goto st0;
tr1631:
	{ expr_open_parens--; }
	goto st713;
st713:
	if ( ++p == pe )
		goto _test_eof713;
case 713:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1627;
		case 65555: goto tr1628;
		case 131091: goto tr1630;
		case 131109: goto tr1631;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1627;
		} else if ( _widec >= 15 )
			goto tr1627;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1627;
		} else if ( _widec >= 38 )
			goto tr1627;
	} else
		goto tr1627;
	goto st0;
tr1616:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st714;
tr1617:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st714;
tr1634:
	{ expr_open_parens++; }
	goto st714;
st714:
	if ( ++p == pe )
		goto _test_eof714;
case 714:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st707;
		case 5: goto st707;
		case 8: goto st707;
		case 13: goto st714;
		case 18: goto tr1634;
		case 21: goto st714;
		case 23: goto st714;
		case 36: goto tr1634;
		case 44: goto st714;
	}
	goto st0;
st715:
	if ( ++p == pe )
		goto _test_eof715;
case 715:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1635;
	goto st0;
st716:
	if ( ++p == pe )
		goto _test_eof716;
case 716:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1636;
		case 5: goto tr1636;
		case 8: goto tr1636;
		case 18: goto tr1638;
		case 19: goto st725;
		case 21: goto tr1637;
		case 23: goto tr1637;
		case 36: goto tr1638;
		case 44: goto tr1637;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1637;
	goto st0;
tr1636:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st717;
st717:
	if ( ++p == pe )
		goto _test_eof717;
case 717:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st718;
		case 65555: goto tr1641;
		case 131091: goto tr1642;
		case 131109: goto st723;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st718;
		} else if ( _widec >= 15 )
			goto st718;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st718;
		} else if ( _widec >= 38 )
			goto st718;
	} else
		goto st718;
	goto st0;
tr1645:
	{ expr_open_parens++; }
	goto st718;
tr1648:
	{ expr_open_parens--; }
	goto st718;
st718:
	if ( ++p == pe )
		goto _test_eof718;
case 718:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st719;
		case 5: goto st719;
		case 8: goto st719;
		case 13: goto st718;
		case 18: goto tr1645;
		case 21: goto st718;
		case 23: goto st718;
		case 36: goto tr1645;
		case 44: goto st718;
	}
	goto st0;
st719:
	if ( ++p == pe )
		goto _test_eof719;
case 719:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st718;
		case 65555: goto tr1641;
		case 131091: goto st721;
		case 131109: goto st721;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st718;
		} else if ( _widec >= 15 )
			goto st718;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st718;
		} else if ( _widec >= 38 )
			goto st718;
	} else
		goto st718;
	goto st0;
tr1641:
	{ push_expr(expr_start, p); }
	goto st720;
tr1649:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st720;
st720:
	if ( ++p == pe )
		goto _test_eof720;
case 720:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1647;
	goto st0;
tr1650:
	{ expr_open_parens--; }
	goto st721;
st721:
	if ( ++p == pe )
		goto _test_eof721;
case 721:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1648;
		case 65555: goto tr1649;
		case 131091: goto tr1650;
		case 131109: goto tr1650;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1648;
		} else if ( _widec >= 15 )
			goto tr1648;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1648;
		} else if ( _widec >= 38 )
			goto tr1648;
	} else
		goto tr1648;
	goto st0;
tr1642:
	{ push_expr(expr_start, p); }
	goto st722;
tr1651:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st722;
st722:
	if ( ++p == pe )
		goto _test_eof722;
case 722:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1647;
		case 23: goto tr1648;
		case 65555: goto tr1649;
		case 131091: goto tr1651;
		case 131109: goto tr1652;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1648;
		} else if ( _widec >= 15 )
			goto tr1648;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1648;
		} else if ( _widec >= 38 )
			goto tr1648;
	} else
		goto tr1648;
	goto st0;
tr1652:
	{ expr_open_parens--; }
	goto st723;
st723:
	if ( ++p == pe )
		goto _test_eof723;
case 723:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1648;
		case 65555: goto tr1649;
		case 131091: goto tr1651;
		case 131109: goto tr1652;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1648;
		} else if ( _widec >= 15 )
			goto tr1648;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1648;
		} else if ( _widec >= 38 )
			goto tr1648;
	} else
		goto tr1648;
	goto st0;
tr1637:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st724;
tr1638:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st724;
tr1655:
	{ expr_open_parens++; }
	goto st724;
st724:
	if ( ++p == pe )
		goto _test_eof724;
case 724:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st717;
		case 5: goto st717;
		case 8: goto st717;
		case 13: goto st724;
		case 18: goto tr1655;
		case 21: goto st724;
		case 23: goto st724;
		case 36: goto tr1655;
		case 44: goto st724;
	}
	goto st0;
st725:
	if ( ++p == pe )
		goto _test_eof725;
case 725:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1656;
	goto st0;
st726:
	if ( ++p == pe )
		goto _test_eof726;
case 726:
	if ( ( ((int) p->tok)) == 22 )
		goto st727;
	goto st0;
st727:
	if ( ++p == pe )
		goto _test_eof727;
case 727:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1658;
		case 5: goto tr1658;
		case 8: goto tr1658;
		case 18: goto tr1660;
		case 21: goto tr1659;
		case 23: goto tr1659;
		case 36: goto tr1660;
		case 44: goto tr1659;
		case 48: goto st731;
		case 53: goto st732;
		case 54: goto st733;
		case 55: goto st734;
		case 57: goto st735;
		case 60: goto st736;
		case 62: goto st737;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1659;
	goto st0;
tr1658:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st728;
st728:
	if ( ++p == pe )
		goto _test_eof728;
case 728:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1668;
		case 23: goto st729;
		case 131091: goto st730;
		case 131109: goto st730;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st729;
		} else if ( _widec >= 15 )
			goto st729;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st729;
		} else if ( _widec >= 38 )
			goto st729;
	} else
		goto st729;
	goto st0;
tr1659:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st729;
tr1660:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st729;
tr1672:
	{ expr_open_parens++; }
	goto st729;
tr1674:
	{ expr_open_parens--; }
	goto st729;
st729:
	if ( ++p == pe )
		goto _test_eof729;
case 729:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st728;
		case 5: goto st728;
		case 8: goto st728;
		case 13: goto st729;
		case 18: goto tr1672;
		case 21: goto st729;
		case 23: goto st729;
		case 36: goto tr1672;
		case 44: goto st729;
	}
	goto st0;
tr1675:
	{ expr_open_parens--; }
	goto st730;
st730:
	if ( ++p == pe )
		goto _test_eof730;
case 730:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1673;
		case 23: goto tr1674;
		case 131091: goto tr1675;
		case 131109: goto tr1675;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1674;
		} else if ( _widec >= 15 )
			goto tr1674;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1674;
		} else if ( _widec >= 38 )
			goto tr1674;
	} else
		goto tr1674;
	goto st0;
st731:
	if ( ++p == pe )
		goto _test_eof731;
case 731:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1676;
	goto st0;
st732:
	if ( ++p == pe )
		goto _test_eof732;
case 732:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1677;
	goto st0;
st733:
	if ( ++p == pe )
		goto _test_eof733;
case 733:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1678;
	goto st0;
st734:
	if ( ++p == pe )
		goto _test_eof734;
case 734:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1679;
	goto st0;
st735:
	if ( ++p == pe )
		goto _test_eof735;
case 735:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1680;
	goto st0;
st736:
	if ( ++p == pe )
		goto _test_eof736;
case 736:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1681;
	goto st0;
st737:
	if ( ++p == pe )
		goto _test_eof737;
case 737:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1682;
	goto st0;
st738:
	if ( ++p == pe )
		goto _test_eof738;
case 738:
	if ( ( ((int) p->tok)) == 22 )
		goto st739;
	goto st0;
st739:
	if ( ++p == pe )
		goto _test_eof739;
case 739:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1684;
		case 5: goto tr1684;
		case 8: goto tr1684;
		case 18: goto tr1686;
		case 21: goto tr1685;
		case 23: goto tr1685;
		case 36: goto tr1686;
		case 44: goto tr1685;
		case 48: goto st743;
		case 53: goto st744;
		case 54: goto st745;
		case 55: goto st746;
		case 58: goto st747;
		case 61: goto st748;
		case 62: goto st749;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1685;
	goto st0;
tr1684:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st740;
st740:
	if ( ++p == pe )
		goto _test_eof740;
case 740:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1694;
		case 23: goto st741;
		case 131091: goto st742;
		case 131109: goto st742;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st741;
		} else if ( _widec >= 15 )
			goto st741;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st741;
		} else if ( _widec >= 38 )
			goto st741;
	} else
		goto st741;
	goto st0;
tr1685:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st741;
tr1686:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st741;
tr1698:
	{ expr_open_parens++; }
	goto st741;
tr1700:
	{ expr_open_parens--; }
	goto st741;
st741:
	if ( ++p == pe )
		goto _test_eof741;
case 741:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st740;
		case 5: goto st740;
		case 8: goto st740;
		case 13: goto st741;
		case 18: goto tr1698;
		case 21: goto st741;
		case 23: goto st741;
		case 36: goto tr1698;
		case 44: goto st741;
	}
	goto st0;
tr1701:
	{ expr_open_parens--; }
	goto st742;
st742:
	if ( ++p == pe )
		goto _test_eof742;
case 742:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1699;
		case 23: goto tr1700;
		case 131091: goto tr1701;
		case 131109: goto tr1701;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1700;
		} else if ( _widec >= 15 )
			goto tr1700;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1700;
		} else if ( _widec >= 38 )
			goto tr1700;
	} else
		goto tr1700;
	goto st0;
st743:
	if ( ++p == pe )
		goto _test_eof743;
case 743:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1702;
	goto st0;
st744:
	if ( ++p == pe )
		goto _test_eof744;
case 744:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1703;
	goto st0;
st745:
	if ( ++p == pe )
		goto _test_eof745;
case 745:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1704;
	goto st0;
st746:
	if ( ++p == pe )
		goto _test_eof746;
case 746:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1705;
	goto st0;
st747:
	if ( ++p == pe )
		goto _test_eof747;
case 747:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1706;
	goto st0;
st748:
	if ( ++p == pe )
		goto _test_eof748;
case 748:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1707;
	goto st0;
st749:
	if ( ++p == pe )
		goto _test_eof749;
case 749:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1708;
	goto st0;
st750:
	if ( ++p == pe )
		goto _test_eof750;
case 750:
	if ( ( ((int) p->tok)) == 22 )
		goto st751;
	goto st0;
st751:
	if ( ++p == pe )
		goto _test_eof751;
case 751:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1710;
		case 5: goto tr1710;
		case 8: goto tr1710;
		case 18: goto tr1712;
		case 21: goto tr1711;
		case 23: goto tr1711;
		case 36: goto tr1712;
		case 44: goto tr1711;
		case 48: goto st755;
		case 53: goto st756;
		case 54: goto st757;
		case 55: goto st758;
		case 56: goto st759;
		case 57: goto st760;
		case 58: goto st761;
		case 59: goto st762;
		case 60: goto st763;
		case 61: goto st764;
		case 62: goto st765;
		case 64: goto st766;
		case 65: goto st767;
		case 66: goto st768;
		case 67: goto st769;
		case 77: goto st770;
		case 78: goto st771;
		case 79: goto st772;
		case 80: goto st773;
		case 81: goto st783;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1711;
	goto st0;
tr1710:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st752;
st752:
	if ( ++p == pe )
		goto _test_eof752;
case 752:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1733;
		case 23: goto st753;
		case 131091: goto st754;
		case 131109: goto st754;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st753;
		} else if ( _widec >= 15 )
			goto st753;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st753;
		} else if ( _widec >= 38 )
			goto st753;
	} else
		goto st753;
	goto st0;
tr1711:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st753;
tr1712:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st753;
tr1737:
	{ expr_open_parens++; }
	goto st753;
tr1739:
	{ expr_open_parens--; }
	goto st753;
st753:
	if ( ++p == pe )
		goto _test_eof753;
case 753:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st752;
		case 5: goto st752;
		case 8: goto st752;
		case 13: goto st753;
		case 18: goto tr1737;
		case 21: goto st753;
		case 23: goto st753;
		case 36: goto tr1737;
		case 44: goto st753;
	}
	goto st0;
tr1740:
	{ expr_open_parens--; }
	goto st754;
st754:
	if ( ++p == pe )
		goto _test_eof754;
case 754:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1738;
		case 23: goto tr1739;
		case 131091: goto tr1740;
		case 131109: goto tr1740;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1739;
		} else if ( _widec >= 15 )
			goto tr1739;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1739;
		} else if ( _widec >= 38 )
			goto tr1739;
	} else
		goto tr1739;
	goto st0;
st755:
	if ( ++p == pe )
		goto _test_eof755;
case 755:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1741;
	goto st0;
st756:
	if ( ++p == pe )
		goto _test_eof756;
case 756:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1742;
	goto st0;
st757:
	if ( ++p == pe )
		goto _test_eof757;
case 757:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1743;
	goto st0;
st758:
	if ( ++p == pe )
		goto _test_eof758;
case 758:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1744;
	goto st0;
st759:
	if ( ++p == pe )
		goto _test_eof759;
case 759:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1745;
	goto st0;
st760:
	if ( ++p == pe )
		goto _test_eof760;
case 760:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1746;
	goto st0;
st761:
	if ( ++p == pe )
		goto _test_eof761;
case 761:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1747;
	goto st0;
st762:
	if ( ++p == pe )
		goto _test_eof762;
case 762:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1748;
	goto st0;
st763:
	if ( ++p == pe )
		goto _test_eof763;
case 763:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1749;
	goto st0;
st764:
	if ( ++p == pe )
		goto _test_eof764;
case 764:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1750;
	goto st0;
st765:
	if ( ++p == pe )
		goto _test_eof765;
case 765:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1751;
	goto st0;
st766:
	if ( ++p == pe )
		goto _test_eof766;
case 766:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1752;
	goto st0;
st767:
	if ( ++p == pe )
		goto _test_eof767;
case 767:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1753;
	goto st0;
st768:
	if ( ++p == pe )
		goto _test_eof768;
case 768:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1754;
	goto st0;
st769:
	if ( ++p == pe )
		goto _test_eof769;
case 769:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1755;
	goto st0;
st770:
	if ( ++p == pe )
		goto _test_eof770;
case 770:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1756;
	goto st0;
st771:
	if ( ++p == pe )
		goto _test_eof771;
case 771:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1757;
	goto st0;
st772:
	if ( ++p == pe )
		goto _test_eof772;
case 772:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1758;
	goto st0;
st773:
	if ( ++p == pe )
		goto _test_eof773;
case 773:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1759;
		case 5: goto tr1759;
		case 8: goto tr1759;
		case 18: goto tr1761;
		case 19: goto st782;
		case 21: goto tr1760;
		case 23: goto tr1760;
		case 36: goto tr1761;
		case 44: goto tr1760;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1760;
	goto st0;
tr1759:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st774;
st774:
	if ( ++p == pe )
		goto _test_eof774;
case 774:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st775;
		case 65555: goto tr1764;
		case 131091: goto tr1765;
		case 131109: goto st780;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st775;
		} else if ( _widec >= 15 )
			goto st775;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st775;
		} else if ( _widec >= 38 )
			goto st775;
	} else
		goto st775;
	goto st0;
tr1768:
	{ expr_open_parens++; }
	goto st775;
tr1771:
	{ expr_open_parens--; }
	goto st775;
st775:
	if ( ++p == pe )
		goto _test_eof775;
case 775:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st776;
		case 5: goto st776;
		case 8: goto st776;
		case 13: goto st775;
		case 18: goto tr1768;
		case 21: goto st775;
		case 23: goto st775;
		case 36: goto tr1768;
		case 44: goto st775;
	}
	goto st0;
st776:
	if ( ++p == pe )
		goto _test_eof776;
case 776:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st775;
		case 65555: goto tr1764;
		case 131091: goto st778;
		case 131109: goto st778;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st775;
		} else if ( _widec >= 15 )
			goto st775;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st775;
		} else if ( _widec >= 38 )
			goto st775;
	} else
		goto st775;
	goto st0;
tr1764:
	{ push_expr(expr_start, p); }
	goto st777;
tr1772:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st777;
st777:
	if ( ++p == pe )
		goto _test_eof777;
case 777:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1770;
	goto st0;
tr1773:
	{ expr_open_parens--; }
	goto st778;
st778:
	if ( ++p == pe )
		goto _test_eof778;
case 778:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1771;
		case 65555: goto tr1772;
		case 131091: goto tr1773;
		case 131109: goto tr1773;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1771;
		} else if ( _widec >= 15 )
			goto tr1771;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1771;
		} else if ( _widec >= 38 )
			goto tr1771;
	} else
		goto tr1771;
	goto st0;
tr1765:
	{ push_expr(expr_start, p); }
	goto st779;
tr1774:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st779;
st779:
	if ( ++p == pe )
		goto _test_eof779;
case 779:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1770;
		case 23: goto tr1771;
		case 65555: goto tr1772;
		case 131091: goto tr1774;
		case 131109: goto tr1775;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1771;
		} else if ( _widec >= 15 )
			goto tr1771;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1771;
		} else if ( _widec >= 38 )
			goto tr1771;
	} else
		goto tr1771;
	goto st0;
tr1775:
	{ expr_open_parens--; }
	goto st780;
st780:
	if ( ++p == pe )
		goto _test_eof780;
case 780:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1771;
		case 65555: goto tr1772;
		case 131091: goto tr1774;
		case 131109: goto tr1775;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1771;
		} else if ( _widec >= 15 )
			goto tr1771;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1771;
		} else if ( _widec >= 38 )
			goto tr1771;
	} else
		goto tr1771;
	goto st0;
tr1760:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st781;
tr1761:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st781;
tr1778:
	{ expr_open_parens++; }
	goto st781;
st781:
	if ( ++p == pe )
		goto _test_eof781;
case 781:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st774;
		case 5: goto st774;
		case 8: goto st774;
		case 13: goto st781;
		case 18: goto tr1778;
		case 21: goto st781;
		case 23: goto st781;
		case 36: goto tr1778;
		case 44: goto st781;
	}
	goto st0;
st782:
	if ( ++p == pe )
		goto _test_eof782;
case 782:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1779;
	goto st0;
st783:
	if ( ++p == pe )
		goto _test_eof783;
case 783:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1780;
		case 5: goto tr1780;
		case 8: goto tr1780;
		case 18: goto tr1782;
		case 19: goto st792;
		case 21: goto tr1781;
		case 23: goto tr1781;
		case 36: goto tr1782;
		case 44: goto tr1781;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1781;
	goto st0;
tr1780:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st784;
st784:
	if ( ++p == pe )
		goto _test_eof784;
case 784:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st785;
		case 65555: goto tr1785;
		case 131091: goto tr1786;
		case 131109: goto st790;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st785;
		} else if ( _widec >= 15 )
			goto st785;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st785;
		} else if ( _widec >= 38 )
			goto st785;
	} else
		goto st785;
	goto st0;
tr1789:
	{ expr_open_parens++; }
	goto st785;
tr1792:
	{ expr_open_parens--; }
	goto st785;
st785:
	if ( ++p == pe )
		goto _test_eof785;
case 785:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st786;
		case 5: goto st786;
		case 8: goto st786;
		case 13: goto st785;
		case 18: goto tr1789;
		case 21: goto st785;
		case 23: goto st785;
		case 36: goto tr1789;
		case 44: goto st785;
	}
	goto st0;
st786:
	if ( ++p == pe )
		goto _test_eof786;
case 786:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st785;
		case 65555: goto tr1785;
		case 131091: goto st788;
		case 131109: goto st788;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st785;
		} else if ( _widec >= 15 )
			goto st785;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st785;
		} else if ( _widec >= 38 )
			goto st785;
	} else
		goto st785;
	goto st0;
tr1785:
	{ push_expr(expr_start, p); }
	goto st787;
tr1793:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st787;
st787:
	if ( ++p == pe )
		goto _test_eof787;
case 787:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1791;
	goto st0;
tr1794:
	{ expr_open_parens--; }
	goto st788;
st788:
	if ( ++p == pe )
		goto _test_eof788;
case 788:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1792;
		case 65555: goto tr1793;
		case 131091: goto tr1794;
		case 131109: goto tr1794;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1792;
		} else if ( _widec >= 15 )
			goto tr1792;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1792;
		} else if ( _widec >= 38 )
			goto tr1792;
	} else
		goto tr1792;
	goto st0;
tr1786:
	{ push_expr(expr_start, p); }
	goto st789;
tr1795:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st789;
st789:
	if ( ++p == pe )
		goto _test_eof789;
case 789:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1791;
		case 23: goto tr1792;
		case 65555: goto tr1793;
		case 131091: goto tr1795;
		case 131109: goto tr1796;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1792;
		} else if ( _widec >= 15 )
			goto tr1792;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1792;
		} else if ( _widec >= 38 )
			goto tr1792;
	} else
		goto tr1792;
	goto st0;
tr1796:
	{ expr_open_parens--; }
	goto st790;
st790:
	if ( ++p == pe )
		goto _test_eof790;
case 790:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1792;
		case 65555: goto tr1793;
		case 131091: goto tr1795;
		case 131109: goto tr1796;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1792;
		} else if ( _widec >= 15 )
			goto tr1792;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1792;
		} else if ( _widec >= 38 )
			goto tr1792;
	} else
		goto tr1792;
	goto st0;
tr1781:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st791;
tr1782:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st791;
tr1799:
	{ expr_open_parens++; }
	goto st791;
st791:
	if ( ++p == pe )
		goto _test_eof791;
case 791:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st784;
		case 5: goto st784;
		case 8: goto st784;
		case 13: goto st791;
		case 18: goto tr1799;
		case 21: goto st791;
		case 23: goto st791;
		case 36: goto tr1799;
		case 44: goto st791;
	}
	goto st0;
st792:
	if ( ++p == pe )
		goto _test_eof792;
case 792:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1800;
	goto st0;
st793:
	if ( ++p == pe )
		goto _test_eof793;
case 793:
	if ( ( ((int) p->tok)) == 22 )
		goto st794;
	goto st0;
st794:
	if ( ++p == pe )
		goto _test_eof794;
case 794:
	if ( ( ((int) p->tok)) == 62 )
		goto st795;
	goto st0;
st795:
	if ( ++p == pe )
		goto _test_eof795;
case 795:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1803;
	goto st0;
st796:
	if ( ++p == pe )
		goto _test_eof796;
case 796:
	if ( ( ((int) p->tok)) == 22 )
		goto st797;
	goto st0;
st797:
	if ( ++p == pe )
		goto _test_eof797;
case 797:
	if ( ( ((int) p->tok)) == 62 )
		goto st798;
	goto st0;
st798:
	if ( ++p == pe )
		goto _test_eof798;
case 798:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1806;
	goto st0;
st799:
	if ( ++p == pe )
		goto _test_eof799;
case 799:
	if ( ( ((int) p->tok)) == 22 )
		goto st800;
	goto st0;
st800:
	if ( ++p == pe )
		goto _test_eof800;
case 800:
	if ( ( ((int) p->tok)) == 62 )
		goto st801;
	goto st0;
st801:
	if ( ++p == pe )
		goto _test_eof801;
case 801:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1809;
	goto st0;
st802:
	if ( ++p == pe )
		goto _test_eof802;
case 802:
	if ( ( ((int) p->tok)) == 22 )
		goto st803;
	goto st0;
st803:
	if ( ++p == pe )
		goto _test_eof803;
case 803:
	if ( ( ((int) p->tok)) == 62 )
		goto st804;
	goto st0;
st804:
	if ( ++p == pe )
		goto _test_eof804;
case 804:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1812;
	goto st0;
st805:
	if ( ++p == pe )
		goto _test_eof805;
case 805:
	if ( ( ((int) p->tok)) == 22 )
		goto st806;
	goto st0;
st806:
	if ( ++p == pe )
		goto _test_eof806;
case 806:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1814;
		case 5: goto tr1814;
		case 8: goto tr1814;
		case 18: goto tr1816;
		case 21: goto tr1815;
		case 23: goto tr1815;
		case 36: goto tr1816;
		case 44: goto tr1815;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1815;
	goto st0;
tr1814:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st807;
st807:
	if ( ++p == pe )
		goto _test_eof807;
case 807:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1817;
		case 23: goto st808;
		case 131091: goto st809;
		case 131109: goto st809;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st808;
		} else if ( _widec >= 15 )
			goto st808;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st808;
		} else if ( _widec >= 38 )
			goto st808;
	} else
		goto st808;
	goto st0;
tr1815:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st808;
tr1816:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st808;
tr1821:
	{ expr_open_parens++; }
	goto st808;
tr1823:
	{ expr_open_parens--; }
	goto st808;
st808:
	if ( ++p == pe )
		goto _test_eof808;
case 808:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st807;
		case 5: goto st807;
		case 8: goto st807;
		case 13: goto st808;
		case 18: goto tr1821;
		case 21: goto st808;
		case 23: goto st808;
		case 36: goto tr1821;
		case 44: goto st808;
	}
	goto st0;
tr1824:
	{ expr_open_parens--; }
	goto st809;
st809:
	if ( ++p == pe )
		goto _test_eof809;
case 809:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1822;
		case 23: goto tr1823;
		case 131091: goto tr1824;
		case 131109: goto tr1824;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1823;
		} else if ( _widec >= 15 )
			goto tr1823;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1823;
		} else if ( _widec >= 38 )
			goto tr1823;
	} else
		goto tr1823;
	goto st0;
st810:
	if ( ++p == pe )
		goto _test_eof810;
case 810:
	if ( ( ((int) p->tok)) == 22 )
		goto st811;
	goto st0;
st811:
	if ( ++p == pe )
		goto _test_eof811;
case 811:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1826;
		case 5: goto tr1826;
		case 8: goto tr1826;
		case 18: goto tr1828;
		case 21: goto tr1827;
		case 23: goto tr1827;
		case 36: goto tr1828;
		case 44: goto tr1827;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1827;
	goto st0;
tr1826:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st812;
st812:
	if ( ++p == pe )
		goto _test_eof812;
case 812:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1829;
		case 23: goto st813;
		case 131091: goto st814;
		case 131109: goto st814;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st813;
		} else if ( _widec >= 15 )
			goto st813;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st813;
		} else if ( _widec >= 38 )
			goto st813;
	} else
		goto st813;
	goto st0;
tr1827:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st813;
tr1828:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st813;
tr1833:
	{ expr_open_parens++; }
	goto st813;
tr1835:
	{ expr_open_parens--; }
	goto st813;
st813:
	if ( ++p == pe )
		goto _test_eof813;
case 813:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st812;
		case 5: goto st812;
		case 8: goto st812;
		case 13: goto st813;
		case 18: goto tr1833;
		case 21: goto st813;
		case 23: goto st813;
		case 36: goto tr1833;
		case 44: goto st813;
	}
	goto st0;
tr1836:
	{ expr_open_parens--; }
	goto st814;
st814:
	if ( ++p == pe )
		goto _test_eof814;
case 814:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1834;
		case 23: goto tr1835;
		case 131091: goto tr1836;
		case 131109: goto tr1836;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1835;
		} else if ( _widec >= 15 )
			goto tr1835;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1835;
		} else if ( _widec >= 38 )
			goto tr1835;
	} else
		goto tr1835;
	goto st0;
st815:
	if ( ++p == pe )
		goto _test_eof815;
case 815:
	if ( ( ((int) p->tok)) == 22 )
		goto st816;
	goto st0;
st816:
	if ( ++p == pe )
		goto _test_eof816;
case 816:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1838;
		case 5: goto tr1838;
		case 8: goto tr1838;
		case 18: goto tr1840;
		case 21: goto tr1839;
		case 23: goto tr1839;
		case 36: goto tr1840;
		case 44: goto tr1839;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1839;
	goto st0;
tr1838:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st817;
st817:
	if ( ++p == pe )
		goto _test_eof817;
case 817:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1841;
		case 23: goto st818;
		case 131091: goto st819;
		case 131109: goto st819;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st818;
		} else if ( _widec >= 15 )
			goto st818;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st818;
		} else if ( _widec >= 38 )
			goto st818;
	} else
		goto st818;
	goto st0;
tr1839:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st818;
tr1840:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st818;
tr1845:
	{ expr_open_parens++; }
	goto st818;
tr1847:
	{ expr_open_parens--; }
	goto st818;
st818:
	if ( ++p == pe )
		goto _test_eof818;
case 818:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st817;
		case 5: goto st817;
		case 8: goto st817;
		case 13: goto st818;
		case 18: goto tr1845;
		case 21: goto st818;
		case 23: goto st818;
		case 36: goto tr1845;
		case 44: goto st818;
	}
	goto st0;
tr1848:
	{ expr_open_parens--; }
	goto st819;
st819:
	if ( ++p == pe )
		goto _test_eof819;
case 819:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1846;
		case 23: goto tr1847;
		case 131091: goto tr1848;
		case 131109: goto tr1848;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1847;
		} else if ( _widec >= 15 )
			goto tr1847;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1847;
		} else if ( _widec >= 38 )
			goto tr1847;
	} else
		goto tr1847;
	goto st0;
st820:
	if ( ++p == pe )
		goto _test_eof820;
case 820:
	if ( ( ((int) p->tok)) == 22 )
		goto st821;
	goto st0;
st821:
	if ( ++p == pe )
		goto _test_eof821;
case 821:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1850;
		case 5: goto tr1850;
		case 8: goto tr1850;
		case 18: goto tr1852;
		case 21: goto tr1851;
		case 23: goto tr1851;
		case 36: goto tr1852;
		case 44: goto tr1851;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1851;
	goto st0;
tr1850:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st822;
st822:
	if ( ++p == pe )
		goto _test_eof822;
case 822:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1853;
		case 23: goto st823;
		case 131091: goto st824;
		case 131109: goto st824;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st823;
		} else if ( _widec >= 15 )
			goto st823;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st823;
		} else if ( _widec >= 38 )
			goto st823;
	} else
		goto st823;
	goto st0;
tr1851:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st823;
tr1852:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st823;
tr1857:
	{ expr_open_parens++; }
	goto st823;
tr1859:
	{ expr_open_parens--; }
	goto st823;
st823:
	if ( ++p == pe )
		goto _test_eof823;
case 823:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st822;
		case 5: goto st822;
		case 8: goto st822;
		case 13: goto st823;
		case 18: goto tr1857;
		case 21: goto st823;
		case 23: goto st823;
		case 36: goto tr1857;
		case 44: goto st823;
	}
	goto st0;
tr1860:
	{ expr_open_parens--; }
	goto st824;
st824:
	if ( ++p == pe )
		goto _test_eof824;
case 824:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1858;
		case 23: goto tr1859;
		case 131091: goto tr1860;
		case 131109: goto tr1860;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1859;
		} else if ( _widec >= 15 )
			goto tr1859;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1859;
		} else if ( _widec >= 38 )
			goto tr1859;
	} else
		goto tr1859;
	goto st0;
st825:
	if ( ++p == pe )
		goto _test_eof825;
case 825:
	if ( ( ((int) p->tok)) == 22 )
		goto st826;
	goto st0;
st826:
	if ( ++p == pe )
		goto _test_eof826;
case 826:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1862;
		case 5: goto tr1862;
		case 8: goto tr1862;
		case 18: goto tr1864;
		case 21: goto tr1863;
		case 23: goto tr1863;
		case 36: goto tr1864;
		case 44: goto tr1863;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1863;
	goto st0;
tr1862:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st827;
st827:
	if ( ++p == pe )
		goto _test_eof827;
case 827:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1865;
		case 23: goto st828;
		case 131091: goto st829;
		case 131109: goto st829;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st828;
		} else if ( _widec >= 15 )
			goto st828;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st828;
		} else if ( _widec >= 38 )
			goto st828;
	} else
		goto st828;
	goto st0;
tr1863:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st828;
tr1864:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st828;
tr1869:
	{ expr_open_parens++; }
	goto st828;
tr1871:
	{ expr_open_parens--; }
	goto st828;
st828:
	if ( ++p == pe )
		goto _test_eof828;
case 828:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st827;
		case 5: goto st827;
		case 8: goto st827;
		case 13: goto st828;
		case 18: goto tr1869;
		case 21: goto st828;
		case 23: goto st828;
		case 36: goto tr1869;
		case 44: goto st828;
	}
	goto st0;
tr1872:
	{ expr_open_parens--; }
	goto st829;
st829:
	if ( ++p == pe )
		goto _test_eof829;
case 829:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1870;
		case 23: goto tr1871;
		case 131091: goto tr1872;
		case 131109: goto tr1872;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1871;
		} else if ( _widec >= 15 )
			goto tr1871;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1871;
		} else if ( _widec >= 38 )
			goto tr1871;
	} else
		goto tr1871;
	goto st0;
st830:
	if ( ++p == pe )
		goto _test_eof830;
case 830:
	if ( ( ((int) p->tok)) == 22 )
		goto st831;
	goto st0;
st831:
	if ( ++p == pe )
		goto _test_eof831;
case 831:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1874;
		case 5: goto tr1874;
		case 8: goto tr1874;
		case 18: goto tr1876;
		case 21: goto tr1875;
		case 23: goto tr1875;
		case 36: goto tr1876;
		case 44: goto tr1875;
		case 71: goto st835;
		case 72: goto st836;
		case 73: goto st837;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1875;
	goto st0;
tr1874:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st832;
st832:
	if ( ++p == pe )
		goto _test_eof832;
case 832:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1880;
		case 23: goto st833;
		case 131091: goto st834;
		case 131109: goto st834;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st833;
		} else if ( _widec >= 15 )
			goto st833;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st833;
		} else if ( _widec >= 38 )
			goto st833;
	} else
		goto st833;
	goto st0;
tr1875:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st833;
tr1876:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st833;
tr1884:
	{ expr_open_parens++; }
	goto st833;
tr1886:
	{ expr_open_parens--; }
	goto st833;
st833:
	if ( ++p == pe )
		goto _test_eof833;
case 833:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st832;
		case 5: goto st832;
		case 8: goto st832;
		case 13: goto st833;
		case 18: goto tr1884;
		case 21: goto st833;
		case 23: goto st833;
		case 36: goto tr1884;
		case 44: goto st833;
	}
	goto st0;
tr1887:
	{ expr_open_parens--; }
	goto st834;
st834:
	if ( ++p == pe )
		goto _test_eof834;
case 834:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1885;
		case 23: goto tr1886;
		case 131091: goto tr1887;
		case 131109: goto tr1887;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1886;
		} else if ( _widec >= 15 )
			goto tr1886;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1886;
		} else if ( _widec >= 38 )
			goto tr1886;
	} else
		goto tr1886;
	goto st0;
st835:
	if ( ++p == pe )
		goto _test_eof835;
case 835:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1888;
	goto st0;
st836:
	if ( ++p == pe )
		goto _test_eof836;
case 836:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1889;
	goto st0;
st837:
	if ( ++p == pe )
		goto _test_eof837;
case 837:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1890;
	goto st0;
st838:
	if ( ++p == pe )
		goto _test_eof838;
case 838:
	if ( ( ((int) p->tok)) == 22 )
		goto st839;
	goto st0;
st839:
	if ( ++p == pe )
		goto _test_eof839;
case 839:
	if ( ( ((int) p->tok)) == 62 )
		goto st840;
	goto st0;
st840:
	if ( ++p == pe )
		goto _test_eof840;
case 840:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1893;
	goto st0;
st841:
	if ( ++p == pe )
		goto _test_eof841;
case 841:
	if ( ( ((int) p->tok)) == 22 )
		goto st842;
	goto st0;
st842:
	if ( ++p == pe )
		goto _test_eof842;
case 842:
	if ( ( ((int) p->tok)) == 62 )
		goto st843;
	goto st0;
st843:
	if ( ++p == pe )
		goto _test_eof843;
case 843:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1896;
	goto st0;
st844:
	if ( ++p == pe )
		goto _test_eof844;
case 844:
	if ( ( ((int) p->tok)) == 22 )
		goto st845;
	goto st0;
st845:
	if ( ++p == pe )
		goto _test_eof845;
case 845:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1898;
		case 5: goto tr1898;
		case 8: goto tr1898;
		case 18: goto tr1900;
		case 21: goto tr1899;
		case 23: goto tr1899;
		case 36: goto tr1900;
		case 44: goto tr1899;
		case 48: goto st849;
		case 53: goto st850;
		case 54: goto st851;
		case 55: goto st852;
		case 56: goto st853;
		case 59: goto st854;
		case 62: goto st855;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1899;
	goto st0;
tr1898:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st846;
st846:
	if ( ++p == pe )
		goto _test_eof846;
case 846:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1908;
		case 23: goto st847;
		case 131091: goto st848;
		case 131109: goto st848;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st847;
		} else if ( _widec >= 15 )
			goto st847;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st847;
		} else if ( _widec >= 38 )
			goto st847;
	} else
		goto st847;
	goto st0;
tr1899:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st847;
tr1900:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st847;
tr1912:
	{ expr_open_parens++; }
	goto st847;
tr1914:
	{ expr_open_parens--; }
	goto st847;
st847:
	if ( ++p == pe )
		goto _test_eof847;
case 847:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st846;
		case 5: goto st846;
		case 8: goto st846;
		case 13: goto st847;
		case 18: goto tr1912;
		case 21: goto st847;
		case 23: goto st847;
		case 36: goto tr1912;
		case 44: goto st847;
	}
	goto st0;
tr1915:
	{ expr_open_parens--; }
	goto st848;
st848:
	if ( ++p == pe )
		goto _test_eof848;
case 848:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1913;
		case 23: goto tr1914;
		case 131091: goto tr1915;
		case 131109: goto tr1915;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1914;
		} else if ( _widec >= 15 )
			goto tr1914;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1914;
		} else if ( _widec >= 38 )
			goto tr1914;
	} else
		goto tr1914;
	goto st0;
st849:
	if ( ++p == pe )
		goto _test_eof849;
case 849:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1916;
	goto st0;
st850:
	if ( ++p == pe )
		goto _test_eof850;
case 850:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1917;
	goto st0;
st851:
	if ( ++p == pe )
		goto _test_eof851;
case 851:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1918;
	goto st0;
st852:
	if ( ++p == pe )
		goto _test_eof852;
case 852:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1919;
	goto st0;
st853:
	if ( ++p == pe )
		goto _test_eof853;
case 853:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1920;
	goto st0;
st854:
	if ( ++p == pe )
		goto _test_eof854;
case 854:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1921;
	goto st0;
st855:
	if ( ++p == pe )
		goto _test_eof855;
case 855:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1922;
	goto st0;
st856:
	if ( ++p == pe )
		goto _test_eof856;
case 856:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1923;
		case 5: goto tr1923;
		case 8: goto tr1923;
		case 18: goto tr1925;
		case 19: goto st876;
		case 21: goto tr1924;
		case 23: goto tr1924;
		case 36: goto tr1925;
		case 44: goto tr1924;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1924;
	goto st0;
tr1923:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st857;
st857:
	if ( ++p == pe )
		goto _test_eof857;
case 857:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st858;
		case 65555: goto tr1928;
		case 131091: goto tr1929;
		case 131109: goto st874;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st858;
		} else if ( _widec >= 15 )
			goto st858;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st858;
		} else if ( _widec >= 38 )
			goto st858;
	} else
		goto st858;
	goto st0;
tr1932:
	{ expr_open_parens++; }
	goto st858;
tr1960:
	{ expr_open_parens--; }
	goto st858;
st858:
	if ( ++p == pe )
		goto _test_eof858;
case 858:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st859;
		case 5: goto st859;
		case 8: goto st859;
		case 13: goto st858;
		case 18: goto tr1932;
		case 21: goto st858;
		case 23: goto st858;
		case 36: goto tr1932;
		case 44: goto st858;
	}
	goto st0;
st859:
	if ( ++p == pe )
		goto _test_eof859;
case 859:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st858;
		case 65555: goto tr1928;
		case 131091: goto st872;
		case 131109: goto st872;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st858;
		} else if ( _widec >= 15 )
			goto st858;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st858;
		} else if ( _widec >= 38 )
			goto st858;
	} else
		goto st858;
	goto st0;
tr1928:
	{ push_expr(expr_start, p); }
	goto st860;
tr1961:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st860;
st860:
	if ( ++p == pe )
		goto _test_eof860;
case 860:
	if ( ( ((int) p->tok)) == 22 )
		goto st861;
	goto st0;
st861:
	if ( ++p == pe )
		goto _test_eof861;
case 861:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1935;
		case 5: goto tr1935;
		case 8: goto tr1935;
		case 18: goto tr1937;
		case 21: goto tr1936;
		case 23: goto tr1936;
		case 36: goto tr1937;
		case 44: goto tr1936;
		case 48: goto st865;
		case 53: goto st866;
		case 54: goto st867;
		case 55: goto st868;
		case 56: goto st869;
		case 59: goto st870;
		case 62: goto st871;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1936;
	goto st0;
tr1935:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st862;
st862:
	if ( ++p == pe )
		goto _test_eof862;
case 862:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1945;
		case 23: goto st863;
		case 131091: goto st864;
		case 131109: goto st864;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st863;
		} else if ( _widec >= 15 )
			goto st863;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st863;
		} else if ( _widec >= 38 )
			goto st863;
	} else
		goto st863;
	goto st0;
tr1936:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st863;
tr1937:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st863;
tr1949:
	{ expr_open_parens++; }
	goto st863;
tr1951:
	{ expr_open_parens--; }
	goto st863;
st863:
	if ( ++p == pe )
		goto _test_eof863;
case 863:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st862;
		case 5: goto st862;
		case 8: goto st862;
		case 13: goto st863;
		case 18: goto tr1949;
		case 21: goto st863;
		case 23: goto st863;
		case 36: goto tr1949;
		case 44: goto st863;
	}
	goto st0;
tr1952:
	{ expr_open_parens--; }
	goto st864;
st864:
	if ( ++p == pe )
		goto _test_eof864;
case 864:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1950;
		case 23: goto tr1951;
		case 131091: goto tr1952;
		case 131109: goto tr1952;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1951;
		} else if ( _widec >= 15 )
			goto tr1951;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1951;
		} else if ( _widec >= 38 )
			goto tr1951;
	} else
		goto tr1951;
	goto st0;
st865:
	if ( ++p == pe )
		goto _test_eof865;
case 865:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1953;
	goto st0;
st866:
	if ( ++p == pe )
		goto _test_eof866;
case 866:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1954;
	goto st0;
st867:
	if ( ++p == pe )
		goto _test_eof867;
case 867:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1955;
	goto st0;
st868:
	if ( ++p == pe )
		goto _test_eof868;
case 868:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1956;
	goto st0;
st869:
	if ( ++p == pe )
		goto _test_eof869;
case 869:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1957;
	goto st0;
st870:
	if ( ++p == pe )
		goto _test_eof870;
case 870:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1958;
	goto st0;
st871:
	if ( ++p == pe )
		goto _test_eof871;
case 871:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1959;
	goto st0;
tr1962:
	{ expr_open_parens--; }
	goto st872;
st872:
	if ( ++p == pe )
		goto _test_eof872;
case 872:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1960;
		case 65555: goto tr1961;
		case 131091: goto tr1962;
		case 131109: goto tr1962;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1960;
		} else if ( _widec >= 15 )
			goto tr1960;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1960;
		} else if ( _widec >= 38 )
			goto tr1960;
	} else
		goto tr1960;
	goto st0;
tr1929:
	{ push_expr(expr_start, p); }
	goto st873;
tr1963:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st873;
st873:
	if ( ++p == pe )
		goto _test_eof873;
case 873:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto st861;
		case 65555: goto tr1961;
		case 131091: goto tr1963;
		case 131109: goto tr1964;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr1960;
		} else if ( _widec >= 15 )
			goto tr1960;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1960;
		} else if ( _widec >= 38 )
			goto tr1960;
	} else
		goto tr1960;
	goto st0;
tr1964:
	{ expr_open_parens--; }
	goto st874;
st874:
	if ( ++p == pe )
		goto _test_eof874;
case 874:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1960;
		case 65555: goto tr1961;
		case 131091: goto tr1963;
		case 131109: goto tr1964;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1960;
		} else if ( _widec >= 15 )
			goto tr1960;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1960;
		} else if ( _widec >= 38 )
			goto tr1960;
	} else
		goto tr1960;
	goto st0;
tr1924:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st875;
tr1925:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st875;
tr1967:
	{ expr_open_parens++; }
	goto st875;
st875:
	if ( ++p == pe )
		goto _test_eof875;
case 875:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st857;
		case 5: goto st857;
		case 8: goto st857;
		case 13: goto st875;
		case 18: goto tr1967;
		case 21: goto st875;
		case 23: goto st875;
		case 36: goto tr1967;
		case 44: goto st875;
	}
	goto st0;
st876:
	if ( ++p == pe )
		goto _test_eof876;
case 876:
	if ( ( ((int) p->tok)) == 22 )
		goto st877;
	goto st0;
st877:
	if ( ++p == pe )
		goto _test_eof877;
case 877:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1969;
		case 5: goto tr1969;
		case 8: goto tr1969;
		case 18: goto tr1971;
		case 21: goto tr1970;
		case 23: goto tr1970;
		case 36: goto tr1971;
		case 44: goto tr1970;
		case 48: goto st881;
		case 53: goto st882;
		case 54: goto st883;
		case 55: goto st884;
		case 56: goto st885;
		case 59: goto st886;
		case 62: goto st887;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1970;
	goto st0;
tr1969:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st878;
st878:
	if ( ++p == pe )
		goto _test_eof878;
case 878:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1979;
		case 23: goto st879;
		case 131091: goto st880;
		case 131109: goto st880;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st879;
		} else if ( _widec >= 15 )
			goto st879;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st879;
		} else if ( _widec >= 38 )
			goto st879;
	} else
		goto st879;
	goto st0;
tr1970:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st879;
tr1971:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st879;
tr1983:
	{ expr_open_parens++; }
	goto st879;
tr1985:
	{ expr_open_parens--; }
	goto st879;
st879:
	if ( ++p == pe )
		goto _test_eof879;
case 879:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st878;
		case 5: goto st878;
		case 8: goto st878;
		case 13: goto st879;
		case 18: goto tr1983;
		case 21: goto st879;
		case 23: goto st879;
		case 36: goto tr1983;
		case 44: goto st879;
	}
	goto st0;
tr1986:
	{ expr_open_parens--; }
	goto st880;
st880:
	if ( ++p == pe )
		goto _test_eof880;
case 880:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1984;
		case 23: goto tr1985;
		case 131091: goto tr1986;
		case 131109: goto tr1986;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1985;
		} else if ( _widec >= 15 )
			goto tr1985;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1985;
		} else if ( _widec >= 38 )
			goto tr1985;
	} else
		goto tr1985;
	goto st0;
st881:
	if ( ++p == pe )
		goto _test_eof881;
case 881:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1987;
	goto st0;
st882:
	if ( ++p == pe )
		goto _test_eof882;
case 882:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1988;
	goto st0;
st883:
	if ( ++p == pe )
		goto _test_eof883;
case 883:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1989;
	goto st0;
st884:
	if ( ++p == pe )
		goto _test_eof884;
case 884:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1990;
	goto st0;
st885:
	if ( ++p == pe )
		goto _test_eof885;
case 885:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1991;
	goto st0;
st886:
	if ( ++p == pe )
		goto _test_eof886;
case 886:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1992;
	goto st0;
st887:
	if ( ++p == pe )
		goto _test_eof887;
case 887:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1993;
	goto st0;
st888:
	if ( ++p == pe )
		goto _test_eof888;
case 888:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1994;
		case 5: goto tr1994;
		case 8: goto tr1994;
		case 18: goto tr1996;
		case 19: goto st908;
		case 21: goto tr1995;
		case 23: goto tr1995;
		case 36: goto tr1996;
		case 44: goto tr1995;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1995;
	goto st0;
tr1994:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st889;
st889:
	if ( ++p == pe )
		goto _test_eof889;
case 889:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st890;
		case 65555: goto tr1999;
		case 131091: goto tr2000;
		case 131109: goto st906;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st890;
		} else if ( _widec >= 15 )
			goto st890;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st890;
		} else if ( _widec >= 38 )
			goto st890;
	} else
		goto st890;
	goto st0;
tr2003:
	{ expr_open_parens++; }
	goto st890;
tr2031:
	{ expr_open_parens--; }
	goto st890;
st890:
	if ( ++p == pe )
		goto _test_eof890;
case 890:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st891;
		case 5: goto st891;
		case 8: goto st891;
		case 13: goto st890;
		case 18: goto tr2003;
		case 21: goto st890;
		case 23: goto st890;
		case 36: goto tr2003;
		case 44: goto st890;
	}
	goto st0;
st891:
	if ( ++p == pe )
		goto _test_eof891;
case 891:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st890;
		case 65555: goto tr1999;
		case 131091: goto st904;
		case 131109: goto st904;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st890;
		} else if ( _widec >= 15 )
			goto st890;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st890;
		} else if ( _widec >= 38 )
			goto st890;
	} else
		goto st890;
	goto st0;
tr1999:
	{ push_expr(expr_start, p); }
	goto st892;
tr2032:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st892;
st892:
	if ( ++p == pe )
		goto _test_eof892;
case 892:
	if ( ( ((int) p->tok)) == 22 )
		goto st893;
	goto st0;
st893:
	if ( ++p == pe )
		goto _test_eof893;
case 893:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2006;
		case 5: goto tr2006;
		case 8: goto tr2006;
		case 18: goto tr2008;
		case 21: goto tr2007;
		case 23: goto tr2007;
		case 36: goto tr2008;
		case 44: goto tr2007;
		case 48: goto st897;
		case 53: goto st898;
		case 54: goto st899;
		case 55: goto st900;
		case 56: goto st901;
		case 59: goto st902;
		case 62: goto st903;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2007;
	goto st0;
tr2006:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st894;
st894:
	if ( ++p == pe )
		goto _test_eof894;
case 894:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2016;
		case 23: goto st895;
		case 131091: goto st896;
		case 131109: goto st896;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st895;
		} else if ( _widec >= 15 )
			goto st895;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st895;
		} else if ( _widec >= 38 )
			goto st895;
	} else
		goto st895;
	goto st0;
tr2007:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st895;
tr2008:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st895;
tr2020:
	{ expr_open_parens++; }
	goto st895;
tr2022:
	{ expr_open_parens--; }
	goto st895;
st895:
	if ( ++p == pe )
		goto _test_eof895;
case 895:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st894;
		case 5: goto st894;
		case 8: goto st894;
		case 13: goto st895;
		case 18: goto tr2020;
		case 21: goto st895;
		case 23: goto st895;
		case 36: goto tr2020;
		case 44: goto st895;
	}
	goto st0;
tr2023:
	{ expr_open_parens--; }
	goto st896;
st896:
	if ( ++p == pe )
		goto _test_eof896;
case 896:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2021;
		case 23: goto tr2022;
		case 131091: goto tr2023;
		case 131109: goto tr2023;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2022;
		} else if ( _widec >= 15 )
			goto tr2022;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2022;
		} else if ( _widec >= 38 )
			goto tr2022;
	} else
		goto tr2022;
	goto st0;
st897:
	if ( ++p == pe )
		goto _test_eof897;
case 897:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2024;
	goto st0;
st898:
	if ( ++p == pe )
		goto _test_eof898;
case 898:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2025;
	goto st0;
st899:
	if ( ++p == pe )
		goto _test_eof899;
case 899:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2026;
	goto st0;
st900:
	if ( ++p == pe )
		goto _test_eof900;
case 900:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2027;
	goto st0;
st901:
	if ( ++p == pe )
		goto _test_eof901;
case 901:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2028;
	goto st0;
st902:
	if ( ++p == pe )
		goto _test_eof902;
case 902:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2029;
	goto st0;
st903:
	if ( ++p == pe )
		goto _test_eof903;
case 903:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2030;
	goto st0;
tr2033:
	{ expr_open_parens--; }
	goto st904;
st904:
	if ( ++p == pe )
		goto _test_eof904;
case 904:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2031;
		case 65555: goto tr2032;
		case 131091: goto tr2033;
		case 131109: goto tr2033;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2031;
		} else if ( _widec >= 15 )
			goto tr2031;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2031;
		} else if ( _widec >= 38 )
			goto tr2031;
	} else
		goto tr2031;
	goto st0;
tr2000:
	{ push_expr(expr_start, p); }
	goto st905;
tr2034:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st905;
st905:
	if ( ++p == pe )
		goto _test_eof905;
case 905:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto st893;
		case 65555: goto tr2032;
		case 131091: goto tr2034;
		case 131109: goto tr2035;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2031;
		} else if ( _widec >= 15 )
			goto tr2031;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2031;
		} else if ( _widec >= 38 )
			goto tr2031;
	} else
		goto tr2031;
	goto st0;
tr2035:
	{ expr_open_parens--; }
	goto st906;
st906:
	if ( ++p == pe )
		goto _test_eof906;
case 906:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2031;
		case 65555: goto tr2032;
		case 131091: goto tr2034;
		case 131109: goto tr2035;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2031;
		} else if ( _widec >= 15 )
			goto tr2031;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2031;
		} else if ( _widec >= 38 )
			goto tr2031;
	} else
		goto tr2031;
	goto st0;
tr1995:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st907;
tr1996:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st907;
tr2038:
	{ expr_open_parens++; }
	goto st907;
st907:
	if ( ++p == pe )
		goto _test_eof907;
case 907:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st889;
		case 5: goto st889;
		case 8: goto st889;
		case 13: goto st907;
		case 18: goto tr2038;
		case 21: goto st907;
		case 23: goto st907;
		case 36: goto tr2038;
		case 44: goto st907;
	}
	goto st0;
st908:
	if ( ++p == pe )
		goto _test_eof908;
case 908:
	if ( ( ((int) p->tok)) == 22 )
		goto st909;
	goto st0;
st909:
	if ( ++p == pe )
		goto _test_eof909;
case 909:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2040;
		case 5: goto tr2040;
		case 8: goto tr2040;
		case 18: goto tr2042;
		case 21: goto tr2041;
		case 23: goto tr2041;
		case 36: goto tr2042;
		case 44: goto tr2041;
		case 48: goto st913;
		case 53: goto st914;
		case 54: goto st915;
		case 55: goto st916;
		case 56: goto st917;
		case 59: goto st918;
		case 62: goto st919;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2041;
	goto st0;
tr2040:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st910;
st910:
	if ( ++p == pe )
		goto _test_eof910;
case 910:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2050;
		case 23: goto st911;
		case 131091: goto st912;
		case 131109: goto st912;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st911;
		} else if ( _widec >= 15 )
			goto st911;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st911;
		} else if ( _widec >= 38 )
			goto st911;
	} else
		goto st911;
	goto st0;
tr2041:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st911;
tr2042:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st911;
tr2054:
	{ expr_open_parens++; }
	goto st911;
tr2056:
	{ expr_open_parens--; }
	goto st911;
st911:
	if ( ++p == pe )
		goto _test_eof911;
case 911:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st910;
		case 5: goto st910;
		case 8: goto st910;
		case 13: goto st911;
		case 18: goto tr2054;
		case 21: goto st911;
		case 23: goto st911;
		case 36: goto tr2054;
		case 44: goto st911;
	}
	goto st0;
tr2057:
	{ expr_open_parens--; }
	goto st912;
st912:
	if ( ++p == pe )
		goto _test_eof912;
case 912:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2055;
		case 23: goto tr2056;
		case 131091: goto tr2057;
		case 131109: goto tr2057;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2056;
		} else if ( _widec >= 15 )
			goto tr2056;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2056;
		} else if ( _widec >= 38 )
			goto tr2056;
	} else
		goto tr2056;
	goto st0;
st913:
	if ( ++p == pe )
		goto _test_eof913;
case 913:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2058;
	goto st0;
st914:
	if ( ++p == pe )
		goto _test_eof914;
case 914:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2059;
	goto st0;
st915:
	if ( ++p == pe )
		goto _test_eof915;
case 915:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2060;
	goto st0;
st916:
	if ( ++p == pe )
		goto _test_eof916;
case 916:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2061;
	goto st0;
st917:
	if ( ++p == pe )
		goto _test_eof917;
case 917:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2062;
	goto st0;
st918:
	if ( ++p == pe )
		goto _test_eof918;
case 918:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2063;
	goto st0;
st919:
	if ( ++p == pe )
		goto _test_eof919;
case 919:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2064;
	goto st0;
st920:
	if ( ++p == pe )
		goto _test_eof920;
case 920:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2065;
	goto st0;
st921:
	if ( ++p == pe )
		goto _test_eof921;
case 921:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2066;
	goto st0;
st922:
	if ( ++p == pe )
		goto _test_eof922;
case 922:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2067;
	goto st0;
st923:
	if ( ++p == pe )
		goto _test_eof923;
case 923:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2068;
	goto st0;
st924:
	if ( ++p == pe )
		goto _test_eof924;
case 924:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2069;
	goto st0;
st925:
	if ( ++p == pe )
		goto _test_eof925;
case 925:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2070;
	goto st0;
st926:
	if ( ++p == pe )
		goto _test_eof926;
case 926:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2071;
		case 5: goto tr2071;
		case 8: goto tr2071;
		case 18: goto tr2073;
		case 21: goto tr2072;
		case 23: goto tr2072;
		case 36: goto tr2073;
		case 44: goto tr2072;
		case 48: goto st930;
		case 53: goto st931;
		case 54: goto st932;
		case 55: goto st933;
		case 56: goto st934;
		case 57: goto st935;
		case 58: goto st936;
		case 59: goto st937;
		case 60: goto st938;
		case 61: goto st939;
		case 62: goto st940;
		case 79: goto st943;
		case 80: goto st944;
		case 81: goto st954;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2072;
	goto st0;
tr2071:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st927;
st927:
	if ( ++p == pe )
		goto _test_eof927;
case 927:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2088;
		case 23: goto st928;
		case 131091: goto st929;
		case 131109: goto st929;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st928;
		} else if ( _widec >= 15 )
			goto st928;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st928;
		} else if ( _widec >= 38 )
			goto st928;
	} else
		goto st928;
	goto st0;
tr2072:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st928;
tr2073:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st928;
tr2092:
	{ expr_open_parens++; }
	goto st928;
tr2094:
	{ expr_open_parens--; }
	goto st928;
st928:
	if ( ++p == pe )
		goto _test_eof928;
case 928:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st927;
		case 5: goto st927;
		case 8: goto st927;
		case 13: goto st928;
		case 18: goto tr2092;
		case 21: goto st928;
		case 23: goto st928;
		case 36: goto tr2092;
		case 44: goto st928;
	}
	goto st0;
tr2095:
	{ expr_open_parens--; }
	goto st929;
st929:
	if ( ++p == pe )
		goto _test_eof929;
case 929:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2093;
		case 23: goto tr2094;
		case 131091: goto tr2095;
		case 131109: goto tr2095;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2094;
		} else if ( _widec >= 15 )
			goto tr2094;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2094;
		} else if ( _widec >= 38 )
			goto tr2094;
	} else
		goto tr2094;
	goto st0;
st930:
	if ( ++p == pe )
		goto _test_eof930;
case 930:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2096;
	goto st0;
st931:
	if ( ++p == pe )
		goto _test_eof931;
case 931:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2097;
	goto st0;
st932:
	if ( ++p == pe )
		goto _test_eof932;
case 932:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2098;
	goto st0;
st933:
	if ( ++p == pe )
		goto _test_eof933;
case 933:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2099;
	goto st0;
st934:
	if ( ++p == pe )
		goto _test_eof934;
case 934:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2100;
	goto st0;
st935:
	if ( ++p == pe )
		goto _test_eof935;
case 935:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2101;
	goto st0;
st936:
	if ( ++p == pe )
		goto _test_eof936;
case 936:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2102;
	goto st0;
st937:
	if ( ++p == pe )
		goto _test_eof937;
case 937:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2103;
	goto st0;
st938:
	if ( ++p == pe )
		goto _test_eof938;
case 938:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2104;
	goto st0;
st939:
	if ( ++p == pe )
		goto _test_eof939;
case 939:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2105;
	goto st0;
st940:
	if ( ++p == pe )
		goto _test_eof940;
case 940:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2106;
		case 22: goto st941;
	}
	goto st0;
st941:
	if ( ++p == pe )
		goto _test_eof941;
case 941:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2071;
		case 5: goto tr2071;
		case 8: goto tr2071;
		case 18: goto tr2073;
		case 21: goto tr2072;
		case 23: goto tr2072;
		case 36: goto tr2073;
		case 44: goto tr2072;
		case 48: goto st930;
		case 53: goto st931;
		case 54: goto st932;
		case 55: goto st933;
		case 56: goto st934;
		case 57: goto st935;
		case 58: goto st936;
		case 59: goto st937;
		case 60: goto st938;
		case 61: goto st939;
		case 62: goto st942;
		case 79: goto st943;
		case 80: goto st944;
		case 81: goto st954;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2072;
	goto st0;
st942:
	if ( ++p == pe )
		goto _test_eof942;
case 942:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2106;
	goto st0;
st943:
	if ( ++p == pe )
		goto _test_eof943;
case 943:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2109;
	goto st0;
st944:
	if ( ++p == pe )
		goto _test_eof944;
case 944:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2110;
		case 5: goto tr2110;
		case 8: goto tr2110;
		case 18: goto tr2112;
		case 19: goto st953;
		case 21: goto tr2111;
		case 23: goto tr2111;
		case 36: goto tr2112;
		case 44: goto tr2111;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2111;
	goto st0;
tr2110:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st945;
st945:
	if ( ++p == pe )
		goto _test_eof945;
case 945:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st946;
		case 65555: goto tr2115;
		case 131091: goto tr2116;
		case 131109: goto st951;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st946;
		} else if ( _widec >= 15 )
			goto st946;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st946;
		} else if ( _widec >= 38 )
			goto st946;
	} else
		goto st946;
	goto st0;
tr2119:
	{ expr_open_parens++; }
	goto st946;
tr2122:
	{ expr_open_parens--; }
	goto st946;
st946:
	if ( ++p == pe )
		goto _test_eof946;
case 946:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st947;
		case 5: goto st947;
		case 8: goto st947;
		case 13: goto st946;
		case 18: goto tr2119;
		case 21: goto st946;
		case 23: goto st946;
		case 36: goto tr2119;
		case 44: goto st946;
	}
	goto st0;
st947:
	if ( ++p == pe )
		goto _test_eof947;
case 947:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st946;
		case 65555: goto tr2115;
		case 131091: goto st949;
		case 131109: goto st949;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st946;
		} else if ( _widec >= 15 )
			goto st946;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st946;
		} else if ( _widec >= 38 )
			goto st946;
	} else
		goto st946;
	goto st0;
tr2115:
	{ push_expr(expr_start, p); }
	goto st948;
tr2123:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st948;
st948:
	if ( ++p == pe )
		goto _test_eof948;
case 948:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2121;
	goto st0;
tr2124:
	{ expr_open_parens--; }
	goto st949;
st949:
	if ( ++p == pe )
		goto _test_eof949;
case 949:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2122;
		case 65555: goto tr2123;
		case 131091: goto tr2124;
		case 131109: goto tr2124;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2122;
		} else if ( _widec >= 15 )
			goto tr2122;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2122;
		} else if ( _widec >= 38 )
			goto tr2122;
	} else
		goto tr2122;
	goto st0;
tr2116:
	{ push_expr(expr_start, p); }
	goto st950;
tr2125:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st950;
st950:
	if ( ++p == pe )
		goto _test_eof950;
case 950:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2121;
		case 23: goto tr2122;
		case 65555: goto tr2123;
		case 131091: goto tr2125;
		case 131109: goto tr2126;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2122;
		} else if ( _widec >= 15 )
			goto tr2122;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2122;
		} else if ( _widec >= 38 )
			goto tr2122;
	} else
		goto tr2122;
	goto st0;
tr2126:
	{ expr_open_parens--; }
	goto st951;
st951:
	if ( ++p == pe )
		goto _test_eof951;
case 951:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2122;
		case 65555: goto tr2123;
		case 131091: goto tr2125;
		case 131109: goto tr2126;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2122;
		} else if ( _widec >= 15 )
			goto tr2122;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2122;
		} else if ( _widec >= 38 )
			goto tr2122;
	} else
		goto tr2122;
	goto st0;
tr2111:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st952;
tr2112:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st952;
tr2129:
	{ expr_open_parens++; }
	goto st952;
st952:
	if ( ++p == pe )
		goto _test_eof952;
case 952:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st945;
		case 5: goto st945;
		case 8: goto st945;
		case 13: goto st952;
		case 18: goto tr2129;
		case 21: goto st952;
		case 23: goto st952;
		case 36: goto tr2129;
		case 44: goto st952;
	}
	goto st0;
st953:
	if ( ++p == pe )
		goto _test_eof953;
case 953:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2130;
	goto st0;
st954:
	if ( ++p == pe )
		goto _test_eof954;
case 954:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2131;
		case 5: goto tr2131;
		case 8: goto tr2131;
		case 18: goto tr2133;
		case 19: goto st963;
		case 21: goto tr2132;
		case 23: goto tr2132;
		case 36: goto tr2133;
		case 44: goto tr2132;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2132;
	goto st0;
tr2131:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st955;
st955:
	if ( ++p == pe )
		goto _test_eof955;
case 955:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st956;
		case 65555: goto tr2136;
		case 131091: goto tr2137;
		case 131109: goto st961;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st956;
		} else if ( _widec >= 15 )
			goto st956;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st956;
		} else if ( _widec >= 38 )
			goto st956;
	} else
		goto st956;
	goto st0;
tr2140:
	{ expr_open_parens++; }
	goto st956;
tr2143:
	{ expr_open_parens--; }
	goto st956;
st956:
	if ( ++p == pe )
		goto _test_eof956;
case 956:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st957;
		case 5: goto st957;
		case 8: goto st957;
		case 13: goto st956;
		case 18: goto tr2140;
		case 21: goto st956;
		case 23: goto st956;
		case 36: goto tr2140;
		case 44: goto st956;
	}
	goto st0;
st957:
	if ( ++p == pe )
		goto _test_eof957;
case 957:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st956;
		case 65555: goto tr2136;
		case 131091: goto st959;
		case 131109: goto st959;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st956;
		} else if ( _widec >= 15 )
			goto st956;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st956;
		} else if ( _widec >= 38 )
			goto st956;
	} else
		goto st956;
	goto st0;
tr2136:
	{ push_expr(expr_start, p); }
	goto st958;
tr2144:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st958;
st958:
	if ( ++p == pe )
		goto _test_eof958;
case 958:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2142;
	goto st0;
tr2145:
	{ expr_open_parens--; }
	goto st959;
st959:
	if ( ++p == pe )
		goto _test_eof959;
case 959:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2143;
		case 65555: goto tr2144;
		case 131091: goto tr2145;
		case 131109: goto tr2145;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2143;
		} else if ( _widec >= 15 )
			goto tr2143;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2143;
		} else if ( _widec >= 38 )
			goto tr2143;
	} else
		goto tr2143;
	goto st0;
tr2137:
	{ push_expr(expr_start, p); }
	goto st960;
tr2146:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st960;
st960:
	if ( ++p == pe )
		goto _test_eof960;
case 960:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2142;
		case 23: goto tr2143;
		case 65555: goto tr2144;
		case 131091: goto tr2146;
		case 131109: goto tr2147;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2143;
		} else if ( _widec >= 15 )
			goto tr2143;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2143;
		} else if ( _widec >= 38 )
			goto tr2143;
	} else
		goto tr2143;
	goto st0;
tr2147:
	{ expr_open_parens--; }
	goto st961;
st961:
	if ( ++p == pe )
		goto _test_eof961;
case 961:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2143;
		case 65555: goto tr2144;
		case 131091: goto tr2146;
		case 131109: goto tr2147;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2143;
		} else if ( _widec >= 15 )
			goto tr2143;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2143;
		} else if ( _widec >= 38 )
			goto tr2143;
	} else
		goto tr2143;
	goto st0;
tr2132:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st962;
tr2133:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st962;
tr2150:
	{ expr_open_parens++; }
	goto st962;
st962:
	if ( ++p == pe )
		goto _test_eof962;
case 962:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st955;
		case 5: goto st955;
		case 8: goto st955;
		case 13: goto st962;
		case 18: goto tr2150;
		case 21: goto st962;
		case 23: goto st962;
		case 36: goto tr2150;
		case 44: goto st962;
	}
	goto st0;
st963:
	if ( ++p == pe )
		goto _test_eof963;
case 963:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2151;
	goto st0;
st964:
	if ( ++p == pe )
		goto _test_eof964;
case 964:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2152;
	goto st0;
st965:
	if ( ++p == pe )
		goto _test_eof965;
case 965:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2153;
	goto st0;
st966:
	if ( ++p == pe )
		goto _test_eof966;
case 966:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2154;
		case 5: goto tr2154;
		case 8: goto tr2154;
		case 18: goto tr2156;
		case 21: goto tr2155;
		case 23: goto tr2155;
		case 36: goto tr2156;
		case 44: goto tr2155;
		case 68: goto st972;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2155;
	goto st0;
tr2154:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st967;
st967:
	if ( ++p == pe )
		goto _test_eof967;
case 967:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2159;
		case 131091: goto st971;
		case 131109: goto st971;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st968;
		} else if ( _widec >= 15 )
			goto st968;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st968;
		} else if ( _widec >= 38 )
			goto st968;
	} else
		goto st968;
	goto st0;
tr2162:
	{ expr_open_parens++; }
	goto st968;
tr2165:
	{ expr_open_parens--; }
	goto st968;
tr2155:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st968;
tr2156:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st968;
st968:
	if ( ++p == pe )
		goto _test_eof968;
case 968:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st967;
		case 5: goto st967;
		case 8: goto st967;
		case 13: goto st968;
		case 18: goto tr2162;
		case 21: goto st968;
		case 23: goto st968;
		case 36: goto tr2162;
		case 44: goto st968;
	}
	goto st0;
tr2159:
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	goto st969;
tr2166:
	{ expr_open_parens--; }
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	goto st969;
st969:
	if ( ++p == pe )
		goto _test_eof969;
case 969:
	if ( ( ((int) p->tok)) == 62 )
		goto st970;
	goto st0;
st970:
	if ( ++p == pe )
		goto _test_eof970;
case 970:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2164;
	goto st0;
tr2167:
	{ expr_open_parens--; }
	goto st971;
st971:
	if ( ++p == pe )
		goto _test_eof971;
case 971:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2166;
		case 131091: goto tr2167;
		case 131109: goto tr2167;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2165;
		} else if ( _widec >= 15 )
			goto tr2165;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2165;
		} else if ( _widec >= 38 )
			goto tr2165;
	} else
		goto tr2165;
	goto st0;
st972:
	if ( ++p == pe )
		goto _test_eof972;
case 972:
	if ( ( ((int) p->tok)) == 22 )
		goto st973;
	goto st0;
st973:
	if ( ++p == pe )
		goto _test_eof973;
case 973:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st974;
		case 53: goto st975;
		case 54: goto st976;
		case 55: goto st977;
		case 56: goto st978;
		case 59: goto st979;
		case 62: goto st980;
	}
	goto st0;
st974:
	if ( ++p == pe )
		goto _test_eof974;
case 974:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2176;
	goto st0;
st975:
	if ( ++p == pe )
		goto _test_eof975;
case 975:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2177;
	goto st0;
st976:
	if ( ++p == pe )
		goto _test_eof976;
case 976:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2178;
	goto st0;
st977:
	if ( ++p == pe )
		goto _test_eof977;
case 977:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2179;
	goto st0;
st978:
	if ( ++p == pe )
		goto _test_eof978;
case 978:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2180;
	goto st0;
st979:
	if ( ++p == pe )
		goto _test_eof979;
case 979:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2181;
	goto st0;
st980:
	if ( ++p == pe )
		goto _test_eof980;
case 980:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2182;
	goto st0;
st981:
	if ( ++p == pe )
		goto _test_eof981;
case 981:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2183;
	goto st0;
st982:
	if ( ++p == pe )
		goto _test_eof982;
case 982:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2184;
	goto st0;
st983:
	if ( ++p == pe )
		goto _test_eof983;
case 983:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st984;
		case 70: goto st985;
		case 71: goto st986;
		case 72: goto st987;
		case 73: goto st988;
		case 74: goto st989;
	}
	goto st0;
st984:
	if ( ++p == pe )
		goto _test_eof984;
case 984:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2191;
	goto st0;
st985:
	if ( ++p == pe )
		goto _test_eof985;
case 985:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2192;
	goto st0;
st986:
	if ( ++p == pe )
		goto _test_eof986;
case 986:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2193;
	goto st0;
st987:
	if ( ++p == pe )
		goto _test_eof987;
case 987:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2194;
	goto st0;
st988:
	if ( ++p == pe )
		goto _test_eof988;
case 988:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2195;
	goto st0;
st989:
	if ( ++p == pe )
		goto _test_eof989;
case 989:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2196;
	goto st0;
st990:
	if ( ++p == pe )
		goto _test_eof990;
case 990:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st991;
		case 70: goto st992;
		case 71: goto st993;
		case 72: goto st994;
		case 73: goto st995;
		case 74: goto st996;
	}
	goto st0;
st991:
	if ( ++p == pe )
		goto _test_eof991;
case 991:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2203;
	goto st0;
st992:
	if ( ++p == pe )
		goto _test_eof992;
case 992:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2204;
	goto st0;
st993:
	if ( ++p == pe )
		goto _test_eof993;
case 993:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2205;
	goto st0;
st994:
	if ( ++p == pe )
		goto _test_eof994;
case 994:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2206;
	goto st0;
st995:
	if ( ++p == pe )
		goto _test_eof995;
case 995:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2207;
	goto st0;
st996:
	if ( ++p == pe )
		goto _test_eof996;
case 996:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2208;
	goto st0;
st997:
	if ( ++p == pe )
		goto _test_eof997;
case 997:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2209;
		case 5: goto tr2209;
		case 8: goto tr2209;
		case 18: goto tr2211;
		case 21: goto tr2210;
		case 23: goto tr2210;
		case 36: goto tr2211;
		case 44: goto tr2210;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2210;
	goto st0;
tr2209:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st998;
st998:
	if ( ++p == pe )
		goto _test_eof998;
case 998:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2213;
		case 131091: goto st1029;
		case 131109: goto st1029;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st999;
		} else if ( _widec >= 15 )
			goto st999;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st999;
		} else if ( _widec >= 38 )
			goto st999;
	} else
		goto st999;
	goto st0;
tr2210:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st999;
tr2211:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st999;
tr2216:
	{ expr_open_parens++; }
	goto st999;
tr2277:
	{ expr_open_parens--; }
	goto st999;
st999:
	if ( ++p == pe )
		goto _test_eof999;
case 999:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st998;
		case 5: goto st998;
		case 8: goto st998;
		case 13: goto st999;
		case 18: goto tr2216;
		case 21: goto st999;
		case 23: goto st999;
		case 36: goto tr2216;
		case 44: goto st999;
	}
	goto st0;
tr2213:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1000;
tr2278:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1000;
st1000:
	if ( ++p == pe )
		goto _test_eof1000;
case 1000:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1001;
		case 53: goto st1002;
		case 54: goto st1003;
		case 55: goto st1004;
		case 56: goto st1005;
		case 59: goto st1006;
		case 62: goto st1007;
		case 79: goto st1008;
		case 80: goto st1009;
		case 81: goto st1019;
	}
	goto st0;
st1001:
	if ( ++p == pe )
		goto _test_eof1001;
case 1001:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2227;
	goto st0;
st1002:
	if ( ++p == pe )
		goto _test_eof1002;
case 1002:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2228;
	goto st0;
st1003:
	if ( ++p == pe )
		goto _test_eof1003;
case 1003:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2229;
	goto st0;
st1004:
	if ( ++p == pe )
		goto _test_eof1004;
case 1004:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2230;
	goto st0;
st1005:
	if ( ++p == pe )
		goto _test_eof1005;
case 1005:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2231;
	goto st0;
st1006:
	if ( ++p == pe )
		goto _test_eof1006;
case 1006:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2232;
	goto st0;
st1007:
	if ( ++p == pe )
		goto _test_eof1007;
case 1007:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2233;
	goto st0;
st1008:
	if ( ++p == pe )
		goto _test_eof1008;
case 1008:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2234;
	goto st0;
st1009:
	if ( ++p == pe )
		goto _test_eof1009;
case 1009:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2235;
		case 5: goto tr2235;
		case 8: goto tr2235;
		case 18: goto tr2237;
		case 19: goto st1018;
		case 21: goto tr2236;
		case 23: goto tr2236;
		case 36: goto tr2237;
		case 44: goto tr2236;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2236;
	goto st0;
tr2235:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1010;
st1010:
	if ( ++p == pe )
		goto _test_eof1010;
case 1010:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1011;
		case 65555: goto tr2240;
		case 131091: goto tr2241;
		case 131109: goto st1016;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1011;
		} else if ( _widec >= 15 )
			goto st1011;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1011;
		} else if ( _widec >= 38 )
			goto st1011;
	} else
		goto st1011;
	goto st0;
tr2244:
	{ expr_open_parens++; }
	goto st1011;
tr2247:
	{ expr_open_parens--; }
	goto st1011;
st1011:
	if ( ++p == pe )
		goto _test_eof1011;
case 1011:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1012;
		case 5: goto st1012;
		case 8: goto st1012;
		case 13: goto st1011;
		case 18: goto tr2244;
		case 21: goto st1011;
		case 23: goto st1011;
		case 36: goto tr2244;
		case 44: goto st1011;
	}
	goto st0;
st1012:
	if ( ++p == pe )
		goto _test_eof1012;
case 1012:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1011;
		case 65555: goto tr2240;
		case 131091: goto st1014;
		case 131109: goto st1014;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1011;
		} else if ( _widec >= 15 )
			goto st1011;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1011;
		} else if ( _widec >= 38 )
			goto st1011;
	} else
		goto st1011;
	goto st0;
tr2240:
	{ push_expr(expr_start, p); }
	goto st1013;
tr2248:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1013;
st1013:
	if ( ++p == pe )
		goto _test_eof1013;
case 1013:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2246;
	goto st0;
tr2249:
	{ expr_open_parens--; }
	goto st1014;
st1014:
	if ( ++p == pe )
		goto _test_eof1014;
case 1014:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2247;
		case 65555: goto tr2248;
		case 131091: goto tr2249;
		case 131109: goto tr2249;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2247;
		} else if ( _widec >= 15 )
			goto tr2247;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2247;
		} else if ( _widec >= 38 )
			goto tr2247;
	} else
		goto tr2247;
	goto st0;
tr2241:
	{ push_expr(expr_start, p); }
	goto st1015;
tr2250:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1015;
st1015:
	if ( ++p == pe )
		goto _test_eof1015;
case 1015:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2246;
		case 23: goto tr2247;
		case 65555: goto tr2248;
		case 131091: goto tr2250;
		case 131109: goto tr2251;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2247;
		} else if ( _widec >= 15 )
			goto tr2247;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2247;
		} else if ( _widec >= 38 )
			goto tr2247;
	} else
		goto tr2247;
	goto st0;
tr2251:
	{ expr_open_parens--; }
	goto st1016;
st1016:
	if ( ++p == pe )
		goto _test_eof1016;
case 1016:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2247;
		case 65555: goto tr2248;
		case 131091: goto tr2250;
		case 131109: goto tr2251;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2247;
		} else if ( _widec >= 15 )
			goto tr2247;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2247;
		} else if ( _widec >= 38 )
			goto tr2247;
	} else
		goto tr2247;
	goto st0;
tr2236:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1017;
tr2237:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1017;
tr2254:
	{ expr_open_parens++; }
	goto st1017;
st1017:
	if ( ++p == pe )
		goto _test_eof1017;
case 1017:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1010;
		case 5: goto st1010;
		case 8: goto st1010;
		case 13: goto st1017;
		case 18: goto tr2254;
		case 21: goto st1017;
		case 23: goto st1017;
		case 36: goto tr2254;
		case 44: goto st1017;
	}
	goto st0;
st1018:
	if ( ++p == pe )
		goto _test_eof1018;
case 1018:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2255;
	goto st0;
st1019:
	if ( ++p == pe )
		goto _test_eof1019;
case 1019:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2256;
		case 5: goto tr2256;
		case 8: goto tr2256;
		case 18: goto tr2258;
		case 19: goto st1028;
		case 21: goto tr2257;
		case 23: goto tr2257;
		case 36: goto tr2258;
		case 44: goto tr2257;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2257;
	goto st0;
tr2256:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1020;
st1020:
	if ( ++p == pe )
		goto _test_eof1020;
case 1020:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1021;
		case 65555: goto tr2261;
		case 131091: goto tr2262;
		case 131109: goto st1026;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1021;
		} else if ( _widec >= 15 )
			goto st1021;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1021;
		} else if ( _widec >= 38 )
			goto st1021;
	} else
		goto st1021;
	goto st0;
tr2265:
	{ expr_open_parens++; }
	goto st1021;
tr2268:
	{ expr_open_parens--; }
	goto st1021;
st1021:
	if ( ++p == pe )
		goto _test_eof1021;
case 1021:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1022;
		case 5: goto st1022;
		case 8: goto st1022;
		case 13: goto st1021;
		case 18: goto tr2265;
		case 21: goto st1021;
		case 23: goto st1021;
		case 36: goto tr2265;
		case 44: goto st1021;
	}
	goto st0;
st1022:
	if ( ++p == pe )
		goto _test_eof1022;
case 1022:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1021;
		case 65555: goto tr2261;
		case 131091: goto st1024;
		case 131109: goto st1024;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1021;
		} else if ( _widec >= 15 )
			goto st1021;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1021;
		} else if ( _widec >= 38 )
			goto st1021;
	} else
		goto st1021;
	goto st0;
tr2261:
	{ push_expr(expr_start, p); }
	goto st1023;
tr2269:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1023;
st1023:
	if ( ++p == pe )
		goto _test_eof1023;
case 1023:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2267;
	goto st0;
tr2270:
	{ expr_open_parens--; }
	goto st1024;
st1024:
	if ( ++p == pe )
		goto _test_eof1024;
case 1024:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2268;
		case 65555: goto tr2269;
		case 131091: goto tr2270;
		case 131109: goto tr2270;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2268;
		} else if ( _widec >= 15 )
			goto tr2268;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2268;
		} else if ( _widec >= 38 )
			goto tr2268;
	} else
		goto tr2268;
	goto st0;
tr2262:
	{ push_expr(expr_start, p); }
	goto st1025;
tr2271:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1025;
st1025:
	if ( ++p == pe )
		goto _test_eof1025;
case 1025:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2267;
		case 23: goto tr2268;
		case 65555: goto tr2269;
		case 131091: goto tr2271;
		case 131109: goto tr2272;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2268;
		} else if ( _widec >= 15 )
			goto tr2268;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2268;
		} else if ( _widec >= 38 )
			goto tr2268;
	} else
		goto tr2268;
	goto st0;
tr2272:
	{ expr_open_parens--; }
	goto st1026;
st1026:
	if ( ++p == pe )
		goto _test_eof1026;
case 1026:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2268;
		case 65555: goto tr2269;
		case 131091: goto tr2271;
		case 131109: goto tr2272;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2268;
		} else if ( _widec >= 15 )
			goto tr2268;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2268;
		} else if ( _widec >= 38 )
			goto tr2268;
	} else
		goto tr2268;
	goto st0;
tr2257:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1027;
tr2258:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1027;
tr2275:
	{ expr_open_parens++; }
	goto st1027;
st1027:
	if ( ++p == pe )
		goto _test_eof1027;
case 1027:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1020;
		case 5: goto st1020;
		case 8: goto st1020;
		case 13: goto st1027;
		case 18: goto tr2275;
		case 21: goto st1027;
		case 23: goto st1027;
		case 36: goto tr2275;
		case 44: goto st1027;
	}
	goto st0;
st1028:
	if ( ++p == pe )
		goto _test_eof1028;
case 1028:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2276;
	goto st0;
tr2279:
	{ expr_open_parens--; }
	goto st1029;
st1029:
	if ( ++p == pe )
		goto _test_eof1029;
case 1029:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2278;
		case 131091: goto tr2279;
		case 131109: goto tr2279;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2277;
		} else if ( _widec >= 15 )
			goto tr2277;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2277;
		} else if ( _widec >= 38 )
			goto tr2277;
	} else
		goto tr2277;
	goto st0;
st1030:
	if ( ++p == pe )
		goto _test_eof1030;
case 1030:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2280;
		case 45: goto st1031;
		case 46: goto st1032;
		case 47: goto st1033;
		case 48: goto st1034;
		case 49: goto st1035;
		case 50: goto st1036;
		case 51: goto st1037;
		case 52: goto st1038;
	}
	goto st0;
st1031:
	if ( ++p == pe )
		goto _test_eof1031;
case 1031:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2289;
	goto st0;
st1032:
	if ( ++p == pe )
		goto _test_eof1032;
case 1032:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2290;
	goto st0;
st1033:
	if ( ++p == pe )
		goto _test_eof1033;
case 1033:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2291;
	goto st0;
st1034:
	if ( ++p == pe )
		goto _test_eof1034;
case 1034:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2292;
	goto st0;
st1035:
	if ( ++p == pe )
		goto _test_eof1035;
case 1035:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2293;
	goto st0;
st1036:
	if ( ++p == pe )
		goto _test_eof1036;
case 1036:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2294;
	goto st0;
st1037:
	if ( ++p == pe )
		goto _test_eof1037;
case 1037:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2295;
	goto st0;
st1038:
	if ( ++p == pe )
		goto _test_eof1038;
case 1038:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2296;
	goto st0;
st1039:
	if ( ++p == pe )
		goto _test_eof1039;
case 1039:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2297;
	goto st0;
st1040:
	if ( ++p == pe )
		goto _test_eof1040;
case 1040:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2298;
	goto st0;
st1041:
	if ( ++p == pe )
		goto _test_eof1041;
case 1041:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1042;
		case 53: goto st1043;
		case 54: goto st1044;
		case 55: goto st1045;
		case 56: goto st1046;
		case 59: goto st1047;
		case 62: goto st1048;
		case 79: goto st1049;
		case 80: goto st1050;
		case 81: goto st1060;
	}
	goto st0;
st1042:
	if ( ++p == pe )
		goto _test_eof1042;
case 1042:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2309;
	goto st0;
st1043:
	if ( ++p == pe )
		goto _test_eof1043;
case 1043:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2310;
	goto st0;
st1044:
	if ( ++p == pe )
		goto _test_eof1044;
case 1044:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2311;
	goto st0;
st1045:
	if ( ++p == pe )
		goto _test_eof1045;
case 1045:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2312;
	goto st0;
st1046:
	if ( ++p == pe )
		goto _test_eof1046;
case 1046:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2313;
	goto st0;
st1047:
	if ( ++p == pe )
		goto _test_eof1047;
case 1047:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2314;
	goto st0;
st1048:
	if ( ++p == pe )
		goto _test_eof1048;
case 1048:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2315;
	goto st0;
st1049:
	if ( ++p == pe )
		goto _test_eof1049;
case 1049:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2316;
	goto st0;
st1050:
	if ( ++p == pe )
		goto _test_eof1050;
case 1050:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2317;
		case 5: goto tr2317;
		case 8: goto tr2317;
		case 18: goto tr2319;
		case 19: goto st1059;
		case 21: goto tr2318;
		case 23: goto tr2318;
		case 36: goto tr2319;
		case 44: goto tr2318;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2318;
	goto st0;
tr2317:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1051;
st1051:
	if ( ++p == pe )
		goto _test_eof1051;
case 1051:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1052;
		case 65555: goto tr2322;
		case 131091: goto tr2323;
		case 131109: goto st1057;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1052;
		} else if ( _widec >= 15 )
			goto st1052;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1052;
		} else if ( _widec >= 38 )
			goto st1052;
	} else
		goto st1052;
	goto st0;
tr2326:
	{ expr_open_parens++; }
	goto st1052;
tr2329:
	{ expr_open_parens--; }
	goto st1052;
st1052:
	if ( ++p == pe )
		goto _test_eof1052;
case 1052:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1053;
		case 5: goto st1053;
		case 8: goto st1053;
		case 13: goto st1052;
		case 18: goto tr2326;
		case 21: goto st1052;
		case 23: goto st1052;
		case 36: goto tr2326;
		case 44: goto st1052;
	}
	goto st0;
st1053:
	if ( ++p == pe )
		goto _test_eof1053;
case 1053:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1052;
		case 65555: goto tr2322;
		case 131091: goto st1055;
		case 131109: goto st1055;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1052;
		} else if ( _widec >= 15 )
			goto st1052;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1052;
		} else if ( _widec >= 38 )
			goto st1052;
	} else
		goto st1052;
	goto st0;
tr2322:
	{ push_expr(expr_start, p); }
	goto st1054;
tr2330:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1054;
st1054:
	if ( ++p == pe )
		goto _test_eof1054;
case 1054:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2328;
	goto st0;
tr2331:
	{ expr_open_parens--; }
	goto st1055;
st1055:
	if ( ++p == pe )
		goto _test_eof1055;
case 1055:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2329;
		case 65555: goto tr2330;
		case 131091: goto tr2331;
		case 131109: goto tr2331;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2329;
		} else if ( _widec >= 15 )
			goto tr2329;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2329;
		} else if ( _widec >= 38 )
			goto tr2329;
	} else
		goto tr2329;
	goto st0;
tr2323:
	{ push_expr(expr_start, p); }
	goto st1056;
tr2332:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1056;
st1056:
	if ( ++p == pe )
		goto _test_eof1056;
case 1056:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2328;
		case 23: goto tr2329;
		case 65555: goto tr2330;
		case 131091: goto tr2332;
		case 131109: goto tr2333;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2329;
		} else if ( _widec >= 15 )
			goto tr2329;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2329;
		} else if ( _widec >= 38 )
			goto tr2329;
	} else
		goto tr2329;
	goto st0;
tr2333:
	{ expr_open_parens--; }
	goto st1057;
st1057:
	if ( ++p == pe )
		goto _test_eof1057;
case 1057:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2329;
		case 65555: goto tr2330;
		case 131091: goto tr2332;
		case 131109: goto tr2333;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2329;
		} else if ( _widec >= 15 )
			goto tr2329;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2329;
		} else if ( _widec >= 38 )
			goto tr2329;
	} else
		goto tr2329;
	goto st0;
tr2318:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1058;
tr2319:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1058;
tr2336:
	{ expr_open_parens++; }
	goto st1058;
st1058:
	if ( ++p == pe )
		goto _test_eof1058;
case 1058:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1051;
		case 5: goto st1051;
		case 8: goto st1051;
		case 13: goto st1058;
		case 18: goto tr2336;
		case 21: goto st1058;
		case 23: goto st1058;
		case 36: goto tr2336;
		case 44: goto st1058;
	}
	goto st0;
st1059:
	if ( ++p == pe )
		goto _test_eof1059;
case 1059:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2337;
	goto st0;
st1060:
	if ( ++p == pe )
		goto _test_eof1060;
case 1060:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2338;
		case 5: goto tr2338;
		case 8: goto tr2338;
		case 18: goto tr2340;
		case 19: goto st1069;
		case 21: goto tr2339;
		case 23: goto tr2339;
		case 36: goto tr2340;
		case 44: goto tr2339;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2339;
	goto st0;
tr2338:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1061;
st1061:
	if ( ++p == pe )
		goto _test_eof1061;
case 1061:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1062;
		case 65555: goto tr2343;
		case 131091: goto tr2344;
		case 131109: goto st1067;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1062;
		} else if ( _widec >= 15 )
			goto st1062;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1062;
		} else if ( _widec >= 38 )
			goto st1062;
	} else
		goto st1062;
	goto st0;
tr2347:
	{ expr_open_parens++; }
	goto st1062;
tr2350:
	{ expr_open_parens--; }
	goto st1062;
st1062:
	if ( ++p == pe )
		goto _test_eof1062;
case 1062:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1063;
		case 5: goto st1063;
		case 8: goto st1063;
		case 13: goto st1062;
		case 18: goto tr2347;
		case 21: goto st1062;
		case 23: goto st1062;
		case 36: goto tr2347;
		case 44: goto st1062;
	}
	goto st0;
st1063:
	if ( ++p == pe )
		goto _test_eof1063;
case 1063:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1062;
		case 65555: goto tr2343;
		case 131091: goto st1065;
		case 131109: goto st1065;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1062;
		} else if ( _widec >= 15 )
			goto st1062;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1062;
		} else if ( _widec >= 38 )
			goto st1062;
	} else
		goto st1062;
	goto st0;
tr2343:
	{ push_expr(expr_start, p); }
	goto st1064;
tr2351:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1064;
st1064:
	if ( ++p == pe )
		goto _test_eof1064;
case 1064:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2349;
	goto st0;
tr2352:
	{ expr_open_parens--; }
	goto st1065;
st1065:
	if ( ++p == pe )
		goto _test_eof1065;
case 1065:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2350;
		case 65555: goto tr2351;
		case 131091: goto tr2352;
		case 131109: goto tr2352;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2350;
		} else if ( _widec >= 15 )
			goto tr2350;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2350;
		} else if ( _widec >= 38 )
			goto tr2350;
	} else
		goto tr2350;
	goto st0;
tr2344:
	{ push_expr(expr_start, p); }
	goto st1066;
tr2353:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1066;
st1066:
	if ( ++p == pe )
		goto _test_eof1066;
case 1066:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2349;
		case 23: goto tr2350;
		case 65555: goto tr2351;
		case 131091: goto tr2353;
		case 131109: goto tr2354;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2350;
		} else if ( _widec >= 15 )
			goto tr2350;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2350;
		} else if ( _widec >= 38 )
			goto tr2350;
	} else
		goto tr2350;
	goto st0;
tr2354:
	{ expr_open_parens--; }
	goto st1067;
st1067:
	if ( ++p == pe )
		goto _test_eof1067;
case 1067:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2350;
		case 65555: goto tr2351;
		case 131091: goto tr2353;
		case 131109: goto tr2354;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2350;
		} else if ( _widec >= 15 )
			goto tr2350;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2350;
		} else if ( _widec >= 38 )
			goto tr2350;
	} else
		goto tr2350;
	goto st0;
tr2339:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1068;
tr2340:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1068;
tr2357:
	{ expr_open_parens++; }
	goto st1068;
st1068:
	if ( ++p == pe )
		goto _test_eof1068;
case 1068:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1061;
		case 5: goto st1061;
		case 8: goto st1061;
		case 13: goto st1068;
		case 18: goto tr2357;
		case 21: goto st1068;
		case 23: goto st1068;
		case 36: goto tr2357;
		case 44: goto st1068;
	}
	goto st0;
st1069:
	if ( ++p == pe )
		goto _test_eof1069;
case 1069:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2358;
	goto st0;
st1070:
	if ( ++p == pe )
		goto _test_eof1070;
case 1070:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2359;
	goto st0;
st1071:
	if ( ++p == pe )
		goto _test_eof1071;
case 1071:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1072;
		case 53: goto st1073;
		case 54: goto st1074;
		case 55: goto st1075;
		case 56: goto st1076;
		case 59: goto st1077;
		case 62: goto st1078;
		case 79: goto st1079;
		case 80: goto st1080;
		case 81: goto st1090;
	}
	goto st0;
st1072:
	if ( ++p == pe )
		goto _test_eof1072;
case 1072:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2370;
	goto st0;
st1073:
	if ( ++p == pe )
		goto _test_eof1073;
case 1073:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2371;
	goto st0;
st1074:
	if ( ++p == pe )
		goto _test_eof1074;
case 1074:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2372;
	goto st0;
st1075:
	if ( ++p == pe )
		goto _test_eof1075;
case 1075:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2373;
	goto st0;
st1076:
	if ( ++p == pe )
		goto _test_eof1076;
case 1076:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2374;
	goto st0;
st1077:
	if ( ++p == pe )
		goto _test_eof1077;
case 1077:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2375;
	goto st0;
st1078:
	if ( ++p == pe )
		goto _test_eof1078;
case 1078:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2376;
	goto st0;
st1079:
	if ( ++p == pe )
		goto _test_eof1079;
case 1079:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2377;
	goto st0;
st1080:
	if ( ++p == pe )
		goto _test_eof1080;
case 1080:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2378;
		case 5: goto tr2378;
		case 8: goto tr2378;
		case 18: goto tr2380;
		case 19: goto st1089;
		case 21: goto tr2379;
		case 23: goto tr2379;
		case 36: goto tr2380;
		case 44: goto tr2379;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2379;
	goto st0;
tr2378:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1081;
st1081:
	if ( ++p == pe )
		goto _test_eof1081;
case 1081:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1082;
		case 65555: goto tr2383;
		case 131091: goto tr2384;
		case 131109: goto st1087;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1082;
		} else if ( _widec >= 15 )
			goto st1082;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1082;
		} else if ( _widec >= 38 )
			goto st1082;
	} else
		goto st1082;
	goto st0;
tr2387:
	{ expr_open_parens++; }
	goto st1082;
tr2390:
	{ expr_open_parens--; }
	goto st1082;
st1082:
	if ( ++p == pe )
		goto _test_eof1082;
case 1082:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1083;
		case 5: goto st1083;
		case 8: goto st1083;
		case 13: goto st1082;
		case 18: goto tr2387;
		case 21: goto st1082;
		case 23: goto st1082;
		case 36: goto tr2387;
		case 44: goto st1082;
	}
	goto st0;
st1083:
	if ( ++p == pe )
		goto _test_eof1083;
case 1083:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1082;
		case 65555: goto tr2383;
		case 131091: goto st1085;
		case 131109: goto st1085;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1082;
		} else if ( _widec >= 15 )
			goto st1082;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1082;
		} else if ( _widec >= 38 )
			goto st1082;
	} else
		goto st1082;
	goto st0;
tr2383:
	{ push_expr(expr_start, p); }
	goto st1084;
tr2391:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1084;
st1084:
	if ( ++p == pe )
		goto _test_eof1084;
case 1084:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2389;
	goto st0;
tr2392:
	{ expr_open_parens--; }
	goto st1085;
st1085:
	if ( ++p == pe )
		goto _test_eof1085;
case 1085:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2390;
		case 65555: goto tr2391;
		case 131091: goto tr2392;
		case 131109: goto tr2392;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2390;
		} else if ( _widec >= 15 )
			goto tr2390;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2390;
		} else if ( _widec >= 38 )
			goto tr2390;
	} else
		goto tr2390;
	goto st0;
tr2384:
	{ push_expr(expr_start, p); }
	goto st1086;
tr2393:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1086;
st1086:
	if ( ++p == pe )
		goto _test_eof1086;
case 1086:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2389;
		case 23: goto tr2390;
		case 65555: goto tr2391;
		case 131091: goto tr2393;
		case 131109: goto tr2394;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2390;
		} else if ( _widec >= 15 )
			goto tr2390;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2390;
		} else if ( _widec >= 38 )
			goto tr2390;
	} else
		goto tr2390;
	goto st0;
tr2394:
	{ expr_open_parens--; }
	goto st1087;
st1087:
	if ( ++p == pe )
		goto _test_eof1087;
case 1087:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2390;
		case 65555: goto tr2391;
		case 131091: goto tr2393;
		case 131109: goto tr2394;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2390;
		} else if ( _widec >= 15 )
			goto tr2390;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2390;
		} else if ( _widec >= 38 )
			goto tr2390;
	} else
		goto tr2390;
	goto st0;
tr2379:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1088;
tr2380:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1088;
tr2397:
	{ expr_open_parens++; }
	goto st1088;
st1088:
	if ( ++p == pe )
		goto _test_eof1088;
case 1088:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1081;
		case 5: goto st1081;
		case 8: goto st1081;
		case 13: goto st1088;
		case 18: goto tr2397;
		case 21: goto st1088;
		case 23: goto st1088;
		case 36: goto tr2397;
		case 44: goto st1088;
	}
	goto st0;
st1089:
	if ( ++p == pe )
		goto _test_eof1089;
case 1089:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2398;
	goto st0;
st1090:
	if ( ++p == pe )
		goto _test_eof1090;
case 1090:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2399;
		case 5: goto tr2399;
		case 8: goto tr2399;
		case 18: goto tr2401;
		case 19: goto st1099;
		case 21: goto tr2400;
		case 23: goto tr2400;
		case 36: goto tr2401;
		case 44: goto tr2400;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2400;
	goto st0;
tr2399:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1091;
st1091:
	if ( ++p == pe )
		goto _test_eof1091;
case 1091:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1092;
		case 65555: goto tr2404;
		case 131091: goto tr2405;
		case 131109: goto st1097;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1092;
		} else if ( _widec >= 15 )
			goto st1092;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1092;
		} else if ( _widec >= 38 )
			goto st1092;
	} else
		goto st1092;
	goto st0;
tr2408:
	{ expr_open_parens++; }
	goto st1092;
tr2411:
	{ expr_open_parens--; }
	goto st1092;
st1092:
	if ( ++p == pe )
		goto _test_eof1092;
case 1092:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1093;
		case 5: goto st1093;
		case 8: goto st1093;
		case 13: goto st1092;
		case 18: goto tr2408;
		case 21: goto st1092;
		case 23: goto st1092;
		case 36: goto tr2408;
		case 44: goto st1092;
	}
	goto st0;
st1093:
	if ( ++p == pe )
		goto _test_eof1093;
case 1093:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1092;
		case 65555: goto tr2404;
		case 131091: goto st1095;
		case 131109: goto st1095;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1092;
		} else if ( _widec >= 15 )
			goto st1092;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1092;
		} else if ( _widec >= 38 )
			goto st1092;
	} else
		goto st1092;
	goto st0;
tr2404:
	{ push_expr(expr_start, p); }
	goto st1094;
tr2412:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1094;
st1094:
	if ( ++p == pe )
		goto _test_eof1094;
case 1094:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2410;
	goto st0;
tr2413:
	{ expr_open_parens--; }
	goto st1095;
st1095:
	if ( ++p == pe )
		goto _test_eof1095;
case 1095:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2411;
		case 65555: goto tr2412;
		case 131091: goto tr2413;
		case 131109: goto tr2413;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2411;
		} else if ( _widec >= 15 )
			goto tr2411;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2411;
		} else if ( _widec >= 38 )
			goto tr2411;
	} else
		goto tr2411;
	goto st0;
tr2405:
	{ push_expr(expr_start, p); }
	goto st1096;
tr2414:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1096;
st1096:
	if ( ++p == pe )
		goto _test_eof1096;
case 1096:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2410;
		case 23: goto tr2411;
		case 65555: goto tr2412;
		case 131091: goto tr2414;
		case 131109: goto tr2415;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2411;
		} else if ( _widec >= 15 )
			goto tr2411;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2411;
		} else if ( _widec >= 38 )
			goto tr2411;
	} else
		goto tr2411;
	goto st0;
tr2415:
	{ expr_open_parens--; }
	goto st1097;
st1097:
	if ( ++p == pe )
		goto _test_eof1097;
case 1097:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2411;
		case 65555: goto tr2412;
		case 131091: goto tr2414;
		case 131109: goto tr2415;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2411;
		} else if ( _widec >= 15 )
			goto tr2411;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2411;
		} else if ( _widec >= 38 )
			goto tr2411;
	} else
		goto tr2411;
	goto st0;
tr2400:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1098;
tr2401:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1098;
tr2418:
	{ expr_open_parens++; }
	goto st1098;
st1098:
	if ( ++p == pe )
		goto _test_eof1098;
case 1098:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1091;
		case 5: goto st1091;
		case 8: goto st1091;
		case 13: goto st1098;
		case 18: goto tr2418;
		case 21: goto st1098;
		case 23: goto st1098;
		case 36: goto tr2418;
		case 44: goto st1098;
	}
	goto st0;
st1099:
	if ( ++p == pe )
		goto _test_eof1099;
case 1099:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2419;
	goto st0;
st1100:
	if ( ++p == pe )
		goto _test_eof1100;
case 1100:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2420;
	goto st0;
st1101:
	if ( ++p == pe )
		goto _test_eof1101;
case 1101:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2421;
	goto st0;
st1102:
	if ( ++p == pe )
		goto _test_eof1102;
case 1102:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1103;
		case 53: goto st1104;
		case 54: goto st1105;
		case 55: goto st1106;
		case 56: goto st1107;
		case 59: goto st1108;
		case 62: goto st1109;
		case 79: goto st1110;
		case 80: goto st1111;
		case 81: goto st1121;
	}
	goto st0;
st1103:
	if ( ++p == pe )
		goto _test_eof1103;
case 1103:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2432;
	goto st0;
st1104:
	if ( ++p == pe )
		goto _test_eof1104;
case 1104:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2433;
	goto st0;
st1105:
	if ( ++p == pe )
		goto _test_eof1105;
case 1105:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2434;
	goto st0;
st1106:
	if ( ++p == pe )
		goto _test_eof1106;
case 1106:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2435;
	goto st0;
st1107:
	if ( ++p == pe )
		goto _test_eof1107;
case 1107:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2436;
	goto st0;
st1108:
	if ( ++p == pe )
		goto _test_eof1108;
case 1108:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2437;
	goto st0;
st1109:
	if ( ++p == pe )
		goto _test_eof1109;
case 1109:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2438;
	goto st0;
st1110:
	if ( ++p == pe )
		goto _test_eof1110;
case 1110:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2439;
	goto st0;
st1111:
	if ( ++p == pe )
		goto _test_eof1111;
case 1111:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2440;
		case 5: goto tr2440;
		case 8: goto tr2440;
		case 18: goto tr2442;
		case 19: goto st1120;
		case 21: goto tr2441;
		case 23: goto tr2441;
		case 36: goto tr2442;
		case 44: goto tr2441;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2441;
	goto st0;
tr2440:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1112;
st1112:
	if ( ++p == pe )
		goto _test_eof1112;
case 1112:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1113;
		case 65555: goto tr2445;
		case 131091: goto tr2446;
		case 131109: goto st1118;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1113;
		} else if ( _widec >= 15 )
			goto st1113;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1113;
		} else if ( _widec >= 38 )
			goto st1113;
	} else
		goto st1113;
	goto st0;
tr2449:
	{ expr_open_parens++; }
	goto st1113;
tr2452:
	{ expr_open_parens--; }
	goto st1113;
st1113:
	if ( ++p == pe )
		goto _test_eof1113;
case 1113:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1114;
		case 5: goto st1114;
		case 8: goto st1114;
		case 13: goto st1113;
		case 18: goto tr2449;
		case 21: goto st1113;
		case 23: goto st1113;
		case 36: goto tr2449;
		case 44: goto st1113;
	}
	goto st0;
st1114:
	if ( ++p == pe )
		goto _test_eof1114;
case 1114:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1113;
		case 65555: goto tr2445;
		case 131091: goto st1116;
		case 131109: goto st1116;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1113;
		} else if ( _widec >= 15 )
			goto st1113;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1113;
		} else if ( _widec >= 38 )
			goto st1113;
	} else
		goto st1113;
	goto st0;
tr2445:
	{ push_expr(expr_start, p); }
	goto st1115;
tr2453:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1115;
st1115:
	if ( ++p == pe )
		goto _test_eof1115;
case 1115:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2451;
	goto st0;
tr2454:
	{ expr_open_parens--; }
	goto st1116;
st1116:
	if ( ++p == pe )
		goto _test_eof1116;
case 1116:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2452;
		case 65555: goto tr2453;
		case 131091: goto tr2454;
		case 131109: goto tr2454;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2452;
		} else if ( _widec >= 15 )
			goto tr2452;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2452;
		} else if ( _widec >= 38 )
			goto tr2452;
	} else
		goto tr2452;
	goto st0;
tr2446:
	{ push_expr(expr_start, p); }
	goto st1117;
tr2455:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1117;
st1117:
	if ( ++p == pe )
		goto _test_eof1117;
case 1117:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2451;
		case 23: goto tr2452;
		case 65555: goto tr2453;
		case 131091: goto tr2455;
		case 131109: goto tr2456;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2452;
		} else if ( _widec >= 15 )
			goto tr2452;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2452;
		} else if ( _widec >= 38 )
			goto tr2452;
	} else
		goto tr2452;
	goto st0;
tr2456:
	{ expr_open_parens--; }
	goto st1118;
st1118:
	if ( ++p == pe )
		goto _test_eof1118;
case 1118:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2452;
		case 65555: goto tr2453;
		case 131091: goto tr2455;
		case 131109: goto tr2456;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2452;
		} else if ( _widec >= 15 )
			goto tr2452;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2452;
		} else if ( _widec >= 38 )
			goto tr2452;
	} else
		goto tr2452;
	goto st0;
tr2441:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1119;
tr2442:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1119;
tr2459:
	{ expr_open_parens++; }
	goto st1119;
st1119:
	if ( ++p == pe )
		goto _test_eof1119;
case 1119:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1112;
		case 5: goto st1112;
		case 8: goto st1112;
		case 13: goto st1119;
		case 18: goto tr2459;
		case 21: goto st1119;
		case 23: goto st1119;
		case 36: goto tr2459;
		case 44: goto st1119;
	}
	goto st0;
st1120:
	if ( ++p == pe )
		goto _test_eof1120;
case 1120:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2460;
	goto st0;
st1121:
	if ( ++p == pe )
		goto _test_eof1121;
case 1121:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2461;
		case 5: goto tr2461;
		case 8: goto tr2461;
		case 18: goto tr2463;
		case 19: goto st1130;
		case 21: goto tr2462;
		case 23: goto tr2462;
		case 36: goto tr2463;
		case 44: goto tr2462;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2462;
	goto st0;
tr2461:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1122;
st1122:
	if ( ++p == pe )
		goto _test_eof1122;
case 1122:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1123;
		case 65555: goto tr2466;
		case 131091: goto tr2467;
		case 131109: goto st1128;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1123;
		} else if ( _widec >= 15 )
			goto st1123;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1123;
		} else if ( _widec >= 38 )
			goto st1123;
	} else
		goto st1123;
	goto st0;
tr2470:
	{ expr_open_parens++; }
	goto st1123;
tr2473:
	{ expr_open_parens--; }
	goto st1123;
st1123:
	if ( ++p == pe )
		goto _test_eof1123;
case 1123:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1124;
		case 5: goto st1124;
		case 8: goto st1124;
		case 13: goto st1123;
		case 18: goto tr2470;
		case 21: goto st1123;
		case 23: goto st1123;
		case 36: goto tr2470;
		case 44: goto st1123;
	}
	goto st0;
st1124:
	if ( ++p == pe )
		goto _test_eof1124;
case 1124:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1123;
		case 65555: goto tr2466;
		case 131091: goto st1126;
		case 131109: goto st1126;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1123;
		} else if ( _widec >= 15 )
			goto st1123;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1123;
		} else if ( _widec >= 38 )
			goto st1123;
	} else
		goto st1123;
	goto st0;
tr2466:
	{ push_expr(expr_start, p); }
	goto st1125;
tr2474:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1125;
st1125:
	if ( ++p == pe )
		goto _test_eof1125;
case 1125:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2472;
	goto st0;
tr2475:
	{ expr_open_parens--; }
	goto st1126;
st1126:
	if ( ++p == pe )
		goto _test_eof1126;
case 1126:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2473;
		case 65555: goto tr2474;
		case 131091: goto tr2475;
		case 131109: goto tr2475;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2473;
		} else if ( _widec >= 15 )
			goto tr2473;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2473;
		} else if ( _widec >= 38 )
			goto tr2473;
	} else
		goto tr2473;
	goto st0;
tr2467:
	{ push_expr(expr_start, p); }
	goto st1127;
tr2476:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1127;
st1127:
	if ( ++p == pe )
		goto _test_eof1127;
case 1127:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2472;
		case 23: goto tr2473;
		case 65555: goto tr2474;
		case 131091: goto tr2476;
		case 131109: goto tr2477;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2473;
		} else if ( _widec >= 15 )
			goto tr2473;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2473;
		} else if ( _widec >= 38 )
			goto tr2473;
	} else
		goto tr2473;
	goto st0;
tr2477:
	{ expr_open_parens--; }
	goto st1128;
st1128:
	if ( ++p == pe )
		goto _test_eof1128;
case 1128:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2473;
		case 65555: goto tr2474;
		case 131091: goto tr2476;
		case 131109: goto tr2477;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2473;
		} else if ( _widec >= 15 )
			goto tr2473;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2473;
		} else if ( _widec >= 38 )
			goto tr2473;
	} else
		goto tr2473;
	goto st0;
tr2462:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1129;
tr2463:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1129;
tr2480:
	{ expr_open_parens++; }
	goto st1129;
st1129:
	if ( ++p == pe )
		goto _test_eof1129;
case 1129:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1122;
		case 5: goto st1122;
		case 8: goto st1122;
		case 13: goto st1129;
		case 18: goto tr2480;
		case 21: goto st1129;
		case 23: goto st1129;
		case 36: goto tr2480;
		case 44: goto st1129;
	}
	goto st0;
st1130:
	if ( ++p == pe )
		goto _test_eof1130;
case 1130:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2481;
	goto st0;
st1131:
	if ( ++p == pe )
		goto _test_eof1131;
case 1131:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2482;
	goto st0;
st1132:
	if ( ++p == pe )
		goto _test_eof1132;
case 1132:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1133;
		case 53: goto st1134;
		case 54: goto st1135;
		case 55: goto st1136;
		case 56: goto st1137;
		case 59: goto st1138;
		case 62: goto st1139;
		case 79: goto st1140;
		case 80: goto st1141;
		case 81: goto st1151;
	}
	goto st0;
st1133:
	if ( ++p == pe )
		goto _test_eof1133;
case 1133:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2493;
	goto st0;
st1134:
	if ( ++p == pe )
		goto _test_eof1134;
case 1134:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2494;
	goto st0;
st1135:
	if ( ++p == pe )
		goto _test_eof1135;
case 1135:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2495;
	goto st0;
st1136:
	if ( ++p == pe )
		goto _test_eof1136;
case 1136:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2496;
	goto st0;
st1137:
	if ( ++p == pe )
		goto _test_eof1137;
case 1137:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2497;
	goto st0;
st1138:
	if ( ++p == pe )
		goto _test_eof1138;
case 1138:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2498;
	goto st0;
st1139:
	if ( ++p == pe )
		goto _test_eof1139;
case 1139:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2499;
	goto st0;
st1140:
	if ( ++p == pe )
		goto _test_eof1140;
case 1140:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2500;
	goto st0;
st1141:
	if ( ++p == pe )
		goto _test_eof1141;
case 1141:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2501;
		case 5: goto tr2501;
		case 8: goto tr2501;
		case 18: goto tr2503;
		case 19: goto st1150;
		case 21: goto tr2502;
		case 23: goto tr2502;
		case 36: goto tr2503;
		case 44: goto tr2502;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2502;
	goto st0;
tr2501:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1142;
st1142:
	if ( ++p == pe )
		goto _test_eof1142;
case 1142:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1143;
		case 65555: goto tr2506;
		case 131091: goto tr2507;
		case 131109: goto st1148;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1143;
		} else if ( _widec >= 15 )
			goto st1143;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1143;
		} else if ( _widec >= 38 )
			goto st1143;
	} else
		goto st1143;
	goto st0;
tr2510:
	{ expr_open_parens++; }
	goto st1143;
tr2513:
	{ expr_open_parens--; }
	goto st1143;
st1143:
	if ( ++p == pe )
		goto _test_eof1143;
case 1143:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1144;
		case 5: goto st1144;
		case 8: goto st1144;
		case 13: goto st1143;
		case 18: goto tr2510;
		case 21: goto st1143;
		case 23: goto st1143;
		case 36: goto tr2510;
		case 44: goto st1143;
	}
	goto st0;
st1144:
	if ( ++p == pe )
		goto _test_eof1144;
case 1144:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1143;
		case 65555: goto tr2506;
		case 131091: goto st1146;
		case 131109: goto st1146;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1143;
		} else if ( _widec >= 15 )
			goto st1143;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1143;
		} else if ( _widec >= 38 )
			goto st1143;
	} else
		goto st1143;
	goto st0;
tr2506:
	{ push_expr(expr_start, p); }
	goto st1145;
tr2514:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1145;
st1145:
	if ( ++p == pe )
		goto _test_eof1145;
case 1145:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2512;
	goto st0;
tr2515:
	{ expr_open_parens--; }
	goto st1146;
st1146:
	if ( ++p == pe )
		goto _test_eof1146;
case 1146:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2513;
		case 65555: goto tr2514;
		case 131091: goto tr2515;
		case 131109: goto tr2515;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2513;
		} else if ( _widec >= 15 )
			goto tr2513;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2513;
		} else if ( _widec >= 38 )
			goto tr2513;
	} else
		goto tr2513;
	goto st0;
tr2507:
	{ push_expr(expr_start, p); }
	goto st1147;
tr2516:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1147;
st1147:
	if ( ++p == pe )
		goto _test_eof1147;
case 1147:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2512;
		case 23: goto tr2513;
		case 65555: goto tr2514;
		case 131091: goto tr2516;
		case 131109: goto tr2517;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2513;
		} else if ( _widec >= 15 )
			goto tr2513;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2513;
		} else if ( _widec >= 38 )
			goto tr2513;
	} else
		goto tr2513;
	goto st0;
tr2517:
	{ expr_open_parens--; }
	goto st1148;
st1148:
	if ( ++p == pe )
		goto _test_eof1148;
case 1148:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2513;
		case 65555: goto tr2514;
		case 131091: goto tr2516;
		case 131109: goto tr2517;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2513;
		} else if ( _widec >= 15 )
			goto tr2513;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2513;
		} else if ( _widec >= 38 )
			goto tr2513;
	} else
		goto tr2513;
	goto st0;
tr2502:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1149;
tr2503:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1149;
tr2520:
	{ expr_open_parens++; }
	goto st1149;
st1149:
	if ( ++p == pe )
		goto _test_eof1149;
case 1149:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1142;
		case 5: goto st1142;
		case 8: goto st1142;
		case 13: goto st1149;
		case 18: goto tr2520;
		case 21: goto st1149;
		case 23: goto st1149;
		case 36: goto tr2520;
		case 44: goto st1149;
	}
	goto st0;
st1150:
	if ( ++p == pe )
		goto _test_eof1150;
case 1150:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2521;
	goto st0;
st1151:
	if ( ++p == pe )
		goto _test_eof1151;
case 1151:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2522;
		case 5: goto tr2522;
		case 8: goto tr2522;
		case 18: goto tr2524;
		case 19: goto st1160;
		case 21: goto tr2523;
		case 23: goto tr2523;
		case 36: goto tr2524;
		case 44: goto tr2523;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2523;
	goto st0;
tr2522:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1152;
st1152:
	if ( ++p == pe )
		goto _test_eof1152;
case 1152:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1153;
		case 65555: goto tr2527;
		case 131091: goto tr2528;
		case 131109: goto st1158;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1153;
		} else if ( _widec >= 15 )
			goto st1153;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1153;
		} else if ( _widec >= 38 )
			goto st1153;
	} else
		goto st1153;
	goto st0;
tr2531:
	{ expr_open_parens++; }
	goto st1153;
tr2534:
	{ expr_open_parens--; }
	goto st1153;
st1153:
	if ( ++p == pe )
		goto _test_eof1153;
case 1153:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1154;
		case 5: goto st1154;
		case 8: goto st1154;
		case 13: goto st1153;
		case 18: goto tr2531;
		case 21: goto st1153;
		case 23: goto st1153;
		case 36: goto tr2531;
		case 44: goto st1153;
	}
	goto st0;
st1154:
	if ( ++p == pe )
		goto _test_eof1154;
case 1154:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1153;
		case 65555: goto tr2527;
		case 131091: goto st1156;
		case 131109: goto st1156;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1153;
		} else if ( _widec >= 15 )
			goto st1153;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1153;
		} else if ( _widec >= 38 )
			goto st1153;
	} else
		goto st1153;
	goto st0;
tr2527:
	{ push_expr(expr_start, p); }
	goto st1155;
tr2535:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1155;
st1155:
	if ( ++p == pe )
		goto _test_eof1155;
case 1155:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2533;
	goto st0;
tr2536:
	{ expr_open_parens--; }
	goto st1156;
st1156:
	if ( ++p == pe )
		goto _test_eof1156;
case 1156:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2534;
		case 65555: goto tr2535;
		case 131091: goto tr2536;
		case 131109: goto tr2536;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2534;
		} else if ( _widec >= 15 )
			goto tr2534;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2534;
		} else if ( _widec >= 38 )
			goto tr2534;
	} else
		goto tr2534;
	goto st0;
tr2528:
	{ push_expr(expr_start, p); }
	goto st1157;
tr2537:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1157;
st1157:
	if ( ++p == pe )
		goto _test_eof1157;
case 1157:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2533;
		case 23: goto tr2534;
		case 65555: goto tr2535;
		case 131091: goto tr2537;
		case 131109: goto tr2538;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2534;
		} else if ( _widec >= 15 )
			goto tr2534;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2534;
		} else if ( _widec >= 38 )
			goto tr2534;
	} else
		goto tr2534;
	goto st0;
tr2538:
	{ expr_open_parens--; }
	goto st1158;
st1158:
	if ( ++p == pe )
		goto _test_eof1158;
case 1158:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2534;
		case 65555: goto tr2535;
		case 131091: goto tr2537;
		case 131109: goto tr2538;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2534;
		} else if ( _widec >= 15 )
			goto tr2534;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2534;
		} else if ( _widec >= 38 )
			goto tr2534;
	} else
		goto tr2534;
	goto st0;
tr2523:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1159;
tr2524:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1159;
tr2541:
	{ expr_open_parens++; }
	goto st1159;
st1159:
	if ( ++p == pe )
		goto _test_eof1159;
case 1159:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1152;
		case 5: goto st1152;
		case 8: goto st1152;
		case 13: goto st1159;
		case 18: goto tr2541;
		case 21: goto st1159;
		case 23: goto st1159;
		case 36: goto tr2541;
		case 44: goto st1159;
	}
	goto st0;
st1160:
	if ( ++p == pe )
		goto _test_eof1160;
case 1160:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2542;
	goto st0;
st1161:
	if ( ++p == pe )
		goto _test_eof1161;
case 1161:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2543;
	goto st0;
st1162:
	if ( ++p == pe )
		goto _test_eof1162;
case 1162:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2544;
	goto st0;
st1163:
	if ( ++p == pe )
		goto _test_eof1163;
case 1163:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2545;
		case 5: goto tr2545;
		case 8: goto tr2545;
		case 18: goto tr2547;
		case 21: goto tr2546;
		case 23: goto tr2546;
		case 36: goto tr2547;
		case 44: goto tr2546;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2546;
	goto st0;
tr2545:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1164;
st1164:
	if ( ++p == pe )
		goto _test_eof1164;
case 1164:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2548;
		case 23: goto st1165;
		case 131091: goto st1166;
		case 131109: goto st1166;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1165;
		} else if ( _widec >= 15 )
			goto st1165;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1165;
		} else if ( _widec >= 38 )
			goto st1165;
	} else
		goto st1165;
	goto st0;
tr2546:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1165;
tr2547:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1165;
tr2552:
	{ expr_open_parens++; }
	goto st1165;
tr2554:
	{ expr_open_parens--; }
	goto st1165;
st1165:
	if ( ++p == pe )
		goto _test_eof1165;
case 1165:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1164;
		case 5: goto st1164;
		case 8: goto st1164;
		case 13: goto st1165;
		case 18: goto tr2552;
		case 21: goto st1165;
		case 23: goto st1165;
		case 36: goto tr2552;
		case 44: goto st1165;
	}
	goto st0;
tr2555:
	{ expr_open_parens--; }
	goto st1166;
st1166:
	if ( ++p == pe )
		goto _test_eof1166;
case 1166:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2553;
		case 23: goto tr2554;
		case 131091: goto tr2555;
		case 131109: goto tr2555;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2554;
		} else if ( _widec >= 15 )
			goto tr2554;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2554;
		} else if ( _widec >= 38 )
			goto tr2554;
	} else
		goto tr2554;
	goto st0;
st1167:
	if ( ++p == pe )
		goto _test_eof1167;
case 1167:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2556;
		case 5: goto tr2556;
		case 8: goto tr2556;
		case 18: goto tr2558;
		case 21: goto tr2557;
		case 23: goto tr2557;
		case 36: goto tr2558;
		case 44: goto tr2557;
		case 48: goto st1171;
		case 53: goto st1172;
		case 54: goto st1173;
		case 55: goto st1174;
		case 56: goto st1175;
		case 57: goto st1176;
		case 58: goto st1177;
		case 59: goto st1178;
		case 60: goto st1179;
		case 61: goto st1180;
		case 62: goto st1181;
		case 71: goto st1205;
		case 79: goto st1184;
		case 80: goto st1185;
		case 81: goto st1195;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2557;
	goto st0;
tr2556:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1168;
st1168:
	if ( ++p == pe )
		goto _test_eof1168;
case 1168:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2574;
		case 23: goto st1169;
		case 131091: goto st1170;
		case 131109: goto st1170;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1169;
		} else if ( _widec >= 15 )
			goto st1169;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1169;
		} else if ( _widec >= 38 )
			goto st1169;
	} else
		goto st1169;
	goto st0;
tr2557:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1169;
tr2558:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1169;
tr2578:
	{ expr_open_parens++; }
	goto st1169;
tr2580:
	{ expr_open_parens--; }
	goto st1169;
st1169:
	if ( ++p == pe )
		goto _test_eof1169;
case 1169:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1168;
		case 5: goto st1168;
		case 8: goto st1168;
		case 13: goto st1169;
		case 18: goto tr2578;
		case 21: goto st1169;
		case 23: goto st1169;
		case 36: goto tr2578;
		case 44: goto st1169;
	}
	goto st0;
tr2581:
	{ expr_open_parens--; }
	goto st1170;
st1170:
	if ( ++p == pe )
		goto _test_eof1170;
case 1170:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2579;
		case 23: goto tr2580;
		case 131091: goto tr2581;
		case 131109: goto tr2581;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2580;
		} else if ( _widec >= 15 )
			goto tr2580;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2580;
		} else if ( _widec >= 38 )
			goto tr2580;
	} else
		goto tr2580;
	goto st0;
st1171:
	if ( ++p == pe )
		goto _test_eof1171;
case 1171:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2582;
	goto st0;
st1172:
	if ( ++p == pe )
		goto _test_eof1172;
case 1172:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2583;
	goto st0;
st1173:
	if ( ++p == pe )
		goto _test_eof1173;
case 1173:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2584;
	goto st0;
st1174:
	if ( ++p == pe )
		goto _test_eof1174;
case 1174:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2585;
	goto st0;
st1175:
	if ( ++p == pe )
		goto _test_eof1175;
case 1175:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2586;
	goto st0;
st1176:
	if ( ++p == pe )
		goto _test_eof1176;
case 1176:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2587;
	goto st0;
st1177:
	if ( ++p == pe )
		goto _test_eof1177;
case 1177:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2588;
	goto st0;
st1178:
	if ( ++p == pe )
		goto _test_eof1178;
case 1178:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2589;
	goto st0;
st1179:
	if ( ++p == pe )
		goto _test_eof1179;
case 1179:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2590;
	goto st0;
st1180:
	if ( ++p == pe )
		goto _test_eof1180;
case 1180:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2591;
	goto st0;
st1181:
	if ( ++p == pe )
		goto _test_eof1181;
case 1181:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2592;
		case 22: goto st1182;
	}
	goto st0;
st1182:
	if ( ++p == pe )
		goto _test_eof1182;
case 1182:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2556;
		case 5: goto tr2556;
		case 8: goto tr2556;
		case 18: goto tr2558;
		case 21: goto tr2557;
		case 23: goto tr2557;
		case 36: goto tr2558;
		case 44: goto tr2557;
		case 48: goto st1171;
		case 53: goto st1172;
		case 54: goto st1173;
		case 55: goto st1174;
		case 56: goto st1175;
		case 57: goto st1176;
		case 58: goto st1177;
		case 59: goto st1178;
		case 60: goto st1179;
		case 61: goto st1180;
		case 62: goto st1183;
		case 79: goto st1184;
		case 80: goto st1185;
		case 81: goto st1195;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2557;
	goto st0;
st1183:
	if ( ++p == pe )
		goto _test_eof1183;
case 1183:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2592;
	goto st0;
st1184:
	if ( ++p == pe )
		goto _test_eof1184;
case 1184:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2595;
	goto st0;
st1185:
	if ( ++p == pe )
		goto _test_eof1185;
case 1185:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2596;
		case 5: goto tr2596;
		case 8: goto tr2596;
		case 18: goto tr2598;
		case 19: goto st1194;
		case 21: goto tr2597;
		case 23: goto tr2597;
		case 36: goto tr2598;
		case 44: goto tr2597;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2597;
	goto st0;
tr2596:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1186;
st1186:
	if ( ++p == pe )
		goto _test_eof1186;
case 1186:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1187;
		case 65555: goto tr2601;
		case 131091: goto tr2602;
		case 131109: goto st1192;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1187;
		} else if ( _widec >= 15 )
			goto st1187;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1187;
		} else if ( _widec >= 38 )
			goto st1187;
	} else
		goto st1187;
	goto st0;
tr2605:
	{ expr_open_parens++; }
	goto st1187;
tr2608:
	{ expr_open_parens--; }
	goto st1187;
st1187:
	if ( ++p == pe )
		goto _test_eof1187;
case 1187:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1188;
		case 5: goto st1188;
		case 8: goto st1188;
		case 13: goto st1187;
		case 18: goto tr2605;
		case 21: goto st1187;
		case 23: goto st1187;
		case 36: goto tr2605;
		case 44: goto st1187;
	}
	goto st0;
st1188:
	if ( ++p == pe )
		goto _test_eof1188;
case 1188:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1187;
		case 65555: goto tr2601;
		case 131091: goto st1190;
		case 131109: goto st1190;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1187;
		} else if ( _widec >= 15 )
			goto st1187;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1187;
		} else if ( _widec >= 38 )
			goto st1187;
	} else
		goto st1187;
	goto st0;
tr2601:
	{ push_expr(expr_start, p); }
	goto st1189;
tr2609:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1189;
st1189:
	if ( ++p == pe )
		goto _test_eof1189;
case 1189:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2607;
	goto st0;
tr2610:
	{ expr_open_parens--; }
	goto st1190;
st1190:
	if ( ++p == pe )
		goto _test_eof1190;
case 1190:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2608;
		case 65555: goto tr2609;
		case 131091: goto tr2610;
		case 131109: goto tr2610;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2608;
		} else if ( _widec >= 15 )
			goto tr2608;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2608;
		} else if ( _widec >= 38 )
			goto tr2608;
	} else
		goto tr2608;
	goto st0;
tr2602:
	{ push_expr(expr_start, p); }
	goto st1191;
tr2611:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1191;
st1191:
	if ( ++p == pe )
		goto _test_eof1191;
case 1191:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2607;
		case 23: goto tr2608;
		case 65555: goto tr2609;
		case 131091: goto tr2611;
		case 131109: goto tr2612;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2608;
		} else if ( _widec >= 15 )
			goto tr2608;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2608;
		} else if ( _widec >= 38 )
			goto tr2608;
	} else
		goto tr2608;
	goto st0;
tr2612:
	{ expr_open_parens--; }
	goto st1192;
st1192:
	if ( ++p == pe )
		goto _test_eof1192;
case 1192:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2608;
		case 65555: goto tr2609;
		case 131091: goto tr2611;
		case 131109: goto tr2612;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2608;
		} else if ( _widec >= 15 )
			goto tr2608;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2608;
		} else if ( _widec >= 38 )
			goto tr2608;
	} else
		goto tr2608;
	goto st0;
tr2597:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1193;
tr2598:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1193;
tr2615:
	{ expr_open_parens++; }
	goto st1193;
st1193:
	if ( ++p == pe )
		goto _test_eof1193;
case 1193:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1186;
		case 5: goto st1186;
		case 8: goto st1186;
		case 13: goto st1193;
		case 18: goto tr2615;
		case 21: goto st1193;
		case 23: goto st1193;
		case 36: goto tr2615;
		case 44: goto st1193;
	}
	goto st0;
st1194:
	if ( ++p == pe )
		goto _test_eof1194;
case 1194:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2616;
	goto st0;
st1195:
	if ( ++p == pe )
		goto _test_eof1195;
case 1195:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2617;
		case 5: goto tr2617;
		case 8: goto tr2617;
		case 18: goto tr2619;
		case 19: goto st1204;
		case 21: goto tr2618;
		case 23: goto tr2618;
		case 36: goto tr2619;
		case 44: goto tr2618;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2618;
	goto st0;
tr2617:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1196;
st1196:
	if ( ++p == pe )
		goto _test_eof1196;
case 1196:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1197;
		case 65555: goto tr2622;
		case 131091: goto tr2623;
		case 131109: goto st1202;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1197;
		} else if ( _widec >= 15 )
			goto st1197;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1197;
		} else if ( _widec >= 38 )
			goto st1197;
	} else
		goto st1197;
	goto st0;
tr2626:
	{ expr_open_parens++; }
	goto st1197;
tr2629:
	{ expr_open_parens--; }
	goto st1197;
st1197:
	if ( ++p == pe )
		goto _test_eof1197;
case 1197:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1198;
		case 5: goto st1198;
		case 8: goto st1198;
		case 13: goto st1197;
		case 18: goto tr2626;
		case 21: goto st1197;
		case 23: goto st1197;
		case 36: goto tr2626;
		case 44: goto st1197;
	}
	goto st0;
st1198:
	if ( ++p == pe )
		goto _test_eof1198;
case 1198:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1197;
		case 65555: goto tr2622;
		case 131091: goto st1200;
		case 131109: goto st1200;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1197;
		} else if ( _widec >= 15 )
			goto st1197;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1197;
		} else if ( _widec >= 38 )
			goto st1197;
	} else
		goto st1197;
	goto st0;
tr2622:
	{ push_expr(expr_start, p); }
	goto st1199;
tr2630:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1199;
st1199:
	if ( ++p == pe )
		goto _test_eof1199;
case 1199:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2628;
	goto st0;
tr2631:
	{ expr_open_parens--; }
	goto st1200;
st1200:
	if ( ++p == pe )
		goto _test_eof1200;
case 1200:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2629;
		case 65555: goto tr2630;
		case 131091: goto tr2631;
		case 131109: goto tr2631;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2629;
		} else if ( _widec >= 15 )
			goto tr2629;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2629;
		} else if ( _widec >= 38 )
			goto tr2629;
	} else
		goto tr2629;
	goto st0;
tr2623:
	{ push_expr(expr_start, p); }
	goto st1201;
tr2632:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1201;
st1201:
	if ( ++p == pe )
		goto _test_eof1201;
case 1201:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2628;
		case 23: goto tr2629;
		case 65555: goto tr2630;
		case 131091: goto tr2632;
		case 131109: goto tr2633;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2629;
		} else if ( _widec >= 15 )
			goto tr2629;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2629;
		} else if ( _widec >= 38 )
			goto tr2629;
	} else
		goto tr2629;
	goto st0;
tr2633:
	{ expr_open_parens--; }
	goto st1202;
st1202:
	if ( ++p == pe )
		goto _test_eof1202;
case 1202:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2629;
		case 65555: goto tr2630;
		case 131091: goto tr2632;
		case 131109: goto tr2633;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2629;
		} else if ( _widec >= 15 )
			goto tr2629;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2629;
		} else if ( _widec >= 38 )
			goto tr2629;
	} else
		goto tr2629;
	goto st0;
tr2618:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1203;
tr2619:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1203;
tr2636:
	{ expr_open_parens++; }
	goto st1203;
st1203:
	if ( ++p == pe )
		goto _test_eof1203;
case 1203:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1196;
		case 5: goto st1196;
		case 8: goto st1196;
		case 13: goto st1203;
		case 18: goto tr2636;
		case 21: goto st1203;
		case 23: goto st1203;
		case 36: goto tr2636;
		case 44: goto st1203;
	}
	goto st0;
st1204:
	if ( ++p == pe )
		goto _test_eof1204;
case 1204:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2637;
	goto st0;
st1205:
	if ( ++p == pe )
		goto _test_eof1205;
case 1205:
	if ( ( ((int) p->tok)) == 22 )
		goto st1206;
	goto st0;
st1206:
	if ( ++p == pe )
		goto _test_eof1206;
case 1206:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st1207;
		case 70: goto st1208;
		case 71: goto st1209;
		case 75: goto st1210;
	}
	goto st0;
st1207:
	if ( ++p == pe )
		goto _test_eof1207;
case 1207:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2643;
	goto st0;
st1208:
	if ( ++p == pe )
		goto _test_eof1208;
case 1208:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2644;
	goto st0;
st1209:
	if ( ++p == pe )
		goto _test_eof1209;
case 1209:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2645;
	goto st0;
st1210:
	if ( ++p == pe )
		goto _test_eof1210;
case 1210:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2646;
	goto st0;
st1211:
	if ( ++p == pe )
		goto _test_eof1211;
case 1211:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2647;
	goto st0;
st1212:
	if ( ++p == pe )
		goto _test_eof1212;
case 1212:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2648;
		case 5: goto tr2648;
		case 8: goto tr2648;
		case 18: goto tr2650;
		case 21: goto tr2649;
		case 23: goto tr2649;
		case 36: goto tr2650;
		case 44: goto tr2649;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2649;
	goto st0;
tr2648:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1213;
st1213:
	if ( ++p == pe )
		goto _test_eof1213;
case 1213:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2652;
		case 131091: goto st1244;
		case 131109: goto st1244;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st1214;
		} else if ( _widec >= 15 )
			goto st1214;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1214;
		} else if ( _widec >= 38 )
			goto st1214;
	} else
		goto st1214;
	goto st0;
tr2649:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1214;
tr2650:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1214;
tr2655:
	{ expr_open_parens++; }
	goto st1214;
tr2716:
	{ expr_open_parens--; }
	goto st1214;
st1214:
	if ( ++p == pe )
		goto _test_eof1214;
case 1214:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1213;
		case 5: goto st1213;
		case 8: goto st1213;
		case 13: goto st1214;
		case 18: goto tr2655;
		case 21: goto st1214;
		case 23: goto st1214;
		case 36: goto tr2655;
		case 44: goto st1214;
	}
	goto st0;
tr2652:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1215;
tr2717:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1215;
st1215:
	if ( ++p == pe )
		goto _test_eof1215;
case 1215:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1216;
		case 53: goto st1217;
		case 54: goto st1218;
		case 55: goto st1219;
		case 56: goto st1220;
		case 59: goto st1221;
		case 62: goto st1222;
		case 79: goto st1223;
		case 80: goto st1224;
		case 81: goto st1234;
	}
	goto st0;
st1216:
	if ( ++p == pe )
		goto _test_eof1216;
case 1216:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2666;
	goto st0;
st1217:
	if ( ++p == pe )
		goto _test_eof1217;
case 1217:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2667;
	goto st0;
st1218:
	if ( ++p == pe )
		goto _test_eof1218;
case 1218:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2668;
	goto st0;
st1219:
	if ( ++p == pe )
		goto _test_eof1219;
case 1219:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2669;
	goto st0;
st1220:
	if ( ++p == pe )
		goto _test_eof1220;
case 1220:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2670;
	goto st0;
st1221:
	if ( ++p == pe )
		goto _test_eof1221;
case 1221:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2671;
	goto st0;
st1222:
	if ( ++p == pe )
		goto _test_eof1222;
case 1222:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2672;
	goto st0;
st1223:
	if ( ++p == pe )
		goto _test_eof1223;
case 1223:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2673;
	goto st0;
st1224:
	if ( ++p == pe )
		goto _test_eof1224;
case 1224:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2674;
		case 5: goto tr2674;
		case 8: goto tr2674;
		case 18: goto tr2676;
		case 19: goto st1233;
		case 21: goto tr2675;
		case 23: goto tr2675;
		case 36: goto tr2676;
		case 44: goto tr2675;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2675;
	goto st0;
tr2674:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1225;
st1225:
	if ( ++p == pe )
		goto _test_eof1225;
case 1225:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1226;
		case 65555: goto tr2679;
		case 131091: goto tr2680;
		case 131109: goto st1231;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1226;
		} else if ( _widec >= 15 )
			goto st1226;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1226;
		} else if ( _widec >= 38 )
			goto st1226;
	} else
		goto st1226;
	goto st0;
tr2683:
	{ expr_open_parens++; }
	goto st1226;
tr2686:
	{ expr_open_parens--; }
	goto st1226;
st1226:
	if ( ++p == pe )
		goto _test_eof1226;
case 1226:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1227;
		case 5: goto st1227;
		case 8: goto st1227;
		case 13: goto st1226;
		case 18: goto tr2683;
		case 21: goto st1226;
		case 23: goto st1226;
		case 36: goto tr2683;
		case 44: goto st1226;
	}
	goto st0;
st1227:
	if ( ++p == pe )
		goto _test_eof1227;
case 1227:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1226;
		case 65555: goto tr2679;
		case 131091: goto st1229;
		case 131109: goto st1229;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1226;
		} else if ( _widec >= 15 )
			goto st1226;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1226;
		} else if ( _widec >= 38 )
			goto st1226;
	} else
		goto st1226;
	goto st0;
tr2679:
	{ push_expr(expr_start, p); }
	goto st1228;
tr2687:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1228;
st1228:
	if ( ++p == pe )
		goto _test_eof1228;
case 1228:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2685;
	goto st0;
tr2688:
	{ expr_open_parens--; }
	goto st1229;
st1229:
	if ( ++p == pe )
		goto _test_eof1229;
case 1229:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2686;
		case 65555: goto tr2687;
		case 131091: goto tr2688;
		case 131109: goto tr2688;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2686;
		} else if ( _widec >= 15 )
			goto tr2686;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2686;
		} else if ( _widec >= 38 )
			goto tr2686;
	} else
		goto tr2686;
	goto st0;
tr2680:
	{ push_expr(expr_start, p); }
	goto st1230;
tr2689:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1230;
st1230:
	if ( ++p == pe )
		goto _test_eof1230;
case 1230:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2685;
		case 23: goto tr2686;
		case 65555: goto tr2687;
		case 131091: goto tr2689;
		case 131109: goto tr2690;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2686;
		} else if ( _widec >= 15 )
			goto tr2686;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2686;
		} else if ( _widec >= 38 )
			goto tr2686;
	} else
		goto tr2686;
	goto st0;
tr2690:
	{ expr_open_parens--; }
	goto st1231;
st1231:
	if ( ++p == pe )
		goto _test_eof1231;
case 1231:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2686;
		case 65555: goto tr2687;
		case 131091: goto tr2689;
		case 131109: goto tr2690;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2686;
		} else if ( _widec >= 15 )
			goto tr2686;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2686;
		} else if ( _widec >= 38 )
			goto tr2686;
	} else
		goto tr2686;
	goto st0;
tr2675:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1232;
tr2676:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1232;
tr2693:
	{ expr_open_parens++; }
	goto st1232;
st1232:
	if ( ++p == pe )
		goto _test_eof1232;
case 1232:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1225;
		case 5: goto st1225;
		case 8: goto st1225;
		case 13: goto st1232;
		case 18: goto tr2693;
		case 21: goto st1232;
		case 23: goto st1232;
		case 36: goto tr2693;
		case 44: goto st1232;
	}
	goto st0;
st1233:
	if ( ++p == pe )
		goto _test_eof1233;
case 1233:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2694;
	goto st0;
st1234:
	if ( ++p == pe )
		goto _test_eof1234;
case 1234:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2695;
		case 5: goto tr2695;
		case 8: goto tr2695;
		case 18: goto tr2697;
		case 19: goto st1243;
		case 21: goto tr2696;
		case 23: goto tr2696;
		case 36: goto tr2697;
		case 44: goto tr2696;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2696;
	goto st0;
tr2695:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1235;
st1235:
	if ( ++p == pe )
		goto _test_eof1235;
case 1235:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1236;
		case 65555: goto tr2700;
		case 131091: goto tr2701;
		case 131109: goto st1241;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1236;
		} else if ( _widec >= 15 )
			goto st1236;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1236;
		} else if ( _widec >= 38 )
			goto st1236;
	} else
		goto st1236;
	goto st0;
tr2704:
	{ expr_open_parens++; }
	goto st1236;
tr2707:
	{ expr_open_parens--; }
	goto st1236;
st1236:
	if ( ++p == pe )
		goto _test_eof1236;
case 1236:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1237;
		case 5: goto st1237;
		case 8: goto st1237;
		case 13: goto st1236;
		case 18: goto tr2704;
		case 21: goto st1236;
		case 23: goto st1236;
		case 36: goto tr2704;
		case 44: goto st1236;
	}
	goto st0;
st1237:
	if ( ++p == pe )
		goto _test_eof1237;
case 1237:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1236;
		case 65555: goto tr2700;
		case 131091: goto st1239;
		case 131109: goto st1239;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1236;
		} else if ( _widec >= 15 )
			goto st1236;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1236;
		} else if ( _widec >= 38 )
			goto st1236;
	} else
		goto st1236;
	goto st0;
tr2700:
	{ push_expr(expr_start, p); }
	goto st1238;
tr2708:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1238;
st1238:
	if ( ++p == pe )
		goto _test_eof1238;
case 1238:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2706;
	goto st0;
tr2709:
	{ expr_open_parens--; }
	goto st1239;
st1239:
	if ( ++p == pe )
		goto _test_eof1239;
case 1239:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2707;
		case 65555: goto tr2708;
		case 131091: goto tr2709;
		case 131109: goto tr2709;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2707;
		} else if ( _widec >= 15 )
			goto tr2707;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2707;
		} else if ( _widec >= 38 )
			goto tr2707;
	} else
		goto tr2707;
	goto st0;
tr2701:
	{ push_expr(expr_start, p); }
	goto st1240;
tr2710:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1240;
st1240:
	if ( ++p == pe )
		goto _test_eof1240;
case 1240:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2706;
		case 23: goto tr2707;
		case 65555: goto tr2708;
		case 131091: goto tr2710;
		case 131109: goto tr2711;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2707;
		} else if ( _widec >= 15 )
			goto tr2707;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2707;
		} else if ( _widec >= 38 )
			goto tr2707;
	} else
		goto tr2707;
	goto st0;
tr2711:
	{ expr_open_parens--; }
	goto st1241;
st1241:
	if ( ++p == pe )
		goto _test_eof1241;
case 1241:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2707;
		case 65555: goto tr2708;
		case 131091: goto tr2710;
		case 131109: goto tr2711;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2707;
		} else if ( _widec >= 15 )
			goto tr2707;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2707;
		} else if ( _widec >= 38 )
			goto tr2707;
	} else
		goto tr2707;
	goto st0;
tr2696:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1242;
tr2697:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1242;
tr2714:
	{ expr_open_parens++; }
	goto st1242;
st1242:
	if ( ++p == pe )
		goto _test_eof1242;
case 1242:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1235;
		case 5: goto st1235;
		case 8: goto st1235;
		case 13: goto st1242;
		case 18: goto tr2714;
		case 21: goto st1242;
		case 23: goto st1242;
		case 36: goto tr2714;
		case 44: goto st1242;
	}
	goto st0;
st1243:
	if ( ++p == pe )
		goto _test_eof1243;
case 1243:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2715;
	goto st0;
tr2718:
	{ expr_open_parens--; }
	goto st1244;
st1244:
	if ( ++p == pe )
		goto _test_eof1244;
case 1244:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2717;
		case 131091: goto tr2718;
		case 131109: goto tr2718;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2716;
		} else if ( _widec >= 15 )
			goto tr2716;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2716;
		} else if ( _widec >= 38 )
			goto tr2716;
	} else
		goto tr2716;
	goto st0;
st1245:
	if ( ++p == pe )
		goto _test_eof1245;
case 1245:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1246;
		case 53: goto st1247;
		case 54: goto st1248;
		case 55: goto st1249;
		case 56: goto st1250;
		case 59: goto st1251;
		case 62: goto st1252;
		case 79: goto st1253;
		case 80: goto st1254;
		case 81: goto st1264;
	}
	goto st0;
st1246:
	if ( ++p == pe )
		goto _test_eof1246;
case 1246:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2729;
	goto st0;
st1247:
	if ( ++p == pe )
		goto _test_eof1247;
case 1247:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2730;
	goto st0;
st1248:
	if ( ++p == pe )
		goto _test_eof1248;
case 1248:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2731;
	goto st0;
st1249:
	if ( ++p == pe )
		goto _test_eof1249;
case 1249:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2732;
	goto st0;
st1250:
	if ( ++p == pe )
		goto _test_eof1250;
case 1250:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2733;
	goto st0;
st1251:
	if ( ++p == pe )
		goto _test_eof1251;
case 1251:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2734;
	goto st0;
st1252:
	if ( ++p == pe )
		goto _test_eof1252;
case 1252:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2735;
	goto st0;
st1253:
	if ( ++p == pe )
		goto _test_eof1253;
case 1253:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2736;
	goto st0;
st1254:
	if ( ++p == pe )
		goto _test_eof1254;
case 1254:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2737;
		case 5: goto tr2737;
		case 8: goto tr2737;
		case 18: goto tr2739;
		case 19: goto st1263;
		case 21: goto tr2738;
		case 23: goto tr2738;
		case 36: goto tr2739;
		case 44: goto tr2738;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2738;
	goto st0;
tr2737:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1255;
st1255:
	if ( ++p == pe )
		goto _test_eof1255;
case 1255:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1256;
		case 65555: goto tr2742;
		case 131091: goto tr2743;
		case 131109: goto st1261;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1256;
		} else if ( _widec >= 15 )
			goto st1256;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1256;
		} else if ( _widec >= 38 )
			goto st1256;
	} else
		goto st1256;
	goto st0;
tr2746:
	{ expr_open_parens++; }
	goto st1256;
tr2749:
	{ expr_open_parens--; }
	goto st1256;
st1256:
	if ( ++p == pe )
		goto _test_eof1256;
case 1256:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1257;
		case 5: goto st1257;
		case 8: goto st1257;
		case 13: goto st1256;
		case 18: goto tr2746;
		case 21: goto st1256;
		case 23: goto st1256;
		case 36: goto tr2746;
		case 44: goto st1256;
	}
	goto st0;
st1257:
	if ( ++p == pe )
		goto _test_eof1257;
case 1257:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1256;
		case 65555: goto tr2742;
		case 131091: goto st1259;
		case 131109: goto st1259;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1256;
		} else if ( _widec >= 15 )
			goto st1256;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1256;
		} else if ( _widec >= 38 )
			goto st1256;
	} else
		goto st1256;
	goto st0;
tr2742:
	{ push_expr(expr_start, p); }
	goto st1258;
tr2750:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1258;
st1258:
	if ( ++p == pe )
		goto _test_eof1258;
case 1258:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2748;
	goto st0;
tr2751:
	{ expr_open_parens--; }
	goto st1259;
st1259:
	if ( ++p == pe )
		goto _test_eof1259;
case 1259:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2749;
		case 65555: goto tr2750;
		case 131091: goto tr2751;
		case 131109: goto tr2751;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2749;
		} else if ( _widec >= 15 )
			goto tr2749;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2749;
		} else if ( _widec >= 38 )
			goto tr2749;
	} else
		goto tr2749;
	goto st0;
tr2743:
	{ push_expr(expr_start, p); }
	goto st1260;
tr2752:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1260;
st1260:
	if ( ++p == pe )
		goto _test_eof1260;
case 1260:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2748;
		case 23: goto tr2749;
		case 65555: goto tr2750;
		case 131091: goto tr2752;
		case 131109: goto tr2753;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2749;
		} else if ( _widec >= 15 )
			goto tr2749;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2749;
		} else if ( _widec >= 38 )
			goto tr2749;
	} else
		goto tr2749;
	goto st0;
tr2753:
	{ expr_open_parens--; }
	goto st1261;
st1261:
	if ( ++p == pe )
		goto _test_eof1261;
case 1261:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2749;
		case 65555: goto tr2750;
		case 131091: goto tr2752;
		case 131109: goto tr2753;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2749;
		} else if ( _widec >= 15 )
			goto tr2749;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2749;
		} else if ( _widec >= 38 )
			goto tr2749;
	} else
		goto tr2749;
	goto st0;
tr2738:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1262;
tr2739:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1262;
tr2756:
	{ expr_open_parens++; }
	goto st1262;
st1262:
	if ( ++p == pe )
		goto _test_eof1262;
case 1262:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1255;
		case 5: goto st1255;
		case 8: goto st1255;
		case 13: goto st1262;
		case 18: goto tr2756;
		case 21: goto st1262;
		case 23: goto st1262;
		case 36: goto tr2756;
		case 44: goto st1262;
	}
	goto st0;
st1263:
	if ( ++p == pe )
		goto _test_eof1263;
case 1263:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2757;
	goto st0;
st1264:
	if ( ++p == pe )
		goto _test_eof1264;
case 1264:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2758;
		case 5: goto tr2758;
		case 8: goto tr2758;
		case 18: goto tr2760;
		case 19: goto st1273;
		case 21: goto tr2759;
		case 23: goto tr2759;
		case 36: goto tr2760;
		case 44: goto tr2759;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2759;
	goto st0;
tr2758:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1265;
st1265:
	if ( ++p == pe )
		goto _test_eof1265;
case 1265:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1266;
		case 65555: goto tr2763;
		case 131091: goto tr2764;
		case 131109: goto st1271;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1266;
		} else if ( _widec >= 15 )
			goto st1266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1266;
		} else if ( _widec >= 38 )
			goto st1266;
	} else
		goto st1266;
	goto st0;
tr2767:
	{ expr_open_parens++; }
	goto st1266;
tr2770:
	{ expr_open_parens--; }
	goto st1266;
st1266:
	if ( ++p == pe )
		goto _test_eof1266;
case 1266:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1267;
		case 5: goto st1267;
		case 8: goto st1267;
		case 13: goto st1266;
		case 18: goto tr2767;
		case 21: goto st1266;
		case 23: goto st1266;
		case 36: goto tr2767;
		case 44: goto st1266;
	}
	goto st0;
st1267:
	if ( ++p == pe )
		goto _test_eof1267;
case 1267:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1266;
		case 65555: goto tr2763;
		case 131091: goto st1269;
		case 131109: goto st1269;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1266;
		} else if ( _widec >= 15 )
			goto st1266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1266;
		} else if ( _widec >= 38 )
			goto st1266;
	} else
		goto st1266;
	goto st0;
tr2763:
	{ push_expr(expr_start, p); }
	goto st1268;
tr2771:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1268;
st1268:
	if ( ++p == pe )
		goto _test_eof1268;
case 1268:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2769;
	goto st0;
tr2772:
	{ expr_open_parens--; }
	goto st1269;
st1269:
	if ( ++p == pe )
		goto _test_eof1269;
case 1269:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2770;
		case 65555: goto tr2771;
		case 131091: goto tr2772;
		case 131109: goto tr2772;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2770;
		} else if ( _widec >= 15 )
			goto tr2770;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2770;
		} else if ( _widec >= 38 )
			goto tr2770;
	} else
		goto tr2770;
	goto st0;
tr2764:
	{ push_expr(expr_start, p); }
	goto st1270;
tr2773:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1270;
st1270:
	if ( ++p == pe )
		goto _test_eof1270;
case 1270:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2769;
		case 23: goto tr2770;
		case 65555: goto tr2771;
		case 131091: goto tr2773;
		case 131109: goto tr2774;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2770;
		} else if ( _widec >= 15 )
			goto tr2770;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2770;
		} else if ( _widec >= 38 )
			goto tr2770;
	} else
		goto tr2770;
	goto st0;
tr2774:
	{ expr_open_parens--; }
	goto st1271;
st1271:
	if ( ++p == pe )
		goto _test_eof1271;
case 1271:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2770;
		case 65555: goto tr2771;
		case 131091: goto tr2773;
		case 131109: goto tr2774;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2770;
		} else if ( _widec >= 15 )
			goto tr2770;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2770;
		} else if ( _widec >= 38 )
			goto tr2770;
	} else
		goto tr2770;
	goto st0;
tr2759:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1272;
tr2760:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1272;
tr2777:
	{ expr_open_parens++; }
	goto st1272;
st1272:
	if ( ++p == pe )
		goto _test_eof1272;
case 1272:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1265;
		case 5: goto st1265;
		case 8: goto st1265;
		case 13: goto st1272;
		case 18: goto tr2777;
		case 21: goto st1272;
		case 23: goto st1272;
		case 36: goto tr2777;
		case 44: goto st1272;
	}
	goto st0;
st1273:
	if ( ++p == pe )
		goto _test_eof1273;
case 1273:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2778;
	goto st0;
st1274:
	if ( ++p == pe )
		goto _test_eof1274;
case 1274:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1275;
		case 53: goto st1276;
		case 54: goto st1277;
		case 55: goto st1278;
		case 56: goto st1279;
		case 59: goto st1280;
		case 62: goto st1281;
		case 79: goto st1282;
		case 80: goto st1283;
		case 81: goto st1293;
	}
	goto st0;
st1275:
	if ( ++p == pe )
		goto _test_eof1275;
case 1275:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2789;
	goto st0;
st1276:
	if ( ++p == pe )
		goto _test_eof1276;
case 1276:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2790;
	goto st0;
st1277:
	if ( ++p == pe )
		goto _test_eof1277;
case 1277:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2791;
	goto st0;
st1278:
	if ( ++p == pe )
		goto _test_eof1278;
case 1278:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2792;
	goto st0;
st1279:
	if ( ++p == pe )
		goto _test_eof1279;
case 1279:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2793;
	goto st0;
st1280:
	if ( ++p == pe )
		goto _test_eof1280;
case 1280:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2794;
	goto st0;
st1281:
	if ( ++p == pe )
		goto _test_eof1281;
case 1281:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2795;
	goto st0;
st1282:
	if ( ++p == pe )
		goto _test_eof1282;
case 1282:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2796;
	goto st0;
st1283:
	if ( ++p == pe )
		goto _test_eof1283;
case 1283:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2797;
		case 5: goto tr2797;
		case 8: goto tr2797;
		case 18: goto tr2799;
		case 19: goto st1292;
		case 21: goto tr2798;
		case 23: goto tr2798;
		case 36: goto tr2799;
		case 44: goto tr2798;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2798;
	goto st0;
tr2797:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1284;
st1284:
	if ( ++p == pe )
		goto _test_eof1284;
case 1284:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1285;
		case 65555: goto tr2802;
		case 131091: goto tr2803;
		case 131109: goto st1290;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1285;
		} else if ( _widec >= 15 )
			goto st1285;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1285;
		} else if ( _widec >= 38 )
			goto st1285;
	} else
		goto st1285;
	goto st0;
tr2806:
	{ expr_open_parens++; }
	goto st1285;
tr2809:
	{ expr_open_parens--; }
	goto st1285;
st1285:
	if ( ++p == pe )
		goto _test_eof1285;
case 1285:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1286;
		case 5: goto st1286;
		case 8: goto st1286;
		case 13: goto st1285;
		case 18: goto tr2806;
		case 21: goto st1285;
		case 23: goto st1285;
		case 36: goto tr2806;
		case 44: goto st1285;
	}
	goto st0;
st1286:
	if ( ++p == pe )
		goto _test_eof1286;
case 1286:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1285;
		case 65555: goto tr2802;
		case 131091: goto st1288;
		case 131109: goto st1288;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1285;
		} else if ( _widec >= 15 )
			goto st1285;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1285;
		} else if ( _widec >= 38 )
			goto st1285;
	} else
		goto st1285;
	goto st0;
tr2802:
	{ push_expr(expr_start, p); }
	goto st1287;
tr2810:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1287;
st1287:
	if ( ++p == pe )
		goto _test_eof1287;
case 1287:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2808;
	goto st0;
tr2811:
	{ expr_open_parens--; }
	goto st1288;
st1288:
	if ( ++p == pe )
		goto _test_eof1288;
case 1288:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2809;
		case 65555: goto tr2810;
		case 131091: goto tr2811;
		case 131109: goto tr2811;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2809;
		} else if ( _widec >= 15 )
			goto tr2809;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2809;
		} else if ( _widec >= 38 )
			goto tr2809;
	} else
		goto tr2809;
	goto st0;
tr2803:
	{ push_expr(expr_start, p); }
	goto st1289;
tr2812:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1289;
st1289:
	if ( ++p == pe )
		goto _test_eof1289;
case 1289:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2808;
		case 23: goto tr2809;
		case 65555: goto tr2810;
		case 131091: goto tr2812;
		case 131109: goto tr2813;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2809;
		} else if ( _widec >= 15 )
			goto tr2809;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2809;
		} else if ( _widec >= 38 )
			goto tr2809;
	} else
		goto tr2809;
	goto st0;
tr2813:
	{ expr_open_parens--; }
	goto st1290;
st1290:
	if ( ++p == pe )
		goto _test_eof1290;
case 1290:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2809;
		case 65555: goto tr2810;
		case 131091: goto tr2812;
		case 131109: goto tr2813;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2809;
		} else if ( _widec >= 15 )
			goto tr2809;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2809;
		} else if ( _widec >= 38 )
			goto tr2809;
	} else
		goto tr2809;
	goto st0;
tr2798:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1291;
tr2799:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1291;
tr2816:
	{ expr_open_parens++; }
	goto st1291;
st1291:
	if ( ++p == pe )
		goto _test_eof1291;
case 1291:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1284;
		case 5: goto st1284;
		case 8: goto st1284;
		case 13: goto st1291;
		case 18: goto tr2816;
		case 21: goto st1291;
		case 23: goto st1291;
		case 36: goto tr2816;
		case 44: goto st1291;
	}
	goto st0;
st1292:
	if ( ++p == pe )
		goto _test_eof1292;
case 1292:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2817;
	goto st0;
st1293:
	if ( ++p == pe )
		goto _test_eof1293;
case 1293:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2818;
		case 5: goto tr2818;
		case 8: goto tr2818;
		case 18: goto tr2820;
		case 19: goto st1302;
		case 21: goto tr2819;
		case 23: goto tr2819;
		case 36: goto tr2820;
		case 44: goto tr2819;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2819;
	goto st0;
tr2818:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1294;
st1294:
	if ( ++p == pe )
		goto _test_eof1294;
case 1294:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1295;
		case 65555: goto tr2823;
		case 131091: goto tr2824;
		case 131109: goto st1300;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1295;
		} else if ( _widec >= 15 )
			goto st1295;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1295;
		} else if ( _widec >= 38 )
			goto st1295;
	} else
		goto st1295;
	goto st0;
tr2827:
	{ expr_open_parens++; }
	goto st1295;
tr2830:
	{ expr_open_parens--; }
	goto st1295;
st1295:
	if ( ++p == pe )
		goto _test_eof1295;
case 1295:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1296;
		case 5: goto st1296;
		case 8: goto st1296;
		case 13: goto st1295;
		case 18: goto tr2827;
		case 21: goto st1295;
		case 23: goto st1295;
		case 36: goto tr2827;
		case 44: goto st1295;
	}
	goto st0;
st1296:
	if ( ++p == pe )
		goto _test_eof1296;
case 1296:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1295;
		case 65555: goto tr2823;
		case 131091: goto st1298;
		case 131109: goto st1298;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1295;
		} else if ( _widec >= 15 )
			goto st1295;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1295;
		} else if ( _widec >= 38 )
			goto st1295;
	} else
		goto st1295;
	goto st0;
tr2823:
	{ push_expr(expr_start, p); }
	goto st1297;
tr2831:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1297;
st1297:
	if ( ++p == pe )
		goto _test_eof1297;
case 1297:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2829;
	goto st0;
tr2832:
	{ expr_open_parens--; }
	goto st1298;
st1298:
	if ( ++p == pe )
		goto _test_eof1298;
case 1298:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2830;
		case 65555: goto tr2831;
		case 131091: goto tr2832;
		case 131109: goto tr2832;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2830;
		} else if ( _widec >= 15 )
			goto tr2830;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2830;
		} else if ( _widec >= 38 )
			goto tr2830;
	} else
		goto tr2830;
	goto st0;
tr2824:
	{ push_expr(expr_start, p); }
	goto st1299;
tr2833:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1299;
st1299:
	if ( ++p == pe )
		goto _test_eof1299;
case 1299:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2829;
		case 23: goto tr2830;
		case 65555: goto tr2831;
		case 131091: goto tr2833;
		case 131109: goto tr2834;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2830;
		} else if ( _widec >= 15 )
			goto tr2830;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2830;
		} else if ( _widec >= 38 )
			goto tr2830;
	} else
		goto tr2830;
	goto st0;
tr2834:
	{ expr_open_parens--; }
	goto st1300;
st1300:
	if ( ++p == pe )
		goto _test_eof1300;
case 1300:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2830;
		case 65555: goto tr2831;
		case 131091: goto tr2833;
		case 131109: goto tr2834;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2830;
		} else if ( _widec >= 15 )
			goto tr2830;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2830;
		} else if ( _widec >= 38 )
			goto tr2830;
	} else
		goto tr2830;
	goto st0;
tr2819:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1301;
tr2820:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1301;
tr2837:
	{ expr_open_parens++; }
	goto st1301;
st1301:
	if ( ++p == pe )
		goto _test_eof1301;
case 1301:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1294;
		case 5: goto st1294;
		case 8: goto st1294;
		case 13: goto st1301;
		case 18: goto tr2837;
		case 21: goto st1301;
		case 23: goto st1301;
		case 36: goto tr2837;
		case 44: goto st1301;
	}
	goto st0;
st1302:
	if ( ++p == pe )
		goto _test_eof1302;
case 1302:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2838;
	goto st0;
st1303:
	if ( ++p == pe )
		goto _test_eof1303;
case 1303:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1304;
		case 53: goto st1305;
		case 54: goto st1306;
		case 55: goto st1307;
		case 56: goto st1308;
		case 59: goto st1309;
		case 62: goto st1310;
		case 79: goto st1311;
		case 80: goto st1312;
		case 81: goto st1322;
	}
	goto st0;
st1304:
	if ( ++p == pe )
		goto _test_eof1304;
case 1304:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2849;
	goto st0;
st1305:
	if ( ++p == pe )
		goto _test_eof1305;
case 1305:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2850;
	goto st0;
st1306:
	if ( ++p == pe )
		goto _test_eof1306;
case 1306:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2851;
	goto st0;
st1307:
	if ( ++p == pe )
		goto _test_eof1307;
case 1307:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2852;
	goto st0;
st1308:
	if ( ++p == pe )
		goto _test_eof1308;
case 1308:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2853;
	goto st0;
st1309:
	if ( ++p == pe )
		goto _test_eof1309;
case 1309:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2854;
	goto st0;
st1310:
	if ( ++p == pe )
		goto _test_eof1310;
case 1310:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2855;
	goto st0;
st1311:
	if ( ++p == pe )
		goto _test_eof1311;
case 1311:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2856;
	goto st0;
st1312:
	if ( ++p == pe )
		goto _test_eof1312;
case 1312:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2857;
		case 5: goto tr2857;
		case 8: goto tr2857;
		case 18: goto tr2859;
		case 19: goto st1321;
		case 21: goto tr2858;
		case 23: goto tr2858;
		case 36: goto tr2859;
		case 44: goto tr2858;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2858;
	goto st0;
tr2857:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1313;
st1313:
	if ( ++p == pe )
		goto _test_eof1313;
case 1313:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1314;
		case 65555: goto tr2862;
		case 131091: goto tr2863;
		case 131109: goto st1319;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1314;
		} else if ( _widec >= 15 )
			goto st1314;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1314;
		} else if ( _widec >= 38 )
			goto st1314;
	} else
		goto st1314;
	goto st0;
tr2866:
	{ expr_open_parens++; }
	goto st1314;
tr2869:
	{ expr_open_parens--; }
	goto st1314;
st1314:
	if ( ++p == pe )
		goto _test_eof1314;
case 1314:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1315;
		case 5: goto st1315;
		case 8: goto st1315;
		case 13: goto st1314;
		case 18: goto tr2866;
		case 21: goto st1314;
		case 23: goto st1314;
		case 36: goto tr2866;
		case 44: goto st1314;
	}
	goto st0;
st1315:
	if ( ++p == pe )
		goto _test_eof1315;
case 1315:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1314;
		case 65555: goto tr2862;
		case 131091: goto st1317;
		case 131109: goto st1317;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1314;
		} else if ( _widec >= 15 )
			goto st1314;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1314;
		} else if ( _widec >= 38 )
			goto st1314;
	} else
		goto st1314;
	goto st0;
tr2862:
	{ push_expr(expr_start, p); }
	goto st1316;
tr2870:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1316;
st1316:
	if ( ++p == pe )
		goto _test_eof1316;
case 1316:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2868;
	goto st0;
tr2871:
	{ expr_open_parens--; }
	goto st1317;
st1317:
	if ( ++p == pe )
		goto _test_eof1317;
case 1317:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2869;
		case 65555: goto tr2870;
		case 131091: goto tr2871;
		case 131109: goto tr2871;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2869;
		} else if ( _widec >= 15 )
			goto tr2869;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2869;
		} else if ( _widec >= 38 )
			goto tr2869;
	} else
		goto tr2869;
	goto st0;
tr2863:
	{ push_expr(expr_start, p); }
	goto st1318;
tr2872:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1318;
st1318:
	if ( ++p == pe )
		goto _test_eof1318;
case 1318:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2868;
		case 23: goto tr2869;
		case 65555: goto tr2870;
		case 131091: goto tr2872;
		case 131109: goto tr2873;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2869;
		} else if ( _widec >= 15 )
			goto tr2869;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2869;
		} else if ( _widec >= 38 )
			goto tr2869;
	} else
		goto tr2869;
	goto st0;
tr2873:
	{ expr_open_parens--; }
	goto st1319;
st1319:
	if ( ++p == pe )
		goto _test_eof1319;
case 1319:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2869;
		case 65555: goto tr2870;
		case 131091: goto tr2872;
		case 131109: goto tr2873;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2869;
		} else if ( _widec >= 15 )
			goto tr2869;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2869;
		} else if ( _widec >= 38 )
			goto tr2869;
	} else
		goto tr2869;
	goto st0;
tr2858:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1320;
tr2859:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1320;
tr2876:
	{ expr_open_parens++; }
	goto st1320;
st1320:
	if ( ++p == pe )
		goto _test_eof1320;
case 1320:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1313;
		case 5: goto st1313;
		case 8: goto st1313;
		case 13: goto st1320;
		case 18: goto tr2876;
		case 21: goto st1320;
		case 23: goto st1320;
		case 36: goto tr2876;
		case 44: goto st1320;
	}
	goto st0;
st1321:
	if ( ++p == pe )
		goto _test_eof1321;
case 1321:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2877;
	goto st0;
st1322:
	if ( ++p == pe )
		goto _test_eof1322;
case 1322:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2878;
		case 5: goto tr2878;
		case 8: goto tr2878;
		case 18: goto tr2880;
		case 19: goto st1331;
		case 21: goto tr2879;
		case 23: goto tr2879;
		case 36: goto tr2880;
		case 44: goto tr2879;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2879;
	goto st0;
tr2878:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1323;
st1323:
	if ( ++p == pe )
		goto _test_eof1323;
case 1323:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1324;
		case 65555: goto tr2883;
		case 131091: goto tr2884;
		case 131109: goto st1329;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1324;
		} else if ( _widec >= 15 )
			goto st1324;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1324;
		} else if ( _widec >= 38 )
			goto st1324;
	} else
		goto st1324;
	goto st0;
tr2887:
	{ expr_open_parens++; }
	goto st1324;
tr2890:
	{ expr_open_parens--; }
	goto st1324;
st1324:
	if ( ++p == pe )
		goto _test_eof1324;
case 1324:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1325;
		case 5: goto st1325;
		case 8: goto st1325;
		case 13: goto st1324;
		case 18: goto tr2887;
		case 21: goto st1324;
		case 23: goto st1324;
		case 36: goto tr2887;
		case 44: goto st1324;
	}
	goto st0;
st1325:
	if ( ++p == pe )
		goto _test_eof1325;
case 1325:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1324;
		case 65555: goto tr2883;
		case 131091: goto st1327;
		case 131109: goto st1327;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1324;
		} else if ( _widec >= 15 )
			goto st1324;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1324;
		} else if ( _widec >= 38 )
			goto st1324;
	} else
		goto st1324;
	goto st0;
tr2883:
	{ push_expr(expr_start, p); }
	goto st1326;
tr2891:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1326;
st1326:
	if ( ++p == pe )
		goto _test_eof1326;
case 1326:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2889;
	goto st0;
tr2892:
	{ expr_open_parens--; }
	goto st1327;
st1327:
	if ( ++p == pe )
		goto _test_eof1327;
case 1327:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2890;
		case 65555: goto tr2891;
		case 131091: goto tr2892;
		case 131109: goto tr2892;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2890;
		} else if ( _widec >= 15 )
			goto tr2890;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2890;
		} else if ( _widec >= 38 )
			goto tr2890;
	} else
		goto tr2890;
	goto st0;
tr2884:
	{ push_expr(expr_start, p); }
	goto st1328;
tr2893:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1328;
st1328:
	if ( ++p == pe )
		goto _test_eof1328;
case 1328:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2889;
		case 23: goto tr2890;
		case 65555: goto tr2891;
		case 131091: goto tr2893;
		case 131109: goto tr2894;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2890;
		} else if ( _widec >= 15 )
			goto tr2890;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2890;
		} else if ( _widec >= 38 )
			goto tr2890;
	} else
		goto tr2890;
	goto st0;
tr2894:
	{ expr_open_parens--; }
	goto st1329;
st1329:
	if ( ++p == pe )
		goto _test_eof1329;
case 1329:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2890;
		case 65555: goto tr2891;
		case 131091: goto tr2893;
		case 131109: goto tr2894;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2890;
		} else if ( _widec >= 15 )
			goto tr2890;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2890;
		} else if ( _widec >= 38 )
			goto tr2890;
	} else
		goto tr2890;
	goto st0;
tr2879:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1330;
tr2880:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1330;
tr2897:
	{ expr_open_parens++; }
	goto st1330;
st1330:
	if ( ++p == pe )
		goto _test_eof1330;
case 1330:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1323;
		case 5: goto st1323;
		case 8: goto st1323;
		case 13: goto st1330;
		case 18: goto tr2897;
		case 21: goto st1330;
		case 23: goto st1330;
		case 36: goto tr2897;
		case 44: goto st1330;
	}
	goto st0;
st1331:
	if ( ++p == pe )
		goto _test_eof1331;
case 1331:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2898;
	goto st0;
st1332:
	if ( ++p == pe )
		goto _test_eof1332;
case 1332:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1333;
		case 53: goto st1334;
		case 54: goto st1335;
		case 55: goto st1336;
		case 56: goto st1337;
		case 59: goto st1338;
		case 62: goto st1339;
		case 79: goto st1340;
		case 80: goto st1341;
		case 81: goto st1351;
	}
	goto st0;
st1333:
	if ( ++p == pe )
		goto _test_eof1333;
case 1333:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2909;
	goto st0;
st1334:
	if ( ++p == pe )
		goto _test_eof1334;
case 1334:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2910;
	goto st0;
st1335:
	if ( ++p == pe )
		goto _test_eof1335;
case 1335:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2911;
	goto st0;
st1336:
	if ( ++p == pe )
		goto _test_eof1336;
case 1336:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2912;
	goto st0;
st1337:
	if ( ++p == pe )
		goto _test_eof1337;
case 1337:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2913;
	goto st0;
st1338:
	if ( ++p == pe )
		goto _test_eof1338;
case 1338:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2914;
	goto st0;
st1339:
	if ( ++p == pe )
		goto _test_eof1339;
case 1339:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2915;
	goto st0;
st1340:
	if ( ++p == pe )
		goto _test_eof1340;
case 1340:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2916;
	goto st0;
st1341:
	if ( ++p == pe )
		goto _test_eof1341;
case 1341:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2917;
		case 5: goto tr2917;
		case 8: goto tr2917;
		case 18: goto tr2919;
		case 19: goto st1350;
		case 21: goto tr2918;
		case 23: goto tr2918;
		case 36: goto tr2919;
		case 44: goto tr2918;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2918;
	goto st0;
tr2917:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1342;
st1342:
	if ( ++p == pe )
		goto _test_eof1342;
case 1342:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1343;
		case 65555: goto tr2922;
		case 131091: goto tr2923;
		case 131109: goto st1348;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1343;
		} else if ( _widec >= 15 )
			goto st1343;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1343;
		} else if ( _widec >= 38 )
			goto st1343;
	} else
		goto st1343;
	goto st0;
tr2926:
	{ expr_open_parens++; }
	goto st1343;
tr2929:
	{ expr_open_parens--; }
	goto st1343;
st1343:
	if ( ++p == pe )
		goto _test_eof1343;
case 1343:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1344;
		case 5: goto st1344;
		case 8: goto st1344;
		case 13: goto st1343;
		case 18: goto tr2926;
		case 21: goto st1343;
		case 23: goto st1343;
		case 36: goto tr2926;
		case 44: goto st1343;
	}
	goto st0;
st1344:
	if ( ++p == pe )
		goto _test_eof1344;
case 1344:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1343;
		case 65555: goto tr2922;
		case 131091: goto st1346;
		case 131109: goto st1346;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1343;
		} else if ( _widec >= 15 )
			goto st1343;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1343;
		} else if ( _widec >= 38 )
			goto st1343;
	} else
		goto st1343;
	goto st0;
tr2922:
	{ push_expr(expr_start, p); }
	goto st1345;
tr2930:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1345;
st1345:
	if ( ++p == pe )
		goto _test_eof1345;
case 1345:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2928;
	goto st0;
tr2931:
	{ expr_open_parens--; }
	goto st1346;
st1346:
	if ( ++p == pe )
		goto _test_eof1346;
case 1346:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2929;
		case 65555: goto tr2930;
		case 131091: goto tr2931;
		case 131109: goto tr2931;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2929;
		} else if ( _widec >= 15 )
			goto tr2929;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2929;
		} else if ( _widec >= 38 )
			goto tr2929;
	} else
		goto tr2929;
	goto st0;
tr2923:
	{ push_expr(expr_start, p); }
	goto st1347;
tr2932:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1347;
st1347:
	if ( ++p == pe )
		goto _test_eof1347;
case 1347:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2928;
		case 23: goto tr2929;
		case 65555: goto tr2930;
		case 131091: goto tr2932;
		case 131109: goto tr2933;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2929;
		} else if ( _widec >= 15 )
			goto tr2929;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2929;
		} else if ( _widec >= 38 )
			goto tr2929;
	} else
		goto tr2929;
	goto st0;
tr2933:
	{ expr_open_parens--; }
	goto st1348;
st1348:
	if ( ++p == pe )
		goto _test_eof1348;
case 1348:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2929;
		case 65555: goto tr2930;
		case 131091: goto tr2932;
		case 131109: goto tr2933;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2929;
		} else if ( _widec >= 15 )
			goto tr2929;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2929;
		} else if ( _widec >= 38 )
			goto tr2929;
	} else
		goto tr2929;
	goto st0;
tr2918:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1349;
tr2919:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1349;
tr2936:
	{ expr_open_parens++; }
	goto st1349;
st1349:
	if ( ++p == pe )
		goto _test_eof1349;
case 1349:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1342;
		case 5: goto st1342;
		case 8: goto st1342;
		case 13: goto st1349;
		case 18: goto tr2936;
		case 21: goto st1349;
		case 23: goto st1349;
		case 36: goto tr2936;
		case 44: goto st1349;
	}
	goto st0;
st1350:
	if ( ++p == pe )
		goto _test_eof1350;
case 1350:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2937;
	goto st0;
st1351:
	if ( ++p == pe )
		goto _test_eof1351;
case 1351:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2938;
		case 5: goto tr2938;
		case 8: goto tr2938;
		case 18: goto tr2940;
		case 19: goto st1360;
		case 21: goto tr2939;
		case 23: goto tr2939;
		case 36: goto tr2940;
		case 44: goto tr2939;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2939;
	goto st0;
tr2938:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1352;
st1352:
	if ( ++p == pe )
		goto _test_eof1352;
case 1352:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1353;
		case 65555: goto tr2943;
		case 131091: goto tr2944;
		case 131109: goto st1358;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1353;
		} else if ( _widec >= 15 )
			goto st1353;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1353;
		} else if ( _widec >= 38 )
			goto st1353;
	} else
		goto st1353;
	goto st0;
tr2947:
	{ expr_open_parens++; }
	goto st1353;
tr2950:
	{ expr_open_parens--; }
	goto st1353;
st1353:
	if ( ++p == pe )
		goto _test_eof1353;
case 1353:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1354;
		case 5: goto st1354;
		case 8: goto st1354;
		case 13: goto st1353;
		case 18: goto tr2947;
		case 21: goto st1353;
		case 23: goto st1353;
		case 36: goto tr2947;
		case 44: goto st1353;
	}
	goto st0;
st1354:
	if ( ++p == pe )
		goto _test_eof1354;
case 1354:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1353;
		case 65555: goto tr2943;
		case 131091: goto st1356;
		case 131109: goto st1356;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1353;
		} else if ( _widec >= 15 )
			goto st1353;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1353;
		} else if ( _widec >= 38 )
			goto st1353;
	} else
		goto st1353;
	goto st0;
tr2943:
	{ push_expr(expr_start, p); }
	goto st1355;
tr2951:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1355;
st1355:
	if ( ++p == pe )
		goto _test_eof1355;
case 1355:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2949;
	goto st0;
tr2952:
	{ expr_open_parens--; }
	goto st1356;
st1356:
	if ( ++p == pe )
		goto _test_eof1356;
case 1356:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2950;
		case 65555: goto tr2951;
		case 131091: goto tr2952;
		case 131109: goto tr2952;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2950;
		} else if ( _widec >= 15 )
			goto tr2950;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2950;
		} else if ( _widec >= 38 )
			goto tr2950;
	} else
		goto tr2950;
	goto st0;
tr2944:
	{ push_expr(expr_start, p); }
	goto st1357;
tr2953:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1357;
st1357:
	if ( ++p == pe )
		goto _test_eof1357;
case 1357:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2949;
		case 23: goto tr2950;
		case 65555: goto tr2951;
		case 131091: goto tr2953;
		case 131109: goto tr2954;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2950;
		} else if ( _widec >= 15 )
			goto tr2950;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2950;
		} else if ( _widec >= 38 )
			goto tr2950;
	} else
		goto tr2950;
	goto st0;
tr2954:
	{ expr_open_parens--; }
	goto st1358;
st1358:
	if ( ++p == pe )
		goto _test_eof1358;
case 1358:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2950;
		case 65555: goto tr2951;
		case 131091: goto tr2953;
		case 131109: goto tr2954;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2950;
		} else if ( _widec >= 15 )
			goto tr2950;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2950;
		} else if ( _widec >= 38 )
			goto tr2950;
	} else
		goto tr2950;
	goto st0;
tr2939:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1359;
tr2940:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1359;
tr2957:
	{ expr_open_parens++; }
	goto st1359;
st1359:
	if ( ++p == pe )
		goto _test_eof1359;
case 1359:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1352;
		case 5: goto st1352;
		case 8: goto st1352;
		case 13: goto st1359;
		case 18: goto tr2957;
		case 21: goto st1359;
		case 23: goto st1359;
		case 36: goto tr2957;
		case 44: goto st1359;
	}
	goto st0;
st1360:
	if ( ++p == pe )
		goto _test_eof1360;
case 1360:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2958;
	goto st0;
st1361:
	if ( ++p == pe )
		goto _test_eof1361;
case 1361:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2959;
		case 5: goto tr2959;
		case 8: goto tr2959;
		case 18: goto tr2961;
		case 21: goto tr2960;
		case 23: goto tr2960;
		case 36: goto tr2961;
		case 44: goto tr2960;
		case 48: goto st1365;
		case 53: goto st1366;
		case 54: goto st1367;
		case 55: goto st1368;
		case 56: goto st1369;
		case 57: goto st1370;
		case 58: goto st1371;
		case 59: goto st1372;
		case 60: goto st1373;
		case 61: goto st1374;
		case 62: goto st1375;
		case 79: goto st1378;
		case 80: goto st1379;
		case 81: goto st1389;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2960;
	goto st0;
tr2959:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1362;
st1362:
	if ( ++p == pe )
		goto _test_eof1362;
case 1362:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2976;
		case 23: goto st1363;
		case 131091: goto st1364;
		case 131109: goto st1364;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1363;
		} else if ( _widec >= 15 )
			goto st1363;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1363;
		} else if ( _widec >= 38 )
			goto st1363;
	} else
		goto st1363;
	goto st0;
tr2960:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1363;
tr2961:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1363;
tr2980:
	{ expr_open_parens++; }
	goto st1363;
tr2982:
	{ expr_open_parens--; }
	goto st1363;
st1363:
	if ( ++p == pe )
		goto _test_eof1363;
case 1363:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1362;
		case 5: goto st1362;
		case 8: goto st1362;
		case 13: goto st1363;
		case 18: goto tr2980;
		case 21: goto st1363;
		case 23: goto st1363;
		case 36: goto tr2980;
		case 44: goto st1363;
	}
	goto st0;
tr2983:
	{ expr_open_parens--; }
	goto st1364;
st1364:
	if ( ++p == pe )
		goto _test_eof1364;
case 1364:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2981;
		case 23: goto tr2982;
		case 131091: goto tr2983;
		case 131109: goto tr2983;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2982;
		} else if ( _widec >= 15 )
			goto tr2982;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2982;
		} else if ( _widec >= 38 )
			goto tr2982;
	} else
		goto tr2982;
	goto st0;
st1365:
	if ( ++p == pe )
		goto _test_eof1365;
case 1365:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2984;
	goto st0;
st1366:
	if ( ++p == pe )
		goto _test_eof1366;
case 1366:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2985;
	goto st0;
st1367:
	if ( ++p == pe )
		goto _test_eof1367;
case 1367:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2986;
	goto st0;
st1368:
	if ( ++p == pe )
		goto _test_eof1368;
case 1368:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2987;
	goto st0;
st1369:
	if ( ++p == pe )
		goto _test_eof1369;
case 1369:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2988;
	goto st0;
st1370:
	if ( ++p == pe )
		goto _test_eof1370;
case 1370:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2989;
	goto st0;
st1371:
	if ( ++p == pe )
		goto _test_eof1371;
case 1371:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2990;
	goto st0;
st1372:
	if ( ++p == pe )
		goto _test_eof1372;
case 1372:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2991;
	goto st0;
st1373:
	if ( ++p == pe )
		goto _test_eof1373;
case 1373:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2992;
	goto st0;
st1374:
	if ( ++p == pe )
		goto _test_eof1374;
case 1374:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2993;
	goto st0;
st1375:
	if ( ++p == pe )
		goto _test_eof1375;
case 1375:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2994;
		case 22: goto st1376;
	}
	goto st0;
st1376:
	if ( ++p == pe )
		goto _test_eof1376;
case 1376:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2959;
		case 5: goto tr2959;
		case 8: goto tr2959;
		case 18: goto tr2961;
		case 21: goto tr2960;
		case 23: goto tr2960;
		case 36: goto tr2961;
		case 44: goto tr2960;
		case 48: goto st1365;
		case 53: goto st1366;
		case 54: goto st1367;
		case 55: goto st1368;
		case 56: goto st1369;
		case 57: goto st1370;
		case 58: goto st1371;
		case 59: goto st1372;
		case 60: goto st1373;
		case 61: goto st1374;
		case 62: goto st1377;
		case 79: goto st1378;
		case 80: goto st1379;
		case 81: goto st1389;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2960;
	goto st0;
st1377:
	if ( ++p == pe )
		goto _test_eof1377;
case 1377:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2994;
	goto st0;
st1378:
	if ( ++p == pe )
		goto _test_eof1378;
case 1378:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2997;
	goto st0;
st1379:
	if ( ++p == pe )
		goto _test_eof1379;
case 1379:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2998;
		case 5: goto tr2998;
		case 8: goto tr2998;
		case 18: goto tr3000;
		case 19: goto st1388;
		case 21: goto tr2999;
		case 23: goto tr2999;
		case 36: goto tr3000;
		case 44: goto tr2999;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2999;
	goto st0;
tr2998:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1380;
st1380:
	if ( ++p == pe )
		goto _test_eof1380;
case 1380:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1381;
		case 65555: goto tr3003;
		case 131091: goto tr3004;
		case 131109: goto st1386;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1381;
		} else if ( _widec >= 15 )
			goto st1381;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1381;
		} else if ( _widec >= 38 )
			goto st1381;
	} else
		goto st1381;
	goto st0;
tr3007:
	{ expr_open_parens++; }
	goto st1381;
tr3010:
	{ expr_open_parens--; }
	goto st1381;
st1381:
	if ( ++p == pe )
		goto _test_eof1381;
case 1381:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1382;
		case 5: goto st1382;
		case 8: goto st1382;
		case 13: goto st1381;
		case 18: goto tr3007;
		case 21: goto st1381;
		case 23: goto st1381;
		case 36: goto tr3007;
		case 44: goto st1381;
	}
	goto st0;
st1382:
	if ( ++p == pe )
		goto _test_eof1382;
case 1382:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1381;
		case 65555: goto tr3003;
		case 131091: goto st1384;
		case 131109: goto st1384;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1381;
		} else if ( _widec >= 15 )
			goto st1381;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1381;
		} else if ( _widec >= 38 )
			goto st1381;
	} else
		goto st1381;
	goto st0;
tr3003:
	{ push_expr(expr_start, p); }
	goto st1383;
tr3011:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1383;
st1383:
	if ( ++p == pe )
		goto _test_eof1383;
case 1383:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3009;
	goto st0;
tr3012:
	{ expr_open_parens--; }
	goto st1384;
st1384:
	if ( ++p == pe )
		goto _test_eof1384;
case 1384:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3010;
		case 65555: goto tr3011;
		case 131091: goto tr3012;
		case 131109: goto tr3012;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3010;
		} else if ( _widec >= 15 )
			goto tr3010;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3010;
		} else if ( _widec >= 38 )
			goto tr3010;
	} else
		goto tr3010;
	goto st0;
tr3004:
	{ push_expr(expr_start, p); }
	goto st1385;
tr3013:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1385;
st1385:
	if ( ++p == pe )
		goto _test_eof1385;
case 1385:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3009;
		case 23: goto tr3010;
		case 65555: goto tr3011;
		case 131091: goto tr3013;
		case 131109: goto tr3014;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3010;
		} else if ( _widec >= 15 )
			goto tr3010;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3010;
		} else if ( _widec >= 38 )
			goto tr3010;
	} else
		goto tr3010;
	goto st0;
tr3014:
	{ expr_open_parens--; }
	goto st1386;
st1386:
	if ( ++p == pe )
		goto _test_eof1386;
case 1386:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3010;
		case 65555: goto tr3011;
		case 131091: goto tr3013;
		case 131109: goto tr3014;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3010;
		} else if ( _widec >= 15 )
			goto tr3010;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3010;
		} else if ( _widec >= 38 )
			goto tr3010;
	} else
		goto tr3010;
	goto st0;
tr2999:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1387;
tr3000:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1387;
tr3017:
	{ expr_open_parens++; }
	goto st1387;
st1387:
	if ( ++p == pe )
		goto _test_eof1387;
case 1387:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1380;
		case 5: goto st1380;
		case 8: goto st1380;
		case 13: goto st1387;
		case 18: goto tr3017;
		case 21: goto st1387;
		case 23: goto st1387;
		case 36: goto tr3017;
		case 44: goto st1387;
	}
	goto st0;
st1388:
	if ( ++p == pe )
		goto _test_eof1388;
case 1388:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3018;
	goto st0;
st1389:
	if ( ++p == pe )
		goto _test_eof1389;
case 1389:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3019;
		case 5: goto tr3019;
		case 8: goto tr3019;
		case 18: goto tr3021;
		case 19: goto st1398;
		case 21: goto tr3020;
		case 23: goto tr3020;
		case 36: goto tr3021;
		case 44: goto tr3020;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3020;
	goto st0;
tr3019:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1390;
st1390:
	if ( ++p == pe )
		goto _test_eof1390;
case 1390:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1391;
		case 65555: goto tr3024;
		case 131091: goto tr3025;
		case 131109: goto st1396;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1391;
		} else if ( _widec >= 15 )
			goto st1391;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1391;
		} else if ( _widec >= 38 )
			goto st1391;
	} else
		goto st1391;
	goto st0;
tr3028:
	{ expr_open_parens++; }
	goto st1391;
tr3031:
	{ expr_open_parens--; }
	goto st1391;
st1391:
	if ( ++p == pe )
		goto _test_eof1391;
case 1391:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1392;
		case 5: goto st1392;
		case 8: goto st1392;
		case 13: goto st1391;
		case 18: goto tr3028;
		case 21: goto st1391;
		case 23: goto st1391;
		case 36: goto tr3028;
		case 44: goto st1391;
	}
	goto st0;
st1392:
	if ( ++p == pe )
		goto _test_eof1392;
case 1392:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1391;
		case 65555: goto tr3024;
		case 131091: goto st1394;
		case 131109: goto st1394;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1391;
		} else if ( _widec >= 15 )
			goto st1391;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1391;
		} else if ( _widec >= 38 )
			goto st1391;
	} else
		goto st1391;
	goto st0;
tr3024:
	{ push_expr(expr_start, p); }
	goto st1393;
tr3032:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1393;
st1393:
	if ( ++p == pe )
		goto _test_eof1393;
case 1393:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3030;
	goto st0;
tr3033:
	{ expr_open_parens--; }
	goto st1394;
st1394:
	if ( ++p == pe )
		goto _test_eof1394;
case 1394:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3031;
		case 65555: goto tr3032;
		case 131091: goto tr3033;
		case 131109: goto tr3033;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3031;
		} else if ( _widec >= 15 )
			goto tr3031;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3031;
		} else if ( _widec >= 38 )
			goto tr3031;
	} else
		goto tr3031;
	goto st0;
tr3025:
	{ push_expr(expr_start, p); }
	goto st1395;
tr3034:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1395;
st1395:
	if ( ++p == pe )
		goto _test_eof1395;
case 1395:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3030;
		case 23: goto tr3031;
		case 65555: goto tr3032;
		case 131091: goto tr3034;
		case 131109: goto tr3035;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3031;
		} else if ( _widec >= 15 )
			goto tr3031;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3031;
		} else if ( _widec >= 38 )
			goto tr3031;
	} else
		goto tr3031;
	goto st0;
tr3035:
	{ expr_open_parens--; }
	goto st1396;
st1396:
	if ( ++p == pe )
		goto _test_eof1396;
case 1396:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3031;
		case 65555: goto tr3032;
		case 131091: goto tr3034;
		case 131109: goto tr3035;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3031;
		} else if ( _widec >= 15 )
			goto tr3031;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3031;
		} else if ( _widec >= 38 )
			goto tr3031;
	} else
		goto tr3031;
	goto st0;
tr3020:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1397;
tr3021:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1397;
tr3038:
	{ expr_open_parens++; }
	goto st1397;
st1397:
	if ( ++p == pe )
		goto _test_eof1397;
case 1397:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1390;
		case 5: goto st1390;
		case 8: goto st1390;
		case 13: goto st1397;
		case 18: goto tr3038;
		case 21: goto st1397;
		case 23: goto st1397;
		case 36: goto tr3038;
		case 44: goto st1397;
	}
	goto st0;
st1398:
	if ( ++p == pe )
		goto _test_eof1398;
case 1398:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3039;
	goto st0;
st1399:
	if ( ++p == pe )
		goto _test_eof1399;
case 1399:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3040;
		case 5: goto tr3040;
		case 8: goto tr3040;
		case 18: goto tr3042;
		case 21: goto tr3041;
		case 23: goto tr3041;
		case 36: goto tr3042;
		case 44: goto tr3041;
		case 48: goto st1403;
		case 53: goto st1404;
		case 54: goto st1405;
		case 55: goto st1406;
		case 56: goto st1407;
		case 57: goto st1408;
		case 58: goto st1409;
		case 59: goto st1410;
		case 60: goto st1411;
		case 61: goto st1412;
		case 62: goto st1413;
		case 79: goto st1416;
		case 80: goto st1417;
		case 81: goto st1427;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3041;
	goto st0;
tr3040:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1400;
st1400:
	if ( ++p == pe )
		goto _test_eof1400;
case 1400:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3057;
		case 23: goto st1401;
		case 131091: goto st1402;
		case 131109: goto st1402;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1401;
		} else if ( _widec >= 15 )
			goto st1401;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1401;
		} else if ( _widec >= 38 )
			goto st1401;
	} else
		goto st1401;
	goto st0;
tr3041:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1401;
tr3042:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1401;
tr3061:
	{ expr_open_parens++; }
	goto st1401;
tr3063:
	{ expr_open_parens--; }
	goto st1401;
st1401:
	if ( ++p == pe )
		goto _test_eof1401;
case 1401:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1400;
		case 5: goto st1400;
		case 8: goto st1400;
		case 13: goto st1401;
		case 18: goto tr3061;
		case 21: goto st1401;
		case 23: goto st1401;
		case 36: goto tr3061;
		case 44: goto st1401;
	}
	goto st0;
tr3064:
	{ expr_open_parens--; }
	goto st1402;
st1402:
	if ( ++p == pe )
		goto _test_eof1402;
case 1402:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3062;
		case 23: goto tr3063;
		case 131091: goto tr3064;
		case 131109: goto tr3064;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3063;
		} else if ( _widec >= 15 )
			goto tr3063;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3063;
		} else if ( _widec >= 38 )
			goto tr3063;
	} else
		goto tr3063;
	goto st0;
st1403:
	if ( ++p == pe )
		goto _test_eof1403;
case 1403:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3065;
	goto st0;
st1404:
	if ( ++p == pe )
		goto _test_eof1404;
case 1404:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3066;
	goto st0;
st1405:
	if ( ++p == pe )
		goto _test_eof1405;
case 1405:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3067;
	goto st0;
st1406:
	if ( ++p == pe )
		goto _test_eof1406;
case 1406:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3068;
	goto st0;
st1407:
	if ( ++p == pe )
		goto _test_eof1407;
case 1407:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3069;
	goto st0;
st1408:
	if ( ++p == pe )
		goto _test_eof1408;
case 1408:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3070;
	goto st0;
st1409:
	if ( ++p == pe )
		goto _test_eof1409;
case 1409:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3071;
	goto st0;
st1410:
	if ( ++p == pe )
		goto _test_eof1410;
case 1410:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3072;
	goto st0;
st1411:
	if ( ++p == pe )
		goto _test_eof1411;
case 1411:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3073;
	goto st0;
st1412:
	if ( ++p == pe )
		goto _test_eof1412;
case 1412:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3074;
	goto st0;
st1413:
	if ( ++p == pe )
		goto _test_eof1413;
case 1413:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr3075;
		case 22: goto st1414;
	}
	goto st0;
st1414:
	if ( ++p == pe )
		goto _test_eof1414;
case 1414:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3040;
		case 5: goto tr3040;
		case 8: goto tr3040;
		case 18: goto tr3042;
		case 21: goto tr3041;
		case 23: goto tr3041;
		case 36: goto tr3042;
		case 44: goto tr3041;
		case 48: goto st1403;
		case 53: goto st1404;
		case 54: goto st1405;
		case 55: goto st1406;
		case 56: goto st1407;
		case 57: goto st1408;
		case 58: goto st1409;
		case 59: goto st1410;
		case 60: goto st1411;
		case 61: goto st1412;
		case 62: goto st1415;
		case 79: goto st1416;
		case 80: goto st1417;
		case 81: goto st1427;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3041;
	goto st0;
st1415:
	if ( ++p == pe )
		goto _test_eof1415;
case 1415:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3075;
	goto st0;
st1416:
	if ( ++p == pe )
		goto _test_eof1416;
case 1416:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3078;
	goto st0;
st1417:
	if ( ++p == pe )
		goto _test_eof1417;
case 1417:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3079;
		case 5: goto tr3079;
		case 8: goto tr3079;
		case 18: goto tr3081;
		case 19: goto st1426;
		case 21: goto tr3080;
		case 23: goto tr3080;
		case 36: goto tr3081;
		case 44: goto tr3080;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3080;
	goto st0;
tr3079:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1418;
st1418:
	if ( ++p == pe )
		goto _test_eof1418;
case 1418:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1419;
		case 65555: goto tr3084;
		case 131091: goto tr3085;
		case 131109: goto st1424;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1419;
		} else if ( _widec >= 15 )
			goto st1419;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1419;
		} else if ( _widec >= 38 )
			goto st1419;
	} else
		goto st1419;
	goto st0;
tr3088:
	{ expr_open_parens++; }
	goto st1419;
tr3091:
	{ expr_open_parens--; }
	goto st1419;
st1419:
	if ( ++p == pe )
		goto _test_eof1419;
case 1419:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1420;
		case 5: goto st1420;
		case 8: goto st1420;
		case 13: goto st1419;
		case 18: goto tr3088;
		case 21: goto st1419;
		case 23: goto st1419;
		case 36: goto tr3088;
		case 44: goto st1419;
	}
	goto st0;
st1420:
	if ( ++p == pe )
		goto _test_eof1420;
case 1420:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1419;
		case 65555: goto tr3084;
		case 131091: goto st1422;
		case 131109: goto st1422;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1419;
		} else if ( _widec >= 15 )
			goto st1419;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1419;
		} else if ( _widec >= 38 )
			goto st1419;
	} else
		goto st1419;
	goto st0;
tr3084:
	{ push_expr(expr_start, p); }
	goto st1421;
tr3092:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1421;
st1421:
	if ( ++p == pe )
		goto _test_eof1421;
case 1421:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3090;
	goto st0;
tr3093:
	{ expr_open_parens--; }
	goto st1422;
st1422:
	if ( ++p == pe )
		goto _test_eof1422;
case 1422:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3091;
		case 65555: goto tr3092;
		case 131091: goto tr3093;
		case 131109: goto tr3093;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3091;
		} else if ( _widec >= 15 )
			goto tr3091;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3091;
		} else if ( _widec >= 38 )
			goto tr3091;
	} else
		goto tr3091;
	goto st0;
tr3085:
	{ push_expr(expr_start, p); }
	goto st1423;
tr3094:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1423;
st1423:
	if ( ++p == pe )
		goto _test_eof1423;
case 1423:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3090;
		case 23: goto tr3091;
		case 65555: goto tr3092;
		case 131091: goto tr3094;
		case 131109: goto tr3095;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3091;
		} else if ( _widec >= 15 )
			goto tr3091;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3091;
		} else if ( _widec >= 38 )
			goto tr3091;
	} else
		goto tr3091;
	goto st0;
tr3095:
	{ expr_open_parens--; }
	goto st1424;
st1424:
	if ( ++p == pe )
		goto _test_eof1424;
case 1424:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3091;
		case 65555: goto tr3092;
		case 131091: goto tr3094;
		case 131109: goto tr3095;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3091;
		} else if ( _widec >= 15 )
			goto tr3091;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3091;
		} else if ( _widec >= 38 )
			goto tr3091;
	} else
		goto tr3091;
	goto st0;
tr3080:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1425;
tr3081:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1425;
tr3098:
	{ expr_open_parens++; }
	goto st1425;
st1425:
	if ( ++p == pe )
		goto _test_eof1425;
case 1425:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1418;
		case 5: goto st1418;
		case 8: goto st1418;
		case 13: goto st1425;
		case 18: goto tr3098;
		case 21: goto st1425;
		case 23: goto st1425;
		case 36: goto tr3098;
		case 44: goto st1425;
	}
	goto st0;
st1426:
	if ( ++p == pe )
		goto _test_eof1426;
case 1426:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3099;
	goto st0;
st1427:
	if ( ++p == pe )
		goto _test_eof1427;
case 1427:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3100;
		case 5: goto tr3100;
		case 8: goto tr3100;
		case 18: goto tr3102;
		case 19: goto st1436;
		case 21: goto tr3101;
		case 23: goto tr3101;
		case 36: goto tr3102;
		case 44: goto tr3101;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3101;
	goto st0;
tr3100:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1428;
st1428:
	if ( ++p == pe )
		goto _test_eof1428;
case 1428:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1429;
		case 65555: goto tr3105;
		case 131091: goto tr3106;
		case 131109: goto st1434;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1429;
		} else if ( _widec >= 15 )
			goto st1429;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1429;
		} else if ( _widec >= 38 )
			goto st1429;
	} else
		goto st1429;
	goto st0;
tr3109:
	{ expr_open_parens++; }
	goto st1429;
tr3112:
	{ expr_open_parens--; }
	goto st1429;
st1429:
	if ( ++p == pe )
		goto _test_eof1429;
case 1429:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1430;
		case 5: goto st1430;
		case 8: goto st1430;
		case 13: goto st1429;
		case 18: goto tr3109;
		case 21: goto st1429;
		case 23: goto st1429;
		case 36: goto tr3109;
		case 44: goto st1429;
	}
	goto st0;
st1430:
	if ( ++p == pe )
		goto _test_eof1430;
case 1430:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1429;
		case 65555: goto tr3105;
		case 131091: goto st1432;
		case 131109: goto st1432;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1429;
		} else if ( _widec >= 15 )
			goto st1429;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1429;
		} else if ( _widec >= 38 )
			goto st1429;
	} else
		goto st1429;
	goto st0;
tr3105:
	{ push_expr(expr_start, p); }
	goto st1431;
tr3113:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1431;
st1431:
	if ( ++p == pe )
		goto _test_eof1431;
case 1431:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3111;
	goto st0;
tr3114:
	{ expr_open_parens--; }
	goto st1432;
st1432:
	if ( ++p == pe )
		goto _test_eof1432;
case 1432:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3112;
		case 65555: goto tr3113;
		case 131091: goto tr3114;
		case 131109: goto tr3114;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3112;
		} else if ( _widec >= 15 )
			goto tr3112;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3112;
		} else if ( _widec >= 38 )
			goto tr3112;
	} else
		goto tr3112;
	goto st0;
tr3106:
	{ push_expr(expr_start, p); }
	goto st1433;
tr3115:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1433;
st1433:
	if ( ++p == pe )
		goto _test_eof1433;
case 1433:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3111;
		case 23: goto tr3112;
		case 65555: goto tr3113;
		case 131091: goto tr3115;
		case 131109: goto tr3116;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3112;
		} else if ( _widec >= 15 )
			goto tr3112;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3112;
		} else if ( _widec >= 38 )
			goto tr3112;
	} else
		goto tr3112;
	goto st0;
tr3116:
	{ expr_open_parens--; }
	goto st1434;
st1434:
	if ( ++p == pe )
		goto _test_eof1434;
case 1434:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3112;
		case 65555: goto tr3113;
		case 131091: goto tr3115;
		case 131109: goto tr3116;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3112;
		} else if ( _widec >= 15 )
			goto tr3112;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3112;
		} else if ( _widec >= 38 )
			goto tr3112;
	} else
		goto tr3112;
	goto st0;
tr3101:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1435;
tr3102:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1435;
tr3119:
	{ expr_open_parens++; }
	goto st1435;
st1435:
	if ( ++p == pe )
		goto _test_eof1435;
case 1435:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1428;
		case 5: goto st1428;
		case 8: goto st1428;
		case 13: goto st1435;
		case 18: goto tr3119;
		case 21: goto st1435;
		case 23: goto st1435;
		case 36: goto tr3119;
		case 44: goto st1435;
	}
	goto st0;
st1436:
	if ( ++p == pe )
		goto _test_eof1436;
case 1436:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3120;
	goto st0;
st1437:
	if ( ++p == pe )
		goto _test_eof1437;
case 1437:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr3121;
		case 40: goto st1438;
	}
	goto st0;
st1438:
	if ( ++p == pe )
		goto _test_eof1438;
case 1438:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3123;
	goto st0;
st1439:
	if ( ++p == pe )
		goto _test_eof1439;
case 1439:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3124;
		case 5: goto tr3124;
		case 8: goto tr3124;
		case 18: goto tr3126;
		case 21: goto tr3125;
		case 23: goto tr3125;
		case 36: goto tr3126;
		case 44: goto tr3125;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3125;
	goto st0;
tr3124:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1440;
st1440:
	if ( ++p == pe )
		goto _test_eof1440;
case 1440:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3127;
		case 23: goto st1441;
		case 40: goto tr3129;
		case 131091: goto st1443;
		case 131109: goto st1443;
	}
	if ( _widec < 20 ) {
		if ( 15 <= _widec && _widec <= 17 )
			goto st1441;
	} else if ( _widec > 21 ) {
		if ( _widec > 35 ) {
			if ( 38 <= _widec && _widec <= 42 )
				goto st1441;
		} else if ( _widec >= 25 )
			goto st1441;
	} else
		goto st1441;
	goto st0;
tr3125:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1441;
tr3126:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1441;
tr3132:
	{ expr_open_parens++; }
	goto st1441;
tr3135:
	{ expr_open_parens--; }
	goto st1441;
st1441:
	if ( ++p == pe )
		goto _test_eof1441;
case 1441:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1440;
		case 5: goto st1440;
		case 8: goto st1440;
		case 13: goto st1441;
		case 18: goto tr3132;
		case 21: goto st1441;
		case 23: goto st1441;
		case 36: goto tr3132;
		case 44: goto st1441;
	}
	goto st0;
tr3129:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1442;
tr3136:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1442;
st1442:
	if ( ++p == pe )
		goto _test_eof1442;
case 1442:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3133;
	goto st0;
tr3137:
	{ expr_open_parens--; }
	goto st1443;
st1443:
	if ( ++p == pe )
		goto _test_eof1443;
case 1443:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3134;
		case 23: goto tr3135;
		case 40: goto tr3136;
		case 131091: goto tr3137;
		case 131109: goto tr3137;
	}
	if ( _widec < 20 ) {
		if ( 15 <= _widec && _widec <= 17 )
			goto tr3135;
	} else if ( _widec > 21 ) {
		if ( _widec > 35 ) {
			if ( 38 <= _widec && _widec <= 42 )
				goto tr3135;
		} else if ( _widec >= 25 )
			goto tr3135;
	} else
		goto tr3135;
	goto st0;
st1444:
	if ( ++p == pe )
		goto _test_eof1444;
case 1444:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3138;
		case 5: goto tr3138;
		case 8: goto tr3138;
		case 18: goto tr3140;
		case 21: goto tr3139;
		case 23: goto tr3139;
		case 36: goto tr3140;
		case 44: goto tr3139;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3139;
	goto st0;
tr3138:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1445;
st1445:
	if ( ++p == pe )
		goto _test_eof1445;
case 1445:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3141;
		case 23: goto st1446;
		case 131091: goto st1447;
		case 131109: goto st1447;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1446;
		} else if ( _widec >= 15 )
			goto st1446;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1446;
		} else if ( _widec >= 38 )
			goto st1446;
	} else
		goto st1446;
	goto st0;
tr3139:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1446;
tr3140:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1446;
tr3145:
	{ expr_open_parens++; }
	goto st1446;
tr3147:
	{ expr_open_parens--; }
	goto st1446;
st1446:
	if ( ++p == pe )
		goto _test_eof1446;
case 1446:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1445;
		case 5: goto st1445;
		case 8: goto st1445;
		case 13: goto st1446;
		case 18: goto tr3145;
		case 21: goto st1446;
		case 23: goto st1446;
		case 36: goto tr3145;
		case 44: goto st1446;
	}
	goto st0;
tr3148:
	{ expr_open_parens--; }
	goto st1447;
st1447:
	if ( ++p == pe )
		goto _test_eof1447;
case 1447:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3146;
		case 23: goto tr3147;
		case 131091: goto tr3148;
		case 131109: goto tr3148;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3147;
		} else if ( _widec >= 15 )
			goto tr3147;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3147;
		} else if ( _widec >= 38 )
			goto tr3147;
	} else
		goto tr3147;
	goto st0;
case 1448:
	switch( ( ((int) p->tok)) ) {
		case 0: goto tr3149;
		case 12: goto st1480;
		case 40: goto st1449;
	}
	goto st0;
tr3149:
	{ error_missing_block(); }
	goto st1480;
tr3152:
	{ current_sm = SM_DEFGROUP_LINE; }
	goto st1480;
st1480:
	if ( ++p == pe )
		goto _test_eof1480;
case 1480:
	goto st0;
st1449:
	if ( ++p == pe )
		goto _test_eof1449;
case 1449:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3152;
	goto st0;
case 1450:
	switch( ( ((int) p->tok)) ) {
		case 0: goto tr3153;
		case 3: goto tr3154;
		case 12: goto st1481;
		case 43: goto st1457;
	}
	goto st0;
tr3153:
	{ error_missing_close_block(); }
	goto st1481;
tr3157:
	{ defgroup_define_const(name->str); }
	goto st1481;
tr3163:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defgroup_start(expr_value);
    defgroup_define_const(name->str);
    }
	goto st1481;
tr3169:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defgroup_start(expr_value);
    defgroup_define_const(name->str);
    }
	goto st1481;
tr3173:
	{ current_sm = SM_MAIN; }
	goto st1481;
st1481:
	if ( ++p == pe )
		goto _test_eof1481;
case 1481:
	goto st0;
tr3154:
	{ Str_set_n(name, p->tstart, p->tlen); }
	goto st1451;
st1451:
	if ( ++p == pe )
		goto _test_eof1451;
case 1451:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr3157;
		case 22: goto tr3158;
		case 31: goto st1453;
	}
	goto st0;
tr3158:
	{ defgroup_define_const(name->str); }
	goto st1452;
tr3165:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defgroup_start(expr_value);
    defgroup_define_const(name->str);
    }
	goto st1452;
tr3171:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defgroup_start(expr_value);
    defgroup_define_const(name->str);
    }
	goto st1452;
st1452:
	if ( ++p == pe )
		goto _test_eof1452;
case 1452:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3154;
		case 12: goto st1481;
	}
	goto st0;
st1453:
	if ( ++p == pe )
		goto _test_eof1453;
case 1453:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3160;
		case 5: goto tr3160;
		case 8: goto tr3160;
		case 18: goto tr3162;
		case 21: goto tr3161;
		case 23: goto tr3161;
		case 36: goto tr3162;
		case 44: goto tr3161;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3161;
	goto st0;
tr3160:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1454;
st1454:
	if ( ++p == pe )
		goto _test_eof1454;
case 1454:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3163;
		case 22: goto tr3165;
		case 131091: goto st1456;
		case 131109: goto st1456;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st1455;
		} else if ( _widec >= 15 )
			goto st1455;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1455;
		} else if ( _widec >= 38 )
			goto st1455;
	} else
		goto st1455;
	goto st0;
tr3161:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1455;
tr3162:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1455;
tr3168:
	{ expr_open_parens++; }
	goto st1455;
tr3170:
	{ expr_open_parens--; }
	goto st1455;
st1455:
	if ( ++p == pe )
		goto _test_eof1455;
case 1455:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1454;
		case 5: goto st1454;
		case 8: goto st1454;
		case 13: goto st1455;
		case 18: goto tr3168;
		case 21: goto st1455;
		case 23: goto st1455;
		case 36: goto tr3168;
		case 44: goto st1455;
	}
	goto st0;
tr3172:
	{ expr_open_parens--; }
	goto st1456;
st1456:
	if ( ++p == pe )
		goto _test_eof1456;
case 1456:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3169;
		case 22: goto tr3171;
		case 131091: goto tr3172;
		case 131109: goto tr3172;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr3170;
		} else if ( _widec >= 15 )
			goto tr3170;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3170;
		} else if ( _widec >= 38 )
			goto tr3170;
	} else
		goto tr3170;
	goto st0;
st1457:
	if ( ++p == pe )
		goto _test_eof1457;
case 1457:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3173;
	goto st0;
case 1458:
	switch( ( ((int) p->tok)) ) {
		case 0: goto tr3174;
		case 12: goto st1482;
		case 40: goto st1459;
	}
	goto st0;
tr3174:
	{ error_missing_block(); }
	goto st1482;
tr3177:
	{ current_sm = SM_DEFVARS_LINE; }
	goto st1482;
st1482:
	if ( ++p == pe )
		goto _test_eof1482;
case 1482:
	goto st0;
st1459:
	if ( ++p == pe )
		goto _test_eof1459;
case 1459:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3177;
	goto st0;
case 1460:
	switch( ( ((int) p->tok)) ) {
		case 0: goto tr3178;
		case 3: goto tr3179;
		case 12: goto st1483;
		case 43: goto st1478;
	}
	goto st0;
tr3178:
	{ error_missing_close_block(); }
	goto st1483;
tr3182:
	{ defvars_define_const( name->str, 0, 0 ); }
	goto st1483;
tr3190:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_B, expr_value );
    }
	goto st1483;
tr3195:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_B, expr_value );
    }
	goto st1483;
tr3201:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_W, expr_value );
    }
	goto st1483;
tr3206:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_W, expr_value );
    }
	goto st1483;
tr3212:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_P, expr_value );
    }
	goto st1483;
tr3217:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_P, expr_value );
    }
	goto st1483;
tr3223:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_L, expr_value );
    }
	goto st1483;
tr3228:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name->str, DEFVARS_SIZE_L, expr_value );
    }
	goto st1483;
tr3231:
	{ current_sm = SM_MAIN; }
	goto st1483;
st1483:
	if ( ++p == pe )
		goto _test_eof1483;
case 1483:
	goto st0;
tr3179:
	{ Str_set_n(name, p->tstart, p->tlen); }
	goto st1461;
st1461:
	if ( ++p == pe )
		goto _test_eof1461;
case 1461:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr3182;
		case 87: goto st1462;
		case 88: goto st1466;
		case 89: goto st1470;
		case 90: goto st1474;
	}
	goto st0;
st1462:
	if ( ++p == pe )
		goto _test_eof1462;
case 1462:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3187;
		case 5: goto tr3187;
		case 8: goto tr3187;
		case 18: goto tr3189;
		case 21: goto tr3188;
		case 23: goto tr3188;
		case 36: goto tr3189;
		case 44: goto tr3188;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3188;
	goto st0;
tr3187:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1463;
st1463:
	if ( ++p == pe )
		goto _test_eof1463;
case 1463:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3190;
		case 23: goto st1464;
		case 131091: goto st1465;
		case 131109: goto st1465;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1464;
		} else if ( _widec >= 15 )
			goto st1464;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1464;
		} else if ( _widec >= 38 )
			goto st1464;
	} else
		goto st1464;
	goto st0;
tr3188:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1464;
tr3189:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1464;
tr3194:
	{ expr_open_parens++; }
	goto st1464;
tr3196:
	{ expr_open_parens--; }
	goto st1464;
st1464:
	if ( ++p == pe )
		goto _test_eof1464;
case 1464:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1463;
		case 5: goto st1463;
		case 8: goto st1463;
		case 13: goto st1464;
		case 18: goto tr3194;
		case 21: goto st1464;
		case 23: goto st1464;
		case 36: goto tr3194;
		case 44: goto st1464;
	}
	goto st0;
tr3197:
	{ expr_open_parens--; }
	goto st1465;
st1465:
	if ( ++p == pe )
		goto _test_eof1465;
case 1465:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3195;
		case 23: goto tr3196;
		case 131091: goto tr3197;
		case 131109: goto tr3197;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3196;
		} else if ( _widec >= 15 )
			goto tr3196;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3196;
		} else if ( _widec >= 38 )
			goto tr3196;
	} else
		goto tr3196;
	goto st0;
st1466:
	if ( ++p == pe )
		goto _test_eof1466;
case 1466:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3198;
		case 5: goto tr3198;
		case 8: goto tr3198;
		case 18: goto tr3200;
		case 21: goto tr3199;
		case 23: goto tr3199;
		case 36: goto tr3200;
		case 44: goto tr3199;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3199;
	goto st0;
tr3198:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1467;
st1467:
	if ( ++p == pe )
		goto _test_eof1467;
case 1467:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3201;
		case 23: goto st1468;
		case 131091: goto st1469;
		case 131109: goto st1469;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1468;
		} else if ( _widec >= 15 )
			goto st1468;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1468;
		} else if ( _widec >= 38 )
			goto st1468;
	} else
		goto st1468;
	goto st0;
tr3199:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1468;
tr3200:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1468;
tr3205:
	{ expr_open_parens++; }
	goto st1468;
tr3207:
	{ expr_open_parens--; }
	goto st1468;
st1468:
	if ( ++p == pe )
		goto _test_eof1468;
case 1468:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1467;
		case 5: goto st1467;
		case 8: goto st1467;
		case 13: goto st1468;
		case 18: goto tr3205;
		case 21: goto st1468;
		case 23: goto st1468;
		case 36: goto tr3205;
		case 44: goto st1468;
	}
	goto st0;
tr3208:
	{ expr_open_parens--; }
	goto st1469;
st1469:
	if ( ++p == pe )
		goto _test_eof1469;
case 1469:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3206;
		case 23: goto tr3207;
		case 131091: goto tr3208;
		case 131109: goto tr3208;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3207;
		} else if ( _widec >= 15 )
			goto tr3207;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3207;
		} else if ( _widec >= 38 )
			goto tr3207;
	} else
		goto tr3207;
	goto st0;
st1470:
	if ( ++p == pe )
		goto _test_eof1470;
case 1470:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3209;
		case 5: goto tr3209;
		case 8: goto tr3209;
		case 18: goto tr3211;
		case 21: goto tr3210;
		case 23: goto tr3210;
		case 36: goto tr3211;
		case 44: goto tr3210;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3210;
	goto st0;
tr3209:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1471;
st1471:
	if ( ++p == pe )
		goto _test_eof1471;
case 1471:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3212;
		case 23: goto st1472;
		case 131091: goto st1473;
		case 131109: goto st1473;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1472;
		} else if ( _widec >= 15 )
			goto st1472;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1472;
		} else if ( _widec >= 38 )
			goto st1472;
	} else
		goto st1472;
	goto st0;
tr3210:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1472;
tr3211:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1472;
tr3216:
	{ expr_open_parens++; }
	goto st1472;
tr3218:
	{ expr_open_parens--; }
	goto st1472;
st1472:
	if ( ++p == pe )
		goto _test_eof1472;
case 1472:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1471;
		case 5: goto st1471;
		case 8: goto st1471;
		case 13: goto st1472;
		case 18: goto tr3216;
		case 21: goto st1472;
		case 23: goto st1472;
		case 36: goto tr3216;
		case 44: goto st1472;
	}
	goto st0;
tr3219:
	{ expr_open_parens--; }
	goto st1473;
st1473:
	if ( ++p == pe )
		goto _test_eof1473;
case 1473:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3217;
		case 23: goto tr3218;
		case 131091: goto tr3219;
		case 131109: goto tr3219;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3218;
		} else if ( _widec >= 15 )
			goto tr3218;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3218;
		} else if ( _widec >= 38 )
			goto tr3218;
	} else
		goto tr3218;
	goto st0;
st1474:
	if ( ++p == pe )
		goto _test_eof1474;
case 1474:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3220;
		case 5: goto tr3220;
		case 8: goto tr3220;
		case 18: goto tr3222;
		case 21: goto tr3221;
		case 23: goto tr3221;
		case 36: goto tr3222;
		case 44: goto tr3221;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3221;
	goto st0;
tr3220:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1475;
st1475:
	if ( ++p == pe )
		goto _test_eof1475;
case 1475:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3223;
		case 23: goto st1476;
		case 131091: goto st1477;
		case 131109: goto st1477;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1476;
		} else if ( _widec >= 15 )
			goto st1476;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1476;
		} else if ( _widec >= 38 )
			goto st1476;
	} else
		goto st1476;
	goto st0;
tr3221:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1476;
tr3222:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1476;
tr3227:
	{ expr_open_parens++; }
	goto st1476;
tr3229:
	{ expr_open_parens--; }
	goto st1476;
st1476:
	if ( ++p == pe )
		goto _test_eof1476;
case 1476:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1475;
		case 5: goto st1475;
		case 8: goto st1475;
		case 13: goto st1476;
		case 18: goto tr3227;
		case 21: goto st1476;
		case 23: goto st1476;
		case 36: goto tr3227;
		case 44: goto st1476;
	}
	goto st0;
tr3230:
	{ expr_open_parens--; }
	goto st1477;
st1477:
	if ( ++p == pe )
		goto _test_eof1477;
case 1477:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3228;
		case 23: goto tr3229;
		case 131091: goto tr3230;
		case 131109: goto tr3230;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3229;
		} else if ( _widec >= 15 )
			goto tr3229;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3229;
		} else if ( _widec >= 38 )
			goto tr3229;
	} else
		goto tr3229;
	goto st0;
st1478:
	if ( ++p == pe )
		goto _test_eof1478;
case 1478:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3231;
	goto st0;
	}
	_test_eof1479: cs = 1479; goto _test_eof; 
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
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 
	_test_eof27: cs = 27; goto _test_eof; 
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
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
	_test_eof416: cs = 416; goto _test_eof; 
	_test_eof417: cs = 417; goto _test_eof; 
	_test_eof418: cs = 418; goto _test_eof; 
	_test_eof419: cs = 419; goto _test_eof; 
	_test_eof420: cs = 420; goto _test_eof; 
	_test_eof421: cs = 421; goto _test_eof; 
	_test_eof422: cs = 422; goto _test_eof; 
	_test_eof423: cs = 423; goto _test_eof; 
	_test_eof424: cs = 424; goto _test_eof; 
	_test_eof425: cs = 425; goto _test_eof; 
	_test_eof426: cs = 426; goto _test_eof; 
	_test_eof427: cs = 427; goto _test_eof; 
	_test_eof428: cs = 428; goto _test_eof; 
	_test_eof429: cs = 429; goto _test_eof; 
	_test_eof430: cs = 430; goto _test_eof; 
	_test_eof431: cs = 431; goto _test_eof; 
	_test_eof432: cs = 432; goto _test_eof; 
	_test_eof433: cs = 433; goto _test_eof; 
	_test_eof434: cs = 434; goto _test_eof; 
	_test_eof435: cs = 435; goto _test_eof; 
	_test_eof436: cs = 436; goto _test_eof; 
	_test_eof437: cs = 437; goto _test_eof; 
	_test_eof438: cs = 438; goto _test_eof; 
	_test_eof439: cs = 439; goto _test_eof; 
	_test_eof440: cs = 440; goto _test_eof; 
	_test_eof441: cs = 441; goto _test_eof; 
	_test_eof442: cs = 442; goto _test_eof; 
	_test_eof443: cs = 443; goto _test_eof; 
	_test_eof444: cs = 444; goto _test_eof; 
	_test_eof445: cs = 445; goto _test_eof; 
	_test_eof446: cs = 446; goto _test_eof; 
	_test_eof447: cs = 447; goto _test_eof; 
	_test_eof448: cs = 448; goto _test_eof; 
	_test_eof449: cs = 449; goto _test_eof; 
	_test_eof450: cs = 450; goto _test_eof; 
	_test_eof451: cs = 451; goto _test_eof; 
	_test_eof452: cs = 452; goto _test_eof; 
	_test_eof453: cs = 453; goto _test_eof; 
	_test_eof454: cs = 454; goto _test_eof; 
	_test_eof455: cs = 455; goto _test_eof; 
	_test_eof456: cs = 456; goto _test_eof; 
	_test_eof457: cs = 457; goto _test_eof; 
	_test_eof458: cs = 458; goto _test_eof; 
	_test_eof459: cs = 459; goto _test_eof; 
	_test_eof460: cs = 460; goto _test_eof; 
	_test_eof461: cs = 461; goto _test_eof; 
	_test_eof462: cs = 462; goto _test_eof; 
	_test_eof463: cs = 463; goto _test_eof; 
	_test_eof464: cs = 464; goto _test_eof; 
	_test_eof465: cs = 465; goto _test_eof; 
	_test_eof466: cs = 466; goto _test_eof; 
	_test_eof467: cs = 467; goto _test_eof; 
	_test_eof468: cs = 468; goto _test_eof; 
	_test_eof469: cs = 469; goto _test_eof; 
	_test_eof470: cs = 470; goto _test_eof; 
	_test_eof471: cs = 471; goto _test_eof; 
	_test_eof472: cs = 472; goto _test_eof; 
	_test_eof473: cs = 473; goto _test_eof; 
	_test_eof474: cs = 474; goto _test_eof; 
	_test_eof475: cs = 475; goto _test_eof; 
	_test_eof476: cs = 476; goto _test_eof; 
	_test_eof477: cs = 477; goto _test_eof; 
	_test_eof478: cs = 478; goto _test_eof; 
	_test_eof479: cs = 479; goto _test_eof; 
	_test_eof480: cs = 480; goto _test_eof; 
	_test_eof481: cs = 481; goto _test_eof; 
	_test_eof482: cs = 482; goto _test_eof; 
	_test_eof483: cs = 483; goto _test_eof; 
	_test_eof484: cs = 484; goto _test_eof; 
	_test_eof485: cs = 485; goto _test_eof; 
	_test_eof486: cs = 486; goto _test_eof; 
	_test_eof487: cs = 487; goto _test_eof; 
	_test_eof488: cs = 488; goto _test_eof; 
	_test_eof489: cs = 489; goto _test_eof; 
	_test_eof490: cs = 490; goto _test_eof; 
	_test_eof491: cs = 491; goto _test_eof; 
	_test_eof492: cs = 492; goto _test_eof; 
	_test_eof493: cs = 493; goto _test_eof; 
	_test_eof494: cs = 494; goto _test_eof; 
	_test_eof495: cs = 495; goto _test_eof; 
	_test_eof496: cs = 496; goto _test_eof; 
	_test_eof497: cs = 497; goto _test_eof; 
	_test_eof498: cs = 498; goto _test_eof; 
	_test_eof499: cs = 499; goto _test_eof; 
	_test_eof500: cs = 500; goto _test_eof; 
	_test_eof501: cs = 501; goto _test_eof; 
	_test_eof502: cs = 502; goto _test_eof; 
	_test_eof503: cs = 503; goto _test_eof; 
	_test_eof504: cs = 504; goto _test_eof; 
	_test_eof505: cs = 505; goto _test_eof; 
	_test_eof506: cs = 506; goto _test_eof; 
	_test_eof507: cs = 507; goto _test_eof; 
	_test_eof508: cs = 508; goto _test_eof; 
	_test_eof509: cs = 509; goto _test_eof; 
	_test_eof510: cs = 510; goto _test_eof; 
	_test_eof511: cs = 511; goto _test_eof; 
	_test_eof512: cs = 512; goto _test_eof; 
	_test_eof513: cs = 513; goto _test_eof; 
	_test_eof514: cs = 514; goto _test_eof; 
	_test_eof515: cs = 515; goto _test_eof; 
	_test_eof516: cs = 516; goto _test_eof; 
	_test_eof517: cs = 517; goto _test_eof; 
	_test_eof518: cs = 518; goto _test_eof; 
	_test_eof519: cs = 519; goto _test_eof; 
	_test_eof520: cs = 520; goto _test_eof; 
	_test_eof521: cs = 521; goto _test_eof; 
	_test_eof522: cs = 522; goto _test_eof; 
	_test_eof523: cs = 523; goto _test_eof; 
	_test_eof524: cs = 524; goto _test_eof; 
	_test_eof525: cs = 525; goto _test_eof; 
	_test_eof526: cs = 526; goto _test_eof; 
	_test_eof527: cs = 527; goto _test_eof; 
	_test_eof528: cs = 528; goto _test_eof; 
	_test_eof529: cs = 529; goto _test_eof; 
	_test_eof530: cs = 530; goto _test_eof; 
	_test_eof531: cs = 531; goto _test_eof; 
	_test_eof532: cs = 532; goto _test_eof; 
	_test_eof533: cs = 533; goto _test_eof; 
	_test_eof534: cs = 534; goto _test_eof; 
	_test_eof535: cs = 535; goto _test_eof; 
	_test_eof536: cs = 536; goto _test_eof; 
	_test_eof537: cs = 537; goto _test_eof; 
	_test_eof538: cs = 538; goto _test_eof; 
	_test_eof539: cs = 539; goto _test_eof; 
	_test_eof540: cs = 540; goto _test_eof; 
	_test_eof541: cs = 541; goto _test_eof; 
	_test_eof542: cs = 542; goto _test_eof; 
	_test_eof543: cs = 543; goto _test_eof; 
	_test_eof544: cs = 544; goto _test_eof; 
	_test_eof545: cs = 545; goto _test_eof; 
	_test_eof546: cs = 546; goto _test_eof; 
	_test_eof547: cs = 547; goto _test_eof; 
	_test_eof548: cs = 548; goto _test_eof; 
	_test_eof549: cs = 549; goto _test_eof; 
	_test_eof550: cs = 550; goto _test_eof; 
	_test_eof551: cs = 551; goto _test_eof; 
	_test_eof552: cs = 552; goto _test_eof; 
	_test_eof553: cs = 553; goto _test_eof; 
	_test_eof554: cs = 554; goto _test_eof; 
	_test_eof555: cs = 555; goto _test_eof; 
	_test_eof556: cs = 556; goto _test_eof; 
	_test_eof557: cs = 557; goto _test_eof; 
	_test_eof558: cs = 558; goto _test_eof; 
	_test_eof559: cs = 559; goto _test_eof; 
	_test_eof560: cs = 560; goto _test_eof; 
	_test_eof561: cs = 561; goto _test_eof; 
	_test_eof562: cs = 562; goto _test_eof; 
	_test_eof563: cs = 563; goto _test_eof; 
	_test_eof564: cs = 564; goto _test_eof; 
	_test_eof565: cs = 565; goto _test_eof; 
	_test_eof566: cs = 566; goto _test_eof; 
	_test_eof567: cs = 567; goto _test_eof; 
	_test_eof568: cs = 568; goto _test_eof; 
	_test_eof569: cs = 569; goto _test_eof; 
	_test_eof570: cs = 570; goto _test_eof; 
	_test_eof571: cs = 571; goto _test_eof; 
	_test_eof572: cs = 572; goto _test_eof; 
	_test_eof573: cs = 573; goto _test_eof; 
	_test_eof574: cs = 574; goto _test_eof; 
	_test_eof575: cs = 575; goto _test_eof; 
	_test_eof576: cs = 576; goto _test_eof; 
	_test_eof577: cs = 577; goto _test_eof; 
	_test_eof578: cs = 578; goto _test_eof; 
	_test_eof579: cs = 579; goto _test_eof; 
	_test_eof580: cs = 580; goto _test_eof; 
	_test_eof581: cs = 581; goto _test_eof; 
	_test_eof582: cs = 582; goto _test_eof; 
	_test_eof583: cs = 583; goto _test_eof; 
	_test_eof584: cs = 584; goto _test_eof; 
	_test_eof585: cs = 585; goto _test_eof; 
	_test_eof586: cs = 586; goto _test_eof; 
	_test_eof587: cs = 587; goto _test_eof; 
	_test_eof588: cs = 588; goto _test_eof; 
	_test_eof589: cs = 589; goto _test_eof; 
	_test_eof590: cs = 590; goto _test_eof; 
	_test_eof591: cs = 591; goto _test_eof; 
	_test_eof592: cs = 592; goto _test_eof; 
	_test_eof593: cs = 593; goto _test_eof; 
	_test_eof594: cs = 594; goto _test_eof; 
	_test_eof595: cs = 595; goto _test_eof; 
	_test_eof596: cs = 596; goto _test_eof; 
	_test_eof597: cs = 597; goto _test_eof; 
	_test_eof598: cs = 598; goto _test_eof; 
	_test_eof599: cs = 599; goto _test_eof; 
	_test_eof600: cs = 600; goto _test_eof; 
	_test_eof601: cs = 601; goto _test_eof; 
	_test_eof602: cs = 602; goto _test_eof; 
	_test_eof603: cs = 603; goto _test_eof; 
	_test_eof604: cs = 604; goto _test_eof; 
	_test_eof605: cs = 605; goto _test_eof; 
	_test_eof606: cs = 606; goto _test_eof; 
	_test_eof607: cs = 607; goto _test_eof; 
	_test_eof608: cs = 608; goto _test_eof; 
	_test_eof609: cs = 609; goto _test_eof; 
	_test_eof610: cs = 610; goto _test_eof; 
	_test_eof611: cs = 611; goto _test_eof; 
	_test_eof612: cs = 612; goto _test_eof; 
	_test_eof613: cs = 613; goto _test_eof; 
	_test_eof614: cs = 614; goto _test_eof; 
	_test_eof615: cs = 615; goto _test_eof; 
	_test_eof616: cs = 616; goto _test_eof; 
	_test_eof617: cs = 617; goto _test_eof; 
	_test_eof618: cs = 618; goto _test_eof; 
	_test_eof619: cs = 619; goto _test_eof; 
	_test_eof620: cs = 620; goto _test_eof; 
	_test_eof621: cs = 621; goto _test_eof; 
	_test_eof622: cs = 622; goto _test_eof; 
	_test_eof623: cs = 623; goto _test_eof; 
	_test_eof624: cs = 624; goto _test_eof; 
	_test_eof625: cs = 625; goto _test_eof; 
	_test_eof626: cs = 626; goto _test_eof; 
	_test_eof627: cs = 627; goto _test_eof; 
	_test_eof628: cs = 628; goto _test_eof; 
	_test_eof629: cs = 629; goto _test_eof; 
	_test_eof630: cs = 630; goto _test_eof; 
	_test_eof631: cs = 631; goto _test_eof; 
	_test_eof632: cs = 632; goto _test_eof; 
	_test_eof633: cs = 633; goto _test_eof; 
	_test_eof634: cs = 634; goto _test_eof; 
	_test_eof635: cs = 635; goto _test_eof; 
	_test_eof636: cs = 636; goto _test_eof; 
	_test_eof637: cs = 637; goto _test_eof; 
	_test_eof638: cs = 638; goto _test_eof; 
	_test_eof639: cs = 639; goto _test_eof; 
	_test_eof640: cs = 640; goto _test_eof; 
	_test_eof641: cs = 641; goto _test_eof; 
	_test_eof642: cs = 642; goto _test_eof; 
	_test_eof643: cs = 643; goto _test_eof; 
	_test_eof644: cs = 644; goto _test_eof; 
	_test_eof645: cs = 645; goto _test_eof; 
	_test_eof646: cs = 646; goto _test_eof; 
	_test_eof647: cs = 647; goto _test_eof; 
	_test_eof648: cs = 648; goto _test_eof; 
	_test_eof649: cs = 649; goto _test_eof; 
	_test_eof650: cs = 650; goto _test_eof; 
	_test_eof651: cs = 651; goto _test_eof; 
	_test_eof652: cs = 652; goto _test_eof; 
	_test_eof653: cs = 653; goto _test_eof; 
	_test_eof654: cs = 654; goto _test_eof; 
	_test_eof655: cs = 655; goto _test_eof; 
	_test_eof656: cs = 656; goto _test_eof; 
	_test_eof657: cs = 657; goto _test_eof; 
	_test_eof658: cs = 658; goto _test_eof; 
	_test_eof659: cs = 659; goto _test_eof; 
	_test_eof660: cs = 660; goto _test_eof; 
	_test_eof661: cs = 661; goto _test_eof; 
	_test_eof662: cs = 662; goto _test_eof; 
	_test_eof663: cs = 663; goto _test_eof; 
	_test_eof664: cs = 664; goto _test_eof; 
	_test_eof665: cs = 665; goto _test_eof; 
	_test_eof666: cs = 666; goto _test_eof; 
	_test_eof667: cs = 667; goto _test_eof; 
	_test_eof668: cs = 668; goto _test_eof; 
	_test_eof669: cs = 669; goto _test_eof; 
	_test_eof670: cs = 670; goto _test_eof; 
	_test_eof671: cs = 671; goto _test_eof; 
	_test_eof672: cs = 672; goto _test_eof; 
	_test_eof673: cs = 673; goto _test_eof; 
	_test_eof674: cs = 674; goto _test_eof; 
	_test_eof675: cs = 675; goto _test_eof; 
	_test_eof676: cs = 676; goto _test_eof; 
	_test_eof677: cs = 677; goto _test_eof; 
	_test_eof678: cs = 678; goto _test_eof; 
	_test_eof679: cs = 679; goto _test_eof; 
	_test_eof680: cs = 680; goto _test_eof; 
	_test_eof681: cs = 681; goto _test_eof; 
	_test_eof682: cs = 682; goto _test_eof; 
	_test_eof683: cs = 683; goto _test_eof; 
	_test_eof684: cs = 684; goto _test_eof; 
	_test_eof685: cs = 685; goto _test_eof; 
	_test_eof686: cs = 686; goto _test_eof; 
	_test_eof687: cs = 687; goto _test_eof; 
	_test_eof688: cs = 688; goto _test_eof; 
	_test_eof689: cs = 689; goto _test_eof; 
	_test_eof690: cs = 690; goto _test_eof; 
	_test_eof691: cs = 691; goto _test_eof; 
	_test_eof692: cs = 692; goto _test_eof; 
	_test_eof693: cs = 693; goto _test_eof; 
	_test_eof694: cs = 694; goto _test_eof; 
	_test_eof695: cs = 695; goto _test_eof; 
	_test_eof696: cs = 696; goto _test_eof; 
	_test_eof697: cs = 697; goto _test_eof; 
	_test_eof698: cs = 698; goto _test_eof; 
	_test_eof699: cs = 699; goto _test_eof; 
	_test_eof700: cs = 700; goto _test_eof; 
	_test_eof701: cs = 701; goto _test_eof; 
	_test_eof702: cs = 702; goto _test_eof; 
	_test_eof703: cs = 703; goto _test_eof; 
	_test_eof704: cs = 704; goto _test_eof; 
	_test_eof705: cs = 705; goto _test_eof; 
	_test_eof706: cs = 706; goto _test_eof; 
	_test_eof707: cs = 707; goto _test_eof; 
	_test_eof708: cs = 708; goto _test_eof; 
	_test_eof709: cs = 709; goto _test_eof; 
	_test_eof710: cs = 710; goto _test_eof; 
	_test_eof711: cs = 711; goto _test_eof; 
	_test_eof712: cs = 712; goto _test_eof; 
	_test_eof713: cs = 713; goto _test_eof; 
	_test_eof714: cs = 714; goto _test_eof; 
	_test_eof715: cs = 715; goto _test_eof; 
	_test_eof716: cs = 716; goto _test_eof; 
	_test_eof717: cs = 717; goto _test_eof; 
	_test_eof718: cs = 718; goto _test_eof; 
	_test_eof719: cs = 719; goto _test_eof; 
	_test_eof720: cs = 720; goto _test_eof; 
	_test_eof721: cs = 721; goto _test_eof; 
	_test_eof722: cs = 722; goto _test_eof; 
	_test_eof723: cs = 723; goto _test_eof; 
	_test_eof724: cs = 724; goto _test_eof; 
	_test_eof725: cs = 725; goto _test_eof; 
	_test_eof726: cs = 726; goto _test_eof; 
	_test_eof727: cs = 727; goto _test_eof; 
	_test_eof728: cs = 728; goto _test_eof; 
	_test_eof729: cs = 729; goto _test_eof; 
	_test_eof730: cs = 730; goto _test_eof; 
	_test_eof731: cs = 731; goto _test_eof; 
	_test_eof732: cs = 732; goto _test_eof; 
	_test_eof733: cs = 733; goto _test_eof; 
	_test_eof734: cs = 734; goto _test_eof; 
	_test_eof735: cs = 735; goto _test_eof; 
	_test_eof736: cs = 736; goto _test_eof; 
	_test_eof737: cs = 737; goto _test_eof; 
	_test_eof738: cs = 738; goto _test_eof; 
	_test_eof739: cs = 739; goto _test_eof; 
	_test_eof740: cs = 740; goto _test_eof; 
	_test_eof741: cs = 741; goto _test_eof; 
	_test_eof742: cs = 742; goto _test_eof; 
	_test_eof743: cs = 743; goto _test_eof; 
	_test_eof744: cs = 744; goto _test_eof; 
	_test_eof745: cs = 745; goto _test_eof; 
	_test_eof746: cs = 746; goto _test_eof; 
	_test_eof747: cs = 747; goto _test_eof; 
	_test_eof748: cs = 748; goto _test_eof; 
	_test_eof749: cs = 749; goto _test_eof; 
	_test_eof750: cs = 750; goto _test_eof; 
	_test_eof751: cs = 751; goto _test_eof; 
	_test_eof752: cs = 752; goto _test_eof; 
	_test_eof753: cs = 753; goto _test_eof; 
	_test_eof754: cs = 754; goto _test_eof; 
	_test_eof755: cs = 755; goto _test_eof; 
	_test_eof756: cs = 756; goto _test_eof; 
	_test_eof757: cs = 757; goto _test_eof; 
	_test_eof758: cs = 758; goto _test_eof; 
	_test_eof759: cs = 759; goto _test_eof; 
	_test_eof760: cs = 760; goto _test_eof; 
	_test_eof761: cs = 761; goto _test_eof; 
	_test_eof762: cs = 762; goto _test_eof; 
	_test_eof763: cs = 763; goto _test_eof; 
	_test_eof764: cs = 764; goto _test_eof; 
	_test_eof765: cs = 765; goto _test_eof; 
	_test_eof766: cs = 766; goto _test_eof; 
	_test_eof767: cs = 767; goto _test_eof; 
	_test_eof768: cs = 768; goto _test_eof; 
	_test_eof769: cs = 769; goto _test_eof; 
	_test_eof770: cs = 770; goto _test_eof; 
	_test_eof771: cs = 771; goto _test_eof; 
	_test_eof772: cs = 772; goto _test_eof; 
	_test_eof773: cs = 773; goto _test_eof; 
	_test_eof774: cs = 774; goto _test_eof; 
	_test_eof775: cs = 775; goto _test_eof; 
	_test_eof776: cs = 776; goto _test_eof; 
	_test_eof777: cs = 777; goto _test_eof; 
	_test_eof778: cs = 778; goto _test_eof; 
	_test_eof779: cs = 779; goto _test_eof; 
	_test_eof780: cs = 780; goto _test_eof; 
	_test_eof781: cs = 781; goto _test_eof; 
	_test_eof782: cs = 782; goto _test_eof; 
	_test_eof783: cs = 783; goto _test_eof; 
	_test_eof784: cs = 784; goto _test_eof; 
	_test_eof785: cs = 785; goto _test_eof; 
	_test_eof786: cs = 786; goto _test_eof; 
	_test_eof787: cs = 787; goto _test_eof; 
	_test_eof788: cs = 788; goto _test_eof; 
	_test_eof789: cs = 789; goto _test_eof; 
	_test_eof790: cs = 790; goto _test_eof; 
	_test_eof791: cs = 791; goto _test_eof; 
	_test_eof792: cs = 792; goto _test_eof; 
	_test_eof793: cs = 793; goto _test_eof; 
	_test_eof794: cs = 794; goto _test_eof; 
	_test_eof795: cs = 795; goto _test_eof; 
	_test_eof796: cs = 796; goto _test_eof; 
	_test_eof797: cs = 797; goto _test_eof; 
	_test_eof798: cs = 798; goto _test_eof; 
	_test_eof799: cs = 799; goto _test_eof; 
	_test_eof800: cs = 800; goto _test_eof; 
	_test_eof801: cs = 801; goto _test_eof; 
	_test_eof802: cs = 802; goto _test_eof; 
	_test_eof803: cs = 803; goto _test_eof; 
	_test_eof804: cs = 804; goto _test_eof; 
	_test_eof805: cs = 805; goto _test_eof; 
	_test_eof806: cs = 806; goto _test_eof; 
	_test_eof807: cs = 807; goto _test_eof; 
	_test_eof808: cs = 808; goto _test_eof; 
	_test_eof809: cs = 809; goto _test_eof; 
	_test_eof810: cs = 810; goto _test_eof; 
	_test_eof811: cs = 811; goto _test_eof; 
	_test_eof812: cs = 812; goto _test_eof; 
	_test_eof813: cs = 813; goto _test_eof; 
	_test_eof814: cs = 814; goto _test_eof; 
	_test_eof815: cs = 815; goto _test_eof; 
	_test_eof816: cs = 816; goto _test_eof; 
	_test_eof817: cs = 817; goto _test_eof; 
	_test_eof818: cs = 818; goto _test_eof; 
	_test_eof819: cs = 819; goto _test_eof; 
	_test_eof820: cs = 820; goto _test_eof; 
	_test_eof821: cs = 821; goto _test_eof; 
	_test_eof822: cs = 822; goto _test_eof; 
	_test_eof823: cs = 823; goto _test_eof; 
	_test_eof824: cs = 824; goto _test_eof; 
	_test_eof825: cs = 825; goto _test_eof; 
	_test_eof826: cs = 826; goto _test_eof; 
	_test_eof827: cs = 827; goto _test_eof; 
	_test_eof828: cs = 828; goto _test_eof; 
	_test_eof829: cs = 829; goto _test_eof; 
	_test_eof830: cs = 830; goto _test_eof; 
	_test_eof831: cs = 831; goto _test_eof; 
	_test_eof832: cs = 832; goto _test_eof; 
	_test_eof833: cs = 833; goto _test_eof; 
	_test_eof834: cs = 834; goto _test_eof; 
	_test_eof835: cs = 835; goto _test_eof; 
	_test_eof836: cs = 836; goto _test_eof; 
	_test_eof837: cs = 837; goto _test_eof; 
	_test_eof838: cs = 838; goto _test_eof; 
	_test_eof839: cs = 839; goto _test_eof; 
	_test_eof840: cs = 840; goto _test_eof; 
	_test_eof841: cs = 841; goto _test_eof; 
	_test_eof842: cs = 842; goto _test_eof; 
	_test_eof843: cs = 843; goto _test_eof; 
	_test_eof844: cs = 844; goto _test_eof; 
	_test_eof845: cs = 845; goto _test_eof; 
	_test_eof846: cs = 846; goto _test_eof; 
	_test_eof847: cs = 847; goto _test_eof; 
	_test_eof848: cs = 848; goto _test_eof; 
	_test_eof849: cs = 849; goto _test_eof; 
	_test_eof850: cs = 850; goto _test_eof; 
	_test_eof851: cs = 851; goto _test_eof; 
	_test_eof852: cs = 852; goto _test_eof; 
	_test_eof853: cs = 853; goto _test_eof; 
	_test_eof854: cs = 854; goto _test_eof; 
	_test_eof855: cs = 855; goto _test_eof; 
	_test_eof856: cs = 856; goto _test_eof; 
	_test_eof857: cs = 857; goto _test_eof; 
	_test_eof858: cs = 858; goto _test_eof; 
	_test_eof859: cs = 859; goto _test_eof; 
	_test_eof860: cs = 860; goto _test_eof; 
	_test_eof861: cs = 861; goto _test_eof; 
	_test_eof862: cs = 862; goto _test_eof; 
	_test_eof863: cs = 863; goto _test_eof; 
	_test_eof864: cs = 864; goto _test_eof; 
	_test_eof865: cs = 865; goto _test_eof; 
	_test_eof866: cs = 866; goto _test_eof; 
	_test_eof867: cs = 867; goto _test_eof; 
	_test_eof868: cs = 868; goto _test_eof; 
	_test_eof869: cs = 869; goto _test_eof; 
	_test_eof870: cs = 870; goto _test_eof; 
	_test_eof871: cs = 871; goto _test_eof; 
	_test_eof872: cs = 872; goto _test_eof; 
	_test_eof873: cs = 873; goto _test_eof; 
	_test_eof874: cs = 874; goto _test_eof; 
	_test_eof875: cs = 875; goto _test_eof; 
	_test_eof876: cs = 876; goto _test_eof; 
	_test_eof877: cs = 877; goto _test_eof; 
	_test_eof878: cs = 878; goto _test_eof; 
	_test_eof879: cs = 879; goto _test_eof; 
	_test_eof880: cs = 880; goto _test_eof; 
	_test_eof881: cs = 881; goto _test_eof; 
	_test_eof882: cs = 882; goto _test_eof; 
	_test_eof883: cs = 883; goto _test_eof; 
	_test_eof884: cs = 884; goto _test_eof; 
	_test_eof885: cs = 885; goto _test_eof; 
	_test_eof886: cs = 886; goto _test_eof; 
	_test_eof887: cs = 887; goto _test_eof; 
	_test_eof888: cs = 888; goto _test_eof; 
	_test_eof889: cs = 889; goto _test_eof; 
	_test_eof890: cs = 890; goto _test_eof; 
	_test_eof891: cs = 891; goto _test_eof; 
	_test_eof892: cs = 892; goto _test_eof; 
	_test_eof893: cs = 893; goto _test_eof; 
	_test_eof894: cs = 894; goto _test_eof; 
	_test_eof895: cs = 895; goto _test_eof; 
	_test_eof896: cs = 896; goto _test_eof; 
	_test_eof897: cs = 897; goto _test_eof; 
	_test_eof898: cs = 898; goto _test_eof; 
	_test_eof899: cs = 899; goto _test_eof; 
	_test_eof900: cs = 900; goto _test_eof; 
	_test_eof901: cs = 901; goto _test_eof; 
	_test_eof902: cs = 902; goto _test_eof; 
	_test_eof903: cs = 903; goto _test_eof; 
	_test_eof904: cs = 904; goto _test_eof; 
	_test_eof905: cs = 905; goto _test_eof; 
	_test_eof906: cs = 906; goto _test_eof; 
	_test_eof907: cs = 907; goto _test_eof; 
	_test_eof908: cs = 908; goto _test_eof; 
	_test_eof909: cs = 909; goto _test_eof; 
	_test_eof910: cs = 910; goto _test_eof; 
	_test_eof911: cs = 911; goto _test_eof; 
	_test_eof912: cs = 912; goto _test_eof; 
	_test_eof913: cs = 913; goto _test_eof; 
	_test_eof914: cs = 914; goto _test_eof; 
	_test_eof915: cs = 915; goto _test_eof; 
	_test_eof916: cs = 916; goto _test_eof; 
	_test_eof917: cs = 917; goto _test_eof; 
	_test_eof918: cs = 918; goto _test_eof; 
	_test_eof919: cs = 919; goto _test_eof; 
	_test_eof920: cs = 920; goto _test_eof; 
	_test_eof921: cs = 921; goto _test_eof; 
	_test_eof922: cs = 922; goto _test_eof; 
	_test_eof923: cs = 923; goto _test_eof; 
	_test_eof924: cs = 924; goto _test_eof; 
	_test_eof925: cs = 925; goto _test_eof; 
	_test_eof926: cs = 926; goto _test_eof; 
	_test_eof927: cs = 927; goto _test_eof; 
	_test_eof928: cs = 928; goto _test_eof; 
	_test_eof929: cs = 929; goto _test_eof; 
	_test_eof930: cs = 930; goto _test_eof; 
	_test_eof931: cs = 931; goto _test_eof; 
	_test_eof932: cs = 932; goto _test_eof; 
	_test_eof933: cs = 933; goto _test_eof; 
	_test_eof934: cs = 934; goto _test_eof; 
	_test_eof935: cs = 935; goto _test_eof; 
	_test_eof936: cs = 936; goto _test_eof; 
	_test_eof937: cs = 937; goto _test_eof; 
	_test_eof938: cs = 938; goto _test_eof; 
	_test_eof939: cs = 939; goto _test_eof; 
	_test_eof940: cs = 940; goto _test_eof; 
	_test_eof941: cs = 941; goto _test_eof; 
	_test_eof942: cs = 942; goto _test_eof; 
	_test_eof943: cs = 943; goto _test_eof; 
	_test_eof944: cs = 944; goto _test_eof; 
	_test_eof945: cs = 945; goto _test_eof; 
	_test_eof946: cs = 946; goto _test_eof; 
	_test_eof947: cs = 947; goto _test_eof; 
	_test_eof948: cs = 948; goto _test_eof; 
	_test_eof949: cs = 949; goto _test_eof; 
	_test_eof950: cs = 950; goto _test_eof; 
	_test_eof951: cs = 951; goto _test_eof; 
	_test_eof952: cs = 952; goto _test_eof; 
	_test_eof953: cs = 953; goto _test_eof; 
	_test_eof954: cs = 954; goto _test_eof; 
	_test_eof955: cs = 955; goto _test_eof; 
	_test_eof956: cs = 956; goto _test_eof; 
	_test_eof957: cs = 957; goto _test_eof; 
	_test_eof958: cs = 958; goto _test_eof; 
	_test_eof959: cs = 959; goto _test_eof; 
	_test_eof960: cs = 960; goto _test_eof; 
	_test_eof961: cs = 961; goto _test_eof; 
	_test_eof962: cs = 962; goto _test_eof; 
	_test_eof963: cs = 963; goto _test_eof; 
	_test_eof964: cs = 964; goto _test_eof; 
	_test_eof965: cs = 965; goto _test_eof; 
	_test_eof966: cs = 966; goto _test_eof; 
	_test_eof967: cs = 967; goto _test_eof; 
	_test_eof968: cs = 968; goto _test_eof; 
	_test_eof969: cs = 969; goto _test_eof; 
	_test_eof970: cs = 970; goto _test_eof; 
	_test_eof971: cs = 971; goto _test_eof; 
	_test_eof972: cs = 972; goto _test_eof; 
	_test_eof973: cs = 973; goto _test_eof; 
	_test_eof974: cs = 974; goto _test_eof; 
	_test_eof975: cs = 975; goto _test_eof; 
	_test_eof976: cs = 976; goto _test_eof; 
	_test_eof977: cs = 977; goto _test_eof; 
	_test_eof978: cs = 978; goto _test_eof; 
	_test_eof979: cs = 979; goto _test_eof; 
	_test_eof980: cs = 980; goto _test_eof; 
	_test_eof981: cs = 981; goto _test_eof; 
	_test_eof982: cs = 982; goto _test_eof; 
	_test_eof983: cs = 983; goto _test_eof; 
	_test_eof984: cs = 984; goto _test_eof; 
	_test_eof985: cs = 985; goto _test_eof; 
	_test_eof986: cs = 986; goto _test_eof; 
	_test_eof987: cs = 987; goto _test_eof; 
	_test_eof988: cs = 988; goto _test_eof; 
	_test_eof989: cs = 989; goto _test_eof; 
	_test_eof990: cs = 990; goto _test_eof; 
	_test_eof991: cs = 991; goto _test_eof; 
	_test_eof992: cs = 992; goto _test_eof; 
	_test_eof993: cs = 993; goto _test_eof; 
	_test_eof994: cs = 994; goto _test_eof; 
	_test_eof995: cs = 995; goto _test_eof; 
	_test_eof996: cs = 996; goto _test_eof; 
	_test_eof997: cs = 997; goto _test_eof; 
	_test_eof998: cs = 998; goto _test_eof; 
	_test_eof999: cs = 999; goto _test_eof; 
	_test_eof1000: cs = 1000; goto _test_eof; 
	_test_eof1001: cs = 1001; goto _test_eof; 
	_test_eof1002: cs = 1002; goto _test_eof; 
	_test_eof1003: cs = 1003; goto _test_eof; 
	_test_eof1004: cs = 1004; goto _test_eof; 
	_test_eof1005: cs = 1005; goto _test_eof; 
	_test_eof1006: cs = 1006; goto _test_eof; 
	_test_eof1007: cs = 1007; goto _test_eof; 
	_test_eof1008: cs = 1008; goto _test_eof; 
	_test_eof1009: cs = 1009; goto _test_eof; 
	_test_eof1010: cs = 1010; goto _test_eof; 
	_test_eof1011: cs = 1011; goto _test_eof; 
	_test_eof1012: cs = 1012; goto _test_eof; 
	_test_eof1013: cs = 1013; goto _test_eof; 
	_test_eof1014: cs = 1014; goto _test_eof; 
	_test_eof1015: cs = 1015; goto _test_eof; 
	_test_eof1016: cs = 1016; goto _test_eof; 
	_test_eof1017: cs = 1017; goto _test_eof; 
	_test_eof1018: cs = 1018; goto _test_eof; 
	_test_eof1019: cs = 1019; goto _test_eof; 
	_test_eof1020: cs = 1020; goto _test_eof; 
	_test_eof1021: cs = 1021; goto _test_eof; 
	_test_eof1022: cs = 1022; goto _test_eof; 
	_test_eof1023: cs = 1023; goto _test_eof; 
	_test_eof1024: cs = 1024; goto _test_eof; 
	_test_eof1025: cs = 1025; goto _test_eof; 
	_test_eof1026: cs = 1026; goto _test_eof; 
	_test_eof1027: cs = 1027; goto _test_eof; 
	_test_eof1028: cs = 1028; goto _test_eof; 
	_test_eof1029: cs = 1029; goto _test_eof; 
	_test_eof1030: cs = 1030; goto _test_eof; 
	_test_eof1031: cs = 1031; goto _test_eof; 
	_test_eof1032: cs = 1032; goto _test_eof; 
	_test_eof1033: cs = 1033; goto _test_eof; 
	_test_eof1034: cs = 1034; goto _test_eof; 
	_test_eof1035: cs = 1035; goto _test_eof; 
	_test_eof1036: cs = 1036; goto _test_eof; 
	_test_eof1037: cs = 1037; goto _test_eof; 
	_test_eof1038: cs = 1038; goto _test_eof; 
	_test_eof1039: cs = 1039; goto _test_eof; 
	_test_eof1040: cs = 1040; goto _test_eof; 
	_test_eof1041: cs = 1041; goto _test_eof; 
	_test_eof1042: cs = 1042; goto _test_eof; 
	_test_eof1043: cs = 1043; goto _test_eof; 
	_test_eof1044: cs = 1044; goto _test_eof; 
	_test_eof1045: cs = 1045; goto _test_eof; 
	_test_eof1046: cs = 1046; goto _test_eof; 
	_test_eof1047: cs = 1047; goto _test_eof; 
	_test_eof1048: cs = 1048; goto _test_eof; 
	_test_eof1049: cs = 1049; goto _test_eof; 
	_test_eof1050: cs = 1050; goto _test_eof; 
	_test_eof1051: cs = 1051; goto _test_eof; 
	_test_eof1052: cs = 1052; goto _test_eof; 
	_test_eof1053: cs = 1053; goto _test_eof; 
	_test_eof1054: cs = 1054; goto _test_eof; 
	_test_eof1055: cs = 1055; goto _test_eof; 
	_test_eof1056: cs = 1056; goto _test_eof; 
	_test_eof1057: cs = 1057; goto _test_eof; 
	_test_eof1058: cs = 1058; goto _test_eof; 
	_test_eof1059: cs = 1059; goto _test_eof; 
	_test_eof1060: cs = 1060; goto _test_eof; 
	_test_eof1061: cs = 1061; goto _test_eof; 
	_test_eof1062: cs = 1062; goto _test_eof; 
	_test_eof1063: cs = 1063; goto _test_eof; 
	_test_eof1064: cs = 1064; goto _test_eof; 
	_test_eof1065: cs = 1065; goto _test_eof; 
	_test_eof1066: cs = 1066; goto _test_eof; 
	_test_eof1067: cs = 1067; goto _test_eof; 
	_test_eof1068: cs = 1068; goto _test_eof; 
	_test_eof1069: cs = 1069; goto _test_eof; 
	_test_eof1070: cs = 1070; goto _test_eof; 
	_test_eof1071: cs = 1071; goto _test_eof; 
	_test_eof1072: cs = 1072; goto _test_eof; 
	_test_eof1073: cs = 1073; goto _test_eof; 
	_test_eof1074: cs = 1074; goto _test_eof; 
	_test_eof1075: cs = 1075; goto _test_eof; 
	_test_eof1076: cs = 1076; goto _test_eof; 
	_test_eof1077: cs = 1077; goto _test_eof; 
	_test_eof1078: cs = 1078; goto _test_eof; 
	_test_eof1079: cs = 1079; goto _test_eof; 
	_test_eof1080: cs = 1080; goto _test_eof; 
	_test_eof1081: cs = 1081; goto _test_eof; 
	_test_eof1082: cs = 1082; goto _test_eof; 
	_test_eof1083: cs = 1083; goto _test_eof; 
	_test_eof1084: cs = 1084; goto _test_eof; 
	_test_eof1085: cs = 1085; goto _test_eof; 
	_test_eof1086: cs = 1086; goto _test_eof; 
	_test_eof1087: cs = 1087; goto _test_eof; 
	_test_eof1088: cs = 1088; goto _test_eof; 
	_test_eof1089: cs = 1089; goto _test_eof; 
	_test_eof1090: cs = 1090; goto _test_eof; 
	_test_eof1091: cs = 1091; goto _test_eof; 
	_test_eof1092: cs = 1092; goto _test_eof; 
	_test_eof1093: cs = 1093; goto _test_eof; 
	_test_eof1094: cs = 1094; goto _test_eof; 
	_test_eof1095: cs = 1095; goto _test_eof; 
	_test_eof1096: cs = 1096; goto _test_eof; 
	_test_eof1097: cs = 1097; goto _test_eof; 
	_test_eof1098: cs = 1098; goto _test_eof; 
	_test_eof1099: cs = 1099; goto _test_eof; 
	_test_eof1100: cs = 1100; goto _test_eof; 
	_test_eof1101: cs = 1101; goto _test_eof; 
	_test_eof1102: cs = 1102; goto _test_eof; 
	_test_eof1103: cs = 1103; goto _test_eof; 
	_test_eof1104: cs = 1104; goto _test_eof; 
	_test_eof1105: cs = 1105; goto _test_eof; 
	_test_eof1106: cs = 1106; goto _test_eof; 
	_test_eof1107: cs = 1107; goto _test_eof; 
	_test_eof1108: cs = 1108; goto _test_eof; 
	_test_eof1109: cs = 1109; goto _test_eof; 
	_test_eof1110: cs = 1110; goto _test_eof; 
	_test_eof1111: cs = 1111; goto _test_eof; 
	_test_eof1112: cs = 1112; goto _test_eof; 
	_test_eof1113: cs = 1113; goto _test_eof; 
	_test_eof1114: cs = 1114; goto _test_eof; 
	_test_eof1115: cs = 1115; goto _test_eof; 
	_test_eof1116: cs = 1116; goto _test_eof; 
	_test_eof1117: cs = 1117; goto _test_eof; 
	_test_eof1118: cs = 1118; goto _test_eof; 
	_test_eof1119: cs = 1119; goto _test_eof; 
	_test_eof1120: cs = 1120; goto _test_eof; 
	_test_eof1121: cs = 1121; goto _test_eof; 
	_test_eof1122: cs = 1122; goto _test_eof; 
	_test_eof1123: cs = 1123; goto _test_eof; 
	_test_eof1124: cs = 1124; goto _test_eof; 
	_test_eof1125: cs = 1125; goto _test_eof; 
	_test_eof1126: cs = 1126; goto _test_eof; 
	_test_eof1127: cs = 1127; goto _test_eof; 
	_test_eof1128: cs = 1128; goto _test_eof; 
	_test_eof1129: cs = 1129; goto _test_eof; 
	_test_eof1130: cs = 1130; goto _test_eof; 
	_test_eof1131: cs = 1131; goto _test_eof; 
	_test_eof1132: cs = 1132; goto _test_eof; 
	_test_eof1133: cs = 1133; goto _test_eof; 
	_test_eof1134: cs = 1134; goto _test_eof; 
	_test_eof1135: cs = 1135; goto _test_eof; 
	_test_eof1136: cs = 1136; goto _test_eof; 
	_test_eof1137: cs = 1137; goto _test_eof; 
	_test_eof1138: cs = 1138; goto _test_eof; 
	_test_eof1139: cs = 1139; goto _test_eof; 
	_test_eof1140: cs = 1140; goto _test_eof; 
	_test_eof1141: cs = 1141; goto _test_eof; 
	_test_eof1142: cs = 1142; goto _test_eof; 
	_test_eof1143: cs = 1143; goto _test_eof; 
	_test_eof1144: cs = 1144; goto _test_eof; 
	_test_eof1145: cs = 1145; goto _test_eof; 
	_test_eof1146: cs = 1146; goto _test_eof; 
	_test_eof1147: cs = 1147; goto _test_eof; 
	_test_eof1148: cs = 1148; goto _test_eof; 
	_test_eof1149: cs = 1149; goto _test_eof; 
	_test_eof1150: cs = 1150; goto _test_eof; 
	_test_eof1151: cs = 1151; goto _test_eof; 
	_test_eof1152: cs = 1152; goto _test_eof; 
	_test_eof1153: cs = 1153; goto _test_eof; 
	_test_eof1154: cs = 1154; goto _test_eof; 
	_test_eof1155: cs = 1155; goto _test_eof; 
	_test_eof1156: cs = 1156; goto _test_eof; 
	_test_eof1157: cs = 1157; goto _test_eof; 
	_test_eof1158: cs = 1158; goto _test_eof; 
	_test_eof1159: cs = 1159; goto _test_eof; 
	_test_eof1160: cs = 1160; goto _test_eof; 
	_test_eof1161: cs = 1161; goto _test_eof; 
	_test_eof1162: cs = 1162; goto _test_eof; 
	_test_eof1163: cs = 1163; goto _test_eof; 
	_test_eof1164: cs = 1164; goto _test_eof; 
	_test_eof1165: cs = 1165; goto _test_eof; 
	_test_eof1166: cs = 1166; goto _test_eof; 
	_test_eof1167: cs = 1167; goto _test_eof; 
	_test_eof1168: cs = 1168; goto _test_eof; 
	_test_eof1169: cs = 1169; goto _test_eof; 
	_test_eof1170: cs = 1170; goto _test_eof; 
	_test_eof1171: cs = 1171; goto _test_eof; 
	_test_eof1172: cs = 1172; goto _test_eof; 
	_test_eof1173: cs = 1173; goto _test_eof; 
	_test_eof1174: cs = 1174; goto _test_eof; 
	_test_eof1175: cs = 1175; goto _test_eof; 
	_test_eof1176: cs = 1176; goto _test_eof; 
	_test_eof1177: cs = 1177; goto _test_eof; 
	_test_eof1178: cs = 1178; goto _test_eof; 
	_test_eof1179: cs = 1179; goto _test_eof; 
	_test_eof1180: cs = 1180; goto _test_eof; 
	_test_eof1181: cs = 1181; goto _test_eof; 
	_test_eof1182: cs = 1182; goto _test_eof; 
	_test_eof1183: cs = 1183; goto _test_eof; 
	_test_eof1184: cs = 1184; goto _test_eof; 
	_test_eof1185: cs = 1185; goto _test_eof; 
	_test_eof1186: cs = 1186; goto _test_eof; 
	_test_eof1187: cs = 1187; goto _test_eof; 
	_test_eof1188: cs = 1188; goto _test_eof; 
	_test_eof1189: cs = 1189; goto _test_eof; 
	_test_eof1190: cs = 1190; goto _test_eof; 
	_test_eof1191: cs = 1191; goto _test_eof; 
	_test_eof1192: cs = 1192; goto _test_eof; 
	_test_eof1193: cs = 1193; goto _test_eof; 
	_test_eof1194: cs = 1194; goto _test_eof; 
	_test_eof1195: cs = 1195; goto _test_eof; 
	_test_eof1196: cs = 1196; goto _test_eof; 
	_test_eof1197: cs = 1197; goto _test_eof; 
	_test_eof1198: cs = 1198; goto _test_eof; 
	_test_eof1199: cs = 1199; goto _test_eof; 
	_test_eof1200: cs = 1200; goto _test_eof; 
	_test_eof1201: cs = 1201; goto _test_eof; 
	_test_eof1202: cs = 1202; goto _test_eof; 
	_test_eof1203: cs = 1203; goto _test_eof; 
	_test_eof1204: cs = 1204; goto _test_eof; 
	_test_eof1205: cs = 1205; goto _test_eof; 
	_test_eof1206: cs = 1206; goto _test_eof; 
	_test_eof1207: cs = 1207; goto _test_eof; 
	_test_eof1208: cs = 1208; goto _test_eof; 
	_test_eof1209: cs = 1209; goto _test_eof; 
	_test_eof1210: cs = 1210; goto _test_eof; 
	_test_eof1211: cs = 1211; goto _test_eof; 
	_test_eof1212: cs = 1212; goto _test_eof; 
	_test_eof1213: cs = 1213; goto _test_eof; 
	_test_eof1214: cs = 1214; goto _test_eof; 
	_test_eof1215: cs = 1215; goto _test_eof; 
	_test_eof1216: cs = 1216; goto _test_eof; 
	_test_eof1217: cs = 1217; goto _test_eof; 
	_test_eof1218: cs = 1218; goto _test_eof; 
	_test_eof1219: cs = 1219; goto _test_eof; 
	_test_eof1220: cs = 1220; goto _test_eof; 
	_test_eof1221: cs = 1221; goto _test_eof; 
	_test_eof1222: cs = 1222; goto _test_eof; 
	_test_eof1223: cs = 1223; goto _test_eof; 
	_test_eof1224: cs = 1224; goto _test_eof; 
	_test_eof1225: cs = 1225; goto _test_eof; 
	_test_eof1226: cs = 1226; goto _test_eof; 
	_test_eof1227: cs = 1227; goto _test_eof; 
	_test_eof1228: cs = 1228; goto _test_eof; 
	_test_eof1229: cs = 1229; goto _test_eof; 
	_test_eof1230: cs = 1230; goto _test_eof; 
	_test_eof1231: cs = 1231; goto _test_eof; 
	_test_eof1232: cs = 1232; goto _test_eof; 
	_test_eof1233: cs = 1233; goto _test_eof; 
	_test_eof1234: cs = 1234; goto _test_eof; 
	_test_eof1235: cs = 1235; goto _test_eof; 
	_test_eof1236: cs = 1236; goto _test_eof; 
	_test_eof1237: cs = 1237; goto _test_eof; 
	_test_eof1238: cs = 1238; goto _test_eof; 
	_test_eof1239: cs = 1239; goto _test_eof; 
	_test_eof1240: cs = 1240; goto _test_eof; 
	_test_eof1241: cs = 1241; goto _test_eof; 
	_test_eof1242: cs = 1242; goto _test_eof; 
	_test_eof1243: cs = 1243; goto _test_eof; 
	_test_eof1244: cs = 1244; goto _test_eof; 
	_test_eof1245: cs = 1245; goto _test_eof; 
	_test_eof1246: cs = 1246; goto _test_eof; 
	_test_eof1247: cs = 1247; goto _test_eof; 
	_test_eof1248: cs = 1248; goto _test_eof; 
	_test_eof1249: cs = 1249; goto _test_eof; 
	_test_eof1250: cs = 1250; goto _test_eof; 
	_test_eof1251: cs = 1251; goto _test_eof; 
	_test_eof1252: cs = 1252; goto _test_eof; 
	_test_eof1253: cs = 1253; goto _test_eof; 
	_test_eof1254: cs = 1254; goto _test_eof; 
	_test_eof1255: cs = 1255; goto _test_eof; 
	_test_eof1256: cs = 1256; goto _test_eof; 
	_test_eof1257: cs = 1257; goto _test_eof; 
	_test_eof1258: cs = 1258; goto _test_eof; 
	_test_eof1259: cs = 1259; goto _test_eof; 
	_test_eof1260: cs = 1260; goto _test_eof; 
	_test_eof1261: cs = 1261; goto _test_eof; 
	_test_eof1262: cs = 1262; goto _test_eof; 
	_test_eof1263: cs = 1263; goto _test_eof; 
	_test_eof1264: cs = 1264; goto _test_eof; 
	_test_eof1265: cs = 1265; goto _test_eof; 
	_test_eof1266: cs = 1266; goto _test_eof; 
	_test_eof1267: cs = 1267; goto _test_eof; 
	_test_eof1268: cs = 1268; goto _test_eof; 
	_test_eof1269: cs = 1269; goto _test_eof; 
	_test_eof1270: cs = 1270; goto _test_eof; 
	_test_eof1271: cs = 1271; goto _test_eof; 
	_test_eof1272: cs = 1272; goto _test_eof; 
	_test_eof1273: cs = 1273; goto _test_eof; 
	_test_eof1274: cs = 1274; goto _test_eof; 
	_test_eof1275: cs = 1275; goto _test_eof; 
	_test_eof1276: cs = 1276; goto _test_eof; 
	_test_eof1277: cs = 1277; goto _test_eof; 
	_test_eof1278: cs = 1278; goto _test_eof; 
	_test_eof1279: cs = 1279; goto _test_eof; 
	_test_eof1280: cs = 1280; goto _test_eof; 
	_test_eof1281: cs = 1281; goto _test_eof; 
	_test_eof1282: cs = 1282; goto _test_eof; 
	_test_eof1283: cs = 1283; goto _test_eof; 
	_test_eof1284: cs = 1284; goto _test_eof; 
	_test_eof1285: cs = 1285; goto _test_eof; 
	_test_eof1286: cs = 1286; goto _test_eof; 
	_test_eof1287: cs = 1287; goto _test_eof; 
	_test_eof1288: cs = 1288; goto _test_eof; 
	_test_eof1289: cs = 1289; goto _test_eof; 
	_test_eof1290: cs = 1290; goto _test_eof; 
	_test_eof1291: cs = 1291; goto _test_eof; 
	_test_eof1292: cs = 1292; goto _test_eof; 
	_test_eof1293: cs = 1293; goto _test_eof; 
	_test_eof1294: cs = 1294; goto _test_eof; 
	_test_eof1295: cs = 1295; goto _test_eof; 
	_test_eof1296: cs = 1296; goto _test_eof; 
	_test_eof1297: cs = 1297; goto _test_eof; 
	_test_eof1298: cs = 1298; goto _test_eof; 
	_test_eof1299: cs = 1299; goto _test_eof; 
	_test_eof1300: cs = 1300; goto _test_eof; 
	_test_eof1301: cs = 1301; goto _test_eof; 
	_test_eof1302: cs = 1302; goto _test_eof; 
	_test_eof1303: cs = 1303; goto _test_eof; 
	_test_eof1304: cs = 1304; goto _test_eof; 
	_test_eof1305: cs = 1305; goto _test_eof; 
	_test_eof1306: cs = 1306; goto _test_eof; 
	_test_eof1307: cs = 1307; goto _test_eof; 
	_test_eof1308: cs = 1308; goto _test_eof; 
	_test_eof1309: cs = 1309; goto _test_eof; 
	_test_eof1310: cs = 1310; goto _test_eof; 
	_test_eof1311: cs = 1311; goto _test_eof; 
	_test_eof1312: cs = 1312; goto _test_eof; 
	_test_eof1313: cs = 1313; goto _test_eof; 
	_test_eof1314: cs = 1314; goto _test_eof; 
	_test_eof1315: cs = 1315; goto _test_eof; 
	_test_eof1316: cs = 1316; goto _test_eof; 
	_test_eof1317: cs = 1317; goto _test_eof; 
	_test_eof1318: cs = 1318; goto _test_eof; 
	_test_eof1319: cs = 1319; goto _test_eof; 
	_test_eof1320: cs = 1320; goto _test_eof; 
	_test_eof1321: cs = 1321; goto _test_eof; 
	_test_eof1322: cs = 1322; goto _test_eof; 
	_test_eof1323: cs = 1323; goto _test_eof; 
	_test_eof1324: cs = 1324; goto _test_eof; 
	_test_eof1325: cs = 1325; goto _test_eof; 
	_test_eof1326: cs = 1326; goto _test_eof; 
	_test_eof1327: cs = 1327; goto _test_eof; 
	_test_eof1328: cs = 1328; goto _test_eof; 
	_test_eof1329: cs = 1329; goto _test_eof; 
	_test_eof1330: cs = 1330; goto _test_eof; 
	_test_eof1331: cs = 1331; goto _test_eof; 
	_test_eof1332: cs = 1332; goto _test_eof; 
	_test_eof1333: cs = 1333; goto _test_eof; 
	_test_eof1334: cs = 1334; goto _test_eof; 
	_test_eof1335: cs = 1335; goto _test_eof; 
	_test_eof1336: cs = 1336; goto _test_eof; 
	_test_eof1337: cs = 1337; goto _test_eof; 
	_test_eof1338: cs = 1338; goto _test_eof; 
	_test_eof1339: cs = 1339; goto _test_eof; 
	_test_eof1340: cs = 1340; goto _test_eof; 
	_test_eof1341: cs = 1341; goto _test_eof; 
	_test_eof1342: cs = 1342; goto _test_eof; 
	_test_eof1343: cs = 1343; goto _test_eof; 
	_test_eof1344: cs = 1344; goto _test_eof; 
	_test_eof1345: cs = 1345; goto _test_eof; 
	_test_eof1346: cs = 1346; goto _test_eof; 
	_test_eof1347: cs = 1347; goto _test_eof; 
	_test_eof1348: cs = 1348; goto _test_eof; 
	_test_eof1349: cs = 1349; goto _test_eof; 
	_test_eof1350: cs = 1350; goto _test_eof; 
	_test_eof1351: cs = 1351; goto _test_eof; 
	_test_eof1352: cs = 1352; goto _test_eof; 
	_test_eof1353: cs = 1353; goto _test_eof; 
	_test_eof1354: cs = 1354; goto _test_eof; 
	_test_eof1355: cs = 1355; goto _test_eof; 
	_test_eof1356: cs = 1356; goto _test_eof; 
	_test_eof1357: cs = 1357; goto _test_eof; 
	_test_eof1358: cs = 1358; goto _test_eof; 
	_test_eof1359: cs = 1359; goto _test_eof; 
	_test_eof1360: cs = 1360; goto _test_eof; 
	_test_eof1361: cs = 1361; goto _test_eof; 
	_test_eof1362: cs = 1362; goto _test_eof; 
	_test_eof1363: cs = 1363; goto _test_eof; 
	_test_eof1364: cs = 1364; goto _test_eof; 
	_test_eof1365: cs = 1365; goto _test_eof; 
	_test_eof1366: cs = 1366; goto _test_eof; 
	_test_eof1367: cs = 1367; goto _test_eof; 
	_test_eof1368: cs = 1368; goto _test_eof; 
	_test_eof1369: cs = 1369; goto _test_eof; 
	_test_eof1370: cs = 1370; goto _test_eof; 
	_test_eof1371: cs = 1371; goto _test_eof; 
	_test_eof1372: cs = 1372; goto _test_eof; 
	_test_eof1373: cs = 1373; goto _test_eof; 
	_test_eof1374: cs = 1374; goto _test_eof; 
	_test_eof1375: cs = 1375; goto _test_eof; 
	_test_eof1376: cs = 1376; goto _test_eof; 
	_test_eof1377: cs = 1377; goto _test_eof; 
	_test_eof1378: cs = 1378; goto _test_eof; 
	_test_eof1379: cs = 1379; goto _test_eof; 
	_test_eof1380: cs = 1380; goto _test_eof; 
	_test_eof1381: cs = 1381; goto _test_eof; 
	_test_eof1382: cs = 1382; goto _test_eof; 
	_test_eof1383: cs = 1383; goto _test_eof; 
	_test_eof1384: cs = 1384; goto _test_eof; 
	_test_eof1385: cs = 1385; goto _test_eof; 
	_test_eof1386: cs = 1386; goto _test_eof; 
	_test_eof1387: cs = 1387; goto _test_eof; 
	_test_eof1388: cs = 1388; goto _test_eof; 
	_test_eof1389: cs = 1389; goto _test_eof; 
	_test_eof1390: cs = 1390; goto _test_eof; 
	_test_eof1391: cs = 1391; goto _test_eof; 
	_test_eof1392: cs = 1392; goto _test_eof; 
	_test_eof1393: cs = 1393; goto _test_eof; 
	_test_eof1394: cs = 1394; goto _test_eof; 
	_test_eof1395: cs = 1395; goto _test_eof; 
	_test_eof1396: cs = 1396; goto _test_eof; 
	_test_eof1397: cs = 1397; goto _test_eof; 
	_test_eof1398: cs = 1398; goto _test_eof; 
	_test_eof1399: cs = 1399; goto _test_eof; 
	_test_eof1400: cs = 1400; goto _test_eof; 
	_test_eof1401: cs = 1401; goto _test_eof; 
	_test_eof1402: cs = 1402; goto _test_eof; 
	_test_eof1403: cs = 1403; goto _test_eof; 
	_test_eof1404: cs = 1404; goto _test_eof; 
	_test_eof1405: cs = 1405; goto _test_eof; 
	_test_eof1406: cs = 1406; goto _test_eof; 
	_test_eof1407: cs = 1407; goto _test_eof; 
	_test_eof1408: cs = 1408; goto _test_eof; 
	_test_eof1409: cs = 1409; goto _test_eof; 
	_test_eof1410: cs = 1410; goto _test_eof; 
	_test_eof1411: cs = 1411; goto _test_eof; 
	_test_eof1412: cs = 1412; goto _test_eof; 
	_test_eof1413: cs = 1413; goto _test_eof; 
	_test_eof1414: cs = 1414; goto _test_eof; 
	_test_eof1415: cs = 1415; goto _test_eof; 
	_test_eof1416: cs = 1416; goto _test_eof; 
	_test_eof1417: cs = 1417; goto _test_eof; 
	_test_eof1418: cs = 1418; goto _test_eof; 
	_test_eof1419: cs = 1419; goto _test_eof; 
	_test_eof1420: cs = 1420; goto _test_eof; 
	_test_eof1421: cs = 1421; goto _test_eof; 
	_test_eof1422: cs = 1422; goto _test_eof; 
	_test_eof1423: cs = 1423; goto _test_eof; 
	_test_eof1424: cs = 1424; goto _test_eof; 
	_test_eof1425: cs = 1425; goto _test_eof; 
	_test_eof1426: cs = 1426; goto _test_eof; 
	_test_eof1427: cs = 1427; goto _test_eof; 
	_test_eof1428: cs = 1428; goto _test_eof; 
	_test_eof1429: cs = 1429; goto _test_eof; 
	_test_eof1430: cs = 1430; goto _test_eof; 
	_test_eof1431: cs = 1431; goto _test_eof; 
	_test_eof1432: cs = 1432; goto _test_eof; 
	_test_eof1433: cs = 1433; goto _test_eof; 
	_test_eof1434: cs = 1434; goto _test_eof; 
	_test_eof1435: cs = 1435; goto _test_eof; 
	_test_eof1436: cs = 1436; goto _test_eof; 
	_test_eof1437: cs = 1437; goto _test_eof; 
	_test_eof1438: cs = 1438; goto _test_eof; 
	_test_eof1439: cs = 1439; goto _test_eof; 
	_test_eof1440: cs = 1440; goto _test_eof; 
	_test_eof1441: cs = 1441; goto _test_eof; 
	_test_eof1442: cs = 1442; goto _test_eof; 
	_test_eof1443: cs = 1443; goto _test_eof; 
	_test_eof1444: cs = 1444; goto _test_eof; 
	_test_eof1445: cs = 1445; goto _test_eof; 
	_test_eof1446: cs = 1446; goto _test_eof; 
	_test_eof1447: cs = 1447; goto _test_eof; 
	_test_eof1480: cs = 1480; goto _test_eof; 
	_test_eof1449: cs = 1449; goto _test_eof; 
	_test_eof1481: cs = 1481; goto _test_eof; 
	_test_eof1451: cs = 1451; goto _test_eof; 
	_test_eof1452: cs = 1452; goto _test_eof; 
	_test_eof1453: cs = 1453; goto _test_eof; 
	_test_eof1454: cs = 1454; goto _test_eof; 
	_test_eof1455: cs = 1455; goto _test_eof; 
	_test_eof1456: cs = 1456; goto _test_eof; 
	_test_eof1457: cs = 1457; goto _test_eof; 
	_test_eof1482: cs = 1482; goto _test_eof; 
	_test_eof1459: cs = 1459; goto _test_eof; 
	_test_eof1483: cs = 1483; goto _test_eof; 
	_test_eof1461: cs = 1461; goto _test_eof; 
	_test_eof1462: cs = 1462; goto _test_eof; 
	_test_eof1463: cs = 1463; goto _test_eof; 
	_test_eof1464: cs = 1464; goto _test_eof; 
	_test_eof1465: cs = 1465; goto _test_eof; 
	_test_eof1466: cs = 1466; goto _test_eof; 
	_test_eof1467: cs = 1467; goto _test_eof; 
	_test_eof1468: cs = 1468; goto _test_eof; 
	_test_eof1469: cs = 1469; goto _test_eof; 
	_test_eof1470: cs = 1470; goto _test_eof; 
	_test_eof1471: cs = 1471; goto _test_eof; 
	_test_eof1472: cs = 1472; goto _test_eof; 
	_test_eof1473: cs = 1473; goto _test_eof; 
	_test_eof1474: cs = 1474; goto _test_eof; 
	_test_eof1475: cs = 1475; goto _test_eof; 
	_test_eof1476: cs = 1476; goto _test_eof; 
	_test_eof1477: cs = 1477; goto _test_eof; 
	_test_eof1478: cs = 1478; goto _test_eof; 
	_test_eof: {}
	_out: {}
	}
  if ( cs == 
0
 )
   return FALSE;
  if ( cs >= 
1479
 )
   return TRUE;
  if (get_num_errors() != start_num_errors)
   break;
 }
 return FALSE;
}
