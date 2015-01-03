static const int parser_start = 1;
static const int parser_first_final = 1459;
static const int parser_error = 0;
static const int parser_en_main = 1;
static const int parser_en_defvars_open = 1438;
static const int parser_en_defvars_line = 1440;
static void _parse_init(void)
{
 current_sm = SM_MAIN;
}
static Bool _parse_statement(Bool compile_active)
{
 int start_num_errors;
 char *name;
	{
	}
 switch (current_sm)
 {
 case SM_MAIN: cs = parser_en_main; break;
 case SM_DEFVARS_OPEN: cs = parser_en_defvars_open; break;
 case SM_DEFVARS_LINE: cs = parser_en_defvars_line; break;
 default: assert(0);
 }
 p = pe = eof = NULL;
 start_num_errors = get_num_errors();
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
		case 0: goto st1459;
		case 4: goto tr2;
		case 12: goto st1459;
		case 83: goto st1429;
		case 84: goto st1434;
		case 89: goto st3;
		case 90: goto st47;
		case 91: goto st103;
		case 92: goto st141;
		case 93: goto st174;
		case 94: goto st218;
		case 95: goto st219;
		case 96: goto st257;
		case 97: goto st258;
		case 98: goto st259;
		case 99: goto st260;
		case 100: goto st261;
		case 101: goto st262;
		case 102: goto st263;
		case 103: goto st302;
		case 104: goto st303;
		case 105: goto st307;
		case 106: goto st308;
		case 107: goto st321;
		case 108: goto st322;
		case 109: goto st323;
		case 110: goto st327;
		case 111: goto st352;
		case 112: goto st391;
		case 113: goto st392;
		case 114: goto st393;
		case 115: goto st394;
		case 116: goto st395;
		case 117: goto st444;
		case 118: goto st468;
		case 119: goto st912;
		case 120: goto st913;
		case 121: goto st914;
		case 122: goto st915;
		case 123: goto st916;
		case 124: goto st917;
		case 125: goto st918;
		case 126: goto st956;
		case 127: goto st957;
		case 128: goto st958;
		case 129: goto st973;
		case 130: goto st974;
		case 131: goto st975;
		case 132: goto st982;
		case 133: goto st989;
		case 134: goto st1022;
		case 135: goto st1031;
		case 136: goto st1032;
		case 137: goto st1033;
		case 138: goto st1062;
		case 139: goto st1063;
		case 140: goto st1092;
		case 141: goto st1093;
		case 142: goto st1094;
		case 143: goto st1123;
		case 144: goto st1124;
		case 145: goto st1153;
		case 146: goto st1154;
		case 147: goto st1155;
		case 148: goto st1159;
		case 149: goto st1203;
		case 150: goto st1204;
		case 151: goto st1237;
		case 152: goto st1266;
		case 153: goto st1295;
		case 154: goto st1324;
		case 155: goto st1353;
		case 156: goto st1391;
	}
	goto st0;
st0:
cs = 0;
	goto _out;
tr73:
	{ if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; }
	goto st1459;
tr92:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_ADC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr97:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_ADC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr100:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_C )); }; }
	goto st1459;
tr101:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_B )); }; }
	goto st1459;
tr102:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_D )); }; }
	goto st1459;
tr103:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_E )); }; }
	goto st1459;
tr104:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_H )); }; }
	goto st1459;
tr105:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADC( REG_H )); }; }
	goto st1459;
tr106:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADC( REG_H )); }; }
	goto st1459;
tr107:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_L )); }; }
	goto st1459;
tr108:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADC( REG_L )); }; }
	goto st1459;
tr109:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADC( REG_L )); }; }
	goto st1459;
tr110:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_A )); }; }
	goto st1459;
tr113:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC( REG_idx )); }; }
	goto st1459;
tr125:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_ADC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr134:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_ADC( REG_idx ) ) << 8); }; }
	goto st1459;
tr146:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_ADC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr155:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_ADC( REG_idx ) ) << 8); }; }
	goto st1459;
tr161:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC16( REG_BC )); }; }
	goto st1459;
tr162:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC16( REG_DE )); }; }
	goto st1459;
tr163:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC16( REG_HL )); }; }
	goto st1459;
tr164:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADC16( REG_SP )); }; }
	goto st1459;
tr185:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_ADD_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr190:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_ADD_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr193:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_C )); }; }
	goto st1459;
tr194:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_B )); }; }
	goto st1459;
tr195:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_D )); }; }
	goto st1459;
tr196:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_E )); }; }
	goto st1459;
tr197:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_H )); }; }
	goto st1459;
tr198:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADD( REG_H )); }; }
	goto st1459;
tr199:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADD( REG_H )); }; }
	goto st1459;
tr200:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_L )); }; }
	goto st1459;
tr201:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADD( REG_L )); }; }
	goto st1459;
tr202:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADD( REG_L )); }; }
	goto st1459;
tr203:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_A )); }; }
	goto st1459;
tr206:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_ADD( REG_idx )); }; }
	goto st1459;
tr218:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_ADD( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr227:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_ADD( REG_idx ) ) << 8); }; }
	goto st1459;
tr239:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_ADD( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr248:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_ADD( REG_idx ) ) << 8); }; }
	goto st1459;
tr254:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_ADD16( REG_BC )); }; }
	goto st1459;
tr255:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_ADD16( REG_DE )); }; }
	goto st1459;
tr256:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_ADD16( REG_HL )); }; }
	goto st1459;
tr257:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_ADD16( REG_SP )); }; }
	goto st1459;
tr263:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADD16( REG_BC )); }; }
	goto st1459;
tr264:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADD16( REG_DE )); }; }
	goto st1459;
tr265:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADD16( REG_HL )); }; }
	goto st1459;
tr266:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_ADD16( REG_SP )); }; }
	goto st1459;
tr272:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADD16( REG_BC )); }; }
	goto st1459;
tr273:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADD16( REG_DE )); }; }
	goto st1459;
tr274:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADD16( REG_HL )); }; }
	goto st1459;
tr275:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_ADD16( REG_SP )); }; }
	goto st1459;
tr293:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_AND_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr298:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_AND_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr301:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_C )); }; }
	goto st1459;
tr302:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_B )); }; }
	goto st1459;
tr303:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_D )); }; }
	goto st1459;
tr304:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_E )); }; }
	goto st1459;
tr305:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_H )); }; }
	goto st1459;
tr306:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_AND( REG_H )); }; }
	goto st1459;
tr307:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_AND( REG_H )); }; }
	goto st1459;
tr308:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_L )); }; }
	goto st1459;
tr309:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_AND( REG_L )); }; }
	goto st1459;
tr310:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_AND( REG_L )); }; }
	goto st1459;
tr311:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_A )); }; }
	goto st1459;
tr314:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_AND( REG_idx )); }; }
	goto st1459;
tr326:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_AND( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr335:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_AND( REG_idx ) ) << 8); }; }
	goto st1459;
tr347:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_AND( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr356:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_AND( REG_idx ) ) << 8); }; }
	goto st1459;
tr375:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_C )); };
    }
	goto st1459;
tr376:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_B )); };
    }
	goto st1459;
tr377:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_D )); };
    }
	goto st1459;
tr378:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_E )); };
    }
	goto st1459;
tr379:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_H )); };
    }
	goto st1459;
tr380:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_L )); };
    }
	goto st1459;
tr381:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_A )); };
    }
	goto st1459;
tr382:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_BIT( expr_value, REG_idx )); };
    }
	goto st1459;
tr394:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_BIT( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1459;
tr403:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_BIT( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_BIT( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1459;
tr415:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_BIT( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1459;
tr424:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_BIT( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_BIT( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1459;
tr439:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_CALL), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr444:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_CALL), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr451:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_NZ, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr456:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_NZ, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr463:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_Z, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr468:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_Z, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr475:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_NC, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr480:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_NC, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr487:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_C, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr492:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_C, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr499:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_PO, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr504:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_PO, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr511:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_PE, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr516:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_PE, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr523:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_P, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr528:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_P, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr535:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_M, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr540:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_call_flag(FLAG_M, expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr543:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CCF); }; }
	goto st1459;
tr561:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_CP_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr566:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_CP_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr569:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_C )); }; }
	goto st1459;
tr570:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_B )); }; }
	goto st1459;
tr571:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_D )); }; }
	goto st1459;
tr572:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_E )); }; }
	goto st1459;
tr573:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_H )); }; }
	goto st1459;
tr574:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_CP( REG_H )); }; }
	goto st1459;
tr575:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_CP( REG_H )); }; }
	goto st1459;
tr576:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_L )); }; }
	goto st1459;
tr577:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_CP( REG_L )); }; }
	goto st1459;
tr578:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_CP( REG_L )); }; }
	goto st1459;
tr579:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_A )); }; }
	goto st1459;
tr582:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CP( REG_idx )); }; }
	goto st1459;
tr594:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_CP( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr603:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_CP( REG_idx ) ) << 8); }; }
	goto st1459;
tr615:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_CP( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr624:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_CP( REG_idx ) ) << 8); }; }
	goto st1459;
tr625:
	{ { if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_emul((Z80_CPD), "rcmx_cpd"); } }; }
	goto st1459;
tr626:
	{ { if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_emul((Z80_CPDR), "rcmx_cpdr"); } }; }
	goto st1459;
tr627:
	{ { if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_emul((Z80_CPI), "rcmx_cpi"); } }; }
	goto st1459;
tr628:
	{ { if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_emul((Z80_CPIR), "rcmx_cpir"); } }; }
	goto st1459;
tr629:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_CPL); }; }
	goto st1459;
tr630:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DAA); }; }
	goto st1459;
tr651:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_C )); }; }
	goto st1459;
tr652:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_B )); }; }
	goto st1459;
tr653:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_D )); }; }
	goto st1459;
tr654:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_E )); }; }
	goto st1459;
tr655:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_H )); }; }
	goto st1459;
tr656:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_DEC( REG_H )); }; }
	goto st1459;
tr657:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_DEC( REG_H )); }; }
	goto st1459;
tr658:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_L )); }; }
	goto st1459;
tr659:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_DEC( REG_L )); }; }
	goto st1459;
tr660:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_DEC( REG_L )); }; }
	goto st1459;
tr661:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_A )); }; }
	goto st1459;
tr662:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_BC + Z80_DEC16( REG_BC )); }; }
	goto st1459;
tr663:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_DE + Z80_DEC16( REG_DE )); }; }
	goto st1459;
tr664:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_DEC16( REG_HL )); }; }
	goto st1459;
tr665:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_DEC16( REG_IX )); }; }
	goto st1459;
tr666:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_DEC16( REG_IY )); }; }
	goto st1459;
tr667:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_SP + Z80_DEC16( REG_SP )); }; }
	goto st1459;
tr668:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DEC( REG_idx )); }; }
	goto st1459;
tr680:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_DEC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr689:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_DEC( REG_idx ) ) << 8); }; }
	goto st1459;
tr701:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_DEC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr710:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_DEC( REG_idx ) ) << 8); }; }
	goto st1459;
tr711:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_DI); }; }
	goto st1459;
tr715:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_DJNZ), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr720:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_DJNZ), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr723:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_EI); }; }
	goto st1459;
tr729:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_EX_DE_HL); }; }
	goto st1459;
tr733:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_EX_AF_AF); }; }
	goto st1459;
tr734:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_EX_AF_AF); }; }
	goto st1459;
tr739:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_EX_IND_SP_HL); }; }
	goto st1459;
tr740:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_EX_IND_SP_idx); }; }
	goto st1459;
tr741:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_EX_IND_SP_idx); }; }
	goto st1459;
tr742:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_EXX); }; }
	goto st1459;
tr743:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_HALT); }; }
	goto st1459;
tr747:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IM( expr_value )); };
    }
	goto st1459;
tr752:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IM( expr_value )); };
    }
	goto st1459;
tr764:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IN_REG_C( REG_C )); }; }
	goto st1459;
tr767:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IN_REG_C( REG_B )); }; }
	goto st1459;
tr770:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IN_REG_C( REG_D )); }; }
	goto st1459;
tr773:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IN_REG_C( REG_E )); }; }
	goto st1459;
tr776:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IN_REG_C( REG_H )); }; }
	goto st1459;
tr779:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IN_REG_C( REG_L )); }; }
	goto st1459;
tr785:
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_IN_A_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr790:
	{ expr_open_parens--; }
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_IN_A_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr793:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IN_REG_C( REG_A )); }; }
	goto st1459;
tr814:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_C )); }; }
	goto st1459;
tr815:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_B )); }; }
	goto st1459;
tr816:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_D )); }; }
	goto st1459;
tr817:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_E )); }; }
	goto st1459;
tr818:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_H )); }; }
	goto st1459;
tr819:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_INC( REG_H )); }; }
	goto st1459;
tr820:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_INC( REG_H )); }; }
	goto st1459;
tr821:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_L )); }; }
	goto st1459;
tr822:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_INC( REG_L )); }; }
	goto st1459;
tr823:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_INC( REG_L )); }; }
	goto st1459;
tr824:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_A )); }; }
	goto st1459;
tr825:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_BC + Z80_INC16( REG_BC )); }; }
	goto st1459;
tr826:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_DE + Z80_INC16( REG_DE )); }; }
	goto st1459;
tr827:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_INC16( REG_HL )); }; }
	goto st1459;
tr828:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_INC16( REG_IX )); }; }
	goto st1459;
tr829:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_INC16( REG_IY )); }; }
	goto st1459;
tr830:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_SP + Z80_INC16( REG_SP )); }; }
	goto st1459;
tr831:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INC( REG_idx )); }; }
	goto st1459;
tr843:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_INC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr852:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_INC( REG_idx ) ) << 8); }; }
	goto st1459;
tr864:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_INC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr873:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_INC( REG_idx ) ) << 8); }; }
	goto st1459;
tr874:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_IND); }; }
	goto st1459;
tr875:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INDR); }; }
	goto st1459;
tr876:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INI); }; }
	goto st1459;
tr877:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_INIR); }; }
	goto st1459;
tr892:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr897:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr904:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr909:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr916:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr921:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr928:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr933:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr940:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr945:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr952:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PO )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr957:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PO )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr964:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PE )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr969:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_PE )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr976:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_P )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr981:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_P )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr988:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_M )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr993:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_JP_FLAG( FLAG_M )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr996:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_JP_idx); }; }
	goto st1459;
tr998:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_JP_idx); }; }
	goto st1459;
tr1000:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_JP_idx); }; }
	goto st1459;
tr1008:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1013:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1020:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1025:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NZ )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1032:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1037:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_Z )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1044:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1049:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_NC )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1056:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1061:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_jr((Z80_JR_FLAG( FLAG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1105:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_IND_NN_A), expr); } else OBJ_DELETE(expr); };
   }
	goto st1459;
tr1106:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_IND_nn_dd( REG_BC )), expr); } else OBJ_DELETE(expr); };
   }
	goto st1459;
tr1107:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_IND_nn_dd( REG_DE )), expr); } else OBJ_DELETE(expr); };
   }
	goto st1459;
tr1108:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_HL + Z80_LD_IND_nn_idx), expr); } else OBJ_DELETE(expr); };
   }
	goto st1459;
tr1109:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IX + Z80_LD_IND_nn_idx), expr); } else OBJ_DELETE(expr); };
   }
	goto st1459;
tr1110:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IY + Z80_LD_IND_nn_idx), expr); } else OBJ_DELETE(expr); };
   }
	goto st1459;
tr1111:
	{
    if (! expr_in_parens)
     return FALSE;
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_IND_nn_dd( REG_SP )), expr); } else OBJ_DELETE(expr); };
   }
	goto st1459;
tr1133:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_C == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_C )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1138:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_C == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_C )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1141:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_C )); }; }
	goto st1459;
tr1142:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_B )); }; }
	goto st1459;
tr1143:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_D )); }; }
	goto st1459;
tr1144:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_E )); }; }
	goto st1459;
tr1145:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_H )); }; }
	goto st1459;
tr1146:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_C, REG_IXH )); }; }
	goto st1459;
tr1147:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_C, REG_IYH )); }; }
	goto st1459;
tr1148:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_L )); }; }
	goto st1459;
tr1149:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_C, REG_IXL )); }; }
	goto st1459;
tr1150:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_C, REG_IYL )); }; }
	goto st1459;
tr1151:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_A )); }; }
	goto st1459;
tr1152:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_C, REG_idx )); }; }
	goto st1459;
tr1164:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_C, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1173:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_C, REG_idx ) ) << 8); }; }
	goto st1459;
tr1185:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_C, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1194:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_C, REG_idx ) ) << 8); }; }
	goto st1459;
tr1213:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_B == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_B )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1218:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_B == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_B )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1221:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_C )); }; }
	goto st1459;
tr1222:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_B )); }; }
	goto st1459;
tr1223:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_D )); }; }
	goto st1459;
tr1224:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_E )); }; }
	goto st1459;
tr1225:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_H )); }; }
	goto st1459;
tr1226:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_B, REG_IXH )); }; }
	goto st1459;
tr1227:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_B, REG_IYH )); }; }
	goto st1459;
tr1228:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_L )); }; }
	goto st1459;
tr1229:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_B, REG_IXL )); }; }
	goto st1459;
tr1230:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_B, REG_IYL )); }; }
	goto st1459;
tr1231:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_A )); }; }
	goto st1459;
tr1232:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_B, REG_idx )); }; }
	goto st1459;
tr1244:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_B, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1253:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_B, REG_idx ) ) << 8); }; }
	goto st1459;
tr1265:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_B, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1274:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_B, REG_idx ) ) << 8); }; }
	goto st1459;
tr1293:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_D == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_D )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1298:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_D == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_D )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1301:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_C )); }; }
	goto st1459;
tr1302:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_B )); }; }
	goto st1459;
tr1303:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_D )); }; }
	goto st1459;
tr1304:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_E )); }; }
	goto st1459;
tr1305:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_H )); }; }
	goto st1459;
tr1306:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_D, REG_IXH )); }; }
	goto st1459;
tr1307:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_D, REG_IYH )); }; }
	goto st1459;
tr1308:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_L )); }; }
	goto st1459;
tr1309:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_D, REG_IXL )); }; }
	goto st1459;
tr1310:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_D, REG_IYL )); }; }
	goto st1459;
tr1311:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_A )); }; }
	goto st1459;
tr1312:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_D, REG_idx )); }; }
	goto st1459;
tr1324:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_D, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1333:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_D, REG_idx ) ) << 8); }; }
	goto st1459;
tr1345:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_D, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1354:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_D, REG_idx ) ) << 8); }; }
	goto st1459;
tr1373:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_E == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_E )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1378:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_E == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_E )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1381:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_C )); }; }
	goto st1459;
tr1382:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_B )); }; }
	goto st1459;
tr1383:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_D )); }; }
	goto st1459;
tr1384:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_E )); }; }
	goto st1459;
tr1385:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_H )); }; }
	goto st1459;
tr1386:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_E, REG_IXH )); }; }
	goto st1459;
tr1387:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_E, REG_IYH )); }; }
	goto st1459;
tr1388:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_L )); }; }
	goto st1459;
tr1389:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_E, REG_IXL )); }; }
	goto st1459;
tr1390:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_E, REG_IYL )); }; }
	goto st1459;
tr1391:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_A )); }; }
	goto st1459;
tr1392:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_E, REG_idx )); }; }
	goto st1459;
tr1404:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_E, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1413:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_E, REG_idx ) ) << 8); }; }
	goto st1459;
tr1425:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_E, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1434:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_E, REG_idx ) ) << 8); }; }
	goto st1459;
tr1449:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_H == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_H )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1454:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_H == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_H )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1457:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_C )); }; }
	goto st1459;
tr1458:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_B )); }; }
	goto st1459;
tr1459:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_D )); }; }
	goto st1459;
tr1460:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_E )); }; }
	goto st1459;
tr1461:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_H )); }; }
	goto st1459;
tr1462:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_L )); }; }
	goto st1459;
tr1463:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_A )); }; }
	goto st1459;
tr1464:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_H, REG_idx )); }; }
	goto st1459;
tr1476:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_H, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1485:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_H, REG_idx ) ) << 8); }; }
	goto st1459;
tr1497:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_H, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1506:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_H, REG_idx ) ) << 8); }; }
	goto st1459;
tr1518:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1523:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1526:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_C )); }; }
	goto st1459;
tr1527:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_B )); }; }
	goto st1459;
tr1528:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_D )); }; }
	goto st1459;
tr1529:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_E )); }; }
	goto st1459;
tr1530:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_IXH )); }; }
	goto st1459;
tr1531:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_IXL )); }; }
	goto st1459;
tr1532:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXH, REG_A )); }; }
	goto st1459;
tr1544:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1549:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYH )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1552:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_C )); }; }
	goto st1459;
tr1553:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_B )); }; }
	goto st1459;
tr1554:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_D )); }; }
	goto st1459;
tr1555:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_E )); }; }
	goto st1459;
tr1556:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_IYH )); }; }
	goto st1459;
tr1557:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_IYL )); }; }
	goto st1459;
tr1558:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYH, REG_A )); }; }
	goto st1459;
tr1573:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_L == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_L )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1578:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_L == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_L )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1581:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_C )); }; }
	goto st1459;
tr1582:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_B )); }; }
	goto st1459;
tr1583:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_D )); }; }
	goto st1459;
tr1584:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_E )); }; }
	goto st1459;
tr1585:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_H )); }; }
	goto st1459;
tr1586:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_L )); }; }
	goto st1459;
tr1587:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_A )); }; }
	goto st1459;
tr1588:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_L, REG_idx )); }; }
	goto st1459;
tr1600:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_L, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1609:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_L, REG_idx ) ) << 8); }; }
	goto st1459;
tr1621:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_L, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1630:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_L, REG_idx ) ) << 8); }; }
	goto st1459;
tr1642:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1647:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IX + Z80_LD_r_n( REG_IXL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1650:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_C )); }; }
	goto st1459;
tr1651:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_B )); }; }
	goto st1459;
tr1652:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_D )); }; }
	goto st1459;
tr1653:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_E )); }; }
	goto st1459;
tr1654:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_IXH )); }; }
	goto st1459;
tr1655:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_IXL )); }; }
	goto st1459;
tr1656:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_IXL, REG_A )); }; }
	goto st1459;
tr1668:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1673:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((P_IY + Z80_LD_r_n( REG_IYL )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1676:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_C )); }; }
	goto st1459;
tr1677:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_B )); }; }
	goto st1459;
tr1678:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_D )); }; }
	goto st1459;
tr1679:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_E )); }; }
	goto st1459;
tr1680:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_IYH )); }; }
	goto st1459;
tr1681:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_IYL )); }; }
	goto st1459;
tr1682:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_IYL, REG_A )); }; }
	goto st1459;
tr1707:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_A == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_A )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1712:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_A == REG_A ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_A_IND_NN), expr); } else OBJ_DELETE(expr); };
     }
     else
      return FALSE;
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_A )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1715:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_C )); }; }
	goto st1459;
tr1716:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_B )); }; }
	goto st1459;
tr1717:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_D )); }; }
	goto st1459;
tr1718:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_E )); }; }
	goto st1459;
tr1719:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_H )); }; }
	goto st1459;
tr1720:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_A, REG_IXH )); }; }
	goto st1459;
tr1721:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_A, REG_IYH )); }; }
	goto st1459;
tr1722:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_L )); }; }
	goto st1459;
tr1723:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_r_r( REG_A, REG_IXL )); }; }
	goto st1459;
tr1724:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_r_r( REG_A, REG_IYL )); }; }
	goto st1459;
tr1725:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_A )); }; }
	goto st1459;
tr1726:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_A_I); }; }
	goto st1459;
tr1727:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_A_IIR); }; }
	goto st1459;
tr1728:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_A_R); }; }
	goto st1459;
tr1729:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_A_EIR); }; }
	goto st1459;
tr1730:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_A_IND_dd( REG_IND_BC )); }; }
	goto st1459;
tr1731:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_A_IND_dd( REG_IND_DE )); }; }
	goto st1459;
tr1732:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_A, REG_idx )); }; }
	goto st1459;
tr1744:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_A, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1753:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_A, REG_idx ) ) << 8); }; }
	goto st1459;
tr1765:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_A, REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1774:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_A, REG_idx ) ) << 8); }; }
	goto st1459;
tr1777:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_I_A); }; }
	goto st1459;
tr1780:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_IIR_A); }; }
	goto st1459;
tr1783:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_R_A); }; }
	goto st1459;
tr1786:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_EIR_A); }; }
	goto st1459;
tr1791:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_BC == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_BC + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_BC + Z80_LD_dd_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1796:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_BC == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_BC + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_BC + Z80_LD_dd_nn( REG_BC )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1803:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_DE == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_DE + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_DE + Z80_LD_dd_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1808:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_DE == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_DE + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_DE + Z80_LD_dd_nn( REG_DE )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1815:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_HL == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_HL + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_HL + Z80_LD_dd_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1820:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_HL == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_HL + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_HL + Z80_LD_dd_nn( REG_HL )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1827:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IX == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IX + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IX + Z80_LD_dd_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1832:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IX == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IX + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IX + Z80_LD_dd_nn( REG_IX )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1839:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IY == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IY + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IY + Z80_LD_dd_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1844:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_IY == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IY + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_IY + Z80_LD_dd_nn( REG_IY )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1854:
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_SP == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_SP + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_SP + Z80_LD_dd_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1859:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{
    if ( expr_in_parens ) {
     if ( REG_SP == REG_HL ) {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_SP + Z80_LD_idx_IND_nn), expr); } else OBJ_DELETE(expr); };
     }
     else {
      { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((Z80_LD_dd_IND_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
     }
    }
    else {
     { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_nn((P_SP + Z80_LD_dd_nn( REG_SP )), expr); } else OBJ_DELETE(expr); };
    }
   }
	goto st1459;
tr1862:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_LD_SP_idx); }; }
	goto st1459;
tr1863:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_LD_SP_idx); }; }
	goto st1459;
tr1864:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_LD_SP_idx); }; }
	goto st1459;
tr1867:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_IND_dd_A( REG_IND_BC )); }; }
	goto st1459;
tr1870:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_IND_dd_A( REG_IND_DE )); }; }
	goto st1459;
tr1882:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1887:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_LD_r_n( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1890:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_idx, REG_C )); }; }
	goto st1459;
tr1891:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_idx, REG_B )); }; }
	goto st1459;
tr1892:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_idx, REG_D )); }; }
	goto st1459;
tr1893:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_idx, REG_E )); }; }
	goto st1459;
tr1894:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_idx, REG_H )); }; }
	goto st1459;
tr1895:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_idx, REG_L )); }; }
	goto st1459;
tr1896:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LD_r_r( REG_idx, REG_A )); }; }
	goto st1459;
tr1919:
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx_n((P_IX + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1459;
tr1924:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx_n((P_IX + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1459;
tr1927:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1928:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_B )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1929:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_D )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1930:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_E )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1931:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_H )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1932:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_L )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1933:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_LD_r_r( REG_idx, REG_A )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1953:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n(((P_IX + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1958:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n(((P_IX + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1961:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_C ) ) << 8); }; }
	goto st1459;
tr1962:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_B ) ) << 8); }; }
	goto st1459;
tr1963:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_D ) ) << 8); }; }
	goto st1459;
tr1964:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_E ) ) << 8); }; }
	goto st1459;
tr1965:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_H ) ) << 8); }; }
	goto st1459;
tr1966:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_L ) ) << 8); }; }
	goto st1459;
tr1967:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IX + Z80_LD_r_r( REG_idx, REG_A ) ) << 8); }; }
	goto st1459;
tr1990:
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx_n((P_IY + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1459;
tr1995:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *n_expr = pop_expr(); Expr *idx_expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx_n((P_IY + Z80_LD_r_n( REG_idx )), idx_expr, n_expr); } else { OBJ_DELETE(n_expr); OBJ_DELETE(idx_expr); } }; }
	goto st1459;
tr1998:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_C )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr1999:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_B )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2000:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_D )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2001:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_E )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2002:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_H )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2003:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_L )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2004:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_LD_r_r( REG_idx, REG_A )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2024:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n(((P_IY + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2029:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n(((P_IY + Z80_LD_r_n( REG_idx ) ) << 8), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2032:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_C ) ) << 8); }; }
	goto st1459;
tr2033:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_B ) ) << 8); }; }
	goto st1459;
tr2034:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_D ) ) << 8); }; }
	goto st1459;
tr2035:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_E ) ) << 8); }; }
	goto st1459;
tr2036:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_H ) ) << 8); }; }
	goto st1459;
tr2037:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_L ) ) << 8); }; }
	goto st1459;
tr2038:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode((P_IY + Z80_LD_r_r( REG_idx, REG_A ) ) << 8); }; }
	goto st1459;
tr2039:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LDD); }; }
	goto st1459;
tr2040:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LDDR); }; }
	goto st1459;
tr2041:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LDI); }; }
	goto st1459;
tr2042:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_LDIR); }; }
	goto st1459;
tr2043:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_NEG); }; }
	goto st1459;
tr2044:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_NOP); }; }
	goto st1459;
tr2062:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_OR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2067:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_OR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2070:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_C )); }; }
	goto st1459;
tr2071:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_B )); }; }
	goto st1459;
tr2072:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_D )); }; }
	goto st1459;
tr2073:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_E )); }; }
	goto st1459;
tr2074:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_H )); }; }
	goto st1459;
tr2075:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_OR( REG_H )); }; }
	goto st1459;
tr2076:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_OR( REG_H )); }; }
	goto st1459;
tr2077:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_L )); }; }
	goto st1459;
tr2078:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_OR( REG_L )); }; }
	goto st1459;
tr2079:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_OR( REG_L )); }; }
	goto st1459;
tr2080:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_A )); }; }
	goto st1459;
tr2083:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OR( REG_idx )); }; }
	goto st1459;
tr2095:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_OR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2104:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_OR( REG_idx ) ) << 8); }; }
	goto st1459;
tr2116:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_OR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2125:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_OR( REG_idx ) ) << 8); }; }
	goto st1459;
tr2126:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OTDR); }; }
	goto st1459;
tr2127:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OTIR); }; }
	goto st1459;
tr2138:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_OUT_n_A), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2150:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUT_C_REG( REG_C )); }; }
	goto st1459;
tr2151:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUT_C_REG( REG_B )); }; }
	goto st1459;
tr2152:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUT_C_REG( REG_D )); }; }
	goto st1459;
tr2153:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUT_C_REG( REG_E )); }; }
	goto st1459;
tr2154:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUT_C_REG( REG_H )); }; }
	goto st1459;
tr2155:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUT_C_REG( REG_L )); }; }
	goto st1459;
tr2156:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUT_C_REG( REG_A )); }; }
	goto st1459;
tr2157:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUTD); }; }
	goto st1459;
tr2158:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_OUTI); }; }
	goto st1459;
tr2165:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_BC + Z80_POP( REG_BC )); }; }
	goto st1459;
tr2166:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_DE + Z80_POP( REG_DE )); }; }
	goto st1459;
tr2167:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_POP( REG_HL )); }; }
	goto st1459;
tr2168:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_POP( REG_IX )); }; }
	goto st1459;
tr2169:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_POP( REG_IY )); }; }
	goto st1459;
tr2170:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_AF + Z80_POP( REG_AF )); }; }
	goto st1459;
tr2177:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_BC + Z80_PUSH( REG_BC )); }; }
	goto st1459;
tr2178:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_DE + Z80_PUSH( REG_DE )); }; }
	goto st1459;
tr2179:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_HL + Z80_PUSH( REG_HL )); }; }
	goto st1459;
tr2180:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_PUSH( REG_IX )); }; }
	goto st1459;
tr2181:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_PUSH( REG_IY )); }; }
	goto st1459;
tr2182:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_AF + Z80_PUSH( REG_AF )); }; }
	goto st1459;
tr2201:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_C )); };
    }
	goto st1459;
tr2202:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_B )); };
    }
	goto st1459;
tr2203:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_D )); };
    }
	goto st1459;
tr2204:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_E )); };
    }
	goto st1459;
tr2205:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_H )); };
    }
	goto st1459;
tr2206:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_L )); };
    }
	goto st1459;
tr2207:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_A )); };
    }
	goto st1459;
tr2208:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RES( expr_value, REG_idx )); };
    }
	goto st1459;
tr2220:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RES( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1459;
tr2229:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RES( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RES( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1459;
tr2241:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RES( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1459;
tr2250:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RES( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RES( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1459;
tr2254:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET); }; }
	goto st1459;
tr2263:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_NZ )); }; }
	goto st1459;
tr2264:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_Z )); }; }
	goto st1459;
tr2265:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_NC )); }; }
	goto st1459;
tr2266:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_C )); }; }
	goto st1459;
tr2267:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_PO )); }; }
	goto st1459;
tr2268:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_PE )); }; }
	goto st1459;
tr2269:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_P )); }; }
	goto st1459;
tr2270:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RET_FLAG( FLAG_M )); }; }
	goto st1459;
tr2271:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RETI); }; }
	goto st1459;
tr2272:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RETN); }; }
	goto st1459;
tr2283:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_C )); }; }
	goto st1459;
tr2284:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_B )); }; }
	goto st1459;
tr2285:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_D )); }; }
	goto st1459;
tr2286:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_E )); }; }
	goto st1459;
tr2287:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_H )); }; }
	goto st1459;
tr2288:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_L )); }; }
	goto st1459;
tr2289:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_A )); }; }
	goto st1459;
tr2290:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RL( REG_idx )); }; }
	goto st1459;
tr2302:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1459;
tr2311:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1459;
tr2323:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1459;
tr2332:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1459;
tr2333:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLA); }; }
	goto st1459;
tr2344:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_C )); }; }
	goto st1459;
tr2345:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_B )); }; }
	goto st1459;
tr2346:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_D )); }; }
	goto st1459;
tr2347:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_E )); }; }
	goto st1459;
tr2348:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_H )); }; }
	goto st1459;
tr2349:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_L )); }; }
	goto st1459;
tr2350:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_A )); }; }
	goto st1459;
tr2351:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLC( REG_idx )); }; }
	goto st1459;
tr2363:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RLC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2372:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RLC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RLC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2384:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RLC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2393:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RLC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RLC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2394:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RLCA); }; }
	goto st1459;
tr2395:
	{ { if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_emul((Z80_RLD), "rcmx_rld"); } }; }
	goto st1459;
tr2406:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_C )); }; }
	goto st1459;
tr2407:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_B )); }; }
	goto st1459;
tr2408:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_D )); }; }
	goto st1459;
tr2409:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_E )); }; }
	goto st1459;
tr2410:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_H )); }; }
	goto st1459;
tr2411:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_L )); }; }
	goto st1459;
tr2412:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_A )); }; }
	goto st1459;
tr2413:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RR( REG_idx )); }; }
	goto st1459;
tr2425:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RR( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1459;
tr2434:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RR( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RR( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1459;
tr2446:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RR( REG_idx )), expr); } else OBJ_DELETE(expr); }
                           ; }
	goto st1459;
tr2455:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RR( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RR( REG_idx ) << 0 ) & 0x000000FF)); }
                                                 ; }
	goto st1459;
tr2456:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRA); }; }
	goto st1459;
tr2467:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_C )); }; }
	goto st1459;
tr2468:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_B )); }; }
	goto st1459;
tr2469:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_D )); }; }
	goto st1459;
tr2470:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_E )); }; }
	goto st1459;
tr2471:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_H )); }; }
	goto st1459;
tr2472:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_L )); }; }
	goto st1459;
tr2473:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_A )); }; }
	goto st1459;
tr2474:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRC( REG_idx )); }; }
	goto st1459;
tr2486:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_RRC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2495:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_RRC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RRC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2507:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_RRC( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2516:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_RRC( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_RRC( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2517:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RRCA); }; }
	goto st1459;
tr2518:
	{ { if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_emul((Z80_RRD), "rcmx_rrd"); } }; }
	goto st1459;
tr2522:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RST( expr_value )); };
    }
	goto st1459;
tr2527:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_RST( expr_value )); };
    }
	goto st1459;
tr2548:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_SBC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2553:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_SBC_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2556:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_C )); }; }
	goto st1459;
tr2557:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_B )); }; }
	goto st1459;
tr2558:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_D )); }; }
	goto st1459;
tr2559:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_E )); }; }
	goto st1459;
tr2560:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_H )); }; }
	goto st1459;
tr2561:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_SBC( REG_H )); }; }
	goto st1459;
tr2562:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_SBC( REG_H )); }; }
	goto st1459;
tr2563:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_L )); }; }
	goto st1459;
tr2564:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_SBC( REG_L )); }; }
	goto st1459;
tr2565:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_SBC( REG_L )); }; }
	goto st1459;
tr2566:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_A )); }; }
	goto st1459;
tr2569:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC( REG_idx )); }; }
	goto st1459;
tr2581:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_SBC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2590:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_SBC( REG_idx ) ) << 8); }; }
	goto st1459;
tr2602:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_SBC( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2611:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_SBC( REG_idx ) ) << 8); }; }
	goto st1459;
tr2617:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC16( REG_BC )); }; }
	goto st1459;
tr2618:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC16( REG_DE )); }; }
	goto st1459;
tr2619:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC16( REG_HL )); }; }
	goto st1459;
tr2620:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SBC16( REG_SP )); }; }
	goto st1459;
tr2621:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SCF); }; }
	goto st1459;
tr2640:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_C )); };
    }
	goto st1459;
tr2641:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_B )); };
    }
	goto st1459;
tr2642:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_D )); };
    }
	goto st1459;
tr2643:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_E )); };
    }
	goto st1459;
tr2644:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_H )); };
    }
	goto st1459;
tr2645:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_L )); };
    }
	goto st1459;
tr2646:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_A )); };
    }
	goto st1459;
tr2647:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SET( expr_value, REG_idx )); };
    }
	goto st1459;
tr2659:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SET( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1459;
tr2668:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SET( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SET( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1459;
tr2680:
	{ if (!expr_error)
    { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SET( expr_value, REG_idx )), expr); } else OBJ_DELETE(expr); }
                                           ;
    }
	goto st1459;
tr2689:
	{ if (!expr_error)
    if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SET( expr_value, REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SET( expr_value, REG_idx ) << 0 ) & 0x000000FF)); }
                                                              ;
     }
	goto st1459;
tr2703:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_C )); }; }
	goto st1459;
tr2704:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_B )); }; }
	goto st1459;
tr2705:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_D )); }; }
	goto st1459;
tr2706:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_E )); }; }
	goto st1459;
tr2707:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_H )); }; }
	goto st1459;
tr2708:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_L )); }; }
	goto st1459;
tr2709:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_A )); }; }
	goto st1459;
tr2710:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLA( REG_idx )); }; }
	goto st1459;
tr2722:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SLA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2731:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SLA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2743:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SLA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2752:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SLA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2763:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_C )); }; }
	goto st1459;
tr2764:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_B )); }; }
	goto st1459;
tr2765:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_D )); }; }
	goto st1459;
tr2766:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_E )); }; }
	goto st1459;
tr2767:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_H )); }; }
	goto st1459;
tr2768:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_L )); }; }
	goto st1459;
tr2769:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_A )); }; }
	goto st1459;
tr2770:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SLL( REG_idx )); }; }
	goto st1459;
tr2782:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SLL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2791:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SLL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2803:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SLL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2812:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SLL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SLL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2823:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_C )); }; }
	goto st1459;
tr2824:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_B )); }; }
	goto st1459;
tr2825:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_D )); }; }
	goto st1459;
tr2826:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_E )); }; }
	goto st1459;
tr2827:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_H )); }; }
	goto st1459;
tr2828:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_L )); }; }
	goto st1459;
tr2829:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_A )); }; }
	goto st1459;
tr2830:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRA( REG_idx )); }; }
	goto st1459;
tr2842:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SRA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2851:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SRA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2863:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SRA( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2872:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SRA( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRA( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2883:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_C )); }; }
	goto st1459;
tr2884:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_B )); }; }
	goto st1459;
tr2885:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_D )); }; }
	goto st1459;
tr2886:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_E )); }; }
	goto st1459;
tr2887:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_H )); }; }
	goto st1459;
tr2888:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_L )); }; }
	goto st1459;
tr2889:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_A )); }; }
	goto st1459;
tr2890:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SRL( REG_idx )); }; }
	goto st1459;
tr2902:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IX << 8) & 0xFF0000) + Z80_SRL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2911:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IX << 16) & 0xFF000000) + ((Z80_SRL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2923:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((((P_IY << 8) & 0xFF0000) + Z80_SRL( REG_idx )), expr); } else OBJ_DELETE(expr); }
                            ; }
	goto st1459;
tr2932:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(((P_IY << 16) & 0xFF000000) + ((Z80_SRL( REG_idx ) << 8 ) & 0x00FF0000) + ((0 << 8 ) & 0x0000FF00) + ((Z80_SRL( REG_idx ) << 0 ) & 0x000000FF)); }
                                                  ; }
	goto st1459;
tr2950:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_SUB_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2955:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_SUB_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2958:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_C )); }; }
	goto st1459;
tr2959:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_B )); }; }
	goto st1459;
tr2960:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_D )); }; }
	goto st1459;
tr2961:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_E )); }; }
	goto st1459;
tr2962:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_H )); }; }
	goto st1459;
tr2963:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_SUB( REG_H )); }; }
	goto st1459;
tr2964:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_SUB( REG_H )); }; }
	goto st1459;
tr2965:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_L )); }; }
	goto st1459;
tr2966:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_SUB( REG_L )); }; }
	goto st1459;
tr2967:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_SUB( REG_L )); }; }
	goto st1459;
tr2968:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_A )); }; }
	goto st1459;
tr2971:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_SUB( REG_idx )); }; }
	goto st1459;
tr2983:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_SUB( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr2992:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_SUB( REG_idx ) ) << 8); }; }
	goto st1459;
tr3004:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_SUB( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr3013:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_SUB( REG_idx ) ) << 8); }; }
	goto st1459;
tr3031:
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_XOR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr3036:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_n((Z80_XOR_n), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr3039:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_C )); }; }
	goto st1459;
tr3040:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_B )); }; }
	goto st1459;
tr3041:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_D )); }; }
	goto st1459;
tr3042:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_E )); }; }
	goto st1459;
tr3043:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_H )); }; }
	goto st1459;
tr3044:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_XOR( REG_H )); }; }
	goto st1459;
tr3045:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_XOR( REG_H )); }; }
	goto st1459;
tr3046:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_L )); }; }
	goto st1459;
tr3047:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IX + Z80_XOR( REG_L )); }; }
	goto st1459;
tr3048:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(P_IY + Z80_XOR( REG_L )); }; }
	goto st1459;
tr3049:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_A )); }; }
	goto st1459;
tr3052:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(Z80_XOR( REG_idx )); }; }
	goto st1459;
tr3064:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IX + Z80_XOR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr3073:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IX + Z80_XOR( REG_idx ) ) << 8); }; }
	goto st1459;
tr3085:
	{ { Expr *expr = pop_expr(); if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode_idx((P_IY + Z80_XOR( REG_idx )), expr); } else OBJ_DELETE(expr); }; }
	goto st1459;
tr3094:
	{ if (compile_active) { if (stmt_label) { if (compile_active) { define_symbol((stmt_label), get_PC() + (0), TYPE_ADDRESS, SYM_TOUCHED); }; stmt_label = NULL; }; add_opcode(( P_IY + Z80_XOR( REG_idx ) ) << 8); }; }
	goto st1459;
tr3098:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_start(expr_value);
    current_sm = SM_DEFVARS_OPEN;
    }
	goto st1459;
tr3104:
	{ if (! expr_error)
    defvars_start(expr_value);
    current_sm = SM_DEFVARS_LINE;
    }
	goto st1459;
tr3105:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_start(expr_value);
    current_sm = SM_DEFVARS_OPEN;
    }
	goto st1459;
tr3112:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    set_origin_directive(expr_value);
    }
	goto st1459;
tr3117:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (!expr_error)
    set_origin_directive(expr_value);
    }
	goto st1459;
st1459:
	if ( ++p == pe )
		goto _test_eof1459;
case 1459:
	goto st0;
tr2:
	{ stmt_label = p->string; }
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr73;
		case 89: goto st3;
		case 90: goto st47;
		case 91: goto st103;
		case 92: goto st141;
		case 93: goto st174;
		case 94: goto st218;
		case 95: goto st219;
		case 96: goto st257;
		case 97: goto st258;
		case 98: goto st259;
		case 99: goto st260;
		case 100: goto st261;
		case 101: goto st262;
		case 102: goto st263;
		case 103: goto st302;
		case 104: goto st303;
		case 105: goto st307;
		case 106: goto st308;
		case 107: goto st321;
		case 108: goto st322;
		case 109: goto st323;
		case 110: goto st327;
		case 111: goto st352;
		case 112: goto st391;
		case 113: goto st392;
		case 114: goto st393;
		case 115: goto st394;
		case 116: goto st395;
		case 117: goto st444;
		case 118: goto st468;
		case 119: goto st912;
		case 120: goto st913;
		case 121: goto st914;
		case 122: goto st915;
		case 123: goto st916;
		case 124: goto st917;
		case 125: goto st918;
		case 126: goto st956;
		case 127: goto st957;
		case 128: goto st958;
		case 129: goto st973;
		case 130: goto st974;
		case 131: goto st975;
		case 132: goto st982;
		case 133: goto st989;
		case 134: goto st1022;
		case 135: goto st1031;
		case 136: goto st1032;
		case 137: goto st1033;
		case 138: goto st1062;
		case 139: goto st1063;
		case 140: goto st1092;
		case 141: goto st1093;
		case 142: goto st1094;
		case 143: goto st1123;
		case 144: goto st1124;
		case 145: goto st1153;
		case 146: goto st1154;
		case 147: goto st1155;
		case 148: goto st1159;
		case 149: goto st1203;
		case 150: goto st1204;
		case 151: goto st1237;
		case 152: goto st1266;
		case 153: goto st1295;
		case 154: goto st1324;
		case 155: goto st1353;
		case 156: goto st1391;
	}
	goto st0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr74;
		case 5: goto tr74;
		case 8: goto tr74;
		case 18: goto tr76;
		case 21: goto tr75;
		case 23: goto tr75;
		case 36: goto tr76;
		case 44: goto tr75;
		case 48: goto st7;
		case 53: goto st8;
		case 54: goto st9;
		case 55: goto st10;
		case 56: goto st11;
		case 57: goto st12;
		case 58: goto st13;
		case 59: goto st14;
		case 60: goto st15;
		case 61: goto st16;
		case 62: goto st17;
		case 71: goto st41;
		case 79: goto st20;
		case 80: goto st21;
		case 81: goto st31;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr75;
	goto st0;
tr74:
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
		case 12: goto tr92;
		case 23: goto st5;
		case 131091: goto st6;
		case 131109: goto st6;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
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
tr75:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st5;
tr76:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st5;
tr96:
	{ expr_open_parens++; }
	goto st5;
tr98:
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
		case 18: goto tr96;
		case 21: goto st5;
		case 23: goto st5;
		case 36: goto tr96;
		case 44: goto st5;
	}
	goto st0;
tr99:
	{ expr_open_parens--; }
	goto st6;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr97;
		case 23: goto tr98;
		case 131091: goto tr99;
		case 131109: goto tr99;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr98;
		} else if ( _widec >= 15 )
			goto tr98;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr98;
		} else if ( _widec >= 38 )
			goto tr98;
	} else
		goto tr98;
	goto st0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	if ( ( ((int) p->tok)) == 12 )
		goto tr100;
	goto st0;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	if ( ( ((int) p->tok)) == 12 )
		goto tr101;
	goto st0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	if ( ( ((int) p->tok)) == 12 )
		goto tr102;
	goto st0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	if ( ( ((int) p->tok)) == 12 )
		goto tr103;
	goto st0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( ( ((int) p->tok)) == 12 )
		goto tr104;
	goto st0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( ( ((int) p->tok)) == 12 )
		goto tr105;
	goto st0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	if ( ( ((int) p->tok)) == 12 )
		goto tr106;
	goto st0;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	if ( ( ((int) p->tok)) == 12 )
		goto tr107;
	goto st0;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	if ( ( ((int) p->tok)) == 12 )
		goto tr108;
	goto st0;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	if ( ( ((int) p->tok)) == 12 )
		goto tr109;
	goto st0;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr110;
		case 22: goto st18;
	}
	goto st0;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr74;
		case 5: goto tr74;
		case 8: goto tr74;
		case 18: goto tr76;
		case 21: goto tr75;
		case 23: goto tr75;
		case 36: goto tr76;
		case 44: goto tr75;
		case 48: goto st7;
		case 53: goto st8;
		case 54: goto st9;
		case 55: goto st10;
		case 56: goto st11;
		case 57: goto st12;
		case 58: goto st13;
		case 59: goto st14;
		case 60: goto st15;
		case 61: goto st16;
		case 62: goto st19;
		case 79: goto st20;
		case 80: goto st21;
		case 81: goto st31;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr75;
	goto st0;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	if ( ( ((int) p->tok)) == 12 )
		goto tr110;
	goto st0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	if ( ( ((int) p->tok)) == 12 )
		goto tr113;
	goto st0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr114;
		case 5: goto tr114;
		case 8: goto tr114;
		case 18: goto tr116;
		case 19: goto st30;
		case 21: goto tr115;
		case 23: goto tr115;
		case 36: goto tr116;
		case 44: goto tr115;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr115;
	goto st0;
tr114:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st23;
		case 65555: goto tr119;
		case 131091: goto tr120;
		case 131109: goto st28;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st23;
		} else if ( _widec >= 15 )
			goto st23;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st23;
		} else if ( _widec >= 38 )
			goto st23;
	} else
		goto st23;
	goto st0;
tr123:
	{ expr_open_parens++; }
	goto st23;
tr126:
	{ expr_open_parens--; }
	goto st23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st24;
		case 5: goto st24;
		case 8: goto st24;
		case 13: goto st23;
		case 18: goto tr123;
		case 21: goto st23;
		case 23: goto st23;
		case 36: goto tr123;
		case 44: goto st23;
	}
	goto st0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st23;
		case 65555: goto tr119;
		case 131091: goto st26;
		case 131109: goto st26;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st23;
		} else if ( _widec >= 15 )
			goto st23;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st23;
		} else if ( _widec >= 38 )
			goto st23;
	} else
		goto st23;
	goto st0;
tr119:
	{ push_expr(expr_start, p); }
	goto st25;
tr127:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st25;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( ( ((int) p->tok)) == 12 )
		goto tr125;
	goto st0;
tr128:
	{ expr_open_parens--; }
	goto st26;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr126;
		case 65555: goto tr127;
		case 131091: goto tr128;
		case 131109: goto tr128;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr126;
		} else if ( _widec >= 15 )
			goto tr126;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr126;
		} else if ( _widec >= 38 )
			goto tr126;
	} else
		goto tr126;
	goto st0;
tr120:
	{ push_expr(expr_start, p); }
	goto st27;
tr129:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st27;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr125;
		case 23: goto tr126;
		case 65555: goto tr127;
		case 131091: goto tr129;
		case 131109: goto tr130;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr126;
		} else if ( _widec >= 15 )
			goto tr126;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr126;
		} else if ( _widec >= 38 )
			goto tr126;
	} else
		goto tr126;
	goto st0;
tr130:
	{ expr_open_parens--; }
	goto st28;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr126;
		case 65555: goto tr127;
		case 131091: goto tr129;
		case 131109: goto tr130;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr126;
		} else if ( _widec >= 15 )
			goto tr126;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr126;
		} else if ( _widec >= 38 )
			goto tr126;
	} else
		goto tr126;
	goto st0;
tr115:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st29;
tr116:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st29;
tr133:
	{ expr_open_parens++; }
	goto st29;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st22;
		case 5: goto st22;
		case 8: goto st22;
		case 13: goto st29;
		case 18: goto tr133;
		case 21: goto st29;
		case 23: goto st29;
		case 36: goto tr133;
		case 44: goto st29;
	}
	goto st0;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	if ( ( ((int) p->tok)) == 12 )
		goto tr134;
	goto st0;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr135;
		case 5: goto tr135;
		case 8: goto tr135;
		case 18: goto tr137;
		case 19: goto st40;
		case 21: goto tr136;
		case 23: goto tr136;
		case 36: goto tr137;
		case 44: goto tr136;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr136;
	goto st0;
tr135:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st32;
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
		case 23: goto st33;
		case 65555: goto tr140;
		case 131091: goto tr141;
		case 131109: goto st38;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st33;
		} else if ( _widec >= 15 )
			goto st33;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st33;
		} else if ( _widec >= 38 )
			goto st33;
	} else
		goto st33;
	goto st0;
tr144:
	{ expr_open_parens++; }
	goto st33;
tr147:
	{ expr_open_parens--; }
	goto st33;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st34;
		case 5: goto st34;
		case 8: goto st34;
		case 13: goto st33;
		case 18: goto tr144;
		case 21: goto st33;
		case 23: goto st33;
		case 36: goto tr144;
		case 44: goto st33;
	}
	goto st0;
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
		case 23: goto st33;
		case 65555: goto tr140;
		case 131091: goto st36;
		case 131109: goto st36;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st33;
		} else if ( _widec >= 15 )
			goto st33;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st33;
		} else if ( _widec >= 38 )
			goto st33;
	} else
		goto st33;
	goto st0;
tr140:
	{ push_expr(expr_start, p); }
	goto st35;
tr148:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st35;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	if ( ( ((int) p->tok)) == 12 )
		goto tr146;
	goto st0;
tr149:
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
		case 23: goto tr147;
		case 65555: goto tr148;
		case 131091: goto tr149;
		case 131109: goto tr149;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr147;
		} else if ( _widec >= 15 )
			goto tr147;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr147;
		} else if ( _widec >= 38 )
			goto tr147;
	} else
		goto tr147;
	goto st0;
tr141:
	{ push_expr(expr_start, p); }
	goto st37;
tr150:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st37;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr146;
		case 23: goto tr147;
		case 65555: goto tr148;
		case 131091: goto tr150;
		case 131109: goto tr151;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr147;
		} else if ( _widec >= 15 )
			goto tr147;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr147;
		} else if ( _widec >= 38 )
			goto tr147;
	} else
		goto tr147;
	goto st0;
tr151:
	{ expr_open_parens--; }
	goto st38;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr147;
		case 65555: goto tr148;
		case 131091: goto tr150;
		case 131109: goto tr151;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr147;
		} else if ( _widec >= 15 )
			goto tr147;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr147;
		} else if ( _widec >= 38 )
			goto tr147;
	} else
		goto tr147;
	goto st0;
tr136:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st39;
tr137:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st39;
tr154:
	{ expr_open_parens++; }
	goto st39;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st32;
		case 5: goto st32;
		case 8: goto st32;
		case 13: goto st39;
		case 18: goto tr154;
		case 21: goto st39;
		case 23: goto st39;
		case 36: goto tr154;
		case 44: goto st39;
	}
	goto st0;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	if ( ( ((int) p->tok)) == 12 )
		goto tr155;
	goto st0;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( ( ((int) p->tok)) == 22 )
		goto st42;
	goto st0;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st43;
		case 70: goto st44;
		case 71: goto st45;
		case 75: goto st46;
	}
	goto st0;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	if ( ( ((int) p->tok)) == 12 )
		goto tr161;
	goto st0;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	if ( ( ((int) p->tok)) == 12 )
		goto tr162;
	goto st0;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	if ( ( ((int) p->tok)) == 12 )
		goto tr163;
	goto st0;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	if ( ( ((int) p->tok)) == 12 )
		goto tr164;
	goto st0;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr165;
		case 5: goto tr165;
		case 8: goto tr165;
		case 18: goto tr167;
		case 21: goto tr166;
		case 23: goto tr166;
		case 36: goto tr167;
		case 44: goto tr166;
		case 48: goto st51;
		case 53: goto st52;
		case 54: goto st53;
		case 55: goto st54;
		case 56: goto st55;
		case 57: goto st56;
		case 58: goto st57;
		case 59: goto st58;
		case 60: goto st59;
		case 61: goto st60;
		case 62: goto st61;
		case 71: goto st85;
		case 72: goto st91;
		case 73: goto st97;
		case 79: goto st64;
		case 80: goto st65;
		case 81: goto st75;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr166;
	goto st0;
tr165:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st48;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr185;
		case 23: goto st49;
		case 131091: goto st50;
		case 131109: goto st50;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st49;
		} else if ( _widec >= 15 )
			goto st49;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st49;
		} else if ( _widec >= 38 )
			goto st49;
	} else
		goto st49;
	goto st0;
tr166:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st49;
tr167:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st49;
tr189:
	{ expr_open_parens++; }
	goto st49;
tr191:
	{ expr_open_parens--; }
	goto st49;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st48;
		case 5: goto st48;
		case 8: goto st48;
		case 13: goto st49;
		case 18: goto tr189;
		case 21: goto st49;
		case 23: goto st49;
		case 36: goto tr189;
		case 44: goto st49;
	}
	goto st0;
tr192:
	{ expr_open_parens--; }
	goto st50;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr190;
		case 23: goto tr191;
		case 131091: goto tr192;
		case 131109: goto tr192;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr191;
		} else if ( _widec >= 15 )
			goto tr191;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr191;
		} else if ( _widec >= 38 )
			goto tr191;
	} else
		goto tr191;
	goto st0;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	if ( ( ((int) p->tok)) == 12 )
		goto tr193;
	goto st0;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	if ( ( ((int) p->tok)) == 12 )
		goto tr194;
	goto st0;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	if ( ( ((int) p->tok)) == 12 )
		goto tr195;
	goto st0;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	if ( ( ((int) p->tok)) == 12 )
		goto tr196;
	goto st0;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	if ( ( ((int) p->tok)) == 12 )
		goto tr197;
	goto st0;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	if ( ( ((int) p->tok)) == 12 )
		goto tr198;
	goto st0;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	if ( ( ((int) p->tok)) == 12 )
		goto tr199;
	goto st0;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	if ( ( ((int) p->tok)) == 12 )
		goto tr200;
	goto st0;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	if ( ( ((int) p->tok)) == 12 )
		goto tr201;
	goto st0;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	if ( ( ((int) p->tok)) == 12 )
		goto tr202;
	goto st0;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr203;
		case 22: goto st62;
	}
	goto st0;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr165;
		case 5: goto tr165;
		case 8: goto tr165;
		case 18: goto tr167;
		case 21: goto tr166;
		case 23: goto tr166;
		case 36: goto tr167;
		case 44: goto tr166;
		case 48: goto st51;
		case 53: goto st52;
		case 54: goto st53;
		case 55: goto st54;
		case 56: goto st55;
		case 57: goto st56;
		case 58: goto st57;
		case 59: goto st58;
		case 60: goto st59;
		case 61: goto st60;
		case 62: goto st63;
		case 79: goto st64;
		case 80: goto st65;
		case 81: goto st75;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr166;
	goto st0;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	if ( ( ((int) p->tok)) == 12 )
		goto tr203;
	goto st0;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	if ( ( ((int) p->tok)) == 12 )
		goto tr206;
	goto st0;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr207;
		case 5: goto tr207;
		case 8: goto tr207;
		case 18: goto tr209;
		case 19: goto st74;
		case 21: goto tr208;
		case 23: goto tr208;
		case 36: goto tr209;
		case 44: goto tr208;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr208;
	goto st0;
tr207:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st66;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st67;
		case 65555: goto tr212;
		case 131091: goto tr213;
		case 131109: goto st72;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st67;
		} else if ( _widec >= 15 )
			goto st67;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st67;
		} else if ( _widec >= 38 )
			goto st67;
	} else
		goto st67;
	goto st0;
tr216:
	{ expr_open_parens++; }
	goto st67;
tr219:
	{ expr_open_parens--; }
	goto st67;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st68;
		case 5: goto st68;
		case 8: goto st68;
		case 13: goto st67;
		case 18: goto tr216;
		case 21: goto st67;
		case 23: goto st67;
		case 36: goto tr216;
		case 44: goto st67;
	}
	goto st0;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st67;
		case 65555: goto tr212;
		case 131091: goto st70;
		case 131109: goto st70;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st67;
		} else if ( _widec >= 15 )
			goto st67;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st67;
		} else if ( _widec >= 38 )
			goto st67;
	} else
		goto st67;
	goto st0;
tr212:
	{ push_expr(expr_start, p); }
	goto st69;
tr220:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st69;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	if ( ( ((int) p->tok)) == 12 )
		goto tr218;
	goto st0;
tr221:
	{ expr_open_parens--; }
	goto st70;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr219;
		case 65555: goto tr220;
		case 131091: goto tr221;
		case 131109: goto tr221;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr219;
		} else if ( _widec >= 15 )
			goto tr219;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr219;
		} else if ( _widec >= 38 )
			goto tr219;
	} else
		goto tr219;
	goto st0;
tr213:
	{ push_expr(expr_start, p); }
	goto st71;
tr222:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st71;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr218;
		case 23: goto tr219;
		case 65555: goto tr220;
		case 131091: goto tr222;
		case 131109: goto tr223;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr219;
		} else if ( _widec >= 15 )
			goto tr219;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr219;
		} else if ( _widec >= 38 )
			goto tr219;
	} else
		goto tr219;
	goto st0;
tr223:
	{ expr_open_parens--; }
	goto st72;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr219;
		case 65555: goto tr220;
		case 131091: goto tr222;
		case 131109: goto tr223;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr219;
		} else if ( _widec >= 15 )
			goto tr219;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr219;
		} else if ( _widec >= 38 )
			goto tr219;
	} else
		goto tr219;
	goto st0;
tr208:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st73;
tr209:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st73;
tr226:
	{ expr_open_parens++; }
	goto st73;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st66;
		case 5: goto st66;
		case 8: goto st66;
		case 13: goto st73;
		case 18: goto tr226;
		case 21: goto st73;
		case 23: goto st73;
		case 36: goto tr226;
		case 44: goto st73;
	}
	goto st0;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	if ( ( ((int) p->tok)) == 12 )
		goto tr227;
	goto st0;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr228;
		case 5: goto tr228;
		case 8: goto tr228;
		case 18: goto tr230;
		case 19: goto st84;
		case 21: goto tr229;
		case 23: goto tr229;
		case 36: goto tr230;
		case 44: goto tr229;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr229;
	goto st0;
tr228:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st76;
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
		case 23: goto st77;
		case 65555: goto tr233;
		case 131091: goto tr234;
		case 131109: goto st82;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st77;
		} else if ( _widec >= 15 )
			goto st77;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st77;
		} else if ( _widec >= 38 )
			goto st77;
	} else
		goto st77;
	goto st0;
tr237:
	{ expr_open_parens++; }
	goto st77;
tr240:
	{ expr_open_parens--; }
	goto st77;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st78;
		case 5: goto st78;
		case 8: goto st78;
		case 13: goto st77;
		case 18: goto tr237;
		case 21: goto st77;
		case 23: goto st77;
		case 36: goto tr237;
		case 44: goto st77;
	}
	goto st0;
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
		case 23: goto st77;
		case 65555: goto tr233;
		case 131091: goto st80;
		case 131109: goto st80;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st77;
		} else if ( _widec >= 15 )
			goto st77;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st77;
		} else if ( _widec >= 38 )
			goto st77;
	} else
		goto st77;
	goto st0;
tr233:
	{ push_expr(expr_start, p); }
	goto st79;
tr241:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st79;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
	if ( ( ((int) p->tok)) == 12 )
		goto tr239;
	goto st0;
tr242:
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
		case 23: goto tr240;
		case 65555: goto tr241;
		case 131091: goto tr242;
		case 131109: goto tr242;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr240;
		} else if ( _widec >= 15 )
			goto tr240;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr240;
		} else if ( _widec >= 38 )
			goto tr240;
	} else
		goto tr240;
	goto st0;
tr234:
	{ push_expr(expr_start, p); }
	goto st81;
tr243:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st81;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr239;
		case 23: goto tr240;
		case 65555: goto tr241;
		case 131091: goto tr243;
		case 131109: goto tr244;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr240;
		} else if ( _widec >= 15 )
			goto tr240;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr240;
		} else if ( _widec >= 38 )
			goto tr240;
	} else
		goto tr240;
	goto st0;
tr244:
	{ expr_open_parens--; }
	goto st82;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr240;
		case 65555: goto tr241;
		case 131091: goto tr243;
		case 131109: goto tr244;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr240;
		} else if ( _widec >= 15 )
			goto tr240;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr240;
		} else if ( _widec >= 38 )
			goto tr240;
	} else
		goto tr240;
	goto st0;
tr229:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st83;
tr230:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st83;
tr247:
	{ expr_open_parens++; }
	goto st83;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st76;
		case 5: goto st76;
		case 8: goto st76;
		case 13: goto st83;
		case 18: goto tr247;
		case 21: goto st83;
		case 23: goto st83;
		case 36: goto tr247;
		case 44: goto st83;
	}
	goto st0;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
	if ( ( ((int) p->tok)) == 12 )
		goto tr248;
	goto st0;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
	if ( ( ((int) p->tok)) == 22 )
		goto st86;
	goto st0;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st87;
		case 70: goto st88;
		case 71: goto st89;
		case 75: goto st90;
	}
	goto st0;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	if ( ( ((int) p->tok)) == 12 )
		goto tr254;
	goto st0;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
	if ( ( ((int) p->tok)) == 12 )
		goto tr255;
	goto st0;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
	if ( ( ((int) p->tok)) == 12 )
		goto tr256;
	goto st0;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
	if ( ( ((int) p->tok)) == 12 )
		goto tr257;
	goto st0;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	if ( ( ((int) p->tok)) == 22 )
		goto st92;
	goto st0;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st93;
		case 70: goto st94;
		case 72: goto st95;
		case 75: goto st96;
	}
	goto st0;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
	if ( ( ((int) p->tok)) == 12 )
		goto tr263;
	goto st0;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
	if ( ( ((int) p->tok)) == 12 )
		goto tr264;
	goto st0;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
	if ( ( ((int) p->tok)) == 12 )
		goto tr265;
	goto st0;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
	if ( ( ((int) p->tok)) == 12 )
		goto tr266;
	goto st0;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
	if ( ( ((int) p->tok)) == 22 )
		goto st98;
	goto st0;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st99;
		case 70: goto st100;
		case 73: goto st101;
		case 75: goto st102;
	}
	goto st0;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
	if ( ( ((int) p->tok)) == 12 )
		goto tr272;
	goto st0;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
	if ( ( ((int) p->tok)) == 12 )
		goto tr273;
	goto st0;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
	if ( ( ((int) p->tok)) == 12 )
		goto tr274;
	goto st0;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
	if ( ( ((int) p->tok)) == 12 )
		goto tr275;
	goto st0;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr276;
		case 5: goto tr276;
		case 8: goto tr276;
		case 18: goto tr278;
		case 21: goto tr277;
		case 23: goto tr277;
		case 36: goto tr278;
		case 44: goto tr277;
		case 48: goto st107;
		case 53: goto st108;
		case 54: goto st109;
		case 55: goto st110;
		case 56: goto st111;
		case 57: goto st112;
		case 58: goto st113;
		case 59: goto st114;
		case 60: goto st115;
		case 61: goto st116;
		case 62: goto st117;
		case 79: goto st120;
		case 80: goto st121;
		case 81: goto st131;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr277;
	goto st0;
tr276:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st104;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr293;
		case 23: goto st105;
		case 131091: goto st106;
		case 131109: goto st106;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st105;
		} else if ( _widec >= 15 )
			goto st105;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st105;
		} else if ( _widec >= 38 )
			goto st105;
	} else
		goto st105;
	goto st0;
tr277:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st105;
tr278:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st105;
tr297:
	{ expr_open_parens++; }
	goto st105;
tr299:
	{ expr_open_parens--; }
	goto st105;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st104;
		case 5: goto st104;
		case 8: goto st104;
		case 13: goto st105;
		case 18: goto tr297;
		case 21: goto st105;
		case 23: goto st105;
		case 36: goto tr297;
		case 44: goto st105;
	}
	goto st0;
tr300:
	{ expr_open_parens--; }
	goto st106;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr298;
		case 23: goto tr299;
		case 131091: goto tr300;
		case 131109: goto tr300;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr299;
		} else if ( _widec >= 15 )
			goto tr299;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr299;
		} else if ( _widec >= 38 )
			goto tr299;
	} else
		goto tr299;
	goto st0;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
	if ( ( ((int) p->tok)) == 12 )
		goto tr301;
	goto st0;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	if ( ( ((int) p->tok)) == 12 )
		goto tr302;
	goto st0;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	if ( ( ((int) p->tok)) == 12 )
		goto tr303;
	goto st0;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	if ( ( ((int) p->tok)) == 12 )
		goto tr304;
	goto st0;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	if ( ( ((int) p->tok)) == 12 )
		goto tr305;
	goto st0;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
	if ( ( ((int) p->tok)) == 12 )
		goto tr306;
	goto st0;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
	if ( ( ((int) p->tok)) == 12 )
		goto tr307;
	goto st0;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
	if ( ( ((int) p->tok)) == 12 )
		goto tr308;
	goto st0;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	if ( ( ((int) p->tok)) == 12 )
		goto tr309;
	goto st0;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	if ( ( ((int) p->tok)) == 12 )
		goto tr310;
	goto st0;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr311;
		case 22: goto st118;
	}
	goto st0;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr276;
		case 5: goto tr276;
		case 8: goto tr276;
		case 18: goto tr278;
		case 21: goto tr277;
		case 23: goto tr277;
		case 36: goto tr278;
		case 44: goto tr277;
		case 48: goto st107;
		case 53: goto st108;
		case 54: goto st109;
		case 55: goto st110;
		case 56: goto st111;
		case 57: goto st112;
		case 58: goto st113;
		case 59: goto st114;
		case 60: goto st115;
		case 61: goto st116;
		case 62: goto st119;
		case 79: goto st120;
		case 80: goto st121;
		case 81: goto st131;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr277;
	goto st0;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	if ( ( ((int) p->tok)) == 12 )
		goto tr311;
	goto st0;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	if ( ( ((int) p->tok)) == 12 )
		goto tr314;
	goto st0;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr315;
		case 5: goto tr315;
		case 8: goto tr315;
		case 18: goto tr317;
		case 19: goto st130;
		case 21: goto tr316;
		case 23: goto tr316;
		case 36: goto tr317;
		case 44: goto tr316;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr316;
	goto st0;
tr315:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st122;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st123;
		case 65555: goto tr320;
		case 131091: goto tr321;
		case 131109: goto st128;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st123;
		} else if ( _widec >= 15 )
			goto st123;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st123;
		} else if ( _widec >= 38 )
			goto st123;
	} else
		goto st123;
	goto st0;
tr324:
	{ expr_open_parens++; }
	goto st123;
tr327:
	{ expr_open_parens--; }
	goto st123;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st124;
		case 5: goto st124;
		case 8: goto st124;
		case 13: goto st123;
		case 18: goto tr324;
		case 21: goto st123;
		case 23: goto st123;
		case 36: goto tr324;
		case 44: goto st123;
	}
	goto st0;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st123;
		case 65555: goto tr320;
		case 131091: goto st126;
		case 131109: goto st126;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st123;
		} else if ( _widec >= 15 )
			goto st123;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st123;
		} else if ( _widec >= 38 )
			goto st123;
	} else
		goto st123;
	goto st0;
tr320:
	{ push_expr(expr_start, p); }
	goto st125;
tr328:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st125;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	if ( ( ((int) p->tok)) == 12 )
		goto tr326;
	goto st0;
tr329:
	{ expr_open_parens--; }
	goto st126;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr327;
		case 65555: goto tr328;
		case 131091: goto tr329;
		case 131109: goto tr329;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr327;
		} else if ( _widec >= 15 )
			goto tr327;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr327;
		} else if ( _widec >= 38 )
			goto tr327;
	} else
		goto tr327;
	goto st0;
tr321:
	{ push_expr(expr_start, p); }
	goto st127;
tr330:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st127;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr326;
		case 23: goto tr327;
		case 65555: goto tr328;
		case 131091: goto tr330;
		case 131109: goto tr331;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr327;
		} else if ( _widec >= 15 )
			goto tr327;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr327;
		} else if ( _widec >= 38 )
			goto tr327;
	} else
		goto tr327;
	goto st0;
tr331:
	{ expr_open_parens--; }
	goto st128;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr327;
		case 65555: goto tr328;
		case 131091: goto tr330;
		case 131109: goto tr331;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr327;
		} else if ( _widec >= 15 )
			goto tr327;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr327;
		} else if ( _widec >= 38 )
			goto tr327;
	} else
		goto tr327;
	goto st0;
tr316:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st129;
tr317:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st129;
tr334:
	{ expr_open_parens++; }
	goto st129;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st122;
		case 5: goto st122;
		case 8: goto st122;
		case 13: goto st129;
		case 18: goto tr334;
		case 21: goto st129;
		case 23: goto st129;
		case 36: goto tr334;
		case 44: goto st129;
	}
	goto st0;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	if ( ( ((int) p->tok)) == 12 )
		goto tr335;
	goto st0;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr336;
		case 5: goto tr336;
		case 8: goto tr336;
		case 18: goto tr338;
		case 19: goto st140;
		case 21: goto tr337;
		case 23: goto tr337;
		case 36: goto tr338;
		case 44: goto tr337;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr337;
	goto st0;
tr336:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st132;
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
		case 23: goto st133;
		case 65555: goto tr341;
		case 131091: goto tr342;
		case 131109: goto st138;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st133;
		} else if ( _widec >= 15 )
			goto st133;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st133;
		} else if ( _widec >= 38 )
			goto st133;
	} else
		goto st133;
	goto st0;
tr345:
	{ expr_open_parens++; }
	goto st133;
tr348:
	{ expr_open_parens--; }
	goto st133;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st134;
		case 5: goto st134;
		case 8: goto st134;
		case 13: goto st133;
		case 18: goto tr345;
		case 21: goto st133;
		case 23: goto st133;
		case 36: goto tr345;
		case 44: goto st133;
	}
	goto st0;
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
		case 23: goto st133;
		case 65555: goto tr341;
		case 131091: goto st136;
		case 131109: goto st136;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st133;
		} else if ( _widec >= 15 )
			goto st133;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st133;
		} else if ( _widec >= 38 )
			goto st133;
	} else
		goto st133;
	goto st0;
tr341:
	{ push_expr(expr_start, p); }
	goto st135;
tr349:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st135;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
	if ( ( ((int) p->tok)) == 12 )
		goto tr347;
	goto st0;
tr350:
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
		case 23: goto tr348;
		case 65555: goto tr349;
		case 131091: goto tr350;
		case 131109: goto tr350;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr348;
		} else if ( _widec >= 15 )
			goto tr348;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr348;
		} else if ( _widec >= 38 )
			goto tr348;
	} else
		goto tr348;
	goto st0;
tr342:
	{ push_expr(expr_start, p); }
	goto st137;
tr351:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st137;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr347;
		case 23: goto tr348;
		case 65555: goto tr349;
		case 131091: goto tr351;
		case 131109: goto tr352;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr348;
		} else if ( _widec >= 15 )
			goto tr348;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr348;
		} else if ( _widec >= 38 )
			goto tr348;
	} else
		goto tr348;
	goto st0;
tr352:
	{ expr_open_parens--; }
	goto st138;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr348;
		case 65555: goto tr349;
		case 131091: goto tr351;
		case 131109: goto tr352;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr348;
		} else if ( _widec >= 15 )
			goto tr348;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr348;
		} else if ( _widec >= 38 )
			goto tr348;
	} else
		goto tr348;
	goto st0;
tr337:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st139;
tr338:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st139;
tr355:
	{ expr_open_parens++; }
	goto st139;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st132;
		case 5: goto st132;
		case 8: goto st132;
		case 13: goto st139;
		case 18: goto tr355;
		case 21: goto st139;
		case 23: goto st139;
		case 36: goto tr355;
		case 44: goto st139;
	}
	goto st0;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
	if ( ( ((int) p->tok)) == 12 )
		goto tr356;
	goto st0;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr357;
		case 5: goto tr357;
		case 8: goto tr357;
		case 18: goto tr359;
		case 21: goto tr358;
		case 23: goto tr358;
		case 36: goto tr359;
		case 44: goto tr358;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr358;
	goto st0;
tr357:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st142;
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
		case 22: goto tr361;
		case 131091: goto st173;
		case 131109: goto st173;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st143;
		} else if ( _widec >= 15 )
			goto st143;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st143;
		} else if ( _widec >= 38 )
			goto st143;
	} else
		goto st143;
	goto st0;
tr358:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st143;
tr359:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st143;
tr364:
	{ expr_open_parens++; }
	goto st143;
tr425:
	{ expr_open_parens--; }
	goto st143;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st142;
		case 5: goto st142;
		case 8: goto st142;
		case 13: goto st143;
		case 18: goto tr364;
		case 21: goto st143;
		case 23: goto st143;
		case 36: goto tr364;
		case 44: goto st143;
	}
	goto st0;
tr361:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st144;
tr426:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st144;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st145;
		case 53: goto st146;
		case 54: goto st147;
		case 55: goto st148;
		case 56: goto st149;
		case 59: goto st150;
		case 62: goto st151;
		case 79: goto st152;
		case 80: goto st153;
		case 81: goto st163;
	}
	goto st0;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
	if ( ( ((int) p->tok)) == 12 )
		goto tr375;
	goto st0;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
	if ( ( ((int) p->tok)) == 12 )
		goto tr376;
	goto st0;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
	if ( ( ((int) p->tok)) == 12 )
		goto tr377;
	goto st0;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	if ( ( ((int) p->tok)) == 12 )
		goto tr378;
	goto st0;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	if ( ( ((int) p->tok)) == 12 )
		goto tr379;
	goto st0;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
	if ( ( ((int) p->tok)) == 12 )
		goto tr380;
	goto st0;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
	if ( ( ((int) p->tok)) == 12 )
		goto tr381;
	goto st0;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
	if ( ( ((int) p->tok)) == 12 )
		goto tr382;
	goto st0;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr383;
		case 5: goto tr383;
		case 8: goto tr383;
		case 18: goto tr385;
		case 19: goto st162;
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
	goto st154;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st155;
		case 65555: goto tr388;
		case 131091: goto tr389;
		case 131109: goto st160;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st155;
		} else if ( _widec >= 15 )
			goto st155;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st155;
		} else if ( _widec >= 38 )
			goto st155;
	} else
		goto st155;
	goto st0;
tr392:
	{ expr_open_parens++; }
	goto st155;
tr395:
	{ expr_open_parens--; }
	goto st155;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st156;
		case 5: goto st156;
		case 8: goto st156;
		case 13: goto st155;
		case 18: goto tr392;
		case 21: goto st155;
		case 23: goto st155;
		case 36: goto tr392;
		case 44: goto st155;
	}
	goto st0;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st155;
		case 65555: goto tr388;
		case 131091: goto st158;
		case 131109: goto st158;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st155;
		} else if ( _widec >= 15 )
			goto st155;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st155;
		} else if ( _widec >= 38 )
			goto st155;
	} else
		goto st155;
	goto st0;
tr388:
	{ push_expr(expr_start, p); }
	goto st157;
tr396:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st157;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
	if ( ( ((int) p->tok)) == 12 )
		goto tr394;
	goto st0;
tr397:
	{ expr_open_parens--; }
	goto st158;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr395;
		case 65555: goto tr396;
		case 131091: goto tr397;
		case 131109: goto tr397;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr395;
		} else if ( _widec >= 15 )
			goto tr395;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr395;
		} else if ( _widec >= 38 )
			goto tr395;
	} else
		goto tr395;
	goto st0;
tr389:
	{ push_expr(expr_start, p); }
	goto st159;
tr398:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st159;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr394;
		case 23: goto tr395;
		case 65555: goto tr396;
		case 131091: goto tr398;
		case 131109: goto tr399;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr395;
		} else if ( _widec >= 15 )
			goto tr395;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr395;
		} else if ( _widec >= 38 )
			goto tr395;
	} else
		goto tr395;
	goto st0;
tr399:
	{ expr_open_parens--; }
	goto st160;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr395;
		case 65555: goto tr396;
		case 131091: goto tr398;
		case 131109: goto tr399;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr395;
		} else if ( _widec >= 15 )
			goto tr395;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr395;
		} else if ( _widec >= 38 )
			goto tr395;
	} else
		goto tr395;
	goto st0;
tr384:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st161;
tr385:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st161;
tr402:
	{ expr_open_parens++; }
	goto st161;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st154;
		case 5: goto st154;
		case 8: goto st154;
		case 13: goto st161;
		case 18: goto tr402;
		case 21: goto st161;
		case 23: goto st161;
		case 36: goto tr402;
		case 44: goto st161;
	}
	goto st0;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
	if ( ( ((int) p->tok)) == 12 )
		goto tr403;
	goto st0;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr404;
		case 5: goto tr404;
		case 8: goto tr404;
		case 18: goto tr406;
		case 19: goto st172;
		case 21: goto tr405;
		case 23: goto tr405;
		case 36: goto tr406;
		case 44: goto tr405;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr405;
	goto st0;
tr404:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st164;
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
		case 23: goto st165;
		case 65555: goto tr409;
		case 131091: goto tr410;
		case 131109: goto st170;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st165;
		} else if ( _widec >= 15 )
			goto st165;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st165;
		} else if ( _widec >= 38 )
			goto st165;
	} else
		goto st165;
	goto st0;
tr413:
	{ expr_open_parens++; }
	goto st165;
tr416:
	{ expr_open_parens--; }
	goto st165;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st166;
		case 5: goto st166;
		case 8: goto st166;
		case 13: goto st165;
		case 18: goto tr413;
		case 21: goto st165;
		case 23: goto st165;
		case 36: goto tr413;
		case 44: goto st165;
	}
	goto st0;
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
		case 23: goto st165;
		case 65555: goto tr409;
		case 131091: goto st168;
		case 131109: goto st168;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st165;
		} else if ( _widec >= 15 )
			goto st165;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st165;
		} else if ( _widec >= 38 )
			goto st165;
	} else
		goto st165;
	goto st0;
tr409:
	{ push_expr(expr_start, p); }
	goto st167;
tr417:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st167;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
	if ( ( ((int) p->tok)) == 12 )
		goto tr415;
	goto st0;
tr418:
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
		case 23: goto tr416;
		case 65555: goto tr417;
		case 131091: goto tr418;
		case 131109: goto tr418;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr416;
		} else if ( _widec >= 15 )
			goto tr416;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr416;
		} else if ( _widec >= 38 )
			goto tr416;
	} else
		goto tr416;
	goto st0;
tr410:
	{ push_expr(expr_start, p); }
	goto st169;
tr419:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st169;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr415;
		case 23: goto tr416;
		case 65555: goto tr417;
		case 131091: goto tr419;
		case 131109: goto tr420;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr416;
		} else if ( _widec >= 15 )
			goto tr416;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr416;
		} else if ( _widec >= 38 )
			goto tr416;
	} else
		goto tr416;
	goto st0;
tr420:
	{ expr_open_parens--; }
	goto st170;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr416;
		case 65555: goto tr417;
		case 131091: goto tr419;
		case 131109: goto tr420;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr416;
		} else if ( _widec >= 15 )
			goto tr416;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr416;
		} else if ( _widec >= 38 )
			goto tr416;
	} else
		goto tr416;
	goto st0;
tr405:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st171;
tr406:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st171;
tr423:
	{ expr_open_parens++; }
	goto st171;
st171:
	if ( ++p == pe )
		goto _test_eof171;
case 171:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st164;
		case 5: goto st164;
		case 8: goto st164;
		case 13: goto st171;
		case 18: goto tr423;
		case 21: goto st171;
		case 23: goto st171;
		case 36: goto tr423;
		case 44: goto st171;
	}
	goto st0;
st172:
	if ( ++p == pe )
		goto _test_eof172;
case 172:
	if ( ( ((int) p->tok)) == 12 )
		goto tr424;
	goto st0;
tr427:
	{ expr_open_parens--; }
	goto st173;
st173:
	if ( ++p == pe )
		goto _test_eof173;
case 173:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr426;
		case 131091: goto tr427;
		case 131109: goto tr427;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr425;
		} else if ( _widec >= 15 )
			goto tr425;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr425;
		} else if ( _widec >= 38 )
			goto tr425;
	} else
		goto tr425;
	goto st0;
st174:
	if ( ++p == pe )
		goto _test_eof174;
case 174:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr428;
		case 5: goto tr428;
		case 8: goto tr428;
		case 18: goto tr430;
		case 21: goto tr429;
		case 23: goto tr429;
		case 36: goto tr430;
		case 44: goto tr429;
		case 45: goto st178;
		case 46: goto st183;
		case 47: goto st188;
		case 48: goto st193;
		case 49: goto st198;
		case 50: goto st203;
		case 51: goto st208;
		case 52: goto st213;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr429;
	goto st0;
tr428:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st175;
st175:
	if ( ++p == pe )
		goto _test_eof175;
case 175:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr439;
		case 23: goto st176;
		case 131091: goto st177;
		case 131109: goto st177;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st176;
		} else if ( _widec >= 15 )
			goto st176;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st176;
		} else if ( _widec >= 38 )
			goto st176;
	} else
		goto st176;
	goto st0;
tr429:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st176;
tr430:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st176;
tr443:
	{ expr_open_parens++; }
	goto st176;
tr445:
	{ expr_open_parens--; }
	goto st176;
st176:
	if ( ++p == pe )
		goto _test_eof176;
case 176:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st175;
		case 5: goto st175;
		case 8: goto st175;
		case 13: goto st176;
		case 18: goto tr443;
		case 21: goto st176;
		case 23: goto st176;
		case 36: goto tr443;
		case 44: goto st176;
	}
	goto st0;
tr446:
	{ expr_open_parens--; }
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
		case 12: goto tr444;
		case 23: goto tr445;
		case 131091: goto tr446;
		case 131109: goto tr446;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr445;
		} else if ( _widec >= 15 )
			goto tr445;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr445;
		} else if ( _widec >= 38 )
			goto tr445;
	} else
		goto tr445;
	goto st0;
st178:
	if ( ++p == pe )
		goto _test_eof178;
case 178:
	if ( ( ((int) p->tok)) == 22 )
		goto st179;
	goto st0;
st179:
	if ( ++p == pe )
		goto _test_eof179;
case 179:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr448;
		case 5: goto tr448;
		case 8: goto tr448;
		case 18: goto tr450;
		case 21: goto tr449;
		case 23: goto tr449;
		case 36: goto tr450;
		case 44: goto tr449;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr449;
	goto st0;
tr448:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st180;
st180:
	if ( ++p == pe )
		goto _test_eof180;
case 180:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr451;
		case 23: goto st181;
		case 131091: goto st182;
		case 131109: goto st182;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st181;
		} else if ( _widec >= 15 )
			goto st181;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st181;
		} else if ( _widec >= 38 )
			goto st181;
	} else
		goto st181;
	goto st0;
tr449:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st181;
tr450:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st181;
tr455:
	{ expr_open_parens++; }
	goto st181;
tr457:
	{ expr_open_parens--; }
	goto st181;
st181:
	if ( ++p == pe )
		goto _test_eof181;
case 181:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st180;
		case 5: goto st180;
		case 8: goto st180;
		case 13: goto st181;
		case 18: goto tr455;
		case 21: goto st181;
		case 23: goto st181;
		case 36: goto tr455;
		case 44: goto st181;
	}
	goto st0;
tr458:
	{ expr_open_parens--; }
	goto st182;
st182:
	if ( ++p == pe )
		goto _test_eof182;
case 182:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr456;
		case 23: goto tr457;
		case 131091: goto tr458;
		case 131109: goto tr458;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr457;
		} else if ( _widec >= 15 )
			goto tr457;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr457;
		} else if ( _widec >= 38 )
			goto tr457;
	} else
		goto tr457;
	goto st0;
st183:
	if ( ++p == pe )
		goto _test_eof183;
case 183:
	if ( ( ((int) p->tok)) == 22 )
		goto st184;
	goto st0;
st184:
	if ( ++p == pe )
		goto _test_eof184;
case 184:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr460;
		case 5: goto tr460;
		case 8: goto tr460;
		case 18: goto tr462;
		case 21: goto tr461;
		case 23: goto tr461;
		case 36: goto tr462;
		case 44: goto tr461;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr461;
	goto st0;
tr460:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr463;
		case 23: goto st186;
		case 131091: goto st187;
		case 131109: goto st187;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st186;
		} else if ( _widec >= 15 )
			goto st186;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st186;
		} else if ( _widec >= 38 )
			goto st186;
	} else
		goto st186;
	goto st0;
tr461:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st186;
tr462:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st186;
tr467:
	{ expr_open_parens++; }
	goto st186;
tr469:
	{ expr_open_parens--; }
	goto st186;
st186:
	if ( ++p == pe )
		goto _test_eof186;
case 186:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st185;
		case 5: goto st185;
		case 8: goto st185;
		case 13: goto st186;
		case 18: goto tr467;
		case 21: goto st186;
		case 23: goto st186;
		case 36: goto tr467;
		case 44: goto st186;
	}
	goto st0;
tr470:
	{ expr_open_parens--; }
	goto st187;
st187:
	if ( ++p == pe )
		goto _test_eof187;
case 187:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr468;
		case 23: goto tr469;
		case 131091: goto tr470;
		case 131109: goto tr470;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr469;
		} else if ( _widec >= 15 )
			goto tr469;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr469;
		} else if ( _widec >= 38 )
			goto tr469;
	} else
		goto tr469;
	goto st0;
st188:
	if ( ++p == pe )
		goto _test_eof188;
case 188:
	if ( ( ((int) p->tok)) == 22 )
		goto st189;
	goto st0;
st189:
	if ( ++p == pe )
		goto _test_eof189;
case 189:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr472;
		case 5: goto tr472;
		case 8: goto tr472;
		case 18: goto tr474;
		case 21: goto tr473;
		case 23: goto tr473;
		case 36: goto tr474;
		case 44: goto tr473;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr473;
	goto st0;
tr472:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr475;
		case 23: goto st191;
		case 131091: goto st192;
		case 131109: goto st192;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st191;
		} else if ( _widec >= 15 )
			goto st191;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st191;
		} else if ( _widec >= 38 )
			goto st191;
	} else
		goto st191;
	goto st0;
tr473:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st191;
tr474:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st191;
tr479:
	{ expr_open_parens++; }
	goto st191;
tr481:
	{ expr_open_parens--; }
	goto st191;
st191:
	if ( ++p == pe )
		goto _test_eof191;
case 191:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st190;
		case 5: goto st190;
		case 8: goto st190;
		case 13: goto st191;
		case 18: goto tr479;
		case 21: goto st191;
		case 23: goto st191;
		case 36: goto tr479;
		case 44: goto st191;
	}
	goto st0;
tr482:
	{ expr_open_parens--; }
	goto st192;
st192:
	if ( ++p == pe )
		goto _test_eof192;
case 192:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr480;
		case 23: goto tr481;
		case 131091: goto tr482;
		case 131109: goto tr482;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr481;
		} else if ( _widec >= 15 )
			goto tr481;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr481;
		} else if ( _widec >= 38 )
			goto tr481;
	} else
		goto tr481;
	goto st0;
st193:
	if ( ++p == pe )
		goto _test_eof193;
case 193:
	if ( ( ((int) p->tok)) == 22 )
		goto st194;
	goto st0;
st194:
	if ( ++p == pe )
		goto _test_eof194;
case 194:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr484;
		case 5: goto tr484;
		case 8: goto tr484;
		case 18: goto tr486;
		case 21: goto tr485;
		case 23: goto tr485;
		case 36: goto tr486;
		case 44: goto tr485;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr485;
	goto st0;
tr484:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr487;
		case 23: goto st196;
		case 131091: goto st197;
		case 131109: goto st197;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st196;
		} else if ( _widec >= 15 )
			goto st196;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st196;
		} else if ( _widec >= 38 )
			goto st196;
	} else
		goto st196;
	goto st0;
tr485:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st196;
tr486:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st196;
tr491:
	{ expr_open_parens++; }
	goto st196;
tr493:
	{ expr_open_parens--; }
	goto st196;
st196:
	if ( ++p == pe )
		goto _test_eof196;
case 196:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st195;
		case 5: goto st195;
		case 8: goto st195;
		case 13: goto st196;
		case 18: goto tr491;
		case 21: goto st196;
		case 23: goto st196;
		case 36: goto tr491;
		case 44: goto st196;
	}
	goto st0;
tr494:
	{ expr_open_parens--; }
	goto st197;
st197:
	if ( ++p == pe )
		goto _test_eof197;
case 197:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr492;
		case 23: goto tr493;
		case 131091: goto tr494;
		case 131109: goto tr494;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr493;
		} else if ( _widec >= 15 )
			goto tr493;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr493;
		} else if ( _widec >= 38 )
			goto tr493;
	} else
		goto tr493;
	goto st0;
st198:
	if ( ++p == pe )
		goto _test_eof198;
case 198:
	if ( ( ((int) p->tok)) == 22 )
		goto st199;
	goto st0;
st199:
	if ( ++p == pe )
		goto _test_eof199;
case 199:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr496;
		case 5: goto tr496;
		case 8: goto tr496;
		case 18: goto tr498;
		case 21: goto tr497;
		case 23: goto tr497;
		case 36: goto tr498;
		case 44: goto tr497;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr497;
	goto st0;
tr496:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr499;
		case 23: goto st201;
		case 131091: goto st202;
		case 131109: goto st202;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st201;
		} else if ( _widec >= 15 )
			goto st201;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st201;
		} else if ( _widec >= 38 )
			goto st201;
	} else
		goto st201;
	goto st0;
tr497:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st201;
tr498:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st201;
tr503:
	{ expr_open_parens++; }
	goto st201;
tr505:
	{ expr_open_parens--; }
	goto st201;
st201:
	if ( ++p == pe )
		goto _test_eof201;
case 201:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st200;
		case 5: goto st200;
		case 8: goto st200;
		case 13: goto st201;
		case 18: goto tr503;
		case 21: goto st201;
		case 23: goto st201;
		case 36: goto tr503;
		case 44: goto st201;
	}
	goto st0;
tr506:
	{ expr_open_parens--; }
	goto st202;
st202:
	if ( ++p == pe )
		goto _test_eof202;
case 202:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr504;
		case 23: goto tr505;
		case 131091: goto tr506;
		case 131109: goto tr506;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr505;
		} else if ( _widec >= 15 )
			goto tr505;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr505;
		} else if ( _widec >= 38 )
			goto tr505;
	} else
		goto tr505;
	goto st0;
st203:
	if ( ++p == pe )
		goto _test_eof203;
case 203:
	if ( ( ((int) p->tok)) == 22 )
		goto st204;
	goto st0;
st204:
	if ( ++p == pe )
		goto _test_eof204;
case 204:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr508;
		case 5: goto tr508;
		case 8: goto tr508;
		case 18: goto tr510;
		case 21: goto tr509;
		case 23: goto tr509;
		case 36: goto tr510;
		case 44: goto tr509;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr509;
	goto st0;
tr508:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr511;
		case 23: goto st206;
		case 131091: goto st207;
		case 131109: goto st207;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st206;
		} else if ( _widec >= 15 )
			goto st206;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st206;
		} else if ( _widec >= 38 )
			goto st206;
	} else
		goto st206;
	goto st0;
tr509:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st206;
tr510:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st206;
tr515:
	{ expr_open_parens++; }
	goto st206;
tr517:
	{ expr_open_parens--; }
	goto st206;
st206:
	if ( ++p == pe )
		goto _test_eof206;
case 206:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st205;
		case 5: goto st205;
		case 8: goto st205;
		case 13: goto st206;
		case 18: goto tr515;
		case 21: goto st206;
		case 23: goto st206;
		case 36: goto tr515;
		case 44: goto st206;
	}
	goto st0;
tr518:
	{ expr_open_parens--; }
	goto st207;
st207:
	if ( ++p == pe )
		goto _test_eof207;
case 207:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr516;
		case 23: goto tr517;
		case 131091: goto tr518;
		case 131109: goto tr518;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr517;
		} else if ( _widec >= 15 )
			goto tr517;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr517;
		} else if ( _widec >= 38 )
			goto tr517;
	} else
		goto tr517;
	goto st0;
st208:
	if ( ++p == pe )
		goto _test_eof208;
case 208:
	if ( ( ((int) p->tok)) == 22 )
		goto st209;
	goto st0;
st209:
	if ( ++p == pe )
		goto _test_eof209;
case 209:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr520;
		case 5: goto tr520;
		case 8: goto tr520;
		case 18: goto tr522;
		case 21: goto tr521;
		case 23: goto tr521;
		case 36: goto tr522;
		case 44: goto tr521;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr521;
	goto st0;
tr520:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr523;
		case 23: goto st211;
		case 131091: goto st212;
		case 131109: goto st212;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st211;
		} else if ( _widec >= 15 )
			goto st211;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st211;
		} else if ( _widec >= 38 )
			goto st211;
	} else
		goto st211;
	goto st0;
tr521:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st211;
tr522:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st211;
tr527:
	{ expr_open_parens++; }
	goto st211;
tr529:
	{ expr_open_parens--; }
	goto st211;
st211:
	if ( ++p == pe )
		goto _test_eof211;
case 211:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st210;
		case 5: goto st210;
		case 8: goto st210;
		case 13: goto st211;
		case 18: goto tr527;
		case 21: goto st211;
		case 23: goto st211;
		case 36: goto tr527;
		case 44: goto st211;
	}
	goto st0;
tr530:
	{ expr_open_parens--; }
	goto st212;
st212:
	if ( ++p == pe )
		goto _test_eof212;
case 212:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr528;
		case 23: goto tr529;
		case 131091: goto tr530;
		case 131109: goto tr530;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr529;
		} else if ( _widec >= 15 )
			goto tr529;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr529;
		} else if ( _widec >= 38 )
			goto tr529;
	} else
		goto tr529;
	goto st0;
st213:
	if ( ++p == pe )
		goto _test_eof213;
case 213:
	if ( ( ((int) p->tok)) == 22 )
		goto st214;
	goto st0;
st214:
	if ( ++p == pe )
		goto _test_eof214;
case 214:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr532;
		case 5: goto tr532;
		case 8: goto tr532;
		case 18: goto tr534;
		case 21: goto tr533;
		case 23: goto tr533;
		case 36: goto tr534;
		case 44: goto tr533;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr533;
	goto st0;
tr532:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr535;
		case 23: goto st216;
		case 131091: goto st217;
		case 131109: goto st217;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st216;
		} else if ( _widec >= 15 )
			goto st216;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st216;
		} else if ( _widec >= 38 )
			goto st216;
	} else
		goto st216;
	goto st0;
tr533:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st216;
tr534:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st216;
tr539:
	{ expr_open_parens++; }
	goto st216;
tr541:
	{ expr_open_parens--; }
	goto st216;
st216:
	if ( ++p == pe )
		goto _test_eof216;
case 216:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st215;
		case 5: goto st215;
		case 8: goto st215;
		case 13: goto st216;
		case 18: goto tr539;
		case 21: goto st216;
		case 23: goto st216;
		case 36: goto tr539;
		case 44: goto st216;
	}
	goto st0;
tr542:
	{ expr_open_parens--; }
	goto st217;
st217:
	if ( ++p == pe )
		goto _test_eof217;
case 217:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr540;
		case 23: goto tr541;
		case 131091: goto tr542;
		case 131109: goto tr542;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr541;
		} else if ( _widec >= 15 )
			goto tr541;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr541;
		} else if ( _widec >= 38 )
			goto tr541;
	} else
		goto tr541;
	goto st0;
st218:
	if ( ++p == pe )
		goto _test_eof218;
case 218:
	if ( ( ((int) p->tok)) == 12 )
		goto tr543;
	goto st0;
st219:
	if ( ++p == pe )
		goto _test_eof219;
case 219:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr544;
		case 5: goto tr544;
		case 8: goto tr544;
		case 18: goto tr546;
		case 21: goto tr545;
		case 23: goto tr545;
		case 36: goto tr546;
		case 44: goto tr545;
		case 48: goto st223;
		case 53: goto st224;
		case 54: goto st225;
		case 55: goto st226;
		case 56: goto st227;
		case 57: goto st228;
		case 58: goto st229;
		case 59: goto st230;
		case 60: goto st231;
		case 61: goto st232;
		case 62: goto st233;
		case 79: goto st236;
		case 80: goto st237;
		case 81: goto st247;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr545;
	goto st0;
tr544:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr561;
		case 23: goto st221;
		case 131091: goto st222;
		case 131109: goto st222;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st221;
		} else if ( _widec >= 15 )
			goto st221;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st221;
		} else if ( _widec >= 38 )
			goto st221;
	} else
		goto st221;
	goto st0;
tr545:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st221;
tr546:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st221;
tr565:
	{ expr_open_parens++; }
	goto st221;
tr567:
	{ expr_open_parens--; }
	goto st221;
st221:
	if ( ++p == pe )
		goto _test_eof221;
case 221:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st220;
		case 5: goto st220;
		case 8: goto st220;
		case 13: goto st221;
		case 18: goto tr565;
		case 21: goto st221;
		case 23: goto st221;
		case 36: goto tr565;
		case 44: goto st221;
	}
	goto st0;
tr568:
	{ expr_open_parens--; }
	goto st222;
st222:
	if ( ++p == pe )
		goto _test_eof222;
case 222:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
st223:
	if ( ++p == pe )
		goto _test_eof223;
case 223:
	if ( ( ((int) p->tok)) == 12 )
		goto tr569;
	goto st0;
st224:
	if ( ++p == pe )
		goto _test_eof224;
case 224:
	if ( ( ((int) p->tok)) == 12 )
		goto tr570;
	goto st0;
st225:
	if ( ++p == pe )
		goto _test_eof225;
case 225:
	if ( ( ((int) p->tok)) == 12 )
		goto tr571;
	goto st0;
st226:
	if ( ++p == pe )
		goto _test_eof226;
case 226:
	if ( ( ((int) p->tok)) == 12 )
		goto tr572;
	goto st0;
st227:
	if ( ++p == pe )
		goto _test_eof227;
case 227:
	if ( ( ((int) p->tok)) == 12 )
		goto tr573;
	goto st0;
st228:
	if ( ++p == pe )
		goto _test_eof228;
case 228:
	if ( ( ((int) p->tok)) == 12 )
		goto tr574;
	goto st0;
st229:
	if ( ++p == pe )
		goto _test_eof229;
case 229:
	if ( ( ((int) p->tok)) == 12 )
		goto tr575;
	goto st0;
st230:
	if ( ++p == pe )
		goto _test_eof230;
case 230:
	if ( ( ((int) p->tok)) == 12 )
		goto tr576;
	goto st0;
st231:
	if ( ++p == pe )
		goto _test_eof231;
case 231:
	if ( ( ((int) p->tok)) == 12 )
		goto tr577;
	goto st0;
st232:
	if ( ++p == pe )
		goto _test_eof232;
case 232:
	if ( ( ((int) p->tok)) == 12 )
		goto tr578;
	goto st0;
st233:
	if ( ++p == pe )
		goto _test_eof233;
case 233:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr579;
		case 22: goto st234;
	}
	goto st0;
st234:
	if ( ++p == pe )
		goto _test_eof234;
case 234:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr544;
		case 5: goto tr544;
		case 8: goto tr544;
		case 18: goto tr546;
		case 21: goto tr545;
		case 23: goto tr545;
		case 36: goto tr546;
		case 44: goto tr545;
		case 48: goto st223;
		case 53: goto st224;
		case 54: goto st225;
		case 55: goto st226;
		case 56: goto st227;
		case 57: goto st228;
		case 58: goto st229;
		case 59: goto st230;
		case 60: goto st231;
		case 61: goto st232;
		case 62: goto st235;
		case 79: goto st236;
		case 80: goto st237;
		case 81: goto st247;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr545;
	goto st0;
st235:
	if ( ++p == pe )
		goto _test_eof235;
case 235:
	if ( ( ((int) p->tok)) == 12 )
		goto tr579;
	goto st0;
st236:
	if ( ++p == pe )
		goto _test_eof236;
case 236:
	if ( ( ((int) p->tok)) == 12 )
		goto tr582;
	goto st0;
st237:
	if ( ++p == pe )
		goto _test_eof237;
case 237:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr583;
		case 5: goto tr583;
		case 8: goto tr583;
		case 18: goto tr585;
		case 19: goto st246;
		case 21: goto tr584;
		case 23: goto tr584;
		case 36: goto tr585;
		case 44: goto tr584;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr584;
	goto st0;
tr583:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st238;
st238:
	if ( ++p == pe )
		goto _test_eof238;
case 238:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st239;
		case 65555: goto tr588;
		case 131091: goto tr589;
		case 131109: goto st244;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st239;
		} else if ( _widec >= 15 )
			goto st239;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st239;
		} else if ( _widec >= 38 )
			goto st239;
	} else
		goto st239;
	goto st0;
tr592:
	{ expr_open_parens++; }
	goto st239;
tr595:
	{ expr_open_parens--; }
	goto st239;
st239:
	if ( ++p == pe )
		goto _test_eof239;
case 239:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st240;
		case 5: goto st240;
		case 8: goto st240;
		case 13: goto st239;
		case 18: goto tr592;
		case 21: goto st239;
		case 23: goto st239;
		case 36: goto tr592;
		case 44: goto st239;
	}
	goto st0;
st240:
	if ( ++p == pe )
		goto _test_eof240;
case 240:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st239;
		case 65555: goto tr588;
		case 131091: goto st242;
		case 131109: goto st242;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st239;
		} else if ( _widec >= 15 )
			goto st239;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st239;
		} else if ( _widec >= 38 )
			goto st239;
	} else
		goto st239;
	goto st0;
tr588:
	{ push_expr(expr_start, p); }
	goto st241;
tr596:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st241;
st241:
	if ( ++p == pe )
		goto _test_eof241;
case 241:
	if ( ( ((int) p->tok)) == 12 )
		goto tr594;
	goto st0;
tr597:
	{ expr_open_parens--; }
	goto st242;
st242:
	if ( ++p == pe )
		goto _test_eof242;
case 242:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr595;
		case 65555: goto tr596;
		case 131091: goto tr597;
		case 131109: goto tr597;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr595;
		} else if ( _widec >= 15 )
			goto tr595;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr595;
		} else if ( _widec >= 38 )
			goto tr595;
	} else
		goto tr595;
	goto st0;
tr589:
	{ push_expr(expr_start, p); }
	goto st243;
tr598:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st243;
st243:
	if ( ++p == pe )
		goto _test_eof243;
case 243:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr594;
		case 23: goto tr595;
		case 65555: goto tr596;
		case 131091: goto tr598;
		case 131109: goto tr599;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr595;
		} else if ( _widec >= 15 )
			goto tr595;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr595;
		} else if ( _widec >= 38 )
			goto tr595;
	} else
		goto tr595;
	goto st0;
tr599:
	{ expr_open_parens--; }
	goto st244;
st244:
	if ( ++p == pe )
		goto _test_eof244;
case 244:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr595;
		case 65555: goto tr596;
		case 131091: goto tr598;
		case 131109: goto tr599;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr595;
		} else if ( _widec >= 15 )
			goto tr595;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr595;
		} else if ( _widec >= 38 )
			goto tr595;
	} else
		goto tr595;
	goto st0;
tr584:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st245;
tr585:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st245;
tr602:
	{ expr_open_parens++; }
	goto st245;
st245:
	if ( ++p == pe )
		goto _test_eof245;
case 245:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st238;
		case 5: goto st238;
		case 8: goto st238;
		case 13: goto st245;
		case 18: goto tr602;
		case 21: goto st245;
		case 23: goto st245;
		case 36: goto tr602;
		case 44: goto st245;
	}
	goto st0;
st246:
	if ( ++p == pe )
		goto _test_eof246;
case 246:
	if ( ( ((int) p->tok)) == 12 )
		goto tr603;
	goto st0;
st247:
	if ( ++p == pe )
		goto _test_eof247;
case 247:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr604;
		case 5: goto tr604;
		case 8: goto tr604;
		case 18: goto tr606;
		case 19: goto st256;
		case 21: goto tr605;
		case 23: goto tr605;
		case 36: goto tr606;
		case 44: goto tr605;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr605;
	goto st0;
tr604:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st248;
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
		case 23: goto st249;
		case 65555: goto tr609;
		case 131091: goto tr610;
		case 131109: goto st254;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st249;
		} else if ( _widec >= 15 )
			goto st249;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st249;
		} else if ( _widec >= 38 )
			goto st249;
	} else
		goto st249;
	goto st0;
tr613:
	{ expr_open_parens++; }
	goto st249;
tr616:
	{ expr_open_parens--; }
	goto st249;
st249:
	if ( ++p == pe )
		goto _test_eof249;
case 249:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st250;
		case 5: goto st250;
		case 8: goto st250;
		case 13: goto st249;
		case 18: goto tr613;
		case 21: goto st249;
		case 23: goto st249;
		case 36: goto tr613;
		case 44: goto st249;
	}
	goto st0;
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
		case 23: goto st249;
		case 65555: goto tr609;
		case 131091: goto st252;
		case 131109: goto st252;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st249;
		} else if ( _widec >= 15 )
			goto st249;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st249;
		} else if ( _widec >= 38 )
			goto st249;
	} else
		goto st249;
	goto st0;
tr609:
	{ push_expr(expr_start, p); }
	goto st251;
tr617:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st251;
st251:
	if ( ++p == pe )
		goto _test_eof251;
case 251:
	if ( ( ((int) p->tok)) == 12 )
		goto tr615;
	goto st0;
tr618:
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
		case 23: goto tr616;
		case 65555: goto tr617;
		case 131091: goto tr618;
		case 131109: goto tr618;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr616;
		} else if ( _widec >= 15 )
			goto tr616;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr616;
		} else if ( _widec >= 38 )
			goto tr616;
	} else
		goto tr616;
	goto st0;
tr610:
	{ push_expr(expr_start, p); }
	goto st253;
tr619:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st253;
st253:
	if ( ++p == pe )
		goto _test_eof253;
case 253:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr615;
		case 23: goto tr616;
		case 65555: goto tr617;
		case 131091: goto tr619;
		case 131109: goto tr620;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr616;
		} else if ( _widec >= 15 )
			goto tr616;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr616;
		} else if ( _widec >= 38 )
			goto tr616;
	} else
		goto tr616;
	goto st0;
tr620:
	{ expr_open_parens--; }
	goto st254;
st254:
	if ( ++p == pe )
		goto _test_eof254;
case 254:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr616;
		case 65555: goto tr617;
		case 131091: goto tr619;
		case 131109: goto tr620;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr616;
		} else if ( _widec >= 15 )
			goto tr616;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr616;
		} else if ( _widec >= 38 )
			goto tr616;
	} else
		goto tr616;
	goto st0;
tr605:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st255;
tr606:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st255;
tr623:
	{ expr_open_parens++; }
	goto st255;
st255:
	if ( ++p == pe )
		goto _test_eof255;
case 255:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st248;
		case 5: goto st248;
		case 8: goto st248;
		case 13: goto st255;
		case 18: goto tr623;
		case 21: goto st255;
		case 23: goto st255;
		case 36: goto tr623;
		case 44: goto st255;
	}
	goto st0;
st256:
	if ( ++p == pe )
		goto _test_eof256;
case 256:
	if ( ( ((int) p->tok)) == 12 )
		goto tr624;
	goto st0;
st257:
	if ( ++p == pe )
		goto _test_eof257;
case 257:
	if ( ( ((int) p->tok)) == 12 )
		goto tr625;
	goto st0;
st258:
	if ( ++p == pe )
		goto _test_eof258;
case 258:
	if ( ( ((int) p->tok)) == 12 )
		goto tr626;
	goto st0;
st259:
	if ( ++p == pe )
		goto _test_eof259;
case 259:
	if ( ( ((int) p->tok)) == 12 )
		goto tr627;
	goto st0;
st260:
	if ( ++p == pe )
		goto _test_eof260;
case 260:
	if ( ( ((int) p->tok)) == 12 )
		goto tr628;
	goto st0;
st261:
	if ( ++p == pe )
		goto _test_eof261;
case 261:
	if ( ( ((int) p->tok)) == 12 )
		goto tr629;
	goto st0;
st262:
	if ( ++p == pe )
		goto _test_eof262;
case 262:
	if ( ( ((int) p->tok)) == 12 )
		goto tr630;
	goto st0;
st263:
	if ( ++p == pe )
		goto _test_eof263;
case 263:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st264;
		case 53: goto st265;
		case 54: goto st266;
		case 55: goto st267;
		case 56: goto st268;
		case 57: goto st269;
		case 58: goto st270;
		case 59: goto st271;
		case 60: goto st272;
		case 61: goto st273;
		case 62: goto st274;
		case 69: goto st275;
		case 70: goto st276;
		case 71: goto st277;
		case 72: goto st278;
		case 73: goto st279;
		case 75: goto st280;
		case 79: goto st281;
		case 80: goto st282;
		case 81: goto st292;
	}
	goto st0;
st264:
	if ( ++p == pe )
		goto _test_eof264;
case 264:
	if ( ( ((int) p->tok)) == 12 )
		goto tr651;
	goto st0;
st265:
	if ( ++p == pe )
		goto _test_eof265;
case 265:
	if ( ( ((int) p->tok)) == 12 )
		goto tr652;
	goto st0;
st266:
	if ( ++p == pe )
		goto _test_eof266;
case 266:
	if ( ( ((int) p->tok)) == 12 )
		goto tr653;
	goto st0;
st267:
	if ( ++p == pe )
		goto _test_eof267;
case 267:
	if ( ( ((int) p->tok)) == 12 )
		goto tr654;
	goto st0;
st268:
	if ( ++p == pe )
		goto _test_eof268;
case 268:
	if ( ( ((int) p->tok)) == 12 )
		goto tr655;
	goto st0;
st269:
	if ( ++p == pe )
		goto _test_eof269;
case 269:
	if ( ( ((int) p->tok)) == 12 )
		goto tr656;
	goto st0;
st270:
	if ( ++p == pe )
		goto _test_eof270;
case 270:
	if ( ( ((int) p->tok)) == 12 )
		goto tr657;
	goto st0;
st271:
	if ( ++p == pe )
		goto _test_eof271;
case 271:
	if ( ( ((int) p->tok)) == 12 )
		goto tr658;
	goto st0;
st272:
	if ( ++p == pe )
		goto _test_eof272;
case 272:
	if ( ( ((int) p->tok)) == 12 )
		goto tr659;
	goto st0;
st273:
	if ( ++p == pe )
		goto _test_eof273;
case 273:
	if ( ( ((int) p->tok)) == 12 )
		goto tr660;
	goto st0;
st274:
	if ( ++p == pe )
		goto _test_eof274;
case 274:
	if ( ( ((int) p->tok)) == 12 )
		goto tr661;
	goto st0;
st275:
	if ( ++p == pe )
		goto _test_eof275;
case 275:
	if ( ( ((int) p->tok)) == 12 )
		goto tr662;
	goto st0;
st276:
	if ( ++p == pe )
		goto _test_eof276;
case 276:
	if ( ( ((int) p->tok)) == 12 )
		goto tr663;
	goto st0;
st277:
	if ( ++p == pe )
		goto _test_eof277;
case 277:
	if ( ( ((int) p->tok)) == 12 )
		goto tr664;
	goto st0;
st278:
	if ( ++p == pe )
		goto _test_eof278;
case 278:
	if ( ( ((int) p->tok)) == 12 )
		goto tr665;
	goto st0;
st279:
	if ( ++p == pe )
		goto _test_eof279;
case 279:
	if ( ( ((int) p->tok)) == 12 )
		goto tr666;
	goto st0;
st280:
	if ( ++p == pe )
		goto _test_eof280;
case 280:
	if ( ( ((int) p->tok)) == 12 )
		goto tr667;
	goto st0;
st281:
	if ( ++p == pe )
		goto _test_eof281;
case 281:
	if ( ( ((int) p->tok)) == 12 )
		goto tr668;
	goto st0;
st282:
	if ( ++p == pe )
		goto _test_eof282;
case 282:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr669;
		case 5: goto tr669;
		case 8: goto tr669;
		case 18: goto tr671;
		case 19: goto st291;
		case 21: goto tr670;
		case 23: goto tr670;
		case 36: goto tr671;
		case 44: goto tr670;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr670;
	goto st0;
tr669:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st283;
st283:
	if ( ++p == pe )
		goto _test_eof283;
case 283:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st284;
		case 65555: goto tr674;
		case 131091: goto tr675;
		case 131109: goto st289;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st284;
		} else if ( _widec >= 15 )
			goto st284;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st284;
		} else if ( _widec >= 38 )
			goto st284;
	} else
		goto st284;
	goto st0;
tr678:
	{ expr_open_parens++; }
	goto st284;
tr681:
	{ expr_open_parens--; }
	goto st284;
st284:
	if ( ++p == pe )
		goto _test_eof284;
case 284:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st285;
		case 5: goto st285;
		case 8: goto st285;
		case 13: goto st284;
		case 18: goto tr678;
		case 21: goto st284;
		case 23: goto st284;
		case 36: goto tr678;
		case 44: goto st284;
	}
	goto st0;
st285:
	if ( ++p == pe )
		goto _test_eof285;
case 285:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st284;
		case 65555: goto tr674;
		case 131091: goto st287;
		case 131109: goto st287;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st284;
		} else if ( _widec >= 15 )
			goto st284;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st284;
		} else if ( _widec >= 38 )
			goto st284;
	} else
		goto st284;
	goto st0;
tr674:
	{ push_expr(expr_start, p); }
	goto st286;
tr682:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st286;
st286:
	if ( ++p == pe )
		goto _test_eof286;
case 286:
	if ( ( ((int) p->tok)) == 12 )
		goto tr680;
	goto st0;
tr683:
	{ expr_open_parens--; }
	goto st287;
st287:
	if ( ++p == pe )
		goto _test_eof287;
case 287:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr681;
		case 65555: goto tr682;
		case 131091: goto tr683;
		case 131109: goto tr683;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr681;
		} else if ( _widec >= 15 )
			goto tr681;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr681;
		} else if ( _widec >= 38 )
			goto tr681;
	} else
		goto tr681;
	goto st0;
tr675:
	{ push_expr(expr_start, p); }
	goto st288;
tr684:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st288;
st288:
	if ( ++p == pe )
		goto _test_eof288;
case 288:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr680;
		case 23: goto tr681;
		case 65555: goto tr682;
		case 131091: goto tr684;
		case 131109: goto tr685;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr681;
		} else if ( _widec >= 15 )
			goto tr681;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr681;
		} else if ( _widec >= 38 )
			goto tr681;
	} else
		goto tr681;
	goto st0;
tr685:
	{ expr_open_parens--; }
	goto st289;
st289:
	if ( ++p == pe )
		goto _test_eof289;
case 289:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr681;
		case 65555: goto tr682;
		case 131091: goto tr684;
		case 131109: goto tr685;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr681;
		} else if ( _widec >= 15 )
			goto tr681;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr681;
		} else if ( _widec >= 38 )
			goto tr681;
	} else
		goto tr681;
	goto st0;
tr670:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st290;
tr671:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st290;
tr688:
	{ expr_open_parens++; }
	goto st290;
st290:
	if ( ++p == pe )
		goto _test_eof290;
case 290:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st283;
		case 5: goto st283;
		case 8: goto st283;
		case 13: goto st290;
		case 18: goto tr688;
		case 21: goto st290;
		case 23: goto st290;
		case 36: goto tr688;
		case 44: goto st290;
	}
	goto st0;
st291:
	if ( ++p == pe )
		goto _test_eof291;
case 291:
	if ( ( ((int) p->tok)) == 12 )
		goto tr689;
	goto st0;
st292:
	if ( ++p == pe )
		goto _test_eof292;
case 292:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr690;
		case 5: goto tr690;
		case 8: goto tr690;
		case 18: goto tr692;
		case 19: goto st301;
		case 21: goto tr691;
		case 23: goto tr691;
		case 36: goto tr692;
		case 44: goto tr691;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr691;
	goto st0;
tr690:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st293;
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
		case 23: goto st294;
		case 65555: goto tr695;
		case 131091: goto tr696;
		case 131109: goto st299;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st294;
		} else if ( _widec >= 15 )
			goto st294;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st294;
		} else if ( _widec >= 38 )
			goto st294;
	} else
		goto st294;
	goto st0;
tr699:
	{ expr_open_parens++; }
	goto st294;
tr702:
	{ expr_open_parens--; }
	goto st294;
st294:
	if ( ++p == pe )
		goto _test_eof294;
case 294:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st295;
		case 5: goto st295;
		case 8: goto st295;
		case 13: goto st294;
		case 18: goto tr699;
		case 21: goto st294;
		case 23: goto st294;
		case 36: goto tr699;
		case 44: goto st294;
	}
	goto st0;
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
		case 23: goto st294;
		case 65555: goto tr695;
		case 131091: goto st297;
		case 131109: goto st297;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st294;
		} else if ( _widec >= 15 )
			goto st294;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st294;
		} else if ( _widec >= 38 )
			goto st294;
	} else
		goto st294;
	goto st0;
tr695:
	{ push_expr(expr_start, p); }
	goto st296;
tr703:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st296;
st296:
	if ( ++p == pe )
		goto _test_eof296;
case 296:
	if ( ( ((int) p->tok)) == 12 )
		goto tr701;
	goto st0;
tr704:
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
		case 23: goto tr702;
		case 65555: goto tr703;
		case 131091: goto tr704;
		case 131109: goto tr704;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr702;
		} else if ( _widec >= 15 )
			goto tr702;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr702;
		} else if ( _widec >= 38 )
			goto tr702;
	} else
		goto tr702;
	goto st0;
tr696:
	{ push_expr(expr_start, p); }
	goto st298;
tr705:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st298;
st298:
	if ( ++p == pe )
		goto _test_eof298;
case 298:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr701;
		case 23: goto tr702;
		case 65555: goto tr703;
		case 131091: goto tr705;
		case 131109: goto tr706;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr702;
		} else if ( _widec >= 15 )
			goto tr702;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr702;
		} else if ( _widec >= 38 )
			goto tr702;
	} else
		goto tr702;
	goto st0;
tr706:
	{ expr_open_parens--; }
	goto st299;
st299:
	if ( ++p == pe )
		goto _test_eof299;
case 299:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr702;
		case 65555: goto tr703;
		case 131091: goto tr705;
		case 131109: goto tr706;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr702;
		} else if ( _widec >= 15 )
			goto tr702;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr702;
		} else if ( _widec >= 38 )
			goto tr702;
	} else
		goto tr702;
	goto st0;
tr691:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st300;
tr692:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st300;
tr709:
	{ expr_open_parens++; }
	goto st300;
st300:
	if ( ++p == pe )
		goto _test_eof300;
case 300:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st293;
		case 5: goto st293;
		case 8: goto st293;
		case 13: goto st300;
		case 18: goto tr709;
		case 21: goto st300;
		case 23: goto st300;
		case 36: goto tr709;
		case 44: goto st300;
	}
	goto st0;
st301:
	if ( ++p == pe )
		goto _test_eof301;
case 301:
	if ( ( ((int) p->tok)) == 12 )
		goto tr710;
	goto st0;
st302:
	if ( ++p == pe )
		goto _test_eof302;
case 302:
	if ( ( ((int) p->tok)) == 12 )
		goto tr711;
	goto st0;
st303:
	if ( ++p == pe )
		goto _test_eof303;
case 303:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr712;
		case 5: goto tr712;
		case 8: goto tr712;
		case 18: goto tr714;
		case 21: goto tr713;
		case 23: goto tr713;
		case 36: goto tr714;
		case 44: goto tr713;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr713;
	goto st0;
tr712:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st304;
st304:
	if ( ++p == pe )
		goto _test_eof304;
case 304:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr715;
		case 23: goto st305;
		case 131091: goto st306;
		case 131109: goto st306;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st305;
		} else if ( _widec >= 15 )
			goto st305;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st305;
		} else if ( _widec >= 38 )
			goto st305;
	} else
		goto st305;
	goto st0;
tr713:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st305;
tr714:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st305;
tr719:
	{ expr_open_parens++; }
	goto st305;
tr721:
	{ expr_open_parens--; }
	goto st305;
st305:
	if ( ++p == pe )
		goto _test_eof305;
case 305:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st304;
		case 5: goto st304;
		case 8: goto st304;
		case 13: goto st305;
		case 18: goto tr719;
		case 21: goto st305;
		case 23: goto st305;
		case 36: goto tr719;
		case 44: goto st305;
	}
	goto st0;
tr722:
	{ expr_open_parens--; }
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
		case 12: goto tr720;
		case 23: goto tr721;
		case 131091: goto tr722;
		case 131109: goto tr722;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr721;
		} else if ( _widec >= 15 )
			goto tr721;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr721;
		} else if ( _widec >= 38 )
			goto tr721;
	} else
		goto tr721;
	goto st0;
st307:
	if ( ++p == pe )
		goto _test_eof307;
case 307:
	if ( ( ((int) p->tok)) == 12 )
		goto tr723;
	goto st0;
st308:
	if ( ++p == pe )
		goto _test_eof308;
case 308:
	switch( ( ((int) p->tok)) ) {
		case 70: goto st309;
		case 74: goto st312;
		case 82: goto st316;
	}
	goto st0;
st309:
	if ( ++p == pe )
		goto _test_eof309;
case 309:
	if ( ( ((int) p->tok)) == 22 )
		goto st310;
	goto st0;
st310:
	if ( ++p == pe )
		goto _test_eof310;
case 310:
	if ( ( ((int) p->tok)) == 71 )
		goto st311;
	goto st0;
st311:
	if ( ++p == pe )
		goto _test_eof311;
case 311:
	if ( ( ((int) p->tok)) == 12 )
		goto tr729;
	goto st0;
st312:
	if ( ++p == pe )
		goto _test_eof312;
case 312:
	if ( ( ((int) p->tok)) == 22 )
		goto st313;
	goto st0;
st313:
	if ( ++p == pe )
		goto _test_eof313;
case 313:
	switch( ( ((int) p->tok)) ) {
		case 74: goto st314;
		case 76: goto st315;
	}
	goto st0;
st314:
	if ( ++p == pe )
		goto _test_eof314;
case 314:
	if ( ( ((int) p->tok)) == 12 )
		goto tr733;
	goto st0;
st315:
	if ( ++p == pe )
		goto _test_eof315;
case 315:
	if ( ( ((int) p->tok)) == 12 )
		goto tr734;
	goto st0;
st316:
	if ( ++p == pe )
		goto _test_eof316;
case 316:
	if ( ( ((int) p->tok)) == 22 )
		goto st317;
	goto st0;
st317:
	if ( ++p == pe )
		goto _test_eof317;
case 317:
	switch( ( ((int) p->tok)) ) {
		case 71: goto st318;
		case 72: goto st319;
		case 73: goto st320;
	}
	goto st0;
st318:
	if ( ++p == pe )
		goto _test_eof318;
case 318:
	if ( ( ((int) p->tok)) == 12 )
		goto tr739;
	goto st0;
st319:
	if ( ++p == pe )
		goto _test_eof319;
case 319:
	if ( ( ((int) p->tok)) == 12 )
		goto tr740;
	goto st0;
st320:
	if ( ++p == pe )
		goto _test_eof320;
case 320:
	if ( ( ((int) p->tok)) == 12 )
		goto tr741;
	goto st0;
st321:
	if ( ++p == pe )
		goto _test_eof321;
case 321:
	if ( ( ((int) p->tok)) == 12 )
		goto tr742;
	goto st0;
st322:
	if ( ++p == pe )
		goto _test_eof322;
case 322:
	if ( ( ((int) p->tok)) == 12 )
		goto tr743;
	goto st0;
st323:
	if ( ++p == pe )
		goto _test_eof323;
case 323:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr744;
		case 5: goto tr744;
		case 8: goto tr744;
		case 18: goto tr746;
		case 21: goto tr745;
		case 23: goto tr745;
		case 36: goto tr746;
		case 44: goto tr745;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr745;
	goto st0;
tr744:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st324;
st324:
	if ( ++p == pe )
		goto _test_eof324;
case 324:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr747;
		case 23: goto st325;
		case 131091: goto st326;
		case 131109: goto st326;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st325;
		} else if ( _widec >= 15 )
			goto st325;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st325;
		} else if ( _widec >= 38 )
			goto st325;
	} else
		goto st325;
	goto st0;
tr745:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st325;
tr746:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st325;
tr751:
	{ expr_open_parens++; }
	goto st325;
tr753:
	{ expr_open_parens--; }
	goto st325;
st325:
	if ( ++p == pe )
		goto _test_eof325;
case 325:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st324;
		case 5: goto st324;
		case 8: goto st324;
		case 13: goto st325;
		case 18: goto tr751;
		case 21: goto st325;
		case 23: goto st325;
		case 36: goto tr751;
		case 44: goto st325;
	}
	goto st0;
tr754:
	{ expr_open_parens--; }
	goto st326;
st326:
	if ( ++p == pe )
		goto _test_eof326;
case 326:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr752;
		case 23: goto tr753;
		case 131091: goto tr754;
		case 131109: goto tr754;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr753;
		} else if ( _widec >= 15 )
			goto tr753;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr753;
		} else if ( _widec >= 38 )
			goto tr753;
	} else
		goto tr753;
	goto st0;
st327:
	if ( ++p == pe )
		goto _test_eof327;
case 327:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st328;
		case 53: goto st331;
		case 54: goto st334;
		case 55: goto st337;
		case 56: goto st340;
		case 59: goto st343;
		case 62: goto st346;
	}
	goto st0;
st328:
	if ( ++p == pe )
		goto _test_eof328;
case 328:
	if ( ( ((int) p->tok)) == 22 )
		goto st329;
	goto st0;
st329:
	if ( ++p == pe )
		goto _test_eof329;
case 329:
	if ( ( ((int) p->tok)) == 68 )
		goto st330;
	goto st0;
st330:
	if ( ++p == pe )
		goto _test_eof330;
case 330:
	if ( ( ((int) p->tok)) == 12 )
		goto tr764;
	goto st0;
st331:
	if ( ++p == pe )
		goto _test_eof331;
case 331:
	if ( ( ((int) p->tok)) == 22 )
		goto st332;
	goto st0;
st332:
	if ( ++p == pe )
		goto _test_eof332;
case 332:
	if ( ( ((int) p->tok)) == 68 )
		goto st333;
	goto st0;
st333:
	if ( ++p == pe )
		goto _test_eof333;
case 333:
	if ( ( ((int) p->tok)) == 12 )
		goto tr767;
	goto st0;
st334:
	if ( ++p == pe )
		goto _test_eof334;
case 334:
	if ( ( ((int) p->tok)) == 22 )
		goto st335;
	goto st0;
st335:
	if ( ++p == pe )
		goto _test_eof335;
case 335:
	if ( ( ((int) p->tok)) == 68 )
		goto st336;
	goto st0;
st336:
	if ( ++p == pe )
		goto _test_eof336;
case 336:
	if ( ( ((int) p->tok)) == 12 )
		goto tr770;
	goto st0;
st337:
	if ( ++p == pe )
		goto _test_eof337;
case 337:
	if ( ( ((int) p->tok)) == 22 )
		goto st338;
	goto st0;
st338:
	if ( ++p == pe )
		goto _test_eof338;
case 338:
	if ( ( ((int) p->tok)) == 68 )
		goto st339;
	goto st0;
st339:
	if ( ++p == pe )
		goto _test_eof339;
case 339:
	if ( ( ((int) p->tok)) == 12 )
		goto tr773;
	goto st0;
st340:
	if ( ++p == pe )
		goto _test_eof340;
case 340:
	if ( ( ((int) p->tok)) == 22 )
		goto st341;
	goto st0;
st341:
	if ( ++p == pe )
		goto _test_eof341;
case 341:
	if ( ( ((int) p->tok)) == 68 )
		goto st342;
	goto st0;
st342:
	if ( ++p == pe )
		goto _test_eof342;
case 342:
	if ( ( ((int) p->tok)) == 12 )
		goto tr776;
	goto st0;
st343:
	if ( ++p == pe )
		goto _test_eof343;
case 343:
	if ( ( ((int) p->tok)) == 22 )
		goto st344;
	goto st0;
st344:
	if ( ++p == pe )
		goto _test_eof344;
case 344:
	if ( ( ((int) p->tok)) == 68 )
		goto st345;
	goto st0;
st345:
	if ( ++p == pe )
		goto _test_eof345;
case 345:
	if ( ( ((int) p->tok)) == 12 )
		goto tr779;
	goto st0;
st346:
	if ( ++p == pe )
		goto _test_eof346;
case 346:
	if ( ( ((int) p->tok)) == 22 )
		goto st347;
	goto st0;
st347:
	if ( ++p == pe )
		goto _test_eof347;
case 347:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr781;
		case 5: goto tr781;
		case 8: goto tr781;
		case 18: goto tr783;
		case 21: goto tr782;
		case 23: goto tr782;
		case 36: goto tr783;
		case 44: goto tr782;
		case 68: goto st351;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr782;
	goto st0;
tr781:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st348;
st348:
	if ( ++p == pe )
		goto _test_eof348;
case 348:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr785;
		case 23: goto st349;
		case 131091: goto st350;
		case 131109: goto st350;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st349;
		} else if ( _widec >= 15 )
			goto st349;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st349;
		} else if ( _widec >= 38 )
			goto st349;
	} else
		goto st349;
	goto st0;
tr789:
	{ expr_open_parens++; }
	goto st349;
tr791:
	{ expr_open_parens--; }
	goto st349;
tr782:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st349;
tr783:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st349;
st349:
	if ( ++p == pe )
		goto _test_eof349;
case 349:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st348;
		case 5: goto st348;
		case 8: goto st348;
		case 13: goto st349;
		case 18: goto tr789;
		case 21: goto st349;
		case 23: goto st349;
		case 36: goto tr789;
		case 44: goto st349;
	}
	goto st0;
tr792:
	{ expr_open_parens--; }
	goto st350;
st350:
	if ( ++p == pe )
		goto _test_eof350;
case 350:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr790;
		case 23: goto tr791;
		case 131091: goto tr792;
		case 131109: goto tr792;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr791;
		} else if ( _widec >= 15 )
			goto tr791;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr791;
		} else if ( _widec >= 38 )
			goto tr791;
	} else
		goto tr791;
	goto st0;
st351:
	if ( ++p == pe )
		goto _test_eof351;
case 351:
	if ( ( ((int) p->tok)) == 12 )
		goto tr793;
	goto st0;
st352:
	if ( ++p == pe )
		goto _test_eof352;
case 352:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st353;
		case 53: goto st354;
		case 54: goto st355;
		case 55: goto st356;
		case 56: goto st357;
		case 57: goto st358;
		case 58: goto st359;
		case 59: goto st360;
		case 60: goto st361;
		case 61: goto st362;
		case 62: goto st363;
		case 69: goto st364;
		case 70: goto st365;
		case 71: goto st366;
		case 72: goto st367;
		case 73: goto st368;
		case 75: goto st369;
		case 79: goto st370;
		case 80: goto st371;
		case 81: goto st381;
	}
	goto st0;
st353:
	if ( ++p == pe )
		goto _test_eof353;
case 353:
	if ( ( ((int) p->tok)) == 12 )
		goto tr814;
	goto st0;
st354:
	if ( ++p == pe )
		goto _test_eof354;
case 354:
	if ( ( ((int) p->tok)) == 12 )
		goto tr815;
	goto st0;
st355:
	if ( ++p == pe )
		goto _test_eof355;
case 355:
	if ( ( ((int) p->tok)) == 12 )
		goto tr816;
	goto st0;
st356:
	if ( ++p == pe )
		goto _test_eof356;
case 356:
	if ( ( ((int) p->tok)) == 12 )
		goto tr817;
	goto st0;
st357:
	if ( ++p == pe )
		goto _test_eof357;
case 357:
	if ( ( ((int) p->tok)) == 12 )
		goto tr818;
	goto st0;
st358:
	if ( ++p == pe )
		goto _test_eof358;
case 358:
	if ( ( ((int) p->tok)) == 12 )
		goto tr819;
	goto st0;
st359:
	if ( ++p == pe )
		goto _test_eof359;
case 359:
	if ( ( ((int) p->tok)) == 12 )
		goto tr820;
	goto st0;
st360:
	if ( ++p == pe )
		goto _test_eof360;
case 360:
	if ( ( ((int) p->tok)) == 12 )
		goto tr821;
	goto st0;
st361:
	if ( ++p == pe )
		goto _test_eof361;
case 361:
	if ( ( ((int) p->tok)) == 12 )
		goto tr822;
	goto st0;
st362:
	if ( ++p == pe )
		goto _test_eof362;
case 362:
	if ( ( ((int) p->tok)) == 12 )
		goto tr823;
	goto st0;
st363:
	if ( ++p == pe )
		goto _test_eof363;
case 363:
	if ( ( ((int) p->tok)) == 12 )
		goto tr824;
	goto st0;
st364:
	if ( ++p == pe )
		goto _test_eof364;
case 364:
	if ( ( ((int) p->tok)) == 12 )
		goto tr825;
	goto st0;
st365:
	if ( ++p == pe )
		goto _test_eof365;
case 365:
	if ( ( ((int) p->tok)) == 12 )
		goto tr826;
	goto st0;
st366:
	if ( ++p == pe )
		goto _test_eof366;
case 366:
	if ( ( ((int) p->tok)) == 12 )
		goto tr827;
	goto st0;
st367:
	if ( ++p == pe )
		goto _test_eof367;
case 367:
	if ( ( ((int) p->tok)) == 12 )
		goto tr828;
	goto st0;
st368:
	if ( ++p == pe )
		goto _test_eof368;
case 368:
	if ( ( ((int) p->tok)) == 12 )
		goto tr829;
	goto st0;
st369:
	if ( ++p == pe )
		goto _test_eof369;
case 369:
	if ( ( ((int) p->tok)) == 12 )
		goto tr830;
	goto st0;
st370:
	if ( ++p == pe )
		goto _test_eof370;
case 370:
	if ( ( ((int) p->tok)) == 12 )
		goto tr831;
	goto st0;
st371:
	if ( ++p == pe )
		goto _test_eof371;
case 371:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr832;
		case 5: goto tr832;
		case 8: goto tr832;
		case 18: goto tr834;
		case 19: goto st380;
		case 21: goto tr833;
		case 23: goto tr833;
		case 36: goto tr834;
		case 44: goto tr833;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr833;
	goto st0;
tr832:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st372;
st372:
	if ( ++p == pe )
		goto _test_eof372;
case 372:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st373;
		case 65555: goto tr837;
		case 131091: goto tr838;
		case 131109: goto st378;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st373;
		} else if ( _widec >= 15 )
			goto st373;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st373;
		} else if ( _widec >= 38 )
			goto st373;
	} else
		goto st373;
	goto st0;
tr841:
	{ expr_open_parens++; }
	goto st373;
tr844:
	{ expr_open_parens--; }
	goto st373;
st373:
	if ( ++p == pe )
		goto _test_eof373;
case 373:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st374;
		case 5: goto st374;
		case 8: goto st374;
		case 13: goto st373;
		case 18: goto tr841;
		case 21: goto st373;
		case 23: goto st373;
		case 36: goto tr841;
		case 44: goto st373;
	}
	goto st0;
st374:
	if ( ++p == pe )
		goto _test_eof374;
case 374:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st373;
		case 65555: goto tr837;
		case 131091: goto st376;
		case 131109: goto st376;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st373;
		} else if ( _widec >= 15 )
			goto st373;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st373;
		} else if ( _widec >= 38 )
			goto st373;
	} else
		goto st373;
	goto st0;
tr837:
	{ push_expr(expr_start, p); }
	goto st375;
tr845:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st375;
st375:
	if ( ++p == pe )
		goto _test_eof375;
case 375:
	if ( ( ((int) p->tok)) == 12 )
		goto tr843;
	goto st0;
tr846:
	{ expr_open_parens--; }
	goto st376;
st376:
	if ( ++p == pe )
		goto _test_eof376;
case 376:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr844;
		case 65555: goto tr845;
		case 131091: goto tr846;
		case 131109: goto tr846;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr844;
		} else if ( _widec >= 15 )
			goto tr844;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr844;
		} else if ( _widec >= 38 )
			goto tr844;
	} else
		goto tr844;
	goto st0;
tr838:
	{ push_expr(expr_start, p); }
	goto st377;
tr847:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st377;
st377:
	if ( ++p == pe )
		goto _test_eof377;
case 377:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr843;
		case 23: goto tr844;
		case 65555: goto tr845;
		case 131091: goto tr847;
		case 131109: goto tr848;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr844;
		} else if ( _widec >= 15 )
			goto tr844;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr844;
		} else if ( _widec >= 38 )
			goto tr844;
	} else
		goto tr844;
	goto st0;
tr848:
	{ expr_open_parens--; }
	goto st378;
st378:
	if ( ++p == pe )
		goto _test_eof378;
case 378:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr844;
		case 65555: goto tr845;
		case 131091: goto tr847;
		case 131109: goto tr848;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr844;
		} else if ( _widec >= 15 )
			goto tr844;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr844;
		} else if ( _widec >= 38 )
			goto tr844;
	} else
		goto tr844;
	goto st0;
tr833:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st379;
tr834:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st379;
tr851:
	{ expr_open_parens++; }
	goto st379;
st379:
	if ( ++p == pe )
		goto _test_eof379;
case 379:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st372;
		case 5: goto st372;
		case 8: goto st372;
		case 13: goto st379;
		case 18: goto tr851;
		case 21: goto st379;
		case 23: goto st379;
		case 36: goto tr851;
		case 44: goto st379;
	}
	goto st0;
st380:
	if ( ++p == pe )
		goto _test_eof380;
case 380:
	if ( ( ((int) p->tok)) == 12 )
		goto tr852;
	goto st0;
st381:
	if ( ++p == pe )
		goto _test_eof381;
case 381:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr853;
		case 5: goto tr853;
		case 8: goto tr853;
		case 18: goto tr855;
		case 19: goto st390;
		case 21: goto tr854;
		case 23: goto tr854;
		case 36: goto tr855;
		case 44: goto tr854;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr854;
	goto st0;
tr853:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st382;
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
		case 23: goto st383;
		case 65555: goto tr858;
		case 131091: goto tr859;
		case 131109: goto st388;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st383;
		} else if ( _widec >= 15 )
			goto st383;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st383;
		} else if ( _widec >= 38 )
			goto st383;
	} else
		goto st383;
	goto st0;
tr862:
	{ expr_open_parens++; }
	goto st383;
tr865:
	{ expr_open_parens--; }
	goto st383;
st383:
	if ( ++p == pe )
		goto _test_eof383;
case 383:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st384;
		case 5: goto st384;
		case 8: goto st384;
		case 13: goto st383;
		case 18: goto tr862;
		case 21: goto st383;
		case 23: goto st383;
		case 36: goto tr862;
		case 44: goto st383;
	}
	goto st0;
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
		case 23: goto st383;
		case 65555: goto tr858;
		case 131091: goto st386;
		case 131109: goto st386;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st383;
		} else if ( _widec >= 15 )
			goto st383;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st383;
		} else if ( _widec >= 38 )
			goto st383;
	} else
		goto st383;
	goto st0;
tr858:
	{ push_expr(expr_start, p); }
	goto st385;
tr866:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st385;
st385:
	if ( ++p == pe )
		goto _test_eof385;
case 385:
	if ( ( ((int) p->tok)) == 12 )
		goto tr864;
	goto st0;
tr867:
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
		case 23: goto tr865;
		case 65555: goto tr866;
		case 131091: goto tr867;
		case 131109: goto tr867;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr865;
		} else if ( _widec >= 15 )
			goto tr865;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr865;
		} else if ( _widec >= 38 )
			goto tr865;
	} else
		goto tr865;
	goto st0;
tr859:
	{ push_expr(expr_start, p); }
	goto st387;
tr868:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st387;
st387:
	if ( ++p == pe )
		goto _test_eof387;
case 387:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr864;
		case 23: goto tr865;
		case 65555: goto tr866;
		case 131091: goto tr868;
		case 131109: goto tr869;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr865;
		} else if ( _widec >= 15 )
			goto tr865;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr865;
		} else if ( _widec >= 38 )
			goto tr865;
	} else
		goto tr865;
	goto st0;
tr869:
	{ expr_open_parens--; }
	goto st388;
st388:
	if ( ++p == pe )
		goto _test_eof388;
case 388:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr865;
		case 65555: goto tr866;
		case 131091: goto tr868;
		case 131109: goto tr869;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr865;
		} else if ( _widec >= 15 )
			goto tr865;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr865;
		} else if ( _widec >= 38 )
			goto tr865;
	} else
		goto tr865;
	goto st0;
tr854:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st389;
tr855:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st389;
tr872:
	{ expr_open_parens++; }
	goto st389;
st389:
	if ( ++p == pe )
		goto _test_eof389;
case 389:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st382;
		case 5: goto st382;
		case 8: goto st382;
		case 13: goto st389;
		case 18: goto tr872;
		case 21: goto st389;
		case 23: goto st389;
		case 36: goto tr872;
		case 44: goto st389;
	}
	goto st0;
st390:
	if ( ++p == pe )
		goto _test_eof390;
case 390:
	if ( ( ((int) p->tok)) == 12 )
		goto tr873;
	goto st0;
st391:
	if ( ++p == pe )
		goto _test_eof391;
case 391:
	if ( ( ((int) p->tok)) == 12 )
		goto tr874;
	goto st0;
st392:
	if ( ++p == pe )
		goto _test_eof392;
case 392:
	if ( ( ((int) p->tok)) == 12 )
		goto tr875;
	goto st0;
st393:
	if ( ++p == pe )
		goto _test_eof393;
case 393:
	if ( ( ((int) p->tok)) == 12 )
		goto tr876;
	goto st0;
st394:
	if ( ++p == pe )
		goto _test_eof394;
case 394:
	if ( ( ((int) p->tok)) == 12 )
		goto tr877;
	goto st0;
st395:
	if ( ++p == pe )
		goto _test_eof395;
case 395:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr878;
		case 5: goto tr878;
		case 8: goto tr878;
		case 18: goto tr880;
		case 21: goto tr879;
		case 23: goto tr879;
		case 36: goto tr880;
		case 44: goto tr879;
		case 45: goto st399;
		case 46: goto st404;
		case 47: goto st409;
		case 48: goto st414;
		case 49: goto st419;
		case 50: goto st424;
		case 51: goto st429;
		case 52: goto st434;
		case 79: goto st439;
		case 80: goto st440;
		case 81: goto st442;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr879;
	goto st0;
tr878:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr892;
		case 23: goto st397;
		case 131091: goto st398;
		case 131109: goto st398;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st397;
		} else if ( _widec >= 15 )
			goto st397;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st397;
		} else if ( _widec >= 38 )
			goto st397;
	} else
		goto st397;
	goto st0;
tr879:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st397;
tr880:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st397;
tr896:
	{ expr_open_parens++; }
	goto st397;
tr898:
	{ expr_open_parens--; }
	goto st397;
st397:
	if ( ++p == pe )
		goto _test_eof397;
case 397:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st396;
		case 5: goto st396;
		case 8: goto st396;
		case 13: goto st397;
		case 18: goto tr896;
		case 21: goto st397;
		case 23: goto st397;
		case 36: goto tr896;
		case 44: goto st397;
	}
	goto st0;
tr899:
	{ expr_open_parens--; }
	goto st398;
st398:
	if ( ++p == pe )
		goto _test_eof398;
case 398:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr897;
		case 23: goto tr898;
		case 131091: goto tr899;
		case 131109: goto tr899;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr898;
		} else if ( _widec >= 15 )
			goto tr898;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr898;
		} else if ( _widec >= 38 )
			goto tr898;
	} else
		goto tr898;
	goto st0;
st399:
	if ( ++p == pe )
		goto _test_eof399;
case 399:
	if ( ( ((int) p->tok)) == 22 )
		goto st400;
	goto st0;
st400:
	if ( ++p == pe )
		goto _test_eof400;
case 400:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr901;
		case 5: goto tr901;
		case 8: goto tr901;
		case 18: goto tr903;
		case 21: goto tr902;
		case 23: goto tr902;
		case 36: goto tr903;
		case 44: goto tr902;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr902;
	goto st0;
tr901:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st401;
st401:
	if ( ++p == pe )
		goto _test_eof401;
case 401:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr904;
		case 23: goto st402;
		case 131091: goto st403;
		case 131109: goto st403;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st402;
		} else if ( _widec >= 15 )
			goto st402;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st402;
		} else if ( _widec >= 38 )
			goto st402;
	} else
		goto st402;
	goto st0;
tr902:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st402;
tr903:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st402;
tr908:
	{ expr_open_parens++; }
	goto st402;
tr910:
	{ expr_open_parens--; }
	goto st402;
st402:
	if ( ++p == pe )
		goto _test_eof402;
case 402:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st401;
		case 5: goto st401;
		case 8: goto st401;
		case 13: goto st402;
		case 18: goto tr908;
		case 21: goto st402;
		case 23: goto st402;
		case 36: goto tr908;
		case 44: goto st402;
	}
	goto st0;
tr911:
	{ expr_open_parens--; }
	goto st403;
st403:
	if ( ++p == pe )
		goto _test_eof403;
case 403:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr909;
		case 23: goto tr910;
		case 131091: goto tr911;
		case 131109: goto tr911;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr910;
		} else if ( _widec >= 15 )
			goto tr910;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr910;
		} else if ( _widec >= 38 )
			goto tr910;
	} else
		goto tr910;
	goto st0;
st404:
	if ( ++p == pe )
		goto _test_eof404;
case 404:
	if ( ( ((int) p->tok)) == 22 )
		goto st405;
	goto st0;
st405:
	if ( ++p == pe )
		goto _test_eof405;
case 405:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr913;
		case 5: goto tr913;
		case 8: goto tr913;
		case 18: goto tr915;
		case 21: goto tr914;
		case 23: goto tr914;
		case 36: goto tr915;
		case 44: goto tr914;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr914;
	goto st0;
tr913:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr916;
		case 23: goto st407;
		case 131091: goto st408;
		case 131109: goto st408;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st407;
		} else if ( _widec >= 15 )
			goto st407;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st407;
		} else if ( _widec >= 38 )
			goto st407;
	} else
		goto st407;
	goto st0;
tr914:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st407;
tr915:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st407;
tr920:
	{ expr_open_parens++; }
	goto st407;
tr922:
	{ expr_open_parens--; }
	goto st407;
st407:
	if ( ++p == pe )
		goto _test_eof407;
case 407:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st406;
		case 5: goto st406;
		case 8: goto st406;
		case 13: goto st407;
		case 18: goto tr920;
		case 21: goto st407;
		case 23: goto st407;
		case 36: goto tr920;
		case 44: goto st407;
	}
	goto st0;
tr923:
	{ expr_open_parens--; }
	goto st408;
st408:
	if ( ++p == pe )
		goto _test_eof408;
case 408:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr921;
		case 23: goto tr922;
		case 131091: goto tr923;
		case 131109: goto tr923;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr922;
		} else if ( _widec >= 15 )
			goto tr922;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr922;
		} else if ( _widec >= 38 )
			goto tr922;
	} else
		goto tr922;
	goto st0;
st409:
	if ( ++p == pe )
		goto _test_eof409;
case 409:
	if ( ( ((int) p->tok)) == 22 )
		goto st410;
	goto st0;
st410:
	if ( ++p == pe )
		goto _test_eof410;
case 410:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr925;
		case 5: goto tr925;
		case 8: goto tr925;
		case 18: goto tr927;
		case 21: goto tr926;
		case 23: goto tr926;
		case 36: goto tr927;
		case 44: goto tr926;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr926;
	goto st0;
tr925:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr928;
		case 23: goto st412;
		case 131091: goto st413;
		case 131109: goto st413;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st412;
		} else if ( _widec >= 15 )
			goto st412;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st412;
		} else if ( _widec >= 38 )
			goto st412;
	} else
		goto st412;
	goto st0;
tr926:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st412;
tr927:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st412;
tr932:
	{ expr_open_parens++; }
	goto st412;
tr934:
	{ expr_open_parens--; }
	goto st412;
st412:
	if ( ++p == pe )
		goto _test_eof412;
case 412:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st411;
		case 5: goto st411;
		case 8: goto st411;
		case 13: goto st412;
		case 18: goto tr932;
		case 21: goto st412;
		case 23: goto st412;
		case 36: goto tr932;
		case 44: goto st412;
	}
	goto st0;
tr935:
	{ expr_open_parens--; }
	goto st413;
st413:
	if ( ++p == pe )
		goto _test_eof413;
case 413:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr933;
		case 23: goto tr934;
		case 131091: goto tr935;
		case 131109: goto tr935;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr934;
		} else if ( _widec >= 15 )
			goto tr934;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr934;
		} else if ( _widec >= 38 )
			goto tr934;
	} else
		goto tr934;
	goto st0;
st414:
	if ( ++p == pe )
		goto _test_eof414;
case 414:
	if ( ( ((int) p->tok)) == 22 )
		goto st415;
	goto st0;
st415:
	if ( ++p == pe )
		goto _test_eof415;
case 415:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr937;
		case 5: goto tr937;
		case 8: goto tr937;
		case 18: goto tr939;
		case 21: goto tr938;
		case 23: goto tr938;
		case 36: goto tr939;
		case 44: goto tr938;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr938;
	goto st0;
tr937:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr940;
		case 23: goto st417;
		case 131091: goto st418;
		case 131109: goto st418;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st417;
		} else if ( _widec >= 15 )
			goto st417;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st417;
		} else if ( _widec >= 38 )
			goto st417;
	} else
		goto st417;
	goto st0;
tr938:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st417;
tr939:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st417;
tr944:
	{ expr_open_parens++; }
	goto st417;
tr946:
	{ expr_open_parens--; }
	goto st417;
st417:
	if ( ++p == pe )
		goto _test_eof417;
case 417:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st416;
		case 5: goto st416;
		case 8: goto st416;
		case 13: goto st417;
		case 18: goto tr944;
		case 21: goto st417;
		case 23: goto st417;
		case 36: goto tr944;
		case 44: goto st417;
	}
	goto st0;
tr947:
	{ expr_open_parens--; }
	goto st418;
st418:
	if ( ++p == pe )
		goto _test_eof418;
case 418:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr945;
		case 23: goto tr946;
		case 131091: goto tr947;
		case 131109: goto tr947;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr946;
		} else if ( _widec >= 15 )
			goto tr946;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr946;
		} else if ( _widec >= 38 )
			goto tr946;
	} else
		goto tr946;
	goto st0;
st419:
	if ( ++p == pe )
		goto _test_eof419;
case 419:
	if ( ( ((int) p->tok)) == 22 )
		goto st420;
	goto st0;
st420:
	if ( ++p == pe )
		goto _test_eof420;
case 420:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr949;
		case 5: goto tr949;
		case 8: goto tr949;
		case 18: goto tr951;
		case 21: goto tr950;
		case 23: goto tr950;
		case 36: goto tr951;
		case 44: goto tr950;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr950;
	goto st0;
tr949:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr952;
		case 23: goto st422;
		case 131091: goto st423;
		case 131109: goto st423;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st422;
		} else if ( _widec >= 15 )
			goto st422;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st422;
		} else if ( _widec >= 38 )
			goto st422;
	} else
		goto st422;
	goto st0;
tr950:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st422;
tr951:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st422;
tr956:
	{ expr_open_parens++; }
	goto st422;
tr958:
	{ expr_open_parens--; }
	goto st422;
st422:
	if ( ++p == pe )
		goto _test_eof422;
case 422:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st421;
		case 5: goto st421;
		case 8: goto st421;
		case 13: goto st422;
		case 18: goto tr956;
		case 21: goto st422;
		case 23: goto st422;
		case 36: goto tr956;
		case 44: goto st422;
	}
	goto st0;
tr959:
	{ expr_open_parens--; }
	goto st423;
st423:
	if ( ++p == pe )
		goto _test_eof423;
case 423:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr957;
		case 23: goto tr958;
		case 131091: goto tr959;
		case 131109: goto tr959;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr958;
		} else if ( _widec >= 15 )
			goto tr958;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr958;
		} else if ( _widec >= 38 )
			goto tr958;
	} else
		goto tr958;
	goto st0;
st424:
	if ( ++p == pe )
		goto _test_eof424;
case 424:
	if ( ( ((int) p->tok)) == 22 )
		goto st425;
	goto st0;
st425:
	if ( ++p == pe )
		goto _test_eof425;
case 425:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr961;
		case 5: goto tr961;
		case 8: goto tr961;
		case 18: goto tr963;
		case 21: goto tr962;
		case 23: goto tr962;
		case 36: goto tr963;
		case 44: goto tr962;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr962;
	goto st0;
tr961:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr964;
		case 23: goto st427;
		case 131091: goto st428;
		case 131109: goto st428;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st427;
		} else if ( _widec >= 15 )
			goto st427;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st427;
		} else if ( _widec >= 38 )
			goto st427;
	} else
		goto st427;
	goto st0;
tr962:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st427;
tr963:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st427;
tr968:
	{ expr_open_parens++; }
	goto st427;
tr970:
	{ expr_open_parens--; }
	goto st427;
st427:
	if ( ++p == pe )
		goto _test_eof427;
case 427:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st426;
		case 5: goto st426;
		case 8: goto st426;
		case 13: goto st427;
		case 18: goto tr968;
		case 21: goto st427;
		case 23: goto st427;
		case 36: goto tr968;
		case 44: goto st427;
	}
	goto st0;
tr971:
	{ expr_open_parens--; }
	goto st428;
st428:
	if ( ++p == pe )
		goto _test_eof428;
case 428:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr969;
		case 23: goto tr970;
		case 131091: goto tr971;
		case 131109: goto tr971;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr970;
		} else if ( _widec >= 15 )
			goto tr970;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr970;
		} else if ( _widec >= 38 )
			goto tr970;
	} else
		goto tr970;
	goto st0;
st429:
	if ( ++p == pe )
		goto _test_eof429;
case 429:
	if ( ( ((int) p->tok)) == 22 )
		goto st430;
	goto st0;
st430:
	if ( ++p == pe )
		goto _test_eof430;
case 430:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr973;
		case 5: goto tr973;
		case 8: goto tr973;
		case 18: goto tr975;
		case 21: goto tr974;
		case 23: goto tr974;
		case 36: goto tr975;
		case 44: goto tr974;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr974;
	goto st0;
tr973:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr976;
		case 23: goto st432;
		case 131091: goto st433;
		case 131109: goto st433;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st432;
		} else if ( _widec >= 15 )
			goto st432;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st432;
		} else if ( _widec >= 38 )
			goto st432;
	} else
		goto st432;
	goto st0;
tr974:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st432;
tr975:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st432;
tr980:
	{ expr_open_parens++; }
	goto st432;
tr982:
	{ expr_open_parens--; }
	goto st432;
st432:
	if ( ++p == pe )
		goto _test_eof432;
case 432:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st431;
		case 5: goto st431;
		case 8: goto st431;
		case 13: goto st432;
		case 18: goto tr980;
		case 21: goto st432;
		case 23: goto st432;
		case 36: goto tr980;
		case 44: goto st432;
	}
	goto st0;
tr983:
	{ expr_open_parens--; }
	goto st433;
st433:
	if ( ++p == pe )
		goto _test_eof433;
case 433:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr981;
		case 23: goto tr982;
		case 131091: goto tr983;
		case 131109: goto tr983;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr982;
		} else if ( _widec >= 15 )
			goto tr982;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr982;
		} else if ( _widec >= 38 )
			goto tr982;
	} else
		goto tr982;
	goto st0;
st434:
	if ( ++p == pe )
		goto _test_eof434;
case 434:
	if ( ( ((int) p->tok)) == 22 )
		goto st435;
	goto st0;
st435:
	if ( ++p == pe )
		goto _test_eof435;
case 435:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr985;
		case 5: goto tr985;
		case 8: goto tr985;
		case 18: goto tr987;
		case 21: goto tr986;
		case 23: goto tr986;
		case 36: goto tr987;
		case 44: goto tr986;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr986;
	goto st0;
tr985:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr988;
		case 23: goto st437;
		case 131091: goto st438;
		case 131109: goto st438;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st437;
		} else if ( _widec >= 15 )
			goto st437;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st437;
		} else if ( _widec >= 38 )
			goto st437;
	} else
		goto st437;
	goto st0;
tr986:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st437;
tr987:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st437;
tr992:
	{ expr_open_parens++; }
	goto st437;
tr994:
	{ expr_open_parens--; }
	goto st437;
st437:
	if ( ++p == pe )
		goto _test_eof437;
case 437:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st436;
		case 5: goto st436;
		case 8: goto st436;
		case 13: goto st437;
		case 18: goto tr992;
		case 21: goto st437;
		case 23: goto st437;
		case 36: goto tr992;
		case 44: goto st437;
	}
	goto st0;
tr995:
	{ expr_open_parens--; }
	goto st438;
st438:
	if ( ++p == pe )
		goto _test_eof438;
case 438:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr993;
		case 23: goto tr994;
		case 131091: goto tr995;
		case 131109: goto tr995;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr994;
		} else if ( _widec >= 15 )
			goto tr994;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr994;
		} else if ( _widec >= 38 )
			goto tr994;
	} else
		goto tr994;
	goto st0;
st439:
	if ( ++p == pe )
		goto _test_eof439;
case 439:
	if ( ( ((int) p->tok)) == 12 )
		goto tr996;
	goto st0;
st440:
	if ( ++p == pe )
		goto _test_eof440;
case 440:
	if ( ( ((int) p->tok)) == 19 )
		goto st441;
	goto st0;
st441:
	if ( ++p == pe )
		goto _test_eof441;
case 441:
	if ( ( ((int) p->tok)) == 12 )
		goto tr998;
	goto st0;
st442:
	if ( ++p == pe )
		goto _test_eof442;
case 442:
	if ( ( ((int) p->tok)) == 19 )
		goto st443;
	goto st0;
st443:
	if ( ++p == pe )
		goto _test_eof443;
case 443:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1000;
	goto st0;
st444:
	if ( ++p == pe )
		goto _test_eof444;
case 444:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1001;
		case 5: goto tr1001;
		case 8: goto tr1001;
		case 18: goto tr1003;
		case 21: goto tr1002;
		case 23: goto tr1002;
		case 36: goto tr1003;
		case 44: goto tr1002;
		case 45: goto st448;
		case 46: goto st453;
		case 47: goto st458;
		case 48: goto st463;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1002;
	goto st0;
tr1001:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st445;
st445:
	if ( ++p == pe )
		goto _test_eof445;
case 445:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1008;
		case 23: goto st446;
		case 131091: goto st447;
		case 131109: goto st447;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st446;
		} else if ( _widec >= 15 )
			goto st446;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st446;
		} else if ( _widec >= 38 )
			goto st446;
	} else
		goto st446;
	goto st0;
tr1002:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st446;
tr1003:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st446;
tr1012:
	{ expr_open_parens++; }
	goto st446;
tr1014:
	{ expr_open_parens--; }
	goto st446;
st446:
	if ( ++p == pe )
		goto _test_eof446;
case 446:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st445;
		case 5: goto st445;
		case 8: goto st445;
		case 13: goto st446;
		case 18: goto tr1012;
		case 21: goto st446;
		case 23: goto st446;
		case 36: goto tr1012;
		case 44: goto st446;
	}
	goto st0;
tr1015:
	{ expr_open_parens--; }
	goto st447;
st447:
	if ( ++p == pe )
		goto _test_eof447;
case 447:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1013;
		case 23: goto tr1014;
		case 131091: goto tr1015;
		case 131109: goto tr1015;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1014;
		} else if ( _widec >= 15 )
			goto tr1014;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1014;
		} else if ( _widec >= 38 )
			goto tr1014;
	} else
		goto tr1014;
	goto st0;
st448:
	if ( ++p == pe )
		goto _test_eof448;
case 448:
	if ( ( ((int) p->tok)) == 22 )
		goto st449;
	goto st0;
st449:
	if ( ++p == pe )
		goto _test_eof449;
case 449:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1017;
		case 5: goto tr1017;
		case 8: goto tr1017;
		case 18: goto tr1019;
		case 21: goto tr1018;
		case 23: goto tr1018;
		case 36: goto tr1019;
		case 44: goto tr1018;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1018;
	goto st0;
tr1017:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st450;
st450:
	if ( ++p == pe )
		goto _test_eof450;
case 450:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1020;
		case 23: goto st451;
		case 131091: goto st452;
		case 131109: goto st452;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st451;
		} else if ( _widec >= 15 )
			goto st451;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st451;
		} else if ( _widec >= 38 )
			goto st451;
	} else
		goto st451;
	goto st0;
tr1018:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st451;
tr1019:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st451;
tr1024:
	{ expr_open_parens++; }
	goto st451;
tr1026:
	{ expr_open_parens--; }
	goto st451;
st451:
	if ( ++p == pe )
		goto _test_eof451;
case 451:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st450;
		case 5: goto st450;
		case 8: goto st450;
		case 13: goto st451;
		case 18: goto tr1024;
		case 21: goto st451;
		case 23: goto st451;
		case 36: goto tr1024;
		case 44: goto st451;
	}
	goto st0;
tr1027:
	{ expr_open_parens--; }
	goto st452;
st452:
	if ( ++p == pe )
		goto _test_eof452;
case 452:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1025;
		case 23: goto tr1026;
		case 131091: goto tr1027;
		case 131109: goto tr1027;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1026;
		} else if ( _widec >= 15 )
			goto tr1026;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1026;
		} else if ( _widec >= 38 )
			goto tr1026;
	} else
		goto tr1026;
	goto st0;
st453:
	if ( ++p == pe )
		goto _test_eof453;
case 453:
	if ( ( ((int) p->tok)) == 22 )
		goto st454;
	goto st0;
st454:
	if ( ++p == pe )
		goto _test_eof454;
case 454:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1029;
		case 5: goto tr1029;
		case 8: goto tr1029;
		case 18: goto tr1031;
		case 21: goto tr1030;
		case 23: goto tr1030;
		case 36: goto tr1031;
		case 44: goto tr1030;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1030;
	goto st0;
tr1029:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr1032;
		case 23: goto st456;
		case 131091: goto st457;
		case 131109: goto st457;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st456;
		} else if ( _widec >= 15 )
			goto st456;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st456;
		} else if ( _widec >= 38 )
			goto st456;
	} else
		goto st456;
	goto st0;
tr1030:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st456;
tr1031:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st456;
tr1036:
	{ expr_open_parens++; }
	goto st456;
tr1038:
	{ expr_open_parens--; }
	goto st456;
st456:
	if ( ++p == pe )
		goto _test_eof456;
case 456:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st455;
		case 5: goto st455;
		case 8: goto st455;
		case 13: goto st456;
		case 18: goto tr1036;
		case 21: goto st456;
		case 23: goto st456;
		case 36: goto tr1036;
		case 44: goto st456;
	}
	goto st0;
tr1039:
	{ expr_open_parens--; }
	goto st457;
st457:
	if ( ++p == pe )
		goto _test_eof457;
case 457:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1037;
		case 23: goto tr1038;
		case 131091: goto tr1039;
		case 131109: goto tr1039;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1038;
		} else if ( _widec >= 15 )
			goto tr1038;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1038;
		} else if ( _widec >= 38 )
			goto tr1038;
	} else
		goto tr1038;
	goto st0;
st458:
	if ( ++p == pe )
		goto _test_eof458;
case 458:
	if ( ( ((int) p->tok)) == 22 )
		goto st459;
	goto st0;
st459:
	if ( ++p == pe )
		goto _test_eof459;
case 459:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1041;
		case 5: goto tr1041;
		case 8: goto tr1041;
		case 18: goto tr1043;
		case 21: goto tr1042;
		case 23: goto tr1042;
		case 36: goto tr1043;
		case 44: goto tr1042;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1042;
	goto st0;
tr1041:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr1044;
		case 23: goto st461;
		case 131091: goto st462;
		case 131109: goto st462;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st461;
		} else if ( _widec >= 15 )
			goto st461;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st461;
		} else if ( _widec >= 38 )
			goto st461;
	} else
		goto st461;
	goto st0;
tr1042:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st461;
tr1043:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st461;
tr1048:
	{ expr_open_parens++; }
	goto st461;
tr1050:
	{ expr_open_parens--; }
	goto st461;
st461:
	if ( ++p == pe )
		goto _test_eof461;
case 461:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st460;
		case 5: goto st460;
		case 8: goto st460;
		case 13: goto st461;
		case 18: goto tr1048;
		case 21: goto st461;
		case 23: goto st461;
		case 36: goto tr1048;
		case 44: goto st461;
	}
	goto st0;
tr1051:
	{ expr_open_parens--; }
	goto st462;
st462:
	if ( ++p == pe )
		goto _test_eof462;
case 462:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1049;
		case 23: goto tr1050;
		case 131091: goto tr1051;
		case 131109: goto tr1051;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1050;
		} else if ( _widec >= 15 )
			goto tr1050;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1050;
		} else if ( _widec >= 38 )
			goto tr1050;
	} else
		goto tr1050;
	goto st0;
st463:
	if ( ++p == pe )
		goto _test_eof463;
case 463:
	if ( ( ((int) p->tok)) == 22 )
		goto st464;
	goto st0;
st464:
	if ( ++p == pe )
		goto _test_eof464;
case 464:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1053;
		case 5: goto tr1053;
		case 8: goto tr1053;
		case 18: goto tr1055;
		case 21: goto tr1054;
		case 23: goto tr1054;
		case 36: goto tr1055;
		case 44: goto tr1054;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1054;
	goto st0;
tr1053:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr1056;
		case 23: goto st466;
		case 131091: goto st467;
		case 131109: goto st467;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st466;
		} else if ( _widec >= 15 )
			goto st466;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st466;
		} else if ( _widec >= 38 )
			goto st466;
	} else
		goto st466;
	goto st0;
tr1054:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st466;
tr1055:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st466;
tr1060:
	{ expr_open_parens++; }
	goto st466;
tr1062:
	{ expr_open_parens--; }
	goto st466;
st466:
	if ( ++p == pe )
		goto _test_eof466;
case 466:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st465;
		case 5: goto st465;
		case 8: goto st465;
		case 13: goto st466;
		case 18: goto tr1060;
		case 21: goto st466;
		case 23: goto st466;
		case 36: goto tr1060;
		case 44: goto st466;
	}
	goto st0;
tr1063:
	{ expr_open_parens--; }
	goto st467;
st467:
	if ( ++p == pe )
		goto _test_eof467;
case 467:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1061;
		case 23: goto tr1062;
		case 131091: goto tr1063;
		case 131109: goto tr1063;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1062;
		} else if ( _widec >= 15 )
			goto tr1062;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1062;
		} else if ( _widec >= 38 )
			goto tr1062;
	} else
		goto tr1062;
	goto st0;
st468:
	if ( ++p == pe )
		goto _test_eof468;
case 468:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1064;
		case 5: goto tr1064;
		case 8: goto tr1064;
		case 18: goto tr1066;
		case 21: goto tr1065;
		case 23: goto tr1065;
		case 36: goto tr1066;
		case 44: goto tr1065;
		case 48: goto st480;
		case 53: goto st517;
		case 54: goto st554;
		case 55: goto st591;
		case 56: goto st628;
		case 57: goto st661;
		case 58: goto st673;
		case 59: goto st685;
		case 60: goto st718;
		case 61: goto st730;
		case 62: goto st742;
		case 64: goto st785;
		case 65: goto st788;
		case 66: goto st791;
		case 67: goto st794;
		case 69: goto st797;
		case 70: goto st802;
		case 71: goto st807;
		case 72: goto st812;
		case 73: goto st817;
		case 75: goto st822;
		case 77: goto st830;
		case 78: goto st833;
		case 79: goto st836;
		case 80: goto st848;
		case 81: goto st880;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1065;
	goto st0;
tr1064:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st469;
st469:
	if ( ++p == pe )
		goto _test_eof469;
case 469:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr1094;
		case 131091: goto st479;
		case 131109: goto st479;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st470;
		} else if ( _widec >= 15 )
			goto st470;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st470;
		} else if ( _widec >= 38 )
			goto st470;
	} else
		goto st470;
	goto st0;
tr1065:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st470;
tr1066:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st470;
tr1097:
	{ expr_open_parens++; }
	goto st470;
tr1112:
	{ expr_open_parens--; }
	goto st470;
st470:
	if ( ++p == pe )
		goto _test_eof470;
case 470:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st469;
		case 5: goto st469;
		case 8: goto st469;
		case 13: goto st470;
		case 18: goto tr1097;
		case 21: goto st470;
		case 23: goto st470;
		case 36: goto tr1097;
		case 44: goto st470;
	}
	goto st0;
tr1094:
	{ push_expr(expr_start, p); }
	goto st471;
tr1113:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st471;
st471:
	if ( ++p == pe )
		goto _test_eof471;
case 471:
	switch( ( ((int) p->tok)) ) {
		case 62: goto st472;
		case 69: goto st473;
		case 70: goto st474;
		case 71: goto st475;
		case 72: goto st476;
		case 73: goto st477;
		case 75: goto st478;
	}
	goto st0;
st472:
	if ( ++p == pe )
		goto _test_eof472;
case 472:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1105;
	goto st0;
st473:
	if ( ++p == pe )
		goto _test_eof473;
case 473:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1106;
	goto st0;
st474:
	if ( ++p == pe )
		goto _test_eof474;
case 474:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1107;
	goto st0;
st475:
	if ( ++p == pe )
		goto _test_eof475;
case 475:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1108;
	goto st0;
st476:
	if ( ++p == pe )
		goto _test_eof476;
case 476:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1109;
	goto st0;
st477:
	if ( ++p == pe )
		goto _test_eof477;
case 477:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1110;
	goto st0;
st478:
	if ( ++p == pe )
		goto _test_eof478;
case 478:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1111;
	goto st0;
tr1114:
	{ expr_open_parens--; }
	goto st479;
st479:
	if ( ++p == pe )
		goto _test_eof479;
case 479:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr1113;
		case 131091: goto tr1114;
		case 131109: goto tr1114;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr1112;
		} else if ( _widec >= 15 )
			goto tr1112;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1112;
		} else if ( _widec >= 38 )
			goto tr1112;
	} else
		goto tr1112;
	goto st0;
st480:
	if ( ++p == pe )
		goto _test_eof480;
case 480:
	if ( ( ((int) p->tok)) == 22 )
		goto st481;
	goto st0;
st481:
	if ( ++p == pe )
		goto _test_eof481;
case 481:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1116;
		case 5: goto tr1116;
		case 8: goto tr1116;
		case 18: goto tr1118;
		case 21: goto tr1117;
		case 23: goto tr1117;
		case 36: goto tr1118;
		case 44: goto tr1117;
		case 48: goto st485;
		case 53: goto st486;
		case 54: goto st487;
		case 55: goto st488;
		case 56: goto st489;
		case 57: goto st490;
		case 58: goto st491;
		case 59: goto st492;
		case 60: goto st493;
		case 61: goto st494;
		case 62: goto st495;
		case 79: goto st496;
		case 80: goto st497;
		case 81: goto st507;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1117;
	goto st0;
tr1116:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st482;
st482:
	if ( ++p == pe )
		goto _test_eof482;
case 482:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1133;
		case 23: goto st483;
		case 131091: goto st484;
		case 131109: goto st484;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st483;
		} else if ( _widec >= 15 )
			goto st483;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st483;
		} else if ( _widec >= 38 )
			goto st483;
	} else
		goto st483;
	goto st0;
tr1117:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st483;
tr1118:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st483;
tr1137:
	{ expr_open_parens++; }
	goto st483;
tr1139:
	{ expr_open_parens--; }
	goto st483;
st483:
	if ( ++p == pe )
		goto _test_eof483;
case 483:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st482;
		case 5: goto st482;
		case 8: goto st482;
		case 13: goto st483;
		case 18: goto tr1137;
		case 21: goto st483;
		case 23: goto st483;
		case 36: goto tr1137;
		case 44: goto st483;
	}
	goto st0;
tr1140:
	{ expr_open_parens--; }
	goto st484;
st484:
	if ( ++p == pe )
		goto _test_eof484;
case 484:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1138;
		case 23: goto tr1139;
		case 131091: goto tr1140;
		case 131109: goto tr1140;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1139;
		} else if ( _widec >= 15 )
			goto tr1139;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1139;
		} else if ( _widec >= 38 )
			goto tr1139;
	} else
		goto tr1139;
	goto st0;
st485:
	if ( ++p == pe )
		goto _test_eof485;
case 485:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1141;
	goto st0;
st486:
	if ( ++p == pe )
		goto _test_eof486;
case 486:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1142;
	goto st0;
st487:
	if ( ++p == pe )
		goto _test_eof487;
case 487:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1143;
	goto st0;
st488:
	if ( ++p == pe )
		goto _test_eof488;
case 488:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1144;
	goto st0;
st489:
	if ( ++p == pe )
		goto _test_eof489;
case 489:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1145;
	goto st0;
st490:
	if ( ++p == pe )
		goto _test_eof490;
case 490:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1146;
	goto st0;
st491:
	if ( ++p == pe )
		goto _test_eof491;
case 491:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1147;
	goto st0;
st492:
	if ( ++p == pe )
		goto _test_eof492;
case 492:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1148;
	goto st0;
st493:
	if ( ++p == pe )
		goto _test_eof493;
case 493:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1149;
	goto st0;
st494:
	if ( ++p == pe )
		goto _test_eof494;
case 494:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1150;
	goto st0;
st495:
	if ( ++p == pe )
		goto _test_eof495;
case 495:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1151;
	goto st0;
st496:
	if ( ++p == pe )
		goto _test_eof496;
case 496:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1152;
	goto st0;
st497:
	if ( ++p == pe )
		goto _test_eof497;
case 497:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1153;
		case 5: goto tr1153;
		case 8: goto tr1153;
		case 18: goto tr1155;
		case 19: goto st506;
		case 21: goto tr1154;
		case 23: goto tr1154;
		case 36: goto tr1155;
		case 44: goto tr1154;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1154;
	goto st0;
tr1153:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st498;
st498:
	if ( ++p == pe )
		goto _test_eof498;
case 498:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st499;
		case 65555: goto tr1158;
		case 131091: goto tr1159;
		case 131109: goto st504;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st499;
		} else if ( _widec >= 15 )
			goto st499;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st499;
		} else if ( _widec >= 38 )
			goto st499;
	} else
		goto st499;
	goto st0;
tr1162:
	{ expr_open_parens++; }
	goto st499;
tr1165:
	{ expr_open_parens--; }
	goto st499;
st499:
	if ( ++p == pe )
		goto _test_eof499;
case 499:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st500;
		case 5: goto st500;
		case 8: goto st500;
		case 13: goto st499;
		case 18: goto tr1162;
		case 21: goto st499;
		case 23: goto st499;
		case 36: goto tr1162;
		case 44: goto st499;
	}
	goto st0;
st500:
	if ( ++p == pe )
		goto _test_eof500;
case 500:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st499;
		case 65555: goto tr1158;
		case 131091: goto st502;
		case 131109: goto st502;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st499;
		} else if ( _widec >= 15 )
			goto st499;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st499;
		} else if ( _widec >= 38 )
			goto st499;
	} else
		goto st499;
	goto st0;
tr1158:
	{ push_expr(expr_start, p); }
	goto st501;
tr1166:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st501;
st501:
	if ( ++p == pe )
		goto _test_eof501;
case 501:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1164;
	goto st0;
tr1167:
	{ expr_open_parens--; }
	goto st502;
st502:
	if ( ++p == pe )
		goto _test_eof502;
case 502:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1165;
		case 65555: goto tr1166;
		case 131091: goto tr1167;
		case 131109: goto tr1167;
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
tr1159:
	{ push_expr(expr_start, p); }
	goto st503;
tr1168:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st503;
st503:
	if ( ++p == pe )
		goto _test_eof503;
case 503:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 65555: goto tr1166;
		case 131091: goto tr1168;
		case 131109: goto tr1169;
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
tr1169:
	{ expr_open_parens--; }
	goto st504;
st504:
	if ( ++p == pe )
		goto _test_eof504;
case 504:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1165;
		case 65555: goto tr1166;
		case 131091: goto tr1168;
		case 131109: goto tr1169;
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
tr1154:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st505;
tr1155:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st505;
tr1172:
	{ expr_open_parens++; }
	goto st505;
st505:
	if ( ++p == pe )
		goto _test_eof505;
case 505:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st498;
		case 5: goto st498;
		case 8: goto st498;
		case 13: goto st505;
		case 18: goto tr1172;
		case 21: goto st505;
		case 23: goto st505;
		case 36: goto tr1172;
		case 44: goto st505;
	}
	goto st0;
st506:
	if ( ++p == pe )
		goto _test_eof506;
case 506:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1173;
	goto st0;
st507:
	if ( ++p == pe )
		goto _test_eof507;
case 507:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1174;
		case 5: goto tr1174;
		case 8: goto tr1174;
		case 18: goto tr1176;
		case 19: goto st516;
		case 21: goto tr1175;
		case 23: goto tr1175;
		case 36: goto tr1176;
		case 44: goto tr1175;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1175;
	goto st0;
tr1174:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st508;
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
		case 23: goto st509;
		case 65555: goto tr1179;
		case 131091: goto tr1180;
		case 131109: goto st514;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st509;
		} else if ( _widec >= 15 )
			goto st509;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st509;
		} else if ( _widec >= 38 )
			goto st509;
	} else
		goto st509;
	goto st0;
tr1183:
	{ expr_open_parens++; }
	goto st509;
tr1186:
	{ expr_open_parens--; }
	goto st509;
st509:
	if ( ++p == pe )
		goto _test_eof509;
case 509:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st510;
		case 5: goto st510;
		case 8: goto st510;
		case 13: goto st509;
		case 18: goto tr1183;
		case 21: goto st509;
		case 23: goto st509;
		case 36: goto tr1183;
		case 44: goto st509;
	}
	goto st0;
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
		case 23: goto st509;
		case 65555: goto tr1179;
		case 131091: goto st512;
		case 131109: goto st512;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st509;
		} else if ( _widec >= 15 )
			goto st509;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st509;
		} else if ( _widec >= 38 )
			goto st509;
	} else
		goto st509;
	goto st0;
tr1179:
	{ push_expr(expr_start, p); }
	goto st511;
tr1187:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st511;
st511:
	if ( ++p == pe )
		goto _test_eof511;
case 511:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1185;
	goto st0;
tr1188:
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
		case 23: goto tr1186;
		case 65555: goto tr1187;
		case 131091: goto tr1188;
		case 131109: goto tr1188;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1186;
		} else if ( _widec >= 15 )
			goto tr1186;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1186;
		} else if ( _widec >= 38 )
			goto tr1186;
	} else
		goto tr1186;
	goto st0;
tr1180:
	{ push_expr(expr_start, p); }
	goto st513;
tr1189:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st513;
st513:
	if ( ++p == pe )
		goto _test_eof513;
case 513:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1185;
		case 23: goto tr1186;
		case 65555: goto tr1187;
		case 131091: goto tr1189;
		case 131109: goto tr1190;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1186;
		} else if ( _widec >= 15 )
			goto tr1186;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1186;
		} else if ( _widec >= 38 )
			goto tr1186;
	} else
		goto tr1186;
	goto st0;
tr1190:
	{ expr_open_parens--; }
	goto st514;
st514:
	if ( ++p == pe )
		goto _test_eof514;
case 514:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1186;
		case 65555: goto tr1187;
		case 131091: goto tr1189;
		case 131109: goto tr1190;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1186;
		} else if ( _widec >= 15 )
			goto tr1186;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1186;
		} else if ( _widec >= 38 )
			goto tr1186;
	} else
		goto tr1186;
	goto st0;
tr1175:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st515;
tr1176:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st515;
tr1193:
	{ expr_open_parens++; }
	goto st515;
st515:
	if ( ++p == pe )
		goto _test_eof515;
case 515:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st508;
		case 5: goto st508;
		case 8: goto st508;
		case 13: goto st515;
		case 18: goto tr1193;
		case 21: goto st515;
		case 23: goto st515;
		case 36: goto tr1193;
		case 44: goto st515;
	}
	goto st0;
st516:
	if ( ++p == pe )
		goto _test_eof516;
case 516:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1194;
	goto st0;
st517:
	if ( ++p == pe )
		goto _test_eof517;
case 517:
	if ( ( ((int) p->tok)) == 22 )
		goto st518;
	goto st0;
st518:
	if ( ++p == pe )
		goto _test_eof518;
case 518:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1196;
		case 5: goto tr1196;
		case 8: goto tr1196;
		case 18: goto tr1198;
		case 21: goto tr1197;
		case 23: goto tr1197;
		case 36: goto tr1198;
		case 44: goto tr1197;
		case 48: goto st522;
		case 53: goto st523;
		case 54: goto st524;
		case 55: goto st525;
		case 56: goto st526;
		case 57: goto st527;
		case 58: goto st528;
		case 59: goto st529;
		case 60: goto st530;
		case 61: goto st531;
		case 62: goto st532;
		case 79: goto st533;
		case 80: goto st534;
		case 81: goto st544;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1197;
	goto st0;
tr1196:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st519;
st519:
	if ( ++p == pe )
		goto _test_eof519;
case 519:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1213;
		case 23: goto st520;
		case 131091: goto st521;
		case 131109: goto st521;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st520;
		} else if ( _widec >= 15 )
			goto st520;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st520;
		} else if ( _widec >= 38 )
			goto st520;
	} else
		goto st520;
	goto st0;
tr1197:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st520;
tr1198:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st520;
tr1217:
	{ expr_open_parens++; }
	goto st520;
tr1219:
	{ expr_open_parens--; }
	goto st520;
st520:
	if ( ++p == pe )
		goto _test_eof520;
case 520:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st519;
		case 5: goto st519;
		case 8: goto st519;
		case 13: goto st520;
		case 18: goto tr1217;
		case 21: goto st520;
		case 23: goto st520;
		case 36: goto tr1217;
		case 44: goto st520;
	}
	goto st0;
tr1220:
	{ expr_open_parens--; }
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
		case 12: goto tr1218;
		case 23: goto tr1219;
		case 131091: goto tr1220;
		case 131109: goto tr1220;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1219;
		} else if ( _widec >= 15 )
			goto tr1219;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1219;
		} else if ( _widec >= 38 )
			goto tr1219;
	} else
		goto tr1219;
	goto st0;
st522:
	if ( ++p == pe )
		goto _test_eof522;
case 522:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1221;
	goto st0;
st523:
	if ( ++p == pe )
		goto _test_eof523;
case 523:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1222;
	goto st0;
st524:
	if ( ++p == pe )
		goto _test_eof524;
case 524:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1223;
	goto st0;
st525:
	if ( ++p == pe )
		goto _test_eof525;
case 525:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1224;
	goto st0;
st526:
	if ( ++p == pe )
		goto _test_eof526;
case 526:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1225;
	goto st0;
st527:
	if ( ++p == pe )
		goto _test_eof527;
case 527:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1226;
	goto st0;
st528:
	if ( ++p == pe )
		goto _test_eof528;
case 528:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1227;
	goto st0;
st529:
	if ( ++p == pe )
		goto _test_eof529;
case 529:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1228;
	goto st0;
st530:
	if ( ++p == pe )
		goto _test_eof530;
case 530:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1229;
	goto st0;
st531:
	if ( ++p == pe )
		goto _test_eof531;
case 531:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1230;
	goto st0;
st532:
	if ( ++p == pe )
		goto _test_eof532;
case 532:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1231;
	goto st0;
st533:
	if ( ++p == pe )
		goto _test_eof533;
case 533:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1232;
	goto st0;
st534:
	if ( ++p == pe )
		goto _test_eof534;
case 534:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1233;
		case 5: goto tr1233;
		case 8: goto tr1233;
		case 18: goto tr1235;
		case 19: goto st543;
		case 21: goto tr1234;
		case 23: goto tr1234;
		case 36: goto tr1235;
		case 44: goto tr1234;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1234;
	goto st0;
tr1233:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st535;
st535:
	if ( ++p == pe )
		goto _test_eof535;
case 535:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st536;
		case 65555: goto tr1238;
		case 131091: goto tr1239;
		case 131109: goto st541;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st536;
		} else if ( _widec >= 15 )
			goto st536;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st536;
		} else if ( _widec >= 38 )
			goto st536;
	} else
		goto st536;
	goto st0;
tr1242:
	{ expr_open_parens++; }
	goto st536;
tr1245:
	{ expr_open_parens--; }
	goto st536;
st536:
	if ( ++p == pe )
		goto _test_eof536;
case 536:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st537;
		case 5: goto st537;
		case 8: goto st537;
		case 13: goto st536;
		case 18: goto tr1242;
		case 21: goto st536;
		case 23: goto st536;
		case 36: goto tr1242;
		case 44: goto st536;
	}
	goto st0;
st537:
	if ( ++p == pe )
		goto _test_eof537;
case 537:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st536;
		case 65555: goto tr1238;
		case 131091: goto st539;
		case 131109: goto st539;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st536;
		} else if ( _widec >= 15 )
			goto st536;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st536;
		} else if ( _widec >= 38 )
			goto st536;
	} else
		goto st536;
	goto st0;
tr1238:
	{ push_expr(expr_start, p); }
	goto st538;
tr1246:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st538;
st538:
	if ( ++p == pe )
		goto _test_eof538;
case 538:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1244;
	goto st0;
tr1247:
	{ expr_open_parens--; }
	goto st539;
st539:
	if ( ++p == pe )
		goto _test_eof539;
case 539:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1245;
		case 65555: goto tr1246;
		case 131091: goto tr1247;
		case 131109: goto tr1247;
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
tr1239:
	{ push_expr(expr_start, p); }
	goto st540;
tr1248:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st540;
st540:
	if ( ++p == pe )
		goto _test_eof540;
case 540:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 65555: goto tr1246;
		case 131091: goto tr1248;
		case 131109: goto tr1249;
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
tr1249:
	{ expr_open_parens--; }
	goto st541;
st541:
	if ( ++p == pe )
		goto _test_eof541;
case 541:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1245;
		case 65555: goto tr1246;
		case 131091: goto tr1248;
		case 131109: goto tr1249;
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
tr1234:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st542;
tr1235:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st542;
tr1252:
	{ expr_open_parens++; }
	goto st542;
st542:
	if ( ++p == pe )
		goto _test_eof542;
case 542:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st535;
		case 5: goto st535;
		case 8: goto st535;
		case 13: goto st542;
		case 18: goto tr1252;
		case 21: goto st542;
		case 23: goto st542;
		case 36: goto tr1252;
		case 44: goto st542;
	}
	goto st0;
st543:
	if ( ++p == pe )
		goto _test_eof543;
case 543:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1253;
	goto st0;
st544:
	if ( ++p == pe )
		goto _test_eof544;
case 544:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1254;
		case 5: goto tr1254;
		case 8: goto tr1254;
		case 18: goto tr1256;
		case 19: goto st553;
		case 21: goto tr1255;
		case 23: goto tr1255;
		case 36: goto tr1256;
		case 44: goto tr1255;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1255;
	goto st0;
tr1254:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st545;
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
		case 23: goto st546;
		case 65555: goto tr1259;
		case 131091: goto tr1260;
		case 131109: goto st551;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st546;
		} else if ( _widec >= 15 )
			goto st546;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st546;
		} else if ( _widec >= 38 )
			goto st546;
	} else
		goto st546;
	goto st0;
tr1263:
	{ expr_open_parens++; }
	goto st546;
tr1266:
	{ expr_open_parens--; }
	goto st546;
st546:
	if ( ++p == pe )
		goto _test_eof546;
case 546:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st547;
		case 5: goto st547;
		case 8: goto st547;
		case 13: goto st546;
		case 18: goto tr1263;
		case 21: goto st546;
		case 23: goto st546;
		case 36: goto tr1263;
		case 44: goto st546;
	}
	goto st0;
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
		case 23: goto st546;
		case 65555: goto tr1259;
		case 131091: goto st549;
		case 131109: goto st549;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st546;
		} else if ( _widec >= 15 )
			goto st546;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st546;
		} else if ( _widec >= 38 )
			goto st546;
	} else
		goto st546;
	goto st0;
tr1259:
	{ push_expr(expr_start, p); }
	goto st548;
tr1267:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st548;
st548:
	if ( ++p == pe )
		goto _test_eof548;
case 548:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1265;
	goto st0;
tr1268:
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
		case 23: goto tr1266;
		case 65555: goto tr1267;
		case 131091: goto tr1268;
		case 131109: goto tr1268;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1266;
		} else if ( _widec >= 15 )
			goto tr1266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1266;
		} else if ( _widec >= 38 )
			goto tr1266;
	} else
		goto tr1266;
	goto st0;
tr1260:
	{ push_expr(expr_start, p); }
	goto st550;
tr1269:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st550;
st550:
	if ( ++p == pe )
		goto _test_eof550;
case 550:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1265;
		case 23: goto tr1266;
		case 65555: goto tr1267;
		case 131091: goto tr1269;
		case 131109: goto tr1270;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1266;
		} else if ( _widec >= 15 )
			goto tr1266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1266;
		} else if ( _widec >= 38 )
			goto tr1266;
	} else
		goto tr1266;
	goto st0;
tr1270:
	{ expr_open_parens--; }
	goto st551;
st551:
	if ( ++p == pe )
		goto _test_eof551;
case 551:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1266;
		case 65555: goto tr1267;
		case 131091: goto tr1269;
		case 131109: goto tr1270;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1266;
		} else if ( _widec >= 15 )
			goto tr1266;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1266;
		} else if ( _widec >= 38 )
			goto tr1266;
	} else
		goto tr1266;
	goto st0;
tr1255:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st552;
tr1256:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st552;
tr1273:
	{ expr_open_parens++; }
	goto st552;
st552:
	if ( ++p == pe )
		goto _test_eof552;
case 552:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st545;
		case 5: goto st545;
		case 8: goto st545;
		case 13: goto st552;
		case 18: goto tr1273;
		case 21: goto st552;
		case 23: goto st552;
		case 36: goto tr1273;
		case 44: goto st552;
	}
	goto st0;
st553:
	if ( ++p == pe )
		goto _test_eof553;
case 553:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1274;
	goto st0;
st554:
	if ( ++p == pe )
		goto _test_eof554;
case 554:
	if ( ( ((int) p->tok)) == 22 )
		goto st555;
	goto st0;
st555:
	if ( ++p == pe )
		goto _test_eof555;
case 555:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1276;
		case 5: goto tr1276;
		case 8: goto tr1276;
		case 18: goto tr1278;
		case 21: goto tr1277;
		case 23: goto tr1277;
		case 36: goto tr1278;
		case 44: goto tr1277;
		case 48: goto st559;
		case 53: goto st560;
		case 54: goto st561;
		case 55: goto st562;
		case 56: goto st563;
		case 57: goto st564;
		case 58: goto st565;
		case 59: goto st566;
		case 60: goto st567;
		case 61: goto st568;
		case 62: goto st569;
		case 79: goto st570;
		case 80: goto st571;
		case 81: goto st581;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1277;
	goto st0;
tr1276:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st556;
st556:
	if ( ++p == pe )
		goto _test_eof556;
case 556:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1293;
		case 23: goto st557;
		case 131091: goto st558;
		case 131109: goto st558;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st557;
		} else if ( _widec >= 15 )
			goto st557;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st557;
		} else if ( _widec >= 38 )
			goto st557;
	} else
		goto st557;
	goto st0;
tr1277:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st557;
tr1278:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st557;
tr1297:
	{ expr_open_parens++; }
	goto st557;
tr1299:
	{ expr_open_parens--; }
	goto st557;
st557:
	if ( ++p == pe )
		goto _test_eof557;
case 557:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st556;
		case 5: goto st556;
		case 8: goto st556;
		case 13: goto st557;
		case 18: goto tr1297;
		case 21: goto st557;
		case 23: goto st557;
		case 36: goto tr1297;
		case 44: goto st557;
	}
	goto st0;
tr1300:
	{ expr_open_parens--; }
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
		case 12: goto tr1298;
		case 23: goto tr1299;
		case 131091: goto tr1300;
		case 131109: goto tr1300;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1299;
		} else if ( _widec >= 15 )
			goto tr1299;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1299;
		} else if ( _widec >= 38 )
			goto tr1299;
	} else
		goto tr1299;
	goto st0;
st559:
	if ( ++p == pe )
		goto _test_eof559;
case 559:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1301;
	goto st0;
st560:
	if ( ++p == pe )
		goto _test_eof560;
case 560:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1302;
	goto st0;
st561:
	if ( ++p == pe )
		goto _test_eof561;
case 561:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1303;
	goto st0;
st562:
	if ( ++p == pe )
		goto _test_eof562;
case 562:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1304;
	goto st0;
st563:
	if ( ++p == pe )
		goto _test_eof563;
case 563:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1305;
	goto st0;
st564:
	if ( ++p == pe )
		goto _test_eof564;
case 564:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1306;
	goto st0;
st565:
	if ( ++p == pe )
		goto _test_eof565;
case 565:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1307;
	goto st0;
st566:
	if ( ++p == pe )
		goto _test_eof566;
case 566:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1308;
	goto st0;
st567:
	if ( ++p == pe )
		goto _test_eof567;
case 567:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1309;
	goto st0;
st568:
	if ( ++p == pe )
		goto _test_eof568;
case 568:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1310;
	goto st0;
st569:
	if ( ++p == pe )
		goto _test_eof569;
case 569:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1311;
	goto st0;
st570:
	if ( ++p == pe )
		goto _test_eof570;
case 570:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1312;
	goto st0;
st571:
	if ( ++p == pe )
		goto _test_eof571;
case 571:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1313;
		case 5: goto tr1313;
		case 8: goto tr1313;
		case 18: goto tr1315;
		case 19: goto st580;
		case 21: goto tr1314;
		case 23: goto tr1314;
		case 36: goto tr1315;
		case 44: goto tr1314;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1314;
	goto st0;
tr1313:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st572;
st572:
	if ( ++p == pe )
		goto _test_eof572;
case 572:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st573;
		case 65555: goto tr1318;
		case 131091: goto tr1319;
		case 131109: goto st578;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st573;
		} else if ( _widec >= 15 )
			goto st573;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st573;
		} else if ( _widec >= 38 )
			goto st573;
	} else
		goto st573;
	goto st0;
tr1322:
	{ expr_open_parens++; }
	goto st573;
tr1325:
	{ expr_open_parens--; }
	goto st573;
st573:
	if ( ++p == pe )
		goto _test_eof573;
case 573:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st574;
		case 5: goto st574;
		case 8: goto st574;
		case 13: goto st573;
		case 18: goto tr1322;
		case 21: goto st573;
		case 23: goto st573;
		case 36: goto tr1322;
		case 44: goto st573;
	}
	goto st0;
st574:
	if ( ++p == pe )
		goto _test_eof574;
case 574:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st573;
		case 65555: goto tr1318;
		case 131091: goto st576;
		case 131109: goto st576;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st573;
		} else if ( _widec >= 15 )
			goto st573;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st573;
		} else if ( _widec >= 38 )
			goto st573;
	} else
		goto st573;
	goto st0;
tr1318:
	{ push_expr(expr_start, p); }
	goto st575;
tr1326:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st575;
st575:
	if ( ++p == pe )
		goto _test_eof575;
case 575:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1324;
	goto st0;
tr1327:
	{ expr_open_parens--; }
	goto st576;
st576:
	if ( ++p == pe )
		goto _test_eof576;
case 576:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1325;
		case 65555: goto tr1326;
		case 131091: goto tr1327;
		case 131109: goto tr1327;
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
tr1319:
	{ push_expr(expr_start, p); }
	goto st577;
tr1328:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st577;
st577:
	if ( ++p == pe )
		goto _test_eof577;
case 577:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 65555: goto tr1326;
		case 131091: goto tr1328;
		case 131109: goto tr1329;
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
tr1329:
	{ expr_open_parens--; }
	goto st578;
st578:
	if ( ++p == pe )
		goto _test_eof578;
case 578:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1325;
		case 65555: goto tr1326;
		case 131091: goto tr1328;
		case 131109: goto tr1329;
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
tr1314:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st579;
tr1315:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st579;
tr1332:
	{ expr_open_parens++; }
	goto st579;
st579:
	if ( ++p == pe )
		goto _test_eof579;
case 579:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st572;
		case 5: goto st572;
		case 8: goto st572;
		case 13: goto st579;
		case 18: goto tr1332;
		case 21: goto st579;
		case 23: goto st579;
		case 36: goto tr1332;
		case 44: goto st579;
	}
	goto st0;
st580:
	if ( ++p == pe )
		goto _test_eof580;
case 580:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1333;
	goto st0;
st581:
	if ( ++p == pe )
		goto _test_eof581;
case 581:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1334;
		case 5: goto tr1334;
		case 8: goto tr1334;
		case 18: goto tr1336;
		case 19: goto st590;
		case 21: goto tr1335;
		case 23: goto tr1335;
		case 36: goto tr1336;
		case 44: goto tr1335;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1335;
	goto st0;
tr1334:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st582;
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
		case 23: goto st583;
		case 65555: goto tr1339;
		case 131091: goto tr1340;
		case 131109: goto st588;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st583;
		} else if ( _widec >= 15 )
			goto st583;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st583;
		} else if ( _widec >= 38 )
			goto st583;
	} else
		goto st583;
	goto st0;
tr1343:
	{ expr_open_parens++; }
	goto st583;
tr1346:
	{ expr_open_parens--; }
	goto st583;
st583:
	if ( ++p == pe )
		goto _test_eof583;
case 583:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st584;
		case 5: goto st584;
		case 8: goto st584;
		case 13: goto st583;
		case 18: goto tr1343;
		case 21: goto st583;
		case 23: goto st583;
		case 36: goto tr1343;
		case 44: goto st583;
	}
	goto st0;
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
		case 23: goto st583;
		case 65555: goto tr1339;
		case 131091: goto st586;
		case 131109: goto st586;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st583;
		} else if ( _widec >= 15 )
			goto st583;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st583;
		} else if ( _widec >= 38 )
			goto st583;
	} else
		goto st583;
	goto st0;
tr1339:
	{ push_expr(expr_start, p); }
	goto st585;
tr1347:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st585;
st585:
	if ( ++p == pe )
		goto _test_eof585;
case 585:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1345;
	goto st0;
tr1348:
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
		case 23: goto tr1346;
		case 65555: goto tr1347;
		case 131091: goto tr1348;
		case 131109: goto tr1348;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1346;
		} else if ( _widec >= 15 )
			goto tr1346;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1346;
		} else if ( _widec >= 38 )
			goto tr1346;
	} else
		goto tr1346;
	goto st0;
tr1340:
	{ push_expr(expr_start, p); }
	goto st587;
tr1349:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st587;
st587:
	if ( ++p == pe )
		goto _test_eof587;
case 587:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1345;
		case 23: goto tr1346;
		case 65555: goto tr1347;
		case 131091: goto tr1349;
		case 131109: goto tr1350;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1346;
		} else if ( _widec >= 15 )
			goto tr1346;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1346;
		} else if ( _widec >= 38 )
			goto tr1346;
	} else
		goto tr1346;
	goto st0;
tr1350:
	{ expr_open_parens--; }
	goto st588;
st588:
	if ( ++p == pe )
		goto _test_eof588;
case 588:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1346;
		case 65555: goto tr1347;
		case 131091: goto tr1349;
		case 131109: goto tr1350;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1346;
		} else if ( _widec >= 15 )
			goto tr1346;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1346;
		} else if ( _widec >= 38 )
			goto tr1346;
	} else
		goto tr1346;
	goto st0;
tr1335:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st589;
tr1336:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st589;
tr1353:
	{ expr_open_parens++; }
	goto st589;
st589:
	if ( ++p == pe )
		goto _test_eof589;
case 589:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st582;
		case 5: goto st582;
		case 8: goto st582;
		case 13: goto st589;
		case 18: goto tr1353;
		case 21: goto st589;
		case 23: goto st589;
		case 36: goto tr1353;
		case 44: goto st589;
	}
	goto st0;
st590:
	if ( ++p == pe )
		goto _test_eof590;
case 590:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1354;
	goto st0;
st591:
	if ( ++p == pe )
		goto _test_eof591;
case 591:
	if ( ( ((int) p->tok)) == 22 )
		goto st592;
	goto st0;
st592:
	if ( ++p == pe )
		goto _test_eof592;
case 592:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1356;
		case 5: goto tr1356;
		case 8: goto tr1356;
		case 18: goto tr1358;
		case 21: goto tr1357;
		case 23: goto tr1357;
		case 36: goto tr1358;
		case 44: goto tr1357;
		case 48: goto st596;
		case 53: goto st597;
		case 54: goto st598;
		case 55: goto st599;
		case 56: goto st600;
		case 57: goto st601;
		case 58: goto st602;
		case 59: goto st603;
		case 60: goto st604;
		case 61: goto st605;
		case 62: goto st606;
		case 79: goto st607;
		case 80: goto st608;
		case 81: goto st618;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1357;
	goto st0;
tr1356:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st593;
st593:
	if ( ++p == pe )
		goto _test_eof593;
case 593:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1373;
		case 23: goto st594;
		case 131091: goto st595;
		case 131109: goto st595;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st594;
		} else if ( _widec >= 15 )
			goto st594;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st594;
		} else if ( _widec >= 38 )
			goto st594;
	} else
		goto st594;
	goto st0;
tr1357:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st594;
tr1358:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st594;
tr1377:
	{ expr_open_parens++; }
	goto st594;
tr1379:
	{ expr_open_parens--; }
	goto st594;
st594:
	if ( ++p == pe )
		goto _test_eof594;
case 594:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st593;
		case 5: goto st593;
		case 8: goto st593;
		case 13: goto st594;
		case 18: goto tr1377;
		case 21: goto st594;
		case 23: goto st594;
		case 36: goto tr1377;
		case 44: goto st594;
	}
	goto st0;
tr1380:
	{ expr_open_parens--; }
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
		case 12: goto tr1378;
		case 23: goto tr1379;
		case 131091: goto tr1380;
		case 131109: goto tr1380;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1379;
		} else if ( _widec >= 15 )
			goto tr1379;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1379;
		} else if ( _widec >= 38 )
			goto tr1379;
	} else
		goto tr1379;
	goto st0;
st596:
	if ( ++p == pe )
		goto _test_eof596;
case 596:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1381;
	goto st0;
st597:
	if ( ++p == pe )
		goto _test_eof597;
case 597:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1382;
	goto st0;
st598:
	if ( ++p == pe )
		goto _test_eof598;
case 598:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1383;
	goto st0;
st599:
	if ( ++p == pe )
		goto _test_eof599;
case 599:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1384;
	goto st0;
st600:
	if ( ++p == pe )
		goto _test_eof600;
case 600:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1385;
	goto st0;
st601:
	if ( ++p == pe )
		goto _test_eof601;
case 601:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1386;
	goto st0;
st602:
	if ( ++p == pe )
		goto _test_eof602;
case 602:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1387;
	goto st0;
st603:
	if ( ++p == pe )
		goto _test_eof603;
case 603:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1388;
	goto st0;
st604:
	if ( ++p == pe )
		goto _test_eof604;
case 604:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1389;
	goto st0;
st605:
	if ( ++p == pe )
		goto _test_eof605;
case 605:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1390;
	goto st0;
st606:
	if ( ++p == pe )
		goto _test_eof606;
case 606:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1391;
	goto st0;
st607:
	if ( ++p == pe )
		goto _test_eof607;
case 607:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1392;
	goto st0;
st608:
	if ( ++p == pe )
		goto _test_eof608;
case 608:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1393;
		case 5: goto tr1393;
		case 8: goto tr1393;
		case 18: goto tr1395;
		case 19: goto st617;
		case 21: goto tr1394;
		case 23: goto tr1394;
		case 36: goto tr1395;
		case 44: goto tr1394;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1394;
	goto st0;
tr1393:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st609;
st609:
	if ( ++p == pe )
		goto _test_eof609;
case 609:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st610;
		case 65555: goto tr1398;
		case 131091: goto tr1399;
		case 131109: goto st615;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st610;
		} else if ( _widec >= 15 )
			goto st610;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st610;
		} else if ( _widec >= 38 )
			goto st610;
	} else
		goto st610;
	goto st0;
tr1402:
	{ expr_open_parens++; }
	goto st610;
tr1405:
	{ expr_open_parens--; }
	goto st610;
st610:
	if ( ++p == pe )
		goto _test_eof610;
case 610:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st611;
		case 5: goto st611;
		case 8: goto st611;
		case 13: goto st610;
		case 18: goto tr1402;
		case 21: goto st610;
		case 23: goto st610;
		case 36: goto tr1402;
		case 44: goto st610;
	}
	goto st0;
st611:
	if ( ++p == pe )
		goto _test_eof611;
case 611:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st610;
		case 65555: goto tr1398;
		case 131091: goto st613;
		case 131109: goto st613;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st610;
		} else if ( _widec >= 15 )
			goto st610;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st610;
		} else if ( _widec >= 38 )
			goto st610;
	} else
		goto st610;
	goto st0;
tr1398:
	{ push_expr(expr_start, p); }
	goto st612;
tr1406:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st612;
st612:
	if ( ++p == pe )
		goto _test_eof612;
case 612:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1404;
	goto st0;
tr1407:
	{ expr_open_parens--; }
	goto st613;
st613:
	if ( ++p == pe )
		goto _test_eof613;
case 613:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1405;
		case 65555: goto tr1406;
		case 131091: goto tr1407;
		case 131109: goto tr1407;
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
tr1399:
	{ push_expr(expr_start, p); }
	goto st614;
tr1408:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st614;
st614:
	if ( ++p == pe )
		goto _test_eof614;
case 614:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 65555: goto tr1406;
		case 131091: goto tr1408;
		case 131109: goto tr1409;
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
tr1409:
	{ expr_open_parens--; }
	goto st615;
st615:
	if ( ++p == pe )
		goto _test_eof615;
case 615:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1405;
		case 65555: goto tr1406;
		case 131091: goto tr1408;
		case 131109: goto tr1409;
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
tr1394:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st616;
tr1395:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st616;
tr1412:
	{ expr_open_parens++; }
	goto st616;
st616:
	if ( ++p == pe )
		goto _test_eof616;
case 616:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st609;
		case 5: goto st609;
		case 8: goto st609;
		case 13: goto st616;
		case 18: goto tr1412;
		case 21: goto st616;
		case 23: goto st616;
		case 36: goto tr1412;
		case 44: goto st616;
	}
	goto st0;
st617:
	if ( ++p == pe )
		goto _test_eof617;
case 617:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1413;
	goto st0;
st618:
	if ( ++p == pe )
		goto _test_eof618;
case 618:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1414;
		case 5: goto tr1414;
		case 8: goto tr1414;
		case 18: goto tr1416;
		case 19: goto st627;
		case 21: goto tr1415;
		case 23: goto tr1415;
		case 36: goto tr1416;
		case 44: goto tr1415;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1415;
	goto st0;
tr1414:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st619;
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
		case 23: goto st620;
		case 65555: goto tr1419;
		case 131091: goto tr1420;
		case 131109: goto st625;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st620;
		} else if ( _widec >= 15 )
			goto st620;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st620;
		} else if ( _widec >= 38 )
			goto st620;
	} else
		goto st620;
	goto st0;
tr1423:
	{ expr_open_parens++; }
	goto st620;
tr1426:
	{ expr_open_parens--; }
	goto st620;
st620:
	if ( ++p == pe )
		goto _test_eof620;
case 620:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st621;
		case 5: goto st621;
		case 8: goto st621;
		case 13: goto st620;
		case 18: goto tr1423;
		case 21: goto st620;
		case 23: goto st620;
		case 36: goto tr1423;
		case 44: goto st620;
	}
	goto st0;
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
		case 23: goto st620;
		case 65555: goto tr1419;
		case 131091: goto st623;
		case 131109: goto st623;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st620;
		} else if ( _widec >= 15 )
			goto st620;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st620;
		} else if ( _widec >= 38 )
			goto st620;
	} else
		goto st620;
	goto st0;
tr1419:
	{ push_expr(expr_start, p); }
	goto st622;
tr1427:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st622;
st622:
	if ( ++p == pe )
		goto _test_eof622;
case 622:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1425;
	goto st0;
tr1428:
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
		case 23: goto tr1426;
		case 65555: goto tr1427;
		case 131091: goto tr1428;
		case 131109: goto tr1428;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1426;
		} else if ( _widec >= 15 )
			goto tr1426;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1426;
		} else if ( _widec >= 38 )
			goto tr1426;
	} else
		goto tr1426;
	goto st0;
tr1420:
	{ push_expr(expr_start, p); }
	goto st624;
tr1429:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st624;
st624:
	if ( ++p == pe )
		goto _test_eof624;
case 624:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1425;
		case 23: goto tr1426;
		case 65555: goto tr1427;
		case 131091: goto tr1429;
		case 131109: goto tr1430;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1426;
		} else if ( _widec >= 15 )
			goto tr1426;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1426;
		} else if ( _widec >= 38 )
			goto tr1426;
	} else
		goto tr1426;
	goto st0;
tr1430:
	{ expr_open_parens--; }
	goto st625;
st625:
	if ( ++p == pe )
		goto _test_eof625;
case 625:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1426;
		case 65555: goto tr1427;
		case 131091: goto tr1429;
		case 131109: goto tr1430;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1426;
		} else if ( _widec >= 15 )
			goto tr1426;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1426;
		} else if ( _widec >= 38 )
			goto tr1426;
	} else
		goto tr1426;
	goto st0;
tr1415:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st626;
tr1416:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st626;
tr1433:
	{ expr_open_parens++; }
	goto st626;
st626:
	if ( ++p == pe )
		goto _test_eof626;
case 626:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st619;
		case 5: goto st619;
		case 8: goto st619;
		case 13: goto st626;
		case 18: goto tr1433;
		case 21: goto st626;
		case 23: goto st626;
		case 36: goto tr1433;
		case 44: goto st626;
	}
	goto st0;
st627:
	if ( ++p == pe )
		goto _test_eof627;
case 627:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1434;
	goto st0;
st628:
	if ( ++p == pe )
		goto _test_eof628;
case 628:
	if ( ( ((int) p->tok)) == 22 )
		goto st629;
	goto st0;
st629:
	if ( ++p == pe )
		goto _test_eof629;
case 629:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1436;
		case 5: goto tr1436;
		case 8: goto tr1436;
		case 18: goto tr1438;
		case 21: goto tr1437;
		case 23: goto tr1437;
		case 36: goto tr1438;
		case 44: goto tr1437;
		case 48: goto st633;
		case 53: goto st634;
		case 54: goto st635;
		case 55: goto st636;
		case 56: goto st637;
		case 59: goto st638;
		case 62: goto st639;
		case 79: goto st640;
		case 80: goto st641;
		case 81: goto st651;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1437;
	goto st0;
tr1436:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st630;
st630:
	if ( ++p == pe )
		goto _test_eof630;
case 630:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1449;
		case 23: goto st631;
		case 131091: goto st632;
		case 131109: goto st632;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st631;
		} else if ( _widec >= 15 )
			goto st631;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st631;
		} else if ( _widec >= 38 )
			goto st631;
	} else
		goto st631;
	goto st0;
tr1437:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st631;
tr1438:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st631;
tr1453:
	{ expr_open_parens++; }
	goto st631;
tr1455:
	{ expr_open_parens--; }
	goto st631;
st631:
	if ( ++p == pe )
		goto _test_eof631;
case 631:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st630;
		case 5: goto st630;
		case 8: goto st630;
		case 13: goto st631;
		case 18: goto tr1453;
		case 21: goto st631;
		case 23: goto st631;
		case 36: goto tr1453;
		case 44: goto st631;
	}
	goto st0;
tr1456:
	{ expr_open_parens--; }
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
		case 12: goto tr1454;
		case 23: goto tr1455;
		case 131091: goto tr1456;
		case 131109: goto tr1456;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1455;
		} else if ( _widec >= 15 )
			goto tr1455;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1455;
		} else if ( _widec >= 38 )
			goto tr1455;
	} else
		goto tr1455;
	goto st0;
st633:
	if ( ++p == pe )
		goto _test_eof633;
case 633:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1457;
	goto st0;
st634:
	if ( ++p == pe )
		goto _test_eof634;
case 634:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1458;
	goto st0;
st635:
	if ( ++p == pe )
		goto _test_eof635;
case 635:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1459;
	goto st0;
st636:
	if ( ++p == pe )
		goto _test_eof636;
case 636:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1460;
	goto st0;
st637:
	if ( ++p == pe )
		goto _test_eof637;
case 637:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1461;
	goto st0;
st638:
	if ( ++p == pe )
		goto _test_eof638;
case 638:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1462;
	goto st0;
st639:
	if ( ++p == pe )
		goto _test_eof639;
case 639:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1463;
	goto st0;
st640:
	if ( ++p == pe )
		goto _test_eof640;
case 640:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1464;
	goto st0;
st641:
	if ( ++p == pe )
		goto _test_eof641;
case 641:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1465;
		case 5: goto tr1465;
		case 8: goto tr1465;
		case 18: goto tr1467;
		case 19: goto st650;
		case 21: goto tr1466;
		case 23: goto tr1466;
		case 36: goto tr1467;
		case 44: goto tr1466;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1466;
	goto st0;
tr1465:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st642;
st642:
	if ( ++p == pe )
		goto _test_eof642;
case 642:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st643;
		case 65555: goto tr1470;
		case 131091: goto tr1471;
		case 131109: goto st648;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st643;
		} else if ( _widec >= 15 )
			goto st643;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st643;
		} else if ( _widec >= 38 )
			goto st643;
	} else
		goto st643;
	goto st0;
tr1474:
	{ expr_open_parens++; }
	goto st643;
tr1477:
	{ expr_open_parens--; }
	goto st643;
st643:
	if ( ++p == pe )
		goto _test_eof643;
case 643:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st644;
		case 5: goto st644;
		case 8: goto st644;
		case 13: goto st643;
		case 18: goto tr1474;
		case 21: goto st643;
		case 23: goto st643;
		case 36: goto tr1474;
		case 44: goto st643;
	}
	goto st0;
st644:
	if ( ++p == pe )
		goto _test_eof644;
case 644:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st643;
		case 65555: goto tr1470;
		case 131091: goto st646;
		case 131109: goto st646;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st643;
		} else if ( _widec >= 15 )
			goto st643;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st643;
		} else if ( _widec >= 38 )
			goto st643;
	} else
		goto st643;
	goto st0;
tr1470:
	{ push_expr(expr_start, p); }
	goto st645;
tr1478:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st645;
st645:
	if ( ++p == pe )
		goto _test_eof645;
case 645:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1476;
	goto st0;
tr1479:
	{ expr_open_parens--; }
	goto st646;
st646:
	if ( ++p == pe )
		goto _test_eof646;
case 646:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1477;
		case 65555: goto tr1478;
		case 131091: goto tr1479;
		case 131109: goto tr1479;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1477;
		} else if ( _widec >= 15 )
			goto tr1477;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1477;
		} else if ( _widec >= 38 )
			goto tr1477;
	} else
		goto tr1477;
	goto st0;
tr1471:
	{ push_expr(expr_start, p); }
	goto st647;
tr1480:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st647;
st647:
	if ( ++p == pe )
		goto _test_eof647;
case 647:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1476;
		case 23: goto tr1477;
		case 65555: goto tr1478;
		case 131091: goto tr1480;
		case 131109: goto tr1481;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1477;
		} else if ( _widec >= 15 )
			goto tr1477;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1477;
		} else if ( _widec >= 38 )
			goto tr1477;
	} else
		goto tr1477;
	goto st0;
tr1481:
	{ expr_open_parens--; }
	goto st648;
st648:
	if ( ++p == pe )
		goto _test_eof648;
case 648:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1477;
		case 65555: goto tr1478;
		case 131091: goto tr1480;
		case 131109: goto tr1481;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1477;
		} else if ( _widec >= 15 )
			goto tr1477;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1477;
		} else if ( _widec >= 38 )
			goto tr1477;
	} else
		goto tr1477;
	goto st0;
tr1466:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st649;
tr1467:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st649;
tr1484:
	{ expr_open_parens++; }
	goto st649;
st649:
	if ( ++p == pe )
		goto _test_eof649;
case 649:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st642;
		case 5: goto st642;
		case 8: goto st642;
		case 13: goto st649;
		case 18: goto tr1484;
		case 21: goto st649;
		case 23: goto st649;
		case 36: goto tr1484;
		case 44: goto st649;
	}
	goto st0;
st650:
	if ( ++p == pe )
		goto _test_eof650;
case 650:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1485;
	goto st0;
st651:
	if ( ++p == pe )
		goto _test_eof651;
case 651:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1486;
		case 5: goto tr1486;
		case 8: goto tr1486;
		case 18: goto tr1488;
		case 19: goto st660;
		case 21: goto tr1487;
		case 23: goto tr1487;
		case 36: goto tr1488;
		case 44: goto tr1487;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1487;
	goto st0;
tr1486:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st652;
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
		case 23: goto st653;
		case 65555: goto tr1491;
		case 131091: goto tr1492;
		case 131109: goto st658;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st653;
		} else if ( _widec >= 15 )
			goto st653;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st653;
		} else if ( _widec >= 38 )
			goto st653;
	} else
		goto st653;
	goto st0;
tr1495:
	{ expr_open_parens++; }
	goto st653;
tr1498:
	{ expr_open_parens--; }
	goto st653;
st653:
	if ( ++p == pe )
		goto _test_eof653;
case 653:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st654;
		case 5: goto st654;
		case 8: goto st654;
		case 13: goto st653;
		case 18: goto tr1495;
		case 21: goto st653;
		case 23: goto st653;
		case 36: goto tr1495;
		case 44: goto st653;
	}
	goto st0;
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
		case 23: goto st653;
		case 65555: goto tr1491;
		case 131091: goto st656;
		case 131109: goto st656;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st653;
		} else if ( _widec >= 15 )
			goto st653;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st653;
		} else if ( _widec >= 38 )
			goto st653;
	} else
		goto st653;
	goto st0;
tr1491:
	{ push_expr(expr_start, p); }
	goto st655;
tr1499:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st655;
st655:
	if ( ++p == pe )
		goto _test_eof655;
case 655:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1497;
	goto st0;
tr1500:
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
		case 23: goto tr1498;
		case 65555: goto tr1499;
		case 131091: goto tr1500;
		case 131109: goto tr1500;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1498;
		} else if ( _widec >= 15 )
			goto tr1498;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1498;
		} else if ( _widec >= 38 )
			goto tr1498;
	} else
		goto tr1498;
	goto st0;
tr1492:
	{ push_expr(expr_start, p); }
	goto st657;
tr1501:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st657;
st657:
	if ( ++p == pe )
		goto _test_eof657;
case 657:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1497;
		case 23: goto tr1498;
		case 65555: goto tr1499;
		case 131091: goto tr1501;
		case 131109: goto tr1502;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1498;
		} else if ( _widec >= 15 )
			goto tr1498;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1498;
		} else if ( _widec >= 38 )
			goto tr1498;
	} else
		goto tr1498;
	goto st0;
tr1502:
	{ expr_open_parens--; }
	goto st658;
st658:
	if ( ++p == pe )
		goto _test_eof658;
case 658:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1498;
		case 65555: goto tr1499;
		case 131091: goto tr1501;
		case 131109: goto tr1502;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1498;
		} else if ( _widec >= 15 )
			goto tr1498;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1498;
		} else if ( _widec >= 38 )
			goto tr1498;
	} else
		goto tr1498;
	goto st0;
tr1487:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st659;
tr1488:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st659;
tr1505:
	{ expr_open_parens++; }
	goto st659;
st659:
	if ( ++p == pe )
		goto _test_eof659;
case 659:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st652;
		case 5: goto st652;
		case 8: goto st652;
		case 13: goto st659;
		case 18: goto tr1505;
		case 21: goto st659;
		case 23: goto st659;
		case 36: goto tr1505;
		case 44: goto st659;
	}
	goto st0;
st660:
	if ( ++p == pe )
		goto _test_eof660;
case 660:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1506;
	goto st0;
st661:
	if ( ++p == pe )
		goto _test_eof661;
case 661:
	if ( ( ((int) p->tok)) == 22 )
		goto st662;
	goto st0;
st662:
	if ( ++p == pe )
		goto _test_eof662;
case 662:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1508;
		case 5: goto tr1508;
		case 8: goto tr1508;
		case 18: goto tr1510;
		case 21: goto tr1509;
		case 23: goto tr1509;
		case 36: goto tr1510;
		case 44: goto tr1509;
		case 48: goto st666;
		case 53: goto st667;
		case 54: goto st668;
		case 55: goto st669;
		case 57: goto st670;
		case 60: goto st671;
		case 62: goto st672;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1509;
	goto st0;
tr1508:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st663;
st663:
	if ( ++p == pe )
		goto _test_eof663;
case 663:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1518;
		case 23: goto st664;
		case 131091: goto st665;
		case 131109: goto st665;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st664;
		} else if ( _widec >= 15 )
			goto st664;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st664;
		} else if ( _widec >= 38 )
			goto st664;
	} else
		goto st664;
	goto st0;
tr1509:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st664;
tr1510:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st664;
tr1522:
	{ expr_open_parens++; }
	goto st664;
tr1524:
	{ expr_open_parens--; }
	goto st664;
st664:
	if ( ++p == pe )
		goto _test_eof664;
case 664:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st663;
		case 5: goto st663;
		case 8: goto st663;
		case 13: goto st664;
		case 18: goto tr1522;
		case 21: goto st664;
		case 23: goto st664;
		case 36: goto tr1522;
		case 44: goto st664;
	}
	goto st0;
tr1525:
	{ expr_open_parens--; }
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
		case 131091: goto tr1525;
		case 131109: goto tr1525;
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
st666:
	if ( ++p == pe )
		goto _test_eof666;
case 666:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1526;
	goto st0;
st667:
	if ( ++p == pe )
		goto _test_eof667;
case 667:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1527;
	goto st0;
st668:
	if ( ++p == pe )
		goto _test_eof668;
case 668:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1528;
	goto st0;
st669:
	if ( ++p == pe )
		goto _test_eof669;
case 669:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1529;
	goto st0;
st670:
	if ( ++p == pe )
		goto _test_eof670;
case 670:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1530;
	goto st0;
st671:
	if ( ++p == pe )
		goto _test_eof671;
case 671:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1531;
	goto st0;
st672:
	if ( ++p == pe )
		goto _test_eof672;
case 672:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1532;
	goto st0;
st673:
	if ( ++p == pe )
		goto _test_eof673;
case 673:
	if ( ( ((int) p->tok)) == 22 )
		goto st674;
	goto st0;
st674:
	if ( ++p == pe )
		goto _test_eof674;
case 674:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1534;
		case 5: goto tr1534;
		case 8: goto tr1534;
		case 18: goto tr1536;
		case 21: goto tr1535;
		case 23: goto tr1535;
		case 36: goto tr1536;
		case 44: goto tr1535;
		case 48: goto st678;
		case 53: goto st679;
		case 54: goto st680;
		case 55: goto st681;
		case 58: goto st682;
		case 61: goto st683;
		case 62: goto st684;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1535;
	goto st0;
tr1534:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st675;
st675:
	if ( ++p == pe )
		goto _test_eof675;
case 675:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 23: goto st676;
		case 131091: goto st677;
		case 131109: goto st677;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st676;
		} else if ( _widec >= 15 )
			goto st676;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st676;
		} else if ( _widec >= 38 )
			goto st676;
	} else
		goto st676;
	goto st0;
tr1535:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st676;
tr1536:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st676;
tr1548:
	{ expr_open_parens++; }
	goto st676;
tr1550:
	{ expr_open_parens--; }
	goto st676;
st676:
	if ( ++p == pe )
		goto _test_eof676;
case 676:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st675;
		case 5: goto st675;
		case 8: goto st675;
		case 13: goto st676;
		case 18: goto tr1548;
		case 21: goto st676;
		case 23: goto st676;
		case 36: goto tr1548;
		case 44: goto st676;
	}
	goto st0;
tr1551:
	{ expr_open_parens--; }
	goto st677;
st677:
	if ( ++p == pe )
		goto _test_eof677;
case 677:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
st678:
	if ( ++p == pe )
		goto _test_eof678;
case 678:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1552;
	goto st0;
st679:
	if ( ++p == pe )
		goto _test_eof679;
case 679:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1553;
	goto st0;
st680:
	if ( ++p == pe )
		goto _test_eof680;
case 680:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1554;
	goto st0;
st681:
	if ( ++p == pe )
		goto _test_eof681;
case 681:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1555;
	goto st0;
st682:
	if ( ++p == pe )
		goto _test_eof682;
case 682:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1556;
	goto st0;
st683:
	if ( ++p == pe )
		goto _test_eof683;
case 683:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1557;
	goto st0;
st684:
	if ( ++p == pe )
		goto _test_eof684;
case 684:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1558;
	goto st0;
st685:
	if ( ++p == pe )
		goto _test_eof685;
case 685:
	if ( ( ((int) p->tok)) == 22 )
		goto st686;
	goto st0;
st686:
	if ( ++p == pe )
		goto _test_eof686;
case 686:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1560;
		case 5: goto tr1560;
		case 8: goto tr1560;
		case 18: goto tr1562;
		case 21: goto tr1561;
		case 23: goto tr1561;
		case 36: goto tr1562;
		case 44: goto tr1561;
		case 48: goto st690;
		case 53: goto st691;
		case 54: goto st692;
		case 55: goto st693;
		case 56: goto st694;
		case 59: goto st695;
		case 62: goto st696;
		case 79: goto st697;
		case 80: goto st698;
		case 81: goto st708;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1561;
	goto st0;
tr1560:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st687;
st687:
	if ( ++p == pe )
		goto _test_eof687;
case 687:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1573;
		case 23: goto st688;
		case 131091: goto st689;
		case 131109: goto st689;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st688;
		} else if ( _widec >= 15 )
			goto st688;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st688;
		} else if ( _widec >= 38 )
			goto st688;
	} else
		goto st688;
	goto st0;
tr1561:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st688;
tr1562:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st688;
tr1577:
	{ expr_open_parens++; }
	goto st688;
tr1579:
	{ expr_open_parens--; }
	goto st688;
st688:
	if ( ++p == pe )
		goto _test_eof688;
case 688:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st687;
		case 5: goto st687;
		case 8: goto st687;
		case 13: goto st688;
		case 18: goto tr1577;
		case 21: goto st688;
		case 23: goto st688;
		case 36: goto tr1577;
		case 44: goto st688;
	}
	goto st0;
tr1580:
	{ expr_open_parens--; }
	goto st689;
st689:
	if ( ++p == pe )
		goto _test_eof689;
case 689:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1578;
		case 23: goto tr1579;
		case 131091: goto tr1580;
		case 131109: goto tr1580;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1579;
		} else if ( _widec >= 15 )
			goto tr1579;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1579;
		} else if ( _widec >= 38 )
			goto tr1579;
	} else
		goto tr1579;
	goto st0;
st690:
	if ( ++p == pe )
		goto _test_eof690;
case 690:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1581;
	goto st0;
st691:
	if ( ++p == pe )
		goto _test_eof691;
case 691:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1582;
	goto st0;
st692:
	if ( ++p == pe )
		goto _test_eof692;
case 692:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1583;
	goto st0;
st693:
	if ( ++p == pe )
		goto _test_eof693;
case 693:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1584;
	goto st0;
st694:
	if ( ++p == pe )
		goto _test_eof694;
case 694:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1585;
	goto st0;
st695:
	if ( ++p == pe )
		goto _test_eof695;
case 695:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1586;
	goto st0;
st696:
	if ( ++p == pe )
		goto _test_eof696;
case 696:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1587;
	goto st0;
st697:
	if ( ++p == pe )
		goto _test_eof697;
case 697:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1588;
	goto st0;
st698:
	if ( ++p == pe )
		goto _test_eof698;
case 698:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1589;
		case 5: goto tr1589;
		case 8: goto tr1589;
		case 18: goto tr1591;
		case 19: goto st707;
		case 21: goto tr1590;
		case 23: goto tr1590;
		case 36: goto tr1591;
		case 44: goto tr1590;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1590;
	goto st0;
tr1589:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st699;
st699:
	if ( ++p == pe )
		goto _test_eof699;
case 699:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st700;
		case 65555: goto tr1594;
		case 131091: goto tr1595;
		case 131109: goto st705;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st700;
		} else if ( _widec >= 15 )
			goto st700;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st700;
		} else if ( _widec >= 38 )
			goto st700;
	} else
		goto st700;
	goto st0;
tr1598:
	{ expr_open_parens++; }
	goto st700;
tr1601:
	{ expr_open_parens--; }
	goto st700;
st700:
	if ( ++p == pe )
		goto _test_eof700;
case 700:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st701;
		case 5: goto st701;
		case 8: goto st701;
		case 13: goto st700;
		case 18: goto tr1598;
		case 21: goto st700;
		case 23: goto st700;
		case 36: goto tr1598;
		case 44: goto st700;
	}
	goto st0;
st701:
	if ( ++p == pe )
		goto _test_eof701;
case 701:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st700;
		case 65555: goto tr1594;
		case 131091: goto st703;
		case 131109: goto st703;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st700;
		} else if ( _widec >= 15 )
			goto st700;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st700;
		} else if ( _widec >= 38 )
			goto st700;
	} else
		goto st700;
	goto st0;
tr1594:
	{ push_expr(expr_start, p); }
	goto st702;
tr1602:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st702;
st702:
	if ( ++p == pe )
		goto _test_eof702;
case 702:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1600;
	goto st0;
tr1603:
	{ expr_open_parens--; }
	goto st703;
st703:
	if ( ++p == pe )
		goto _test_eof703;
case 703:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1601;
		case 65555: goto tr1602;
		case 131091: goto tr1603;
		case 131109: goto tr1603;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1601;
		} else if ( _widec >= 15 )
			goto tr1601;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1601;
		} else if ( _widec >= 38 )
			goto tr1601;
	} else
		goto tr1601;
	goto st0;
tr1595:
	{ push_expr(expr_start, p); }
	goto st704;
tr1604:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st704;
st704:
	if ( ++p == pe )
		goto _test_eof704;
case 704:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1600;
		case 23: goto tr1601;
		case 65555: goto tr1602;
		case 131091: goto tr1604;
		case 131109: goto tr1605;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1601;
		} else if ( _widec >= 15 )
			goto tr1601;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1601;
		} else if ( _widec >= 38 )
			goto tr1601;
	} else
		goto tr1601;
	goto st0;
tr1605:
	{ expr_open_parens--; }
	goto st705;
st705:
	if ( ++p == pe )
		goto _test_eof705;
case 705:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1601;
		case 65555: goto tr1602;
		case 131091: goto tr1604;
		case 131109: goto tr1605;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1601;
		} else if ( _widec >= 15 )
			goto tr1601;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1601;
		} else if ( _widec >= 38 )
			goto tr1601;
	} else
		goto tr1601;
	goto st0;
tr1590:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st706;
tr1591:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st706;
tr1608:
	{ expr_open_parens++; }
	goto st706;
st706:
	if ( ++p == pe )
		goto _test_eof706;
case 706:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st699;
		case 5: goto st699;
		case 8: goto st699;
		case 13: goto st706;
		case 18: goto tr1608;
		case 21: goto st706;
		case 23: goto st706;
		case 36: goto tr1608;
		case 44: goto st706;
	}
	goto st0;
st707:
	if ( ++p == pe )
		goto _test_eof707;
case 707:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1609;
	goto st0;
st708:
	if ( ++p == pe )
		goto _test_eof708;
case 708:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1610;
		case 5: goto tr1610;
		case 8: goto tr1610;
		case 18: goto tr1612;
		case 19: goto st717;
		case 21: goto tr1611;
		case 23: goto tr1611;
		case 36: goto tr1612;
		case 44: goto tr1611;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1611;
	goto st0;
tr1610:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st709;
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
		case 23: goto st710;
		case 65555: goto tr1615;
		case 131091: goto tr1616;
		case 131109: goto st715;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st710;
		} else if ( _widec >= 15 )
			goto st710;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st710;
		} else if ( _widec >= 38 )
			goto st710;
	} else
		goto st710;
	goto st0;
tr1619:
	{ expr_open_parens++; }
	goto st710;
tr1622:
	{ expr_open_parens--; }
	goto st710;
st710:
	if ( ++p == pe )
		goto _test_eof710;
case 710:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st711;
		case 5: goto st711;
		case 8: goto st711;
		case 13: goto st710;
		case 18: goto tr1619;
		case 21: goto st710;
		case 23: goto st710;
		case 36: goto tr1619;
		case 44: goto st710;
	}
	goto st0;
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
		case 23: goto st710;
		case 65555: goto tr1615;
		case 131091: goto st713;
		case 131109: goto st713;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st710;
		} else if ( _widec >= 15 )
			goto st710;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st710;
		} else if ( _widec >= 38 )
			goto st710;
	} else
		goto st710;
	goto st0;
tr1615:
	{ push_expr(expr_start, p); }
	goto st712;
tr1623:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st712;
st712:
	if ( ++p == pe )
		goto _test_eof712;
case 712:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1621;
	goto st0;
tr1624:
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
		case 23: goto tr1622;
		case 65555: goto tr1623;
		case 131091: goto tr1624;
		case 131109: goto tr1624;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1622;
		} else if ( _widec >= 15 )
			goto tr1622;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1622;
		} else if ( _widec >= 38 )
			goto tr1622;
	} else
		goto tr1622;
	goto st0;
tr1616:
	{ push_expr(expr_start, p); }
	goto st714;
tr1625:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st714;
st714:
	if ( ++p == pe )
		goto _test_eof714;
case 714:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1621;
		case 23: goto tr1622;
		case 65555: goto tr1623;
		case 131091: goto tr1625;
		case 131109: goto tr1626;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1622;
		} else if ( _widec >= 15 )
			goto tr1622;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1622;
		} else if ( _widec >= 38 )
			goto tr1622;
	} else
		goto tr1622;
	goto st0;
tr1626:
	{ expr_open_parens--; }
	goto st715;
st715:
	if ( ++p == pe )
		goto _test_eof715;
case 715:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1622;
		case 65555: goto tr1623;
		case 131091: goto tr1625;
		case 131109: goto tr1626;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1622;
		} else if ( _widec >= 15 )
			goto tr1622;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1622;
		} else if ( _widec >= 38 )
			goto tr1622;
	} else
		goto tr1622;
	goto st0;
tr1611:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st716;
tr1612:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st716;
tr1629:
	{ expr_open_parens++; }
	goto st716;
st716:
	if ( ++p == pe )
		goto _test_eof716;
case 716:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st709;
		case 5: goto st709;
		case 8: goto st709;
		case 13: goto st716;
		case 18: goto tr1629;
		case 21: goto st716;
		case 23: goto st716;
		case 36: goto tr1629;
		case 44: goto st716;
	}
	goto st0;
st717:
	if ( ++p == pe )
		goto _test_eof717;
case 717:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1630;
	goto st0;
st718:
	if ( ++p == pe )
		goto _test_eof718;
case 718:
	if ( ( ((int) p->tok)) == 22 )
		goto st719;
	goto st0;
st719:
	if ( ++p == pe )
		goto _test_eof719;
case 719:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1632;
		case 5: goto tr1632;
		case 8: goto tr1632;
		case 18: goto tr1634;
		case 21: goto tr1633;
		case 23: goto tr1633;
		case 36: goto tr1634;
		case 44: goto tr1633;
		case 48: goto st723;
		case 53: goto st724;
		case 54: goto st725;
		case 55: goto st726;
		case 57: goto st727;
		case 60: goto st728;
		case 62: goto st729;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1633;
	goto st0;
tr1632:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st720;
st720:
	if ( ++p == pe )
		goto _test_eof720;
case 720:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1642;
		case 23: goto st721;
		case 131091: goto st722;
		case 131109: goto st722;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st721;
		} else if ( _widec >= 15 )
			goto st721;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st721;
		} else if ( _widec >= 38 )
			goto st721;
	} else
		goto st721;
	goto st0;
tr1633:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st721;
tr1634:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st721;
tr1646:
	{ expr_open_parens++; }
	goto st721;
tr1648:
	{ expr_open_parens--; }
	goto st721;
st721:
	if ( ++p == pe )
		goto _test_eof721;
case 721:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st720;
		case 5: goto st720;
		case 8: goto st720;
		case 13: goto st721;
		case 18: goto tr1646;
		case 21: goto st721;
		case 23: goto st721;
		case 36: goto tr1646;
		case 44: goto st721;
	}
	goto st0;
tr1649:
	{ expr_open_parens--; }
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
		case 131091: goto tr1649;
		case 131109: goto tr1649;
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
st723:
	if ( ++p == pe )
		goto _test_eof723;
case 723:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1650;
	goto st0;
st724:
	if ( ++p == pe )
		goto _test_eof724;
case 724:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1651;
	goto st0;
st725:
	if ( ++p == pe )
		goto _test_eof725;
case 725:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1652;
	goto st0;
st726:
	if ( ++p == pe )
		goto _test_eof726;
case 726:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1653;
	goto st0;
st727:
	if ( ++p == pe )
		goto _test_eof727;
case 727:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1654;
	goto st0;
st728:
	if ( ++p == pe )
		goto _test_eof728;
case 728:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1655;
	goto st0;
st729:
	if ( ++p == pe )
		goto _test_eof729;
case 729:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1656;
	goto st0;
st730:
	if ( ++p == pe )
		goto _test_eof730;
case 730:
	if ( ( ((int) p->tok)) == 22 )
		goto st731;
	goto st0;
st731:
	if ( ++p == pe )
		goto _test_eof731;
case 731:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1658;
		case 5: goto tr1658;
		case 8: goto tr1658;
		case 18: goto tr1660;
		case 21: goto tr1659;
		case 23: goto tr1659;
		case 36: goto tr1660;
		case 44: goto tr1659;
		case 48: goto st735;
		case 53: goto st736;
		case 54: goto st737;
		case 55: goto st738;
		case 58: goto st739;
		case 61: goto st740;
		case 62: goto st741;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1659;
	goto st0;
tr1658:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st732;
st732:
	if ( ++p == pe )
		goto _test_eof732;
case 732:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 23: goto st733;
		case 131091: goto st734;
		case 131109: goto st734;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st733;
		} else if ( _widec >= 15 )
			goto st733;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st733;
		} else if ( _widec >= 38 )
			goto st733;
	} else
		goto st733;
	goto st0;
tr1659:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st733;
tr1660:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st733;
tr1672:
	{ expr_open_parens++; }
	goto st733;
tr1674:
	{ expr_open_parens--; }
	goto st733;
st733:
	if ( ++p == pe )
		goto _test_eof733;
case 733:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st732;
		case 5: goto st732;
		case 8: goto st732;
		case 13: goto st733;
		case 18: goto tr1672;
		case 21: goto st733;
		case 23: goto st733;
		case 36: goto tr1672;
		case 44: goto st733;
	}
	goto st0;
tr1675:
	{ expr_open_parens--; }
	goto st734;
st734:
	if ( ++p == pe )
		goto _test_eof734;
case 734:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
st735:
	if ( ++p == pe )
		goto _test_eof735;
case 735:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1676;
	goto st0;
st736:
	if ( ++p == pe )
		goto _test_eof736;
case 736:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1677;
	goto st0;
st737:
	if ( ++p == pe )
		goto _test_eof737;
case 737:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1678;
	goto st0;
st738:
	if ( ++p == pe )
		goto _test_eof738;
case 738:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1679;
	goto st0;
st739:
	if ( ++p == pe )
		goto _test_eof739;
case 739:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1680;
	goto st0;
st740:
	if ( ++p == pe )
		goto _test_eof740;
case 740:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1681;
	goto st0;
st741:
	if ( ++p == pe )
		goto _test_eof741;
case 741:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1682;
	goto st0;
st742:
	if ( ++p == pe )
		goto _test_eof742;
case 742:
	if ( ( ((int) p->tok)) == 22 )
		goto st743;
	goto st0;
st743:
	if ( ++p == pe )
		goto _test_eof743;
case 743:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1684;
		case 5: goto tr1684;
		case 8: goto tr1684;
		case 18: goto tr1686;
		case 21: goto tr1685;
		case 23: goto tr1685;
		case 36: goto tr1686;
		case 44: goto tr1685;
		case 48: goto st747;
		case 53: goto st748;
		case 54: goto st749;
		case 55: goto st750;
		case 56: goto st751;
		case 57: goto st752;
		case 58: goto st753;
		case 59: goto st754;
		case 60: goto st755;
		case 61: goto st756;
		case 62: goto st757;
		case 64: goto st758;
		case 65: goto st759;
		case 66: goto st760;
		case 67: goto st761;
		case 77: goto st762;
		case 78: goto st763;
		case 79: goto st764;
		case 80: goto st765;
		case 81: goto st775;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1685;
	goto st0;
tr1684:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st744;
st744:
	if ( ++p == pe )
		goto _test_eof744;
case 744:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1707;
		case 23: goto st745;
		case 131091: goto st746;
		case 131109: goto st746;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st745;
		} else if ( _widec >= 15 )
			goto st745;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st745;
		} else if ( _widec >= 38 )
			goto st745;
	} else
		goto st745;
	goto st0;
tr1685:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st745;
tr1686:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st745;
tr1711:
	{ expr_open_parens++; }
	goto st745;
tr1713:
	{ expr_open_parens--; }
	goto st745;
st745:
	if ( ++p == pe )
		goto _test_eof745;
case 745:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st744;
		case 5: goto st744;
		case 8: goto st744;
		case 13: goto st745;
		case 18: goto tr1711;
		case 21: goto st745;
		case 23: goto st745;
		case 36: goto tr1711;
		case 44: goto st745;
	}
	goto st0;
tr1714:
	{ expr_open_parens--; }
	goto st746;
st746:
	if ( ++p == pe )
		goto _test_eof746;
case 746:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1712;
		case 23: goto tr1713;
		case 131091: goto tr1714;
		case 131109: goto tr1714;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1713;
		} else if ( _widec >= 15 )
			goto tr1713;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1713;
		} else if ( _widec >= 38 )
			goto tr1713;
	} else
		goto tr1713;
	goto st0;
st747:
	if ( ++p == pe )
		goto _test_eof747;
case 747:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1715;
	goto st0;
st748:
	if ( ++p == pe )
		goto _test_eof748;
case 748:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1716;
	goto st0;
st749:
	if ( ++p == pe )
		goto _test_eof749;
case 749:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1717;
	goto st0;
st750:
	if ( ++p == pe )
		goto _test_eof750;
case 750:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1718;
	goto st0;
st751:
	if ( ++p == pe )
		goto _test_eof751;
case 751:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1719;
	goto st0;
st752:
	if ( ++p == pe )
		goto _test_eof752;
case 752:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1720;
	goto st0;
st753:
	if ( ++p == pe )
		goto _test_eof753;
case 753:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1721;
	goto st0;
st754:
	if ( ++p == pe )
		goto _test_eof754;
case 754:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1722;
	goto st0;
st755:
	if ( ++p == pe )
		goto _test_eof755;
case 755:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1723;
	goto st0;
st756:
	if ( ++p == pe )
		goto _test_eof756;
case 756:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1724;
	goto st0;
st757:
	if ( ++p == pe )
		goto _test_eof757;
case 757:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1725;
	goto st0;
st758:
	if ( ++p == pe )
		goto _test_eof758;
case 758:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1726;
	goto st0;
st759:
	if ( ++p == pe )
		goto _test_eof759;
case 759:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1727;
	goto st0;
st760:
	if ( ++p == pe )
		goto _test_eof760;
case 760:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1728;
	goto st0;
st761:
	if ( ++p == pe )
		goto _test_eof761;
case 761:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1729;
	goto st0;
st762:
	if ( ++p == pe )
		goto _test_eof762;
case 762:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1730;
	goto st0;
st763:
	if ( ++p == pe )
		goto _test_eof763;
case 763:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1731;
	goto st0;
st764:
	if ( ++p == pe )
		goto _test_eof764;
case 764:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1732;
	goto st0;
st765:
	if ( ++p == pe )
		goto _test_eof765;
case 765:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1733;
		case 5: goto tr1733;
		case 8: goto tr1733;
		case 18: goto tr1735;
		case 19: goto st774;
		case 21: goto tr1734;
		case 23: goto tr1734;
		case 36: goto tr1735;
		case 44: goto tr1734;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1734;
	goto st0;
tr1733:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st766;
st766:
	if ( ++p == pe )
		goto _test_eof766;
case 766:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st767;
		case 65555: goto tr1738;
		case 131091: goto tr1739;
		case 131109: goto st772;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st767;
		} else if ( _widec >= 15 )
			goto st767;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st767;
		} else if ( _widec >= 38 )
			goto st767;
	} else
		goto st767;
	goto st0;
tr1742:
	{ expr_open_parens++; }
	goto st767;
tr1745:
	{ expr_open_parens--; }
	goto st767;
st767:
	if ( ++p == pe )
		goto _test_eof767;
case 767:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st768;
		case 5: goto st768;
		case 8: goto st768;
		case 13: goto st767;
		case 18: goto tr1742;
		case 21: goto st767;
		case 23: goto st767;
		case 36: goto tr1742;
		case 44: goto st767;
	}
	goto st0;
st768:
	if ( ++p == pe )
		goto _test_eof768;
case 768:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st767;
		case 65555: goto tr1738;
		case 131091: goto st770;
		case 131109: goto st770;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st767;
		} else if ( _widec >= 15 )
			goto st767;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st767;
		} else if ( _widec >= 38 )
			goto st767;
	} else
		goto st767;
	goto st0;
tr1738:
	{ push_expr(expr_start, p); }
	goto st769;
tr1746:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st769;
st769:
	if ( ++p == pe )
		goto _test_eof769;
case 769:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1744;
	goto st0;
tr1747:
	{ expr_open_parens--; }
	goto st770;
st770:
	if ( ++p == pe )
		goto _test_eof770;
case 770:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1745;
		case 65555: goto tr1746;
		case 131091: goto tr1747;
		case 131109: goto tr1747;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1745;
		} else if ( _widec >= 15 )
			goto tr1745;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1745;
		} else if ( _widec >= 38 )
			goto tr1745;
	} else
		goto tr1745;
	goto st0;
tr1739:
	{ push_expr(expr_start, p); }
	goto st771;
tr1748:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st771;
st771:
	if ( ++p == pe )
		goto _test_eof771;
case 771:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1744;
		case 23: goto tr1745;
		case 65555: goto tr1746;
		case 131091: goto tr1748;
		case 131109: goto tr1749;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1745;
		} else if ( _widec >= 15 )
			goto tr1745;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1745;
		} else if ( _widec >= 38 )
			goto tr1745;
	} else
		goto tr1745;
	goto st0;
tr1749:
	{ expr_open_parens--; }
	goto st772;
st772:
	if ( ++p == pe )
		goto _test_eof772;
case 772:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1745;
		case 65555: goto tr1746;
		case 131091: goto tr1748;
		case 131109: goto tr1749;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1745;
		} else if ( _widec >= 15 )
			goto tr1745;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1745;
		} else if ( _widec >= 38 )
			goto tr1745;
	} else
		goto tr1745;
	goto st0;
tr1734:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st773;
tr1735:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st773;
tr1752:
	{ expr_open_parens++; }
	goto st773;
st773:
	if ( ++p == pe )
		goto _test_eof773;
case 773:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st766;
		case 5: goto st766;
		case 8: goto st766;
		case 13: goto st773;
		case 18: goto tr1752;
		case 21: goto st773;
		case 23: goto st773;
		case 36: goto tr1752;
		case 44: goto st773;
	}
	goto st0;
st774:
	if ( ++p == pe )
		goto _test_eof774;
case 774:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1753;
	goto st0;
st775:
	if ( ++p == pe )
		goto _test_eof775;
case 775:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1754;
		case 5: goto tr1754;
		case 8: goto tr1754;
		case 18: goto tr1756;
		case 19: goto st784;
		case 21: goto tr1755;
		case 23: goto tr1755;
		case 36: goto tr1756;
		case 44: goto tr1755;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1755;
	goto st0;
tr1754:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st776;
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
		case 23: goto st777;
		case 65555: goto tr1759;
		case 131091: goto tr1760;
		case 131109: goto st782;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st777;
		} else if ( _widec >= 15 )
			goto st777;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st777;
		} else if ( _widec >= 38 )
			goto st777;
	} else
		goto st777;
	goto st0;
tr1763:
	{ expr_open_parens++; }
	goto st777;
tr1766:
	{ expr_open_parens--; }
	goto st777;
st777:
	if ( ++p == pe )
		goto _test_eof777;
case 777:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st778;
		case 5: goto st778;
		case 8: goto st778;
		case 13: goto st777;
		case 18: goto tr1763;
		case 21: goto st777;
		case 23: goto st777;
		case 36: goto tr1763;
		case 44: goto st777;
	}
	goto st0;
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
		case 23: goto st777;
		case 65555: goto tr1759;
		case 131091: goto st780;
		case 131109: goto st780;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st777;
		} else if ( _widec >= 15 )
			goto st777;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st777;
		} else if ( _widec >= 38 )
			goto st777;
	} else
		goto st777;
	goto st0;
tr1759:
	{ push_expr(expr_start, p); }
	goto st779;
tr1767:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st779;
st779:
	if ( ++p == pe )
		goto _test_eof779;
case 779:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1765;
	goto st0;
tr1768:
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
		case 23: goto tr1766;
		case 65555: goto tr1767;
		case 131091: goto tr1768;
		case 131109: goto tr1768;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1766;
		} else if ( _widec >= 15 )
			goto tr1766;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1766;
		} else if ( _widec >= 38 )
			goto tr1766;
	} else
		goto tr1766;
	goto st0;
tr1760:
	{ push_expr(expr_start, p); }
	goto st781;
tr1769:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st781;
st781:
	if ( ++p == pe )
		goto _test_eof781;
case 781:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1765;
		case 23: goto tr1766;
		case 65555: goto tr1767;
		case 131091: goto tr1769;
		case 131109: goto tr1770;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1766;
		} else if ( _widec >= 15 )
			goto tr1766;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1766;
		} else if ( _widec >= 38 )
			goto tr1766;
	} else
		goto tr1766;
	goto st0;
tr1770:
	{ expr_open_parens--; }
	goto st782;
st782:
	if ( ++p == pe )
		goto _test_eof782;
case 782:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1766;
		case 65555: goto tr1767;
		case 131091: goto tr1769;
		case 131109: goto tr1770;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1766;
		} else if ( _widec >= 15 )
			goto tr1766;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1766;
		} else if ( _widec >= 38 )
			goto tr1766;
	} else
		goto tr1766;
	goto st0;
tr1755:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st783;
tr1756:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st783;
tr1773:
	{ expr_open_parens++; }
	goto st783;
st783:
	if ( ++p == pe )
		goto _test_eof783;
case 783:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st776;
		case 5: goto st776;
		case 8: goto st776;
		case 13: goto st783;
		case 18: goto tr1773;
		case 21: goto st783;
		case 23: goto st783;
		case 36: goto tr1773;
		case 44: goto st783;
	}
	goto st0;
st784:
	if ( ++p == pe )
		goto _test_eof784;
case 784:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1774;
	goto st0;
st785:
	if ( ++p == pe )
		goto _test_eof785;
case 785:
	if ( ( ((int) p->tok)) == 22 )
		goto st786;
	goto st0;
st786:
	if ( ++p == pe )
		goto _test_eof786;
case 786:
	if ( ( ((int) p->tok)) == 62 )
		goto st787;
	goto st0;
st787:
	if ( ++p == pe )
		goto _test_eof787;
case 787:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1777;
	goto st0;
st788:
	if ( ++p == pe )
		goto _test_eof788;
case 788:
	if ( ( ((int) p->tok)) == 22 )
		goto st789;
	goto st0;
st789:
	if ( ++p == pe )
		goto _test_eof789;
case 789:
	if ( ( ((int) p->tok)) == 62 )
		goto st790;
	goto st0;
st790:
	if ( ++p == pe )
		goto _test_eof790;
case 790:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1780;
	goto st0;
st791:
	if ( ++p == pe )
		goto _test_eof791;
case 791:
	if ( ( ((int) p->tok)) == 22 )
		goto st792;
	goto st0;
st792:
	if ( ++p == pe )
		goto _test_eof792;
case 792:
	if ( ( ((int) p->tok)) == 62 )
		goto st793;
	goto st0;
st793:
	if ( ++p == pe )
		goto _test_eof793;
case 793:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1783;
	goto st0;
st794:
	if ( ++p == pe )
		goto _test_eof794;
case 794:
	if ( ( ((int) p->tok)) == 22 )
		goto st795;
	goto st0;
st795:
	if ( ++p == pe )
		goto _test_eof795;
case 795:
	if ( ( ((int) p->tok)) == 62 )
		goto st796;
	goto st0;
st796:
	if ( ++p == pe )
		goto _test_eof796;
case 796:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1786;
	goto st0;
st797:
	if ( ++p == pe )
		goto _test_eof797;
case 797:
	if ( ( ((int) p->tok)) == 22 )
		goto st798;
	goto st0;
st798:
	if ( ++p == pe )
		goto _test_eof798;
case 798:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1788;
		case 5: goto tr1788;
		case 8: goto tr1788;
		case 18: goto tr1790;
		case 21: goto tr1789;
		case 23: goto tr1789;
		case 36: goto tr1790;
		case 44: goto tr1789;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1789;
	goto st0;
tr1788:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st799;
st799:
	if ( ++p == pe )
		goto _test_eof799;
case 799:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 23: goto st800;
		case 131091: goto st801;
		case 131109: goto st801;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st800;
		} else if ( _widec >= 15 )
			goto st800;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st800;
		} else if ( _widec >= 38 )
			goto st800;
	} else
		goto st800;
	goto st0;
tr1789:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st800;
tr1790:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st800;
tr1795:
	{ expr_open_parens++; }
	goto st800;
tr1797:
	{ expr_open_parens--; }
	goto st800;
st800:
	if ( ++p == pe )
		goto _test_eof800;
case 800:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st799;
		case 5: goto st799;
		case 8: goto st799;
		case 13: goto st800;
		case 18: goto tr1795;
		case 21: goto st800;
		case 23: goto st800;
		case 36: goto tr1795;
		case 44: goto st800;
	}
	goto st0;
tr1798:
	{ expr_open_parens--; }
	goto st801;
st801:
	if ( ++p == pe )
		goto _test_eof801;
case 801:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1796;
		case 23: goto tr1797;
		case 131091: goto tr1798;
		case 131109: goto tr1798;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1797;
		} else if ( _widec >= 15 )
			goto tr1797;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1797;
		} else if ( _widec >= 38 )
			goto tr1797;
	} else
		goto tr1797;
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
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1800;
		case 5: goto tr1800;
		case 8: goto tr1800;
		case 18: goto tr1802;
		case 21: goto tr1801;
		case 23: goto tr1801;
		case 36: goto tr1802;
		case 44: goto tr1801;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1801;
	goto st0;
tr1800:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st804;
st804:
	if ( ++p == pe )
		goto _test_eof804;
case 804:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1803;
		case 23: goto st805;
		case 131091: goto st806;
		case 131109: goto st806;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st805;
		} else if ( _widec >= 15 )
			goto st805;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st805;
		} else if ( _widec >= 38 )
			goto st805;
	} else
		goto st805;
	goto st0;
tr1801:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st805;
tr1802:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st805;
tr1807:
	{ expr_open_parens++; }
	goto st805;
tr1809:
	{ expr_open_parens--; }
	goto st805;
st805:
	if ( ++p == pe )
		goto _test_eof805;
case 805:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st804;
		case 5: goto st804;
		case 8: goto st804;
		case 13: goto st805;
		case 18: goto tr1807;
		case 21: goto st805;
		case 23: goto st805;
		case 36: goto tr1807;
		case 44: goto st805;
	}
	goto st0;
tr1810:
	{ expr_open_parens--; }
	goto st806;
st806:
	if ( ++p == pe )
		goto _test_eof806;
case 806:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1808;
		case 23: goto tr1809;
		case 131091: goto tr1810;
		case 131109: goto tr1810;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1809;
		} else if ( _widec >= 15 )
			goto tr1809;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1809;
		} else if ( _widec >= 38 )
			goto tr1809;
	} else
		goto tr1809;
	goto st0;
st807:
	if ( ++p == pe )
		goto _test_eof807;
case 807:
	if ( ( ((int) p->tok)) == 22 )
		goto st808;
	goto st0;
st808:
	if ( ++p == pe )
		goto _test_eof808;
case 808:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1812;
		case 5: goto tr1812;
		case 8: goto tr1812;
		case 18: goto tr1814;
		case 21: goto tr1813;
		case 23: goto tr1813;
		case 36: goto tr1814;
		case 44: goto tr1813;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1813;
	goto st0;
tr1812:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr1815;
		case 23: goto st810;
		case 131091: goto st811;
		case 131109: goto st811;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st810;
		} else if ( _widec >= 15 )
			goto st810;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st810;
		} else if ( _widec >= 38 )
			goto st810;
	} else
		goto st810;
	goto st0;
tr1813:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st810;
tr1814:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st810;
tr1819:
	{ expr_open_parens++; }
	goto st810;
tr1821:
	{ expr_open_parens--; }
	goto st810;
st810:
	if ( ++p == pe )
		goto _test_eof810;
case 810:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st809;
		case 5: goto st809;
		case 8: goto st809;
		case 13: goto st810;
		case 18: goto tr1819;
		case 21: goto st810;
		case 23: goto st810;
		case 36: goto tr1819;
		case 44: goto st810;
	}
	goto st0;
tr1822:
	{ expr_open_parens--; }
	goto st811;
st811:
	if ( ++p == pe )
		goto _test_eof811;
case 811:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1820;
		case 23: goto tr1821;
		case 131091: goto tr1822;
		case 131109: goto tr1822;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1821;
		} else if ( _widec >= 15 )
			goto tr1821;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1821;
		} else if ( _widec >= 38 )
			goto tr1821;
	} else
		goto tr1821;
	goto st0;
st812:
	if ( ++p == pe )
		goto _test_eof812;
case 812:
	if ( ( ((int) p->tok)) == 22 )
		goto st813;
	goto st0;
st813:
	if ( ++p == pe )
		goto _test_eof813;
case 813:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1824;
		case 5: goto tr1824;
		case 8: goto tr1824;
		case 18: goto tr1826;
		case 21: goto tr1825;
		case 23: goto tr1825;
		case 36: goto tr1826;
		case 44: goto tr1825;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1825;
	goto st0;
tr1824:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr1827;
		case 23: goto st815;
		case 131091: goto st816;
		case 131109: goto st816;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st815;
		} else if ( _widec >= 15 )
			goto st815;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st815;
		} else if ( _widec >= 38 )
			goto st815;
	} else
		goto st815;
	goto st0;
tr1825:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st815;
tr1826:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st815;
tr1831:
	{ expr_open_parens++; }
	goto st815;
tr1833:
	{ expr_open_parens--; }
	goto st815;
st815:
	if ( ++p == pe )
		goto _test_eof815;
case 815:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st814;
		case 5: goto st814;
		case 8: goto st814;
		case 13: goto st815;
		case 18: goto tr1831;
		case 21: goto st815;
		case 23: goto st815;
		case 36: goto tr1831;
		case 44: goto st815;
	}
	goto st0;
tr1834:
	{ expr_open_parens--; }
	goto st816;
st816:
	if ( ++p == pe )
		goto _test_eof816;
case 816:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1832;
		case 23: goto tr1833;
		case 131091: goto tr1834;
		case 131109: goto tr1834;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1833;
		} else if ( _widec >= 15 )
			goto tr1833;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1833;
		} else if ( _widec >= 38 )
			goto tr1833;
	} else
		goto tr1833;
	goto st0;
st817:
	if ( ++p == pe )
		goto _test_eof817;
case 817:
	if ( ( ((int) p->tok)) == 22 )
		goto st818;
	goto st0;
st818:
	if ( ++p == pe )
		goto _test_eof818;
case 818:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1836;
		case 5: goto tr1836;
		case 8: goto tr1836;
		case 18: goto tr1838;
		case 21: goto tr1837;
		case 23: goto tr1837;
		case 36: goto tr1838;
		case 44: goto tr1837;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1837;
	goto st0;
tr1836:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr1839;
		case 23: goto st820;
		case 131091: goto st821;
		case 131109: goto st821;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st820;
		} else if ( _widec >= 15 )
			goto st820;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st820;
		} else if ( _widec >= 38 )
			goto st820;
	} else
		goto st820;
	goto st0;
tr1837:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st820;
tr1838:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st820;
tr1843:
	{ expr_open_parens++; }
	goto st820;
tr1845:
	{ expr_open_parens--; }
	goto st820;
st820:
	if ( ++p == pe )
		goto _test_eof820;
case 820:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st819;
		case 5: goto st819;
		case 8: goto st819;
		case 13: goto st820;
		case 18: goto tr1843;
		case 21: goto st820;
		case 23: goto st820;
		case 36: goto tr1843;
		case 44: goto st820;
	}
	goto st0;
tr1846:
	{ expr_open_parens--; }
	goto st821;
st821:
	if ( ++p == pe )
		goto _test_eof821;
case 821:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1844;
		case 23: goto tr1845;
		case 131091: goto tr1846;
		case 131109: goto tr1846;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1845;
		} else if ( _widec >= 15 )
			goto tr1845;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1845;
		} else if ( _widec >= 38 )
			goto tr1845;
	} else
		goto tr1845;
	goto st0;
st822:
	if ( ++p == pe )
		goto _test_eof822;
case 822:
	if ( ( ((int) p->tok)) == 22 )
		goto st823;
	goto st0;
st823:
	if ( ++p == pe )
		goto _test_eof823;
case 823:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1848;
		case 5: goto tr1848;
		case 8: goto tr1848;
		case 18: goto tr1850;
		case 21: goto tr1849;
		case 23: goto tr1849;
		case 36: goto tr1850;
		case 44: goto tr1849;
		case 71: goto st827;
		case 72: goto st828;
		case 73: goto st829;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1849;
	goto st0;
tr1848:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr1854;
		case 23: goto st825;
		case 131091: goto st826;
		case 131109: goto st826;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st825;
		} else if ( _widec >= 15 )
			goto st825;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st825;
		} else if ( _widec >= 38 )
			goto st825;
	} else
		goto st825;
	goto st0;
tr1849:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st825;
tr1850:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st825;
tr1858:
	{ expr_open_parens++; }
	goto st825;
tr1860:
	{ expr_open_parens--; }
	goto st825;
st825:
	if ( ++p == pe )
		goto _test_eof825;
case 825:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st824;
		case 5: goto st824;
		case 8: goto st824;
		case 13: goto st825;
		case 18: goto tr1858;
		case 21: goto st825;
		case 23: goto st825;
		case 36: goto tr1858;
		case 44: goto st825;
	}
	goto st0;
tr1861:
	{ expr_open_parens--; }
	goto st826;
st826:
	if ( ++p == pe )
		goto _test_eof826;
case 826:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1859;
		case 23: goto tr1860;
		case 131091: goto tr1861;
		case 131109: goto tr1861;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1860;
		} else if ( _widec >= 15 )
			goto tr1860;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1860;
		} else if ( _widec >= 38 )
			goto tr1860;
	} else
		goto tr1860;
	goto st0;
st827:
	if ( ++p == pe )
		goto _test_eof827;
case 827:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1862;
	goto st0;
st828:
	if ( ++p == pe )
		goto _test_eof828;
case 828:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1863;
	goto st0;
st829:
	if ( ++p == pe )
		goto _test_eof829;
case 829:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1864;
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
	if ( ( ((int) p->tok)) == 62 )
		goto st832;
	goto st0;
st832:
	if ( ++p == pe )
		goto _test_eof832;
case 832:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1867;
	goto st0;
st833:
	if ( ++p == pe )
		goto _test_eof833;
case 833:
	if ( ( ((int) p->tok)) == 22 )
		goto st834;
	goto st0;
st834:
	if ( ++p == pe )
		goto _test_eof834;
case 834:
	if ( ( ((int) p->tok)) == 62 )
		goto st835;
	goto st0;
st835:
	if ( ++p == pe )
		goto _test_eof835;
case 835:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1870;
	goto st0;
st836:
	if ( ++p == pe )
		goto _test_eof836;
case 836:
	if ( ( ((int) p->tok)) == 22 )
		goto st837;
	goto st0;
st837:
	if ( ++p == pe )
		goto _test_eof837;
case 837:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1872;
		case 5: goto tr1872;
		case 8: goto tr1872;
		case 18: goto tr1874;
		case 21: goto tr1873;
		case 23: goto tr1873;
		case 36: goto tr1874;
		case 44: goto tr1873;
		case 48: goto st841;
		case 53: goto st842;
		case 54: goto st843;
		case 55: goto st844;
		case 56: goto st845;
		case 59: goto st846;
		case 62: goto st847;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1873;
	goto st0;
tr1872:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st838;
st838:
	if ( ++p == pe )
		goto _test_eof838;
case 838:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1882;
		case 23: goto st839;
		case 131091: goto st840;
		case 131109: goto st840;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st839;
		} else if ( _widec >= 15 )
			goto st839;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st839;
		} else if ( _widec >= 38 )
			goto st839;
	} else
		goto st839;
	goto st0;
tr1873:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st839;
tr1874:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st839;
tr1886:
	{ expr_open_parens++; }
	goto st839;
tr1888:
	{ expr_open_parens--; }
	goto st839;
st839:
	if ( ++p == pe )
		goto _test_eof839;
case 839:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st838;
		case 5: goto st838;
		case 8: goto st838;
		case 13: goto st839;
		case 18: goto tr1886;
		case 21: goto st839;
		case 23: goto st839;
		case 36: goto tr1886;
		case 44: goto st839;
	}
	goto st0;
tr1889:
	{ expr_open_parens--; }
	goto st840;
st840:
	if ( ++p == pe )
		goto _test_eof840;
case 840:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1887;
		case 23: goto tr1888;
		case 131091: goto tr1889;
		case 131109: goto tr1889;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1888;
		} else if ( _widec >= 15 )
			goto tr1888;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1888;
		} else if ( _widec >= 38 )
			goto tr1888;
	} else
		goto tr1888;
	goto st0;
st841:
	if ( ++p == pe )
		goto _test_eof841;
case 841:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1890;
	goto st0;
st842:
	if ( ++p == pe )
		goto _test_eof842;
case 842:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1891;
	goto st0;
st843:
	if ( ++p == pe )
		goto _test_eof843;
case 843:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1892;
	goto st0;
st844:
	if ( ++p == pe )
		goto _test_eof844;
case 844:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1893;
	goto st0;
st845:
	if ( ++p == pe )
		goto _test_eof845;
case 845:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1894;
	goto st0;
st846:
	if ( ++p == pe )
		goto _test_eof846;
case 846:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1895;
	goto st0;
st847:
	if ( ++p == pe )
		goto _test_eof847;
case 847:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1896;
	goto st0;
st848:
	if ( ++p == pe )
		goto _test_eof848;
case 848:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1897;
		case 5: goto tr1897;
		case 8: goto tr1897;
		case 18: goto tr1899;
		case 19: goto st868;
		case 21: goto tr1898;
		case 23: goto tr1898;
		case 36: goto tr1899;
		case 44: goto tr1898;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1898;
	goto st0;
tr1897:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st849;
st849:
	if ( ++p == pe )
		goto _test_eof849;
case 849:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st850;
		case 65555: goto tr1902;
		case 131091: goto tr1903;
		case 131109: goto st866;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st850;
		} else if ( _widec >= 15 )
			goto st850;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st850;
		} else if ( _widec >= 38 )
			goto st850;
	} else
		goto st850;
	goto st0;
tr1906:
	{ expr_open_parens++; }
	goto st850;
tr1934:
	{ expr_open_parens--; }
	goto st850;
st850:
	if ( ++p == pe )
		goto _test_eof850;
case 850:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st851;
		case 5: goto st851;
		case 8: goto st851;
		case 13: goto st850;
		case 18: goto tr1906;
		case 21: goto st850;
		case 23: goto st850;
		case 36: goto tr1906;
		case 44: goto st850;
	}
	goto st0;
st851:
	if ( ++p == pe )
		goto _test_eof851;
case 851:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st850;
		case 65555: goto tr1902;
		case 131091: goto st864;
		case 131109: goto st864;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st850;
		} else if ( _widec >= 15 )
			goto st850;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st850;
		} else if ( _widec >= 38 )
			goto st850;
	} else
		goto st850;
	goto st0;
tr1902:
	{ push_expr(expr_start, p); }
	goto st852;
tr1935:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st852;
st852:
	if ( ++p == pe )
		goto _test_eof852;
case 852:
	if ( ( ((int) p->tok)) == 22 )
		goto st853;
	goto st0;
st853:
	if ( ++p == pe )
		goto _test_eof853;
case 853:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1909;
		case 5: goto tr1909;
		case 8: goto tr1909;
		case 18: goto tr1911;
		case 21: goto tr1910;
		case 23: goto tr1910;
		case 36: goto tr1911;
		case 44: goto tr1910;
		case 48: goto st857;
		case 53: goto st858;
		case 54: goto st859;
		case 55: goto st860;
		case 56: goto st861;
		case 59: goto st862;
		case 62: goto st863;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1910;
	goto st0;
tr1909:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st854;
st854:
	if ( ++p == pe )
		goto _test_eof854;
case 854:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1919;
		case 23: goto st855;
		case 131091: goto st856;
		case 131109: goto st856;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st855;
		} else if ( _widec >= 15 )
			goto st855;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st855;
		} else if ( _widec >= 38 )
			goto st855;
	} else
		goto st855;
	goto st0;
tr1910:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st855;
tr1911:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st855;
tr1923:
	{ expr_open_parens++; }
	goto st855;
tr1925:
	{ expr_open_parens--; }
	goto st855;
st855:
	if ( ++p == pe )
		goto _test_eof855;
case 855:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st854;
		case 5: goto st854;
		case 8: goto st854;
		case 13: goto st855;
		case 18: goto tr1923;
		case 21: goto st855;
		case 23: goto st855;
		case 36: goto tr1923;
		case 44: goto st855;
	}
	goto st0;
tr1926:
	{ expr_open_parens--; }
	goto st856;
st856:
	if ( ++p == pe )
		goto _test_eof856;
case 856:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1924;
		case 23: goto tr1925;
		case 131091: goto tr1926;
		case 131109: goto tr1926;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1925;
		} else if ( _widec >= 15 )
			goto tr1925;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1925;
		} else if ( _widec >= 38 )
			goto tr1925;
	} else
		goto tr1925;
	goto st0;
st857:
	if ( ++p == pe )
		goto _test_eof857;
case 857:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1927;
	goto st0;
st858:
	if ( ++p == pe )
		goto _test_eof858;
case 858:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1928;
	goto st0;
st859:
	if ( ++p == pe )
		goto _test_eof859;
case 859:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1929;
	goto st0;
st860:
	if ( ++p == pe )
		goto _test_eof860;
case 860:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1930;
	goto st0;
st861:
	if ( ++p == pe )
		goto _test_eof861;
case 861:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1931;
	goto st0;
st862:
	if ( ++p == pe )
		goto _test_eof862;
case 862:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1932;
	goto st0;
st863:
	if ( ++p == pe )
		goto _test_eof863;
case 863:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1933;
	goto st0;
tr1936:
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
		case 23: goto tr1934;
		case 65555: goto tr1935;
		case 131091: goto tr1936;
		case 131109: goto tr1936;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1934;
		} else if ( _widec >= 15 )
			goto tr1934;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1934;
		} else if ( _widec >= 38 )
			goto tr1934;
	} else
		goto tr1934;
	goto st0;
tr1903:
	{ push_expr(expr_start, p); }
	goto st865;
tr1937:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st865;
st865:
	if ( ++p == pe )
		goto _test_eof865;
case 865:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto st853;
		case 65555: goto tr1935;
		case 131091: goto tr1937;
		case 131109: goto tr1938;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr1934;
		} else if ( _widec >= 15 )
			goto tr1934;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1934;
		} else if ( _widec >= 38 )
			goto tr1934;
	} else
		goto tr1934;
	goto st0;
tr1938:
	{ expr_open_parens--; }
	goto st866;
st866:
	if ( ++p == pe )
		goto _test_eof866;
case 866:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr1934;
		case 65555: goto tr1935;
		case 131091: goto tr1937;
		case 131109: goto tr1938;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1934;
		} else if ( _widec >= 15 )
			goto tr1934;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1934;
		} else if ( _widec >= 38 )
			goto tr1934;
	} else
		goto tr1934;
	goto st0;
tr1898:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st867;
tr1899:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st867;
tr1941:
	{ expr_open_parens++; }
	goto st867;
st867:
	if ( ++p == pe )
		goto _test_eof867;
case 867:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st849;
		case 5: goto st849;
		case 8: goto st849;
		case 13: goto st867;
		case 18: goto tr1941;
		case 21: goto st867;
		case 23: goto st867;
		case 36: goto tr1941;
		case 44: goto st867;
	}
	goto st0;
st868:
	if ( ++p == pe )
		goto _test_eof868;
case 868:
	if ( ( ((int) p->tok)) == 22 )
		goto st869;
	goto st0;
st869:
	if ( ++p == pe )
		goto _test_eof869;
case 869:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1943;
		case 5: goto tr1943;
		case 8: goto tr1943;
		case 18: goto tr1945;
		case 21: goto tr1944;
		case 23: goto tr1944;
		case 36: goto tr1945;
		case 44: goto tr1944;
		case 48: goto st873;
		case 53: goto st874;
		case 54: goto st875;
		case 55: goto st876;
		case 56: goto st877;
		case 59: goto st878;
		case 62: goto st879;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1944;
	goto st0;
tr1943:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st870;
st870:
	if ( ++p == pe )
		goto _test_eof870;
case 870:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1953;
		case 23: goto st871;
		case 131091: goto st872;
		case 131109: goto st872;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st871;
		} else if ( _widec >= 15 )
			goto st871;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st871;
		} else if ( _widec >= 38 )
			goto st871;
	} else
		goto st871;
	goto st0;
tr1944:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st871;
tr1945:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st871;
tr1957:
	{ expr_open_parens++; }
	goto st871;
tr1959:
	{ expr_open_parens--; }
	goto st871;
st871:
	if ( ++p == pe )
		goto _test_eof871;
case 871:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st870;
		case 5: goto st870;
		case 8: goto st870;
		case 13: goto st871;
		case 18: goto tr1957;
		case 21: goto st871;
		case 23: goto st871;
		case 36: goto tr1957;
		case 44: goto st871;
	}
	goto st0;
tr1960:
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
		case 12: goto tr1958;
		case 23: goto tr1959;
		case 131091: goto tr1960;
		case 131109: goto tr1960;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1959;
		} else if ( _widec >= 15 )
			goto tr1959;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1959;
		} else if ( _widec >= 38 )
			goto tr1959;
	} else
		goto tr1959;
	goto st0;
st873:
	if ( ++p == pe )
		goto _test_eof873;
case 873:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1961;
	goto st0;
st874:
	if ( ++p == pe )
		goto _test_eof874;
case 874:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1962;
	goto st0;
st875:
	if ( ++p == pe )
		goto _test_eof875;
case 875:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1963;
	goto st0;
st876:
	if ( ++p == pe )
		goto _test_eof876;
case 876:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1964;
	goto st0;
st877:
	if ( ++p == pe )
		goto _test_eof877;
case 877:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1965;
	goto st0;
st878:
	if ( ++p == pe )
		goto _test_eof878;
case 878:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1966;
	goto st0;
st879:
	if ( ++p == pe )
		goto _test_eof879;
case 879:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1967;
	goto st0;
st880:
	if ( ++p == pe )
		goto _test_eof880;
case 880:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1968;
		case 5: goto tr1968;
		case 8: goto tr1968;
		case 18: goto tr1970;
		case 19: goto st900;
		case 21: goto tr1969;
		case 23: goto tr1969;
		case 36: goto tr1970;
		case 44: goto tr1969;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1969;
	goto st0;
tr1968:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st881;
st881:
	if ( ++p == pe )
		goto _test_eof881;
case 881:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st882;
		case 65555: goto tr1973;
		case 131091: goto tr1974;
		case 131109: goto st898;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st882;
		} else if ( _widec >= 15 )
			goto st882;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st882;
		} else if ( _widec >= 38 )
			goto st882;
	} else
		goto st882;
	goto st0;
tr1977:
	{ expr_open_parens++; }
	goto st882;
tr2005:
	{ expr_open_parens--; }
	goto st882;
st882:
	if ( ++p == pe )
		goto _test_eof882;
case 882:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st883;
		case 5: goto st883;
		case 8: goto st883;
		case 13: goto st882;
		case 18: goto tr1977;
		case 21: goto st882;
		case 23: goto st882;
		case 36: goto tr1977;
		case 44: goto st882;
	}
	goto st0;
st883:
	if ( ++p == pe )
		goto _test_eof883;
case 883:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st882;
		case 65555: goto tr1973;
		case 131091: goto st896;
		case 131109: goto st896;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st882;
		} else if ( _widec >= 15 )
			goto st882;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st882;
		} else if ( _widec >= 38 )
			goto st882;
	} else
		goto st882;
	goto st0;
tr1973:
	{ push_expr(expr_start, p); }
	goto st884;
tr2006:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st884;
st884:
	if ( ++p == pe )
		goto _test_eof884;
case 884:
	if ( ( ((int) p->tok)) == 22 )
		goto st885;
	goto st0;
st885:
	if ( ++p == pe )
		goto _test_eof885;
case 885:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr1980;
		case 5: goto tr1980;
		case 8: goto tr1980;
		case 18: goto tr1982;
		case 21: goto tr1981;
		case 23: goto tr1981;
		case 36: goto tr1982;
		case 44: goto tr1981;
		case 48: goto st889;
		case 53: goto st890;
		case 54: goto st891;
		case 55: goto st892;
		case 56: goto st893;
		case 59: goto st894;
		case 62: goto st895;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr1981;
	goto st0;
tr1980:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st886;
st886:
	if ( ++p == pe )
		goto _test_eof886;
case 886:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1990;
		case 23: goto st887;
		case 131091: goto st888;
		case 131109: goto st888;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st887;
		} else if ( _widec >= 15 )
			goto st887;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st887;
		} else if ( _widec >= 38 )
			goto st887;
	} else
		goto st887;
	goto st0;
tr1981:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st887;
tr1982:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st887;
tr1994:
	{ expr_open_parens++; }
	goto st887;
tr1996:
	{ expr_open_parens--; }
	goto st887;
st887:
	if ( ++p == pe )
		goto _test_eof887;
case 887:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st886;
		case 5: goto st886;
		case 8: goto st886;
		case 13: goto st887;
		case 18: goto tr1994;
		case 21: goto st887;
		case 23: goto st887;
		case 36: goto tr1994;
		case 44: goto st887;
	}
	goto st0;
tr1997:
	{ expr_open_parens--; }
	goto st888;
st888:
	if ( ++p == pe )
		goto _test_eof888;
case 888:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr1995;
		case 23: goto tr1996;
		case 131091: goto tr1997;
		case 131109: goto tr1997;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr1996;
		} else if ( _widec >= 15 )
			goto tr1996;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr1996;
		} else if ( _widec >= 38 )
			goto tr1996;
	} else
		goto tr1996;
	goto st0;
st889:
	if ( ++p == pe )
		goto _test_eof889;
case 889:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1998;
	goto st0;
st890:
	if ( ++p == pe )
		goto _test_eof890;
case 890:
	if ( ( ((int) p->tok)) == 12 )
		goto tr1999;
	goto st0;
st891:
	if ( ++p == pe )
		goto _test_eof891;
case 891:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2000;
	goto st0;
st892:
	if ( ++p == pe )
		goto _test_eof892;
case 892:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2001;
	goto st0;
st893:
	if ( ++p == pe )
		goto _test_eof893;
case 893:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2002;
	goto st0;
st894:
	if ( ++p == pe )
		goto _test_eof894;
case 894:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2003;
	goto st0;
st895:
	if ( ++p == pe )
		goto _test_eof895;
case 895:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2004;
	goto st0;
tr2007:
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
		case 23: goto tr2005;
		case 65555: goto tr2006;
		case 131091: goto tr2007;
		case 131109: goto tr2007;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2005;
		} else if ( _widec >= 15 )
			goto tr2005;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2005;
		} else if ( _widec >= 38 )
			goto tr2005;
	} else
		goto tr2005;
	goto st0;
tr1974:
	{ push_expr(expr_start, p); }
	goto st897;
tr2008:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st897;
st897:
	if ( ++p == pe )
		goto _test_eof897;
case 897:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto st885;
		case 65555: goto tr2006;
		case 131091: goto tr2008;
		case 131109: goto tr2009;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2005;
		} else if ( _widec >= 15 )
			goto tr2005;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2005;
		} else if ( _widec >= 38 )
			goto tr2005;
	} else
		goto tr2005;
	goto st0;
tr2009:
	{ expr_open_parens--; }
	goto st898;
st898:
	if ( ++p == pe )
		goto _test_eof898;
case 898:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2005;
		case 65555: goto tr2006;
		case 131091: goto tr2008;
		case 131109: goto tr2009;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2005;
		} else if ( _widec >= 15 )
			goto tr2005;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2005;
		} else if ( _widec >= 38 )
			goto tr2005;
	} else
		goto tr2005;
	goto st0;
tr1969:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st899;
tr1970:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st899;
tr2012:
	{ expr_open_parens++; }
	goto st899;
st899:
	if ( ++p == pe )
		goto _test_eof899;
case 899:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st881;
		case 5: goto st881;
		case 8: goto st881;
		case 13: goto st899;
		case 18: goto tr2012;
		case 21: goto st899;
		case 23: goto st899;
		case 36: goto tr2012;
		case 44: goto st899;
	}
	goto st0;
st900:
	if ( ++p == pe )
		goto _test_eof900;
case 900:
	if ( ( ((int) p->tok)) == 22 )
		goto st901;
	goto st0;
st901:
	if ( ++p == pe )
		goto _test_eof901;
case 901:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2014;
		case 5: goto tr2014;
		case 8: goto tr2014;
		case 18: goto tr2016;
		case 21: goto tr2015;
		case 23: goto tr2015;
		case 36: goto tr2016;
		case 44: goto tr2015;
		case 48: goto st905;
		case 53: goto st906;
		case 54: goto st907;
		case 55: goto st908;
		case 56: goto st909;
		case 59: goto st910;
		case 62: goto st911;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2015;
	goto st0;
tr2014:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st902;
st902:
	if ( ++p == pe )
		goto _test_eof902;
case 902:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2024;
		case 23: goto st903;
		case 131091: goto st904;
		case 131109: goto st904;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st903;
		} else if ( _widec >= 15 )
			goto st903;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st903;
		} else if ( _widec >= 38 )
			goto st903;
	} else
		goto st903;
	goto st0;
tr2015:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st903;
tr2016:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st903;
tr2028:
	{ expr_open_parens++; }
	goto st903;
tr2030:
	{ expr_open_parens--; }
	goto st903;
st903:
	if ( ++p == pe )
		goto _test_eof903;
case 903:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st902;
		case 5: goto st902;
		case 8: goto st902;
		case 13: goto st903;
		case 18: goto tr2028;
		case 21: goto st903;
		case 23: goto st903;
		case 36: goto tr2028;
		case 44: goto st903;
	}
	goto st0;
tr2031:
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
		case 12: goto tr2029;
		case 23: goto tr2030;
		case 131091: goto tr2031;
		case 131109: goto tr2031;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2030;
		} else if ( _widec >= 15 )
			goto tr2030;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2030;
		} else if ( _widec >= 38 )
			goto tr2030;
	} else
		goto tr2030;
	goto st0;
st905:
	if ( ++p == pe )
		goto _test_eof905;
case 905:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2032;
	goto st0;
st906:
	if ( ++p == pe )
		goto _test_eof906;
case 906:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2033;
	goto st0;
st907:
	if ( ++p == pe )
		goto _test_eof907;
case 907:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2034;
	goto st0;
st908:
	if ( ++p == pe )
		goto _test_eof908;
case 908:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2035;
	goto st0;
st909:
	if ( ++p == pe )
		goto _test_eof909;
case 909:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2036;
	goto st0;
st910:
	if ( ++p == pe )
		goto _test_eof910;
case 910:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2037;
	goto st0;
st911:
	if ( ++p == pe )
		goto _test_eof911;
case 911:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2038;
	goto st0;
st912:
	if ( ++p == pe )
		goto _test_eof912;
case 912:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2039;
	goto st0;
st913:
	if ( ++p == pe )
		goto _test_eof913;
case 913:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2040;
	goto st0;
st914:
	if ( ++p == pe )
		goto _test_eof914;
case 914:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2041;
	goto st0;
st915:
	if ( ++p == pe )
		goto _test_eof915;
case 915:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2042;
	goto st0;
st916:
	if ( ++p == pe )
		goto _test_eof916;
case 916:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2043;
	goto st0;
st917:
	if ( ++p == pe )
		goto _test_eof917;
case 917:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2044;
	goto st0;
st918:
	if ( ++p == pe )
		goto _test_eof918;
case 918:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2045;
		case 5: goto tr2045;
		case 8: goto tr2045;
		case 18: goto tr2047;
		case 21: goto tr2046;
		case 23: goto tr2046;
		case 36: goto tr2047;
		case 44: goto tr2046;
		case 48: goto st922;
		case 53: goto st923;
		case 54: goto st924;
		case 55: goto st925;
		case 56: goto st926;
		case 57: goto st927;
		case 58: goto st928;
		case 59: goto st929;
		case 60: goto st930;
		case 61: goto st931;
		case 62: goto st932;
		case 79: goto st935;
		case 80: goto st936;
		case 81: goto st946;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2046;
	goto st0;
tr2045:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st919;
st919:
	if ( ++p == pe )
		goto _test_eof919;
case 919:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2062;
		case 23: goto st920;
		case 131091: goto st921;
		case 131109: goto st921;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st920;
		} else if ( _widec >= 15 )
			goto st920;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st920;
		} else if ( _widec >= 38 )
			goto st920;
	} else
		goto st920;
	goto st0;
tr2046:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st920;
tr2047:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st920;
tr2066:
	{ expr_open_parens++; }
	goto st920;
tr2068:
	{ expr_open_parens--; }
	goto st920;
st920:
	if ( ++p == pe )
		goto _test_eof920;
case 920:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st919;
		case 5: goto st919;
		case 8: goto st919;
		case 13: goto st920;
		case 18: goto tr2066;
		case 21: goto st920;
		case 23: goto st920;
		case 36: goto tr2066;
		case 44: goto st920;
	}
	goto st0;
tr2069:
	{ expr_open_parens--; }
	goto st921;
st921:
	if ( ++p == pe )
		goto _test_eof921;
case 921:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2067;
		case 23: goto tr2068;
		case 131091: goto tr2069;
		case 131109: goto tr2069;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2068;
		} else if ( _widec >= 15 )
			goto tr2068;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2068;
		} else if ( _widec >= 38 )
			goto tr2068;
	} else
		goto tr2068;
	goto st0;
st922:
	if ( ++p == pe )
		goto _test_eof922;
case 922:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2070;
	goto st0;
st923:
	if ( ++p == pe )
		goto _test_eof923;
case 923:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2071;
	goto st0;
st924:
	if ( ++p == pe )
		goto _test_eof924;
case 924:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2072;
	goto st0;
st925:
	if ( ++p == pe )
		goto _test_eof925;
case 925:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2073;
	goto st0;
st926:
	if ( ++p == pe )
		goto _test_eof926;
case 926:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2074;
	goto st0;
st927:
	if ( ++p == pe )
		goto _test_eof927;
case 927:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2075;
	goto st0;
st928:
	if ( ++p == pe )
		goto _test_eof928;
case 928:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2076;
	goto st0;
st929:
	if ( ++p == pe )
		goto _test_eof929;
case 929:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2077;
	goto st0;
st930:
	if ( ++p == pe )
		goto _test_eof930;
case 930:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2078;
	goto st0;
st931:
	if ( ++p == pe )
		goto _test_eof931;
case 931:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2079;
	goto st0;
st932:
	if ( ++p == pe )
		goto _test_eof932;
case 932:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2080;
		case 22: goto st933;
	}
	goto st0;
st933:
	if ( ++p == pe )
		goto _test_eof933;
case 933:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2045;
		case 5: goto tr2045;
		case 8: goto tr2045;
		case 18: goto tr2047;
		case 21: goto tr2046;
		case 23: goto tr2046;
		case 36: goto tr2047;
		case 44: goto tr2046;
		case 48: goto st922;
		case 53: goto st923;
		case 54: goto st924;
		case 55: goto st925;
		case 56: goto st926;
		case 57: goto st927;
		case 58: goto st928;
		case 59: goto st929;
		case 60: goto st930;
		case 61: goto st931;
		case 62: goto st934;
		case 79: goto st935;
		case 80: goto st936;
		case 81: goto st946;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2046;
	goto st0;
st934:
	if ( ++p == pe )
		goto _test_eof934;
case 934:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2080;
	goto st0;
st935:
	if ( ++p == pe )
		goto _test_eof935;
case 935:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2083;
	goto st0;
st936:
	if ( ++p == pe )
		goto _test_eof936;
case 936:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2084;
		case 5: goto tr2084;
		case 8: goto tr2084;
		case 18: goto tr2086;
		case 19: goto st945;
		case 21: goto tr2085;
		case 23: goto tr2085;
		case 36: goto tr2086;
		case 44: goto tr2085;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2085;
	goto st0;
tr2084:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st937;
st937:
	if ( ++p == pe )
		goto _test_eof937;
case 937:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st938;
		case 65555: goto tr2089;
		case 131091: goto tr2090;
		case 131109: goto st943;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st938;
		} else if ( _widec >= 15 )
			goto st938;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st938;
		} else if ( _widec >= 38 )
			goto st938;
	} else
		goto st938;
	goto st0;
tr2093:
	{ expr_open_parens++; }
	goto st938;
tr2096:
	{ expr_open_parens--; }
	goto st938;
st938:
	if ( ++p == pe )
		goto _test_eof938;
case 938:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st939;
		case 5: goto st939;
		case 8: goto st939;
		case 13: goto st938;
		case 18: goto tr2093;
		case 21: goto st938;
		case 23: goto st938;
		case 36: goto tr2093;
		case 44: goto st938;
	}
	goto st0;
st939:
	if ( ++p == pe )
		goto _test_eof939;
case 939:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st938;
		case 65555: goto tr2089;
		case 131091: goto st941;
		case 131109: goto st941;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st938;
		} else if ( _widec >= 15 )
			goto st938;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st938;
		} else if ( _widec >= 38 )
			goto st938;
	} else
		goto st938;
	goto st0;
tr2089:
	{ push_expr(expr_start, p); }
	goto st940;
tr2097:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st940;
st940:
	if ( ++p == pe )
		goto _test_eof940;
case 940:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2095;
	goto st0;
tr2098:
	{ expr_open_parens--; }
	goto st941;
st941:
	if ( ++p == pe )
		goto _test_eof941;
case 941:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2096;
		case 65555: goto tr2097;
		case 131091: goto tr2098;
		case 131109: goto tr2098;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2096;
		} else if ( _widec >= 15 )
			goto tr2096;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2096;
		} else if ( _widec >= 38 )
			goto tr2096;
	} else
		goto tr2096;
	goto st0;
tr2090:
	{ push_expr(expr_start, p); }
	goto st942;
tr2099:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st942;
st942:
	if ( ++p == pe )
		goto _test_eof942;
case 942:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2095;
		case 23: goto tr2096;
		case 65555: goto tr2097;
		case 131091: goto tr2099;
		case 131109: goto tr2100;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2096;
		} else if ( _widec >= 15 )
			goto tr2096;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2096;
		} else if ( _widec >= 38 )
			goto tr2096;
	} else
		goto tr2096;
	goto st0;
tr2100:
	{ expr_open_parens--; }
	goto st943;
st943:
	if ( ++p == pe )
		goto _test_eof943;
case 943:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2096;
		case 65555: goto tr2097;
		case 131091: goto tr2099;
		case 131109: goto tr2100;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2096;
		} else if ( _widec >= 15 )
			goto tr2096;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2096;
		} else if ( _widec >= 38 )
			goto tr2096;
	} else
		goto tr2096;
	goto st0;
tr2085:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st944;
tr2086:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st944;
tr2103:
	{ expr_open_parens++; }
	goto st944;
st944:
	if ( ++p == pe )
		goto _test_eof944;
case 944:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st937;
		case 5: goto st937;
		case 8: goto st937;
		case 13: goto st944;
		case 18: goto tr2103;
		case 21: goto st944;
		case 23: goto st944;
		case 36: goto tr2103;
		case 44: goto st944;
	}
	goto st0;
st945:
	if ( ++p == pe )
		goto _test_eof945;
case 945:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2104;
	goto st0;
st946:
	if ( ++p == pe )
		goto _test_eof946;
case 946:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2105;
		case 5: goto tr2105;
		case 8: goto tr2105;
		case 18: goto tr2107;
		case 19: goto st955;
		case 21: goto tr2106;
		case 23: goto tr2106;
		case 36: goto tr2107;
		case 44: goto tr2106;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2106;
	goto st0;
tr2105:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st947;
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
		case 23: goto st948;
		case 65555: goto tr2110;
		case 131091: goto tr2111;
		case 131109: goto st953;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st948;
		} else if ( _widec >= 15 )
			goto st948;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st948;
		} else if ( _widec >= 38 )
			goto st948;
	} else
		goto st948;
	goto st0;
tr2114:
	{ expr_open_parens++; }
	goto st948;
tr2117:
	{ expr_open_parens--; }
	goto st948;
st948:
	if ( ++p == pe )
		goto _test_eof948;
case 948:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st949;
		case 5: goto st949;
		case 8: goto st949;
		case 13: goto st948;
		case 18: goto tr2114;
		case 21: goto st948;
		case 23: goto st948;
		case 36: goto tr2114;
		case 44: goto st948;
	}
	goto st0;
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
		case 23: goto st948;
		case 65555: goto tr2110;
		case 131091: goto st951;
		case 131109: goto st951;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st948;
		} else if ( _widec >= 15 )
			goto st948;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st948;
		} else if ( _widec >= 38 )
			goto st948;
	} else
		goto st948;
	goto st0;
tr2110:
	{ push_expr(expr_start, p); }
	goto st950;
tr2118:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st950;
st950:
	if ( ++p == pe )
		goto _test_eof950;
case 950:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2116;
	goto st0;
tr2119:
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
		case 23: goto tr2117;
		case 65555: goto tr2118;
		case 131091: goto tr2119;
		case 131109: goto tr2119;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2117;
		} else if ( _widec >= 15 )
			goto tr2117;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2117;
		} else if ( _widec >= 38 )
			goto tr2117;
	} else
		goto tr2117;
	goto st0;
tr2111:
	{ push_expr(expr_start, p); }
	goto st952;
tr2120:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st952;
st952:
	if ( ++p == pe )
		goto _test_eof952;
case 952:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2116;
		case 23: goto tr2117;
		case 65555: goto tr2118;
		case 131091: goto tr2120;
		case 131109: goto tr2121;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2117;
		} else if ( _widec >= 15 )
			goto tr2117;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2117;
		} else if ( _widec >= 38 )
			goto tr2117;
	} else
		goto tr2117;
	goto st0;
tr2121:
	{ expr_open_parens--; }
	goto st953;
st953:
	if ( ++p == pe )
		goto _test_eof953;
case 953:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2117;
		case 65555: goto tr2118;
		case 131091: goto tr2120;
		case 131109: goto tr2121;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2117;
		} else if ( _widec >= 15 )
			goto tr2117;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2117;
		} else if ( _widec >= 38 )
			goto tr2117;
	} else
		goto tr2117;
	goto st0;
tr2106:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st954;
tr2107:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st954;
tr2124:
	{ expr_open_parens++; }
	goto st954;
st954:
	if ( ++p == pe )
		goto _test_eof954;
case 954:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st947;
		case 5: goto st947;
		case 8: goto st947;
		case 13: goto st954;
		case 18: goto tr2124;
		case 21: goto st954;
		case 23: goto st954;
		case 36: goto tr2124;
		case 44: goto st954;
	}
	goto st0;
st955:
	if ( ++p == pe )
		goto _test_eof955;
case 955:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2125;
	goto st0;
st956:
	if ( ++p == pe )
		goto _test_eof956;
case 956:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2126;
	goto st0;
st957:
	if ( ++p == pe )
		goto _test_eof957;
case 957:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2127;
	goto st0;
st958:
	if ( ++p == pe )
		goto _test_eof958;
case 958:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2128;
		case 5: goto tr2128;
		case 8: goto tr2128;
		case 18: goto tr2130;
		case 21: goto tr2129;
		case 23: goto tr2129;
		case 36: goto tr2130;
		case 44: goto tr2129;
		case 68: goto st964;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2129;
	goto st0;
tr2128:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 22: goto tr2133;
		case 131091: goto st963;
		case 131109: goto st963;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st960;
		} else if ( _widec >= 15 )
			goto st960;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st960;
		} else if ( _widec >= 38 )
			goto st960;
	} else
		goto st960;
	goto st0;
tr2136:
	{ expr_open_parens++; }
	goto st960;
tr2139:
	{ expr_open_parens--; }
	goto st960;
tr2129:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st960;
tr2130:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st960;
st960:
	if ( ++p == pe )
		goto _test_eof960;
case 960:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st959;
		case 5: goto st959;
		case 8: goto st959;
		case 13: goto st960;
		case 18: goto tr2136;
		case 21: goto st960;
		case 23: goto st960;
		case 36: goto tr2136;
		case 44: goto st960;
	}
	goto st0;
tr2133:
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	goto st961;
tr2140:
	{ expr_open_parens--; }
	{ if (! expr_in_parens)
     return FALSE;
     push_expr(expr_start, p);
      }
	goto st961;
st961:
	if ( ++p == pe )
		goto _test_eof961;
case 961:
	if ( ( ((int) p->tok)) == 62 )
		goto st962;
	goto st0;
st962:
	if ( ++p == pe )
		goto _test_eof962;
case 962:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2138;
	goto st0;
tr2141:
	{ expr_open_parens--; }
	goto st963;
st963:
	if ( ++p == pe )
		goto _test_eof963;
case 963:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2140;
		case 131091: goto tr2141;
		case 131109: goto tr2141;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2139;
		} else if ( _widec >= 15 )
			goto tr2139;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2139;
		} else if ( _widec >= 38 )
			goto tr2139;
	} else
		goto tr2139;
	goto st0;
st964:
	if ( ++p == pe )
		goto _test_eof964;
case 964:
	if ( ( ((int) p->tok)) == 22 )
		goto st965;
	goto st0;
st965:
	if ( ++p == pe )
		goto _test_eof965;
case 965:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st966;
		case 53: goto st967;
		case 54: goto st968;
		case 55: goto st969;
		case 56: goto st970;
		case 59: goto st971;
		case 62: goto st972;
	}
	goto st0;
st966:
	if ( ++p == pe )
		goto _test_eof966;
case 966:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2150;
	goto st0;
st967:
	if ( ++p == pe )
		goto _test_eof967;
case 967:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2151;
	goto st0;
st968:
	if ( ++p == pe )
		goto _test_eof968;
case 968:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2152;
	goto st0;
st969:
	if ( ++p == pe )
		goto _test_eof969;
case 969:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2153;
	goto st0;
st970:
	if ( ++p == pe )
		goto _test_eof970;
case 970:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2154;
	goto st0;
st971:
	if ( ++p == pe )
		goto _test_eof971;
case 971:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2155;
	goto st0;
st972:
	if ( ++p == pe )
		goto _test_eof972;
case 972:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2156;
	goto st0;
st973:
	if ( ++p == pe )
		goto _test_eof973;
case 973:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2157;
	goto st0;
st974:
	if ( ++p == pe )
		goto _test_eof974;
case 974:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2158;
	goto st0;
st975:
	if ( ++p == pe )
		goto _test_eof975;
case 975:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st976;
		case 70: goto st977;
		case 71: goto st978;
		case 72: goto st979;
		case 73: goto st980;
		case 74: goto st981;
	}
	goto st0;
st976:
	if ( ++p == pe )
		goto _test_eof976;
case 976:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2165;
	goto st0;
st977:
	if ( ++p == pe )
		goto _test_eof977;
case 977:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2166;
	goto st0;
st978:
	if ( ++p == pe )
		goto _test_eof978;
case 978:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2167;
	goto st0;
st979:
	if ( ++p == pe )
		goto _test_eof979;
case 979:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2168;
	goto st0;
st980:
	if ( ++p == pe )
		goto _test_eof980;
case 980:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2169;
	goto st0;
st981:
	if ( ++p == pe )
		goto _test_eof981;
case 981:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2170;
	goto st0;
st982:
	if ( ++p == pe )
		goto _test_eof982;
case 982:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st983;
		case 70: goto st984;
		case 71: goto st985;
		case 72: goto st986;
		case 73: goto st987;
		case 74: goto st988;
	}
	goto st0;
st983:
	if ( ++p == pe )
		goto _test_eof983;
case 983:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2177;
	goto st0;
st984:
	if ( ++p == pe )
		goto _test_eof984;
case 984:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2178;
	goto st0;
st985:
	if ( ++p == pe )
		goto _test_eof985;
case 985:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2179;
	goto st0;
st986:
	if ( ++p == pe )
		goto _test_eof986;
case 986:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2180;
	goto st0;
st987:
	if ( ++p == pe )
		goto _test_eof987;
case 987:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2181;
	goto st0;
st988:
	if ( ++p == pe )
		goto _test_eof988;
case 988:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2182;
	goto st0;
st989:
	if ( ++p == pe )
		goto _test_eof989;
case 989:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2183;
		case 5: goto tr2183;
		case 8: goto tr2183;
		case 18: goto tr2185;
		case 21: goto tr2184;
		case 23: goto tr2184;
		case 36: goto tr2185;
		case 44: goto tr2184;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2184;
	goto st0;
tr2183:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st990;
st990:
	if ( ++p == pe )
		goto _test_eof990;
case 990:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2187;
		case 131091: goto st1021;
		case 131109: goto st1021;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st991;
		} else if ( _widec >= 15 )
			goto st991;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st991;
		} else if ( _widec >= 38 )
			goto st991;
	} else
		goto st991;
	goto st0;
tr2184:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st991;
tr2185:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st991;
tr2190:
	{ expr_open_parens++; }
	goto st991;
tr2251:
	{ expr_open_parens--; }
	goto st991;
st991:
	if ( ++p == pe )
		goto _test_eof991;
case 991:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st990;
		case 5: goto st990;
		case 8: goto st990;
		case 13: goto st991;
		case 18: goto tr2190;
		case 21: goto st991;
		case 23: goto st991;
		case 36: goto tr2190;
		case 44: goto st991;
	}
	goto st0;
tr2187:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st992;
tr2252:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st992;
st992:
	if ( ++p == pe )
		goto _test_eof992;
case 992:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st993;
		case 53: goto st994;
		case 54: goto st995;
		case 55: goto st996;
		case 56: goto st997;
		case 59: goto st998;
		case 62: goto st999;
		case 79: goto st1000;
		case 80: goto st1001;
		case 81: goto st1011;
	}
	goto st0;
st993:
	if ( ++p == pe )
		goto _test_eof993;
case 993:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2201;
	goto st0;
st994:
	if ( ++p == pe )
		goto _test_eof994;
case 994:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2202;
	goto st0;
st995:
	if ( ++p == pe )
		goto _test_eof995;
case 995:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2203;
	goto st0;
st996:
	if ( ++p == pe )
		goto _test_eof996;
case 996:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2204;
	goto st0;
st997:
	if ( ++p == pe )
		goto _test_eof997;
case 997:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2205;
	goto st0;
st998:
	if ( ++p == pe )
		goto _test_eof998;
case 998:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2206;
	goto st0;
st999:
	if ( ++p == pe )
		goto _test_eof999;
case 999:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2207;
	goto st0;
st1000:
	if ( ++p == pe )
		goto _test_eof1000;
case 1000:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2208;
	goto st0;
st1001:
	if ( ++p == pe )
		goto _test_eof1001;
case 1001:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2209;
		case 5: goto tr2209;
		case 8: goto tr2209;
		case 18: goto tr2211;
		case 19: goto st1010;
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
	goto st1002;
st1002:
	if ( ++p == pe )
		goto _test_eof1002;
case 1002:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1003;
		case 65555: goto tr2214;
		case 131091: goto tr2215;
		case 131109: goto st1008;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1003;
		} else if ( _widec >= 15 )
			goto st1003;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1003;
		} else if ( _widec >= 38 )
			goto st1003;
	} else
		goto st1003;
	goto st0;
tr2218:
	{ expr_open_parens++; }
	goto st1003;
tr2221:
	{ expr_open_parens--; }
	goto st1003;
st1003:
	if ( ++p == pe )
		goto _test_eof1003;
case 1003:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1004;
		case 5: goto st1004;
		case 8: goto st1004;
		case 13: goto st1003;
		case 18: goto tr2218;
		case 21: goto st1003;
		case 23: goto st1003;
		case 36: goto tr2218;
		case 44: goto st1003;
	}
	goto st0;
st1004:
	if ( ++p == pe )
		goto _test_eof1004;
case 1004:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1003;
		case 65555: goto tr2214;
		case 131091: goto st1006;
		case 131109: goto st1006;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1003;
		} else if ( _widec >= 15 )
			goto st1003;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1003;
		} else if ( _widec >= 38 )
			goto st1003;
	} else
		goto st1003;
	goto st0;
tr2214:
	{ push_expr(expr_start, p); }
	goto st1005;
tr2222:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1005;
st1005:
	if ( ++p == pe )
		goto _test_eof1005;
case 1005:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2220;
	goto st0;
tr2223:
	{ expr_open_parens--; }
	goto st1006;
st1006:
	if ( ++p == pe )
		goto _test_eof1006;
case 1006:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2221;
		case 65555: goto tr2222;
		case 131091: goto tr2223;
		case 131109: goto tr2223;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2221;
		} else if ( _widec >= 15 )
			goto tr2221;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2221;
		} else if ( _widec >= 38 )
			goto tr2221;
	} else
		goto tr2221;
	goto st0;
tr2215:
	{ push_expr(expr_start, p); }
	goto st1007;
tr2224:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1007;
st1007:
	if ( ++p == pe )
		goto _test_eof1007;
case 1007:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2220;
		case 23: goto tr2221;
		case 65555: goto tr2222;
		case 131091: goto tr2224;
		case 131109: goto tr2225;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2221;
		} else if ( _widec >= 15 )
			goto tr2221;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2221;
		} else if ( _widec >= 38 )
			goto tr2221;
	} else
		goto tr2221;
	goto st0;
tr2225:
	{ expr_open_parens--; }
	goto st1008;
st1008:
	if ( ++p == pe )
		goto _test_eof1008;
case 1008:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2221;
		case 65555: goto tr2222;
		case 131091: goto tr2224;
		case 131109: goto tr2225;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2221;
		} else if ( _widec >= 15 )
			goto tr2221;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2221;
		} else if ( _widec >= 38 )
			goto tr2221;
	} else
		goto tr2221;
	goto st0;
tr2210:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1009;
tr2211:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1009;
tr2228:
	{ expr_open_parens++; }
	goto st1009;
st1009:
	if ( ++p == pe )
		goto _test_eof1009;
case 1009:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1002;
		case 5: goto st1002;
		case 8: goto st1002;
		case 13: goto st1009;
		case 18: goto tr2228;
		case 21: goto st1009;
		case 23: goto st1009;
		case 36: goto tr2228;
		case 44: goto st1009;
	}
	goto st0;
st1010:
	if ( ++p == pe )
		goto _test_eof1010;
case 1010:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2229;
	goto st0;
st1011:
	if ( ++p == pe )
		goto _test_eof1011;
case 1011:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2230;
		case 5: goto tr2230;
		case 8: goto tr2230;
		case 18: goto tr2232;
		case 19: goto st1020;
		case 21: goto tr2231;
		case 23: goto tr2231;
		case 36: goto tr2232;
		case 44: goto tr2231;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2231;
	goto st0;
tr2230:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1012;
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
		case 23: goto st1013;
		case 65555: goto tr2235;
		case 131091: goto tr2236;
		case 131109: goto st1018;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1013;
		} else if ( _widec >= 15 )
			goto st1013;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1013;
		} else if ( _widec >= 38 )
			goto st1013;
	} else
		goto st1013;
	goto st0;
tr2239:
	{ expr_open_parens++; }
	goto st1013;
tr2242:
	{ expr_open_parens--; }
	goto st1013;
st1013:
	if ( ++p == pe )
		goto _test_eof1013;
case 1013:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1014;
		case 5: goto st1014;
		case 8: goto st1014;
		case 13: goto st1013;
		case 18: goto tr2239;
		case 21: goto st1013;
		case 23: goto st1013;
		case 36: goto tr2239;
		case 44: goto st1013;
	}
	goto st0;
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
		case 23: goto st1013;
		case 65555: goto tr2235;
		case 131091: goto st1016;
		case 131109: goto st1016;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1013;
		} else if ( _widec >= 15 )
			goto st1013;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1013;
		} else if ( _widec >= 38 )
			goto st1013;
	} else
		goto st1013;
	goto st0;
tr2235:
	{ push_expr(expr_start, p); }
	goto st1015;
tr2243:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1015;
st1015:
	if ( ++p == pe )
		goto _test_eof1015;
case 1015:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2241;
	goto st0;
tr2244:
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
		case 23: goto tr2242;
		case 65555: goto tr2243;
		case 131091: goto tr2244;
		case 131109: goto tr2244;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2242;
		} else if ( _widec >= 15 )
			goto tr2242;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2242;
		} else if ( _widec >= 38 )
			goto tr2242;
	} else
		goto tr2242;
	goto st0;
tr2236:
	{ push_expr(expr_start, p); }
	goto st1017;
tr2245:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1017;
st1017:
	if ( ++p == pe )
		goto _test_eof1017;
case 1017:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2241;
		case 23: goto tr2242;
		case 65555: goto tr2243;
		case 131091: goto tr2245;
		case 131109: goto tr2246;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2242;
		} else if ( _widec >= 15 )
			goto tr2242;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2242;
		} else if ( _widec >= 38 )
			goto tr2242;
	} else
		goto tr2242;
	goto st0;
tr2246:
	{ expr_open_parens--; }
	goto st1018;
st1018:
	if ( ++p == pe )
		goto _test_eof1018;
case 1018:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2242;
		case 65555: goto tr2243;
		case 131091: goto tr2245;
		case 131109: goto tr2246;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2242;
		} else if ( _widec >= 15 )
			goto tr2242;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2242;
		} else if ( _widec >= 38 )
			goto tr2242;
	} else
		goto tr2242;
	goto st0;
tr2231:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1019;
tr2232:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1019;
tr2249:
	{ expr_open_parens++; }
	goto st1019;
st1019:
	if ( ++p == pe )
		goto _test_eof1019;
case 1019:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1012;
		case 5: goto st1012;
		case 8: goto st1012;
		case 13: goto st1019;
		case 18: goto tr2249;
		case 21: goto st1019;
		case 23: goto st1019;
		case 36: goto tr2249;
		case 44: goto st1019;
	}
	goto st0;
st1020:
	if ( ++p == pe )
		goto _test_eof1020;
case 1020:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2250;
	goto st0;
tr2253:
	{ expr_open_parens--; }
	goto st1021;
st1021:
	if ( ++p == pe )
		goto _test_eof1021;
case 1021:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2252;
		case 131091: goto tr2253;
		case 131109: goto tr2253;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2251;
		} else if ( _widec >= 15 )
			goto tr2251;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2251;
		} else if ( _widec >= 38 )
			goto tr2251;
	} else
		goto tr2251;
	goto st0;
st1022:
	if ( ++p == pe )
		goto _test_eof1022;
case 1022:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2254;
		case 45: goto st1023;
		case 46: goto st1024;
		case 47: goto st1025;
		case 48: goto st1026;
		case 49: goto st1027;
		case 50: goto st1028;
		case 51: goto st1029;
		case 52: goto st1030;
	}
	goto st0;
st1023:
	if ( ++p == pe )
		goto _test_eof1023;
case 1023:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2263;
	goto st0;
st1024:
	if ( ++p == pe )
		goto _test_eof1024;
case 1024:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2264;
	goto st0;
st1025:
	if ( ++p == pe )
		goto _test_eof1025;
case 1025:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2265;
	goto st0;
st1026:
	if ( ++p == pe )
		goto _test_eof1026;
case 1026:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2266;
	goto st0;
st1027:
	if ( ++p == pe )
		goto _test_eof1027;
case 1027:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2267;
	goto st0;
st1028:
	if ( ++p == pe )
		goto _test_eof1028;
case 1028:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2268;
	goto st0;
st1029:
	if ( ++p == pe )
		goto _test_eof1029;
case 1029:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2269;
	goto st0;
st1030:
	if ( ++p == pe )
		goto _test_eof1030;
case 1030:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2270;
	goto st0;
st1031:
	if ( ++p == pe )
		goto _test_eof1031;
case 1031:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2271;
	goto st0;
st1032:
	if ( ++p == pe )
		goto _test_eof1032;
case 1032:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2272;
	goto st0;
st1033:
	if ( ++p == pe )
		goto _test_eof1033;
case 1033:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1034;
		case 53: goto st1035;
		case 54: goto st1036;
		case 55: goto st1037;
		case 56: goto st1038;
		case 59: goto st1039;
		case 62: goto st1040;
		case 79: goto st1041;
		case 80: goto st1042;
		case 81: goto st1052;
	}
	goto st0;
st1034:
	if ( ++p == pe )
		goto _test_eof1034;
case 1034:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2283;
	goto st0;
st1035:
	if ( ++p == pe )
		goto _test_eof1035;
case 1035:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2284;
	goto st0;
st1036:
	if ( ++p == pe )
		goto _test_eof1036;
case 1036:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2285;
	goto st0;
st1037:
	if ( ++p == pe )
		goto _test_eof1037;
case 1037:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2286;
	goto st0;
st1038:
	if ( ++p == pe )
		goto _test_eof1038;
case 1038:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2287;
	goto st0;
st1039:
	if ( ++p == pe )
		goto _test_eof1039;
case 1039:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2288;
	goto st0;
st1040:
	if ( ++p == pe )
		goto _test_eof1040;
case 1040:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2289;
	goto st0;
st1041:
	if ( ++p == pe )
		goto _test_eof1041;
case 1041:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2290;
	goto st0;
st1042:
	if ( ++p == pe )
		goto _test_eof1042;
case 1042:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2291;
		case 5: goto tr2291;
		case 8: goto tr2291;
		case 18: goto tr2293;
		case 19: goto st1051;
		case 21: goto tr2292;
		case 23: goto tr2292;
		case 36: goto tr2293;
		case 44: goto tr2292;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2292;
	goto st0;
tr2291:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1043;
st1043:
	if ( ++p == pe )
		goto _test_eof1043;
case 1043:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1044;
		case 65555: goto tr2296;
		case 131091: goto tr2297;
		case 131109: goto st1049;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1044;
		} else if ( _widec >= 15 )
			goto st1044;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1044;
		} else if ( _widec >= 38 )
			goto st1044;
	} else
		goto st1044;
	goto st0;
tr2300:
	{ expr_open_parens++; }
	goto st1044;
tr2303:
	{ expr_open_parens--; }
	goto st1044;
st1044:
	if ( ++p == pe )
		goto _test_eof1044;
case 1044:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1045;
		case 5: goto st1045;
		case 8: goto st1045;
		case 13: goto st1044;
		case 18: goto tr2300;
		case 21: goto st1044;
		case 23: goto st1044;
		case 36: goto tr2300;
		case 44: goto st1044;
	}
	goto st0;
st1045:
	if ( ++p == pe )
		goto _test_eof1045;
case 1045:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1044;
		case 65555: goto tr2296;
		case 131091: goto st1047;
		case 131109: goto st1047;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1044;
		} else if ( _widec >= 15 )
			goto st1044;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1044;
		} else if ( _widec >= 38 )
			goto st1044;
	} else
		goto st1044;
	goto st0;
tr2296:
	{ push_expr(expr_start, p); }
	goto st1046;
tr2304:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1046;
st1046:
	if ( ++p == pe )
		goto _test_eof1046;
case 1046:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2302;
	goto st0;
tr2305:
	{ expr_open_parens--; }
	goto st1047;
st1047:
	if ( ++p == pe )
		goto _test_eof1047;
case 1047:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2303;
		case 65555: goto tr2304;
		case 131091: goto tr2305;
		case 131109: goto tr2305;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2303;
		} else if ( _widec >= 15 )
			goto tr2303;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2303;
		} else if ( _widec >= 38 )
			goto tr2303;
	} else
		goto tr2303;
	goto st0;
tr2297:
	{ push_expr(expr_start, p); }
	goto st1048;
tr2306:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1048;
st1048:
	if ( ++p == pe )
		goto _test_eof1048;
case 1048:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2302;
		case 23: goto tr2303;
		case 65555: goto tr2304;
		case 131091: goto tr2306;
		case 131109: goto tr2307;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2303;
		} else if ( _widec >= 15 )
			goto tr2303;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2303;
		} else if ( _widec >= 38 )
			goto tr2303;
	} else
		goto tr2303;
	goto st0;
tr2307:
	{ expr_open_parens--; }
	goto st1049;
st1049:
	if ( ++p == pe )
		goto _test_eof1049;
case 1049:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2303;
		case 65555: goto tr2304;
		case 131091: goto tr2306;
		case 131109: goto tr2307;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2303;
		} else if ( _widec >= 15 )
			goto tr2303;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2303;
		} else if ( _widec >= 38 )
			goto tr2303;
	} else
		goto tr2303;
	goto st0;
tr2292:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1050;
tr2293:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1050;
tr2310:
	{ expr_open_parens++; }
	goto st1050;
st1050:
	if ( ++p == pe )
		goto _test_eof1050;
case 1050:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1043;
		case 5: goto st1043;
		case 8: goto st1043;
		case 13: goto st1050;
		case 18: goto tr2310;
		case 21: goto st1050;
		case 23: goto st1050;
		case 36: goto tr2310;
		case 44: goto st1050;
	}
	goto st0;
st1051:
	if ( ++p == pe )
		goto _test_eof1051;
case 1051:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2311;
	goto st0;
st1052:
	if ( ++p == pe )
		goto _test_eof1052;
case 1052:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2312;
		case 5: goto tr2312;
		case 8: goto tr2312;
		case 18: goto tr2314;
		case 19: goto st1061;
		case 21: goto tr2313;
		case 23: goto tr2313;
		case 36: goto tr2314;
		case 44: goto tr2313;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2313;
	goto st0;
tr2312:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1053;
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
		case 23: goto st1054;
		case 65555: goto tr2317;
		case 131091: goto tr2318;
		case 131109: goto st1059;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1054;
		} else if ( _widec >= 15 )
			goto st1054;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1054;
		} else if ( _widec >= 38 )
			goto st1054;
	} else
		goto st1054;
	goto st0;
tr2321:
	{ expr_open_parens++; }
	goto st1054;
tr2324:
	{ expr_open_parens--; }
	goto st1054;
st1054:
	if ( ++p == pe )
		goto _test_eof1054;
case 1054:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1055;
		case 5: goto st1055;
		case 8: goto st1055;
		case 13: goto st1054;
		case 18: goto tr2321;
		case 21: goto st1054;
		case 23: goto st1054;
		case 36: goto tr2321;
		case 44: goto st1054;
	}
	goto st0;
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
		case 23: goto st1054;
		case 65555: goto tr2317;
		case 131091: goto st1057;
		case 131109: goto st1057;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1054;
		} else if ( _widec >= 15 )
			goto st1054;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1054;
		} else if ( _widec >= 38 )
			goto st1054;
	} else
		goto st1054;
	goto st0;
tr2317:
	{ push_expr(expr_start, p); }
	goto st1056;
tr2325:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1056;
st1056:
	if ( ++p == pe )
		goto _test_eof1056;
case 1056:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2323;
	goto st0;
tr2326:
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
		case 23: goto tr2324;
		case 65555: goto tr2325;
		case 131091: goto tr2326;
		case 131109: goto tr2326;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2324;
		} else if ( _widec >= 15 )
			goto tr2324;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2324;
		} else if ( _widec >= 38 )
			goto tr2324;
	} else
		goto tr2324;
	goto st0;
tr2318:
	{ push_expr(expr_start, p); }
	goto st1058;
tr2327:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1058;
st1058:
	if ( ++p == pe )
		goto _test_eof1058;
case 1058:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2323;
		case 23: goto tr2324;
		case 65555: goto tr2325;
		case 131091: goto tr2327;
		case 131109: goto tr2328;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2324;
		} else if ( _widec >= 15 )
			goto tr2324;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2324;
		} else if ( _widec >= 38 )
			goto tr2324;
	} else
		goto tr2324;
	goto st0;
tr2328:
	{ expr_open_parens--; }
	goto st1059;
st1059:
	if ( ++p == pe )
		goto _test_eof1059;
case 1059:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2324;
		case 65555: goto tr2325;
		case 131091: goto tr2327;
		case 131109: goto tr2328;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2324;
		} else if ( _widec >= 15 )
			goto tr2324;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2324;
		} else if ( _widec >= 38 )
			goto tr2324;
	} else
		goto tr2324;
	goto st0;
tr2313:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1060;
tr2314:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1060;
tr2331:
	{ expr_open_parens++; }
	goto st1060;
st1060:
	if ( ++p == pe )
		goto _test_eof1060;
case 1060:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1053;
		case 5: goto st1053;
		case 8: goto st1053;
		case 13: goto st1060;
		case 18: goto tr2331;
		case 21: goto st1060;
		case 23: goto st1060;
		case 36: goto tr2331;
		case 44: goto st1060;
	}
	goto st0;
st1061:
	if ( ++p == pe )
		goto _test_eof1061;
case 1061:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2332;
	goto st0;
st1062:
	if ( ++p == pe )
		goto _test_eof1062;
case 1062:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2333;
	goto st0;
st1063:
	if ( ++p == pe )
		goto _test_eof1063;
case 1063:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1064;
		case 53: goto st1065;
		case 54: goto st1066;
		case 55: goto st1067;
		case 56: goto st1068;
		case 59: goto st1069;
		case 62: goto st1070;
		case 79: goto st1071;
		case 80: goto st1072;
		case 81: goto st1082;
	}
	goto st0;
st1064:
	if ( ++p == pe )
		goto _test_eof1064;
case 1064:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2344;
	goto st0;
st1065:
	if ( ++p == pe )
		goto _test_eof1065;
case 1065:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2345;
	goto st0;
st1066:
	if ( ++p == pe )
		goto _test_eof1066;
case 1066:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2346;
	goto st0;
st1067:
	if ( ++p == pe )
		goto _test_eof1067;
case 1067:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2347;
	goto st0;
st1068:
	if ( ++p == pe )
		goto _test_eof1068;
case 1068:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2348;
	goto st0;
st1069:
	if ( ++p == pe )
		goto _test_eof1069;
case 1069:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2349;
	goto st0;
st1070:
	if ( ++p == pe )
		goto _test_eof1070;
case 1070:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2350;
	goto st0;
st1071:
	if ( ++p == pe )
		goto _test_eof1071;
case 1071:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2351;
	goto st0;
st1072:
	if ( ++p == pe )
		goto _test_eof1072;
case 1072:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2352;
		case 5: goto tr2352;
		case 8: goto tr2352;
		case 18: goto tr2354;
		case 19: goto st1081;
		case 21: goto tr2353;
		case 23: goto tr2353;
		case 36: goto tr2354;
		case 44: goto tr2353;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2353;
	goto st0;
tr2352:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1073;
st1073:
	if ( ++p == pe )
		goto _test_eof1073;
case 1073:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1074;
		case 65555: goto tr2357;
		case 131091: goto tr2358;
		case 131109: goto st1079;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1074;
		} else if ( _widec >= 15 )
			goto st1074;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1074;
		} else if ( _widec >= 38 )
			goto st1074;
	} else
		goto st1074;
	goto st0;
tr2361:
	{ expr_open_parens++; }
	goto st1074;
tr2364:
	{ expr_open_parens--; }
	goto st1074;
st1074:
	if ( ++p == pe )
		goto _test_eof1074;
case 1074:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1075;
		case 5: goto st1075;
		case 8: goto st1075;
		case 13: goto st1074;
		case 18: goto tr2361;
		case 21: goto st1074;
		case 23: goto st1074;
		case 36: goto tr2361;
		case 44: goto st1074;
	}
	goto st0;
st1075:
	if ( ++p == pe )
		goto _test_eof1075;
case 1075:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1074;
		case 65555: goto tr2357;
		case 131091: goto st1077;
		case 131109: goto st1077;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1074;
		} else if ( _widec >= 15 )
			goto st1074;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1074;
		} else if ( _widec >= 38 )
			goto st1074;
	} else
		goto st1074;
	goto st0;
tr2357:
	{ push_expr(expr_start, p); }
	goto st1076;
tr2365:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1076;
st1076:
	if ( ++p == pe )
		goto _test_eof1076;
case 1076:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2363;
	goto st0;
tr2366:
	{ expr_open_parens--; }
	goto st1077;
st1077:
	if ( ++p == pe )
		goto _test_eof1077;
case 1077:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2364;
		case 65555: goto tr2365;
		case 131091: goto tr2366;
		case 131109: goto tr2366;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2364;
		} else if ( _widec >= 15 )
			goto tr2364;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2364;
		} else if ( _widec >= 38 )
			goto tr2364;
	} else
		goto tr2364;
	goto st0;
tr2358:
	{ push_expr(expr_start, p); }
	goto st1078;
tr2367:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1078;
st1078:
	if ( ++p == pe )
		goto _test_eof1078;
case 1078:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2363;
		case 23: goto tr2364;
		case 65555: goto tr2365;
		case 131091: goto tr2367;
		case 131109: goto tr2368;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2364;
		} else if ( _widec >= 15 )
			goto tr2364;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2364;
		} else if ( _widec >= 38 )
			goto tr2364;
	} else
		goto tr2364;
	goto st0;
tr2368:
	{ expr_open_parens--; }
	goto st1079;
st1079:
	if ( ++p == pe )
		goto _test_eof1079;
case 1079:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2364;
		case 65555: goto tr2365;
		case 131091: goto tr2367;
		case 131109: goto tr2368;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2364;
		} else if ( _widec >= 15 )
			goto tr2364;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2364;
		} else if ( _widec >= 38 )
			goto tr2364;
	} else
		goto tr2364;
	goto st0;
tr2353:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1080;
tr2354:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1080;
tr2371:
	{ expr_open_parens++; }
	goto st1080;
st1080:
	if ( ++p == pe )
		goto _test_eof1080;
case 1080:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1073;
		case 5: goto st1073;
		case 8: goto st1073;
		case 13: goto st1080;
		case 18: goto tr2371;
		case 21: goto st1080;
		case 23: goto st1080;
		case 36: goto tr2371;
		case 44: goto st1080;
	}
	goto st0;
st1081:
	if ( ++p == pe )
		goto _test_eof1081;
case 1081:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2372;
	goto st0;
st1082:
	if ( ++p == pe )
		goto _test_eof1082;
case 1082:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2373;
		case 5: goto tr2373;
		case 8: goto tr2373;
		case 18: goto tr2375;
		case 19: goto st1091;
		case 21: goto tr2374;
		case 23: goto tr2374;
		case 36: goto tr2375;
		case 44: goto tr2374;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2374;
	goto st0;
tr2373:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1083;
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
		case 23: goto st1084;
		case 65555: goto tr2378;
		case 131091: goto tr2379;
		case 131109: goto st1089;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1084;
		} else if ( _widec >= 15 )
			goto st1084;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1084;
		} else if ( _widec >= 38 )
			goto st1084;
	} else
		goto st1084;
	goto st0;
tr2382:
	{ expr_open_parens++; }
	goto st1084;
tr2385:
	{ expr_open_parens--; }
	goto st1084;
st1084:
	if ( ++p == pe )
		goto _test_eof1084;
case 1084:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1085;
		case 5: goto st1085;
		case 8: goto st1085;
		case 13: goto st1084;
		case 18: goto tr2382;
		case 21: goto st1084;
		case 23: goto st1084;
		case 36: goto tr2382;
		case 44: goto st1084;
	}
	goto st0;
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
		case 23: goto st1084;
		case 65555: goto tr2378;
		case 131091: goto st1087;
		case 131109: goto st1087;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1084;
		} else if ( _widec >= 15 )
			goto st1084;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1084;
		} else if ( _widec >= 38 )
			goto st1084;
	} else
		goto st1084;
	goto st0;
tr2378:
	{ push_expr(expr_start, p); }
	goto st1086;
tr2386:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1086;
st1086:
	if ( ++p == pe )
		goto _test_eof1086;
case 1086:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2384;
	goto st0;
tr2387:
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
		case 23: goto tr2385;
		case 65555: goto tr2386;
		case 131091: goto tr2387;
		case 131109: goto tr2387;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2385;
		} else if ( _widec >= 15 )
			goto tr2385;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2385;
		} else if ( _widec >= 38 )
			goto tr2385;
	} else
		goto tr2385;
	goto st0;
tr2379:
	{ push_expr(expr_start, p); }
	goto st1088;
tr2388:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1088;
st1088:
	if ( ++p == pe )
		goto _test_eof1088;
case 1088:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2384;
		case 23: goto tr2385;
		case 65555: goto tr2386;
		case 131091: goto tr2388;
		case 131109: goto tr2389;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2385;
		} else if ( _widec >= 15 )
			goto tr2385;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2385;
		} else if ( _widec >= 38 )
			goto tr2385;
	} else
		goto tr2385;
	goto st0;
tr2389:
	{ expr_open_parens--; }
	goto st1089;
st1089:
	if ( ++p == pe )
		goto _test_eof1089;
case 1089:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2385;
		case 65555: goto tr2386;
		case 131091: goto tr2388;
		case 131109: goto tr2389;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2385;
		} else if ( _widec >= 15 )
			goto tr2385;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2385;
		} else if ( _widec >= 38 )
			goto tr2385;
	} else
		goto tr2385;
	goto st0;
tr2374:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1090;
tr2375:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1090;
tr2392:
	{ expr_open_parens++; }
	goto st1090;
st1090:
	if ( ++p == pe )
		goto _test_eof1090;
case 1090:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1083;
		case 5: goto st1083;
		case 8: goto st1083;
		case 13: goto st1090;
		case 18: goto tr2392;
		case 21: goto st1090;
		case 23: goto st1090;
		case 36: goto tr2392;
		case 44: goto st1090;
	}
	goto st0;
st1091:
	if ( ++p == pe )
		goto _test_eof1091;
case 1091:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2393;
	goto st0;
st1092:
	if ( ++p == pe )
		goto _test_eof1092;
case 1092:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2394;
	goto st0;
st1093:
	if ( ++p == pe )
		goto _test_eof1093;
case 1093:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2395;
	goto st0;
st1094:
	if ( ++p == pe )
		goto _test_eof1094;
case 1094:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1095;
		case 53: goto st1096;
		case 54: goto st1097;
		case 55: goto st1098;
		case 56: goto st1099;
		case 59: goto st1100;
		case 62: goto st1101;
		case 79: goto st1102;
		case 80: goto st1103;
		case 81: goto st1113;
	}
	goto st0;
st1095:
	if ( ++p == pe )
		goto _test_eof1095;
case 1095:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2406;
	goto st0;
st1096:
	if ( ++p == pe )
		goto _test_eof1096;
case 1096:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2407;
	goto st0;
st1097:
	if ( ++p == pe )
		goto _test_eof1097;
case 1097:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2408;
	goto st0;
st1098:
	if ( ++p == pe )
		goto _test_eof1098;
case 1098:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2409;
	goto st0;
st1099:
	if ( ++p == pe )
		goto _test_eof1099;
case 1099:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2410;
	goto st0;
st1100:
	if ( ++p == pe )
		goto _test_eof1100;
case 1100:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2411;
	goto st0;
st1101:
	if ( ++p == pe )
		goto _test_eof1101;
case 1101:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2412;
	goto st0;
st1102:
	if ( ++p == pe )
		goto _test_eof1102;
case 1102:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2413;
	goto st0;
st1103:
	if ( ++p == pe )
		goto _test_eof1103;
case 1103:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2414;
		case 5: goto tr2414;
		case 8: goto tr2414;
		case 18: goto tr2416;
		case 19: goto st1112;
		case 21: goto tr2415;
		case 23: goto tr2415;
		case 36: goto tr2416;
		case 44: goto tr2415;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2415;
	goto st0;
tr2414:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1104;
st1104:
	if ( ++p == pe )
		goto _test_eof1104;
case 1104:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1105;
		case 65555: goto tr2419;
		case 131091: goto tr2420;
		case 131109: goto st1110;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1105;
		} else if ( _widec >= 15 )
			goto st1105;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1105;
		} else if ( _widec >= 38 )
			goto st1105;
	} else
		goto st1105;
	goto st0;
tr2423:
	{ expr_open_parens++; }
	goto st1105;
tr2426:
	{ expr_open_parens--; }
	goto st1105;
st1105:
	if ( ++p == pe )
		goto _test_eof1105;
case 1105:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1106;
		case 5: goto st1106;
		case 8: goto st1106;
		case 13: goto st1105;
		case 18: goto tr2423;
		case 21: goto st1105;
		case 23: goto st1105;
		case 36: goto tr2423;
		case 44: goto st1105;
	}
	goto st0;
st1106:
	if ( ++p == pe )
		goto _test_eof1106;
case 1106:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1105;
		case 65555: goto tr2419;
		case 131091: goto st1108;
		case 131109: goto st1108;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1105;
		} else if ( _widec >= 15 )
			goto st1105;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1105;
		} else if ( _widec >= 38 )
			goto st1105;
	} else
		goto st1105;
	goto st0;
tr2419:
	{ push_expr(expr_start, p); }
	goto st1107;
tr2427:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1107;
st1107:
	if ( ++p == pe )
		goto _test_eof1107;
case 1107:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2425;
	goto st0;
tr2428:
	{ expr_open_parens--; }
	goto st1108;
st1108:
	if ( ++p == pe )
		goto _test_eof1108;
case 1108:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2426;
		case 65555: goto tr2427;
		case 131091: goto tr2428;
		case 131109: goto tr2428;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2426;
		} else if ( _widec >= 15 )
			goto tr2426;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2426;
		} else if ( _widec >= 38 )
			goto tr2426;
	} else
		goto tr2426;
	goto st0;
tr2420:
	{ push_expr(expr_start, p); }
	goto st1109;
tr2429:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1109;
st1109:
	if ( ++p == pe )
		goto _test_eof1109;
case 1109:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2425;
		case 23: goto tr2426;
		case 65555: goto tr2427;
		case 131091: goto tr2429;
		case 131109: goto tr2430;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2426;
		} else if ( _widec >= 15 )
			goto tr2426;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2426;
		} else if ( _widec >= 38 )
			goto tr2426;
	} else
		goto tr2426;
	goto st0;
tr2430:
	{ expr_open_parens--; }
	goto st1110;
st1110:
	if ( ++p == pe )
		goto _test_eof1110;
case 1110:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2426;
		case 65555: goto tr2427;
		case 131091: goto tr2429;
		case 131109: goto tr2430;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2426;
		} else if ( _widec >= 15 )
			goto tr2426;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2426;
		} else if ( _widec >= 38 )
			goto tr2426;
	} else
		goto tr2426;
	goto st0;
tr2415:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1111;
tr2416:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1111;
tr2433:
	{ expr_open_parens++; }
	goto st1111;
st1111:
	if ( ++p == pe )
		goto _test_eof1111;
case 1111:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1104;
		case 5: goto st1104;
		case 8: goto st1104;
		case 13: goto st1111;
		case 18: goto tr2433;
		case 21: goto st1111;
		case 23: goto st1111;
		case 36: goto tr2433;
		case 44: goto st1111;
	}
	goto st0;
st1112:
	if ( ++p == pe )
		goto _test_eof1112;
case 1112:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2434;
	goto st0;
st1113:
	if ( ++p == pe )
		goto _test_eof1113;
case 1113:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2435;
		case 5: goto tr2435;
		case 8: goto tr2435;
		case 18: goto tr2437;
		case 19: goto st1122;
		case 21: goto tr2436;
		case 23: goto tr2436;
		case 36: goto tr2437;
		case 44: goto tr2436;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2436;
	goto st0;
tr2435:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1114;
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
		case 23: goto st1115;
		case 65555: goto tr2440;
		case 131091: goto tr2441;
		case 131109: goto st1120;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1115;
		} else if ( _widec >= 15 )
			goto st1115;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1115;
		} else if ( _widec >= 38 )
			goto st1115;
	} else
		goto st1115;
	goto st0;
tr2444:
	{ expr_open_parens++; }
	goto st1115;
tr2447:
	{ expr_open_parens--; }
	goto st1115;
st1115:
	if ( ++p == pe )
		goto _test_eof1115;
case 1115:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1116;
		case 5: goto st1116;
		case 8: goto st1116;
		case 13: goto st1115;
		case 18: goto tr2444;
		case 21: goto st1115;
		case 23: goto st1115;
		case 36: goto tr2444;
		case 44: goto st1115;
	}
	goto st0;
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
		case 23: goto st1115;
		case 65555: goto tr2440;
		case 131091: goto st1118;
		case 131109: goto st1118;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1115;
		} else if ( _widec >= 15 )
			goto st1115;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1115;
		} else if ( _widec >= 38 )
			goto st1115;
	} else
		goto st1115;
	goto st0;
tr2440:
	{ push_expr(expr_start, p); }
	goto st1117;
tr2448:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1117;
st1117:
	if ( ++p == pe )
		goto _test_eof1117;
case 1117:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2446;
	goto st0;
tr2449:
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
		case 23: goto tr2447;
		case 65555: goto tr2448;
		case 131091: goto tr2449;
		case 131109: goto tr2449;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2447;
		} else if ( _widec >= 15 )
			goto tr2447;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2447;
		} else if ( _widec >= 38 )
			goto tr2447;
	} else
		goto tr2447;
	goto st0;
tr2441:
	{ push_expr(expr_start, p); }
	goto st1119;
tr2450:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1119;
st1119:
	if ( ++p == pe )
		goto _test_eof1119;
case 1119:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2446;
		case 23: goto tr2447;
		case 65555: goto tr2448;
		case 131091: goto tr2450;
		case 131109: goto tr2451;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2447;
		} else if ( _widec >= 15 )
			goto tr2447;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2447;
		} else if ( _widec >= 38 )
			goto tr2447;
	} else
		goto tr2447;
	goto st0;
tr2451:
	{ expr_open_parens--; }
	goto st1120;
st1120:
	if ( ++p == pe )
		goto _test_eof1120;
case 1120:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2447;
		case 65555: goto tr2448;
		case 131091: goto tr2450;
		case 131109: goto tr2451;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2447;
		} else if ( _widec >= 15 )
			goto tr2447;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2447;
		} else if ( _widec >= 38 )
			goto tr2447;
	} else
		goto tr2447;
	goto st0;
tr2436:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1121;
tr2437:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1121;
tr2454:
	{ expr_open_parens++; }
	goto st1121;
st1121:
	if ( ++p == pe )
		goto _test_eof1121;
case 1121:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1114;
		case 5: goto st1114;
		case 8: goto st1114;
		case 13: goto st1121;
		case 18: goto tr2454;
		case 21: goto st1121;
		case 23: goto st1121;
		case 36: goto tr2454;
		case 44: goto st1121;
	}
	goto st0;
st1122:
	if ( ++p == pe )
		goto _test_eof1122;
case 1122:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2455;
	goto st0;
st1123:
	if ( ++p == pe )
		goto _test_eof1123;
case 1123:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2456;
	goto st0;
st1124:
	if ( ++p == pe )
		goto _test_eof1124;
case 1124:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1125;
		case 53: goto st1126;
		case 54: goto st1127;
		case 55: goto st1128;
		case 56: goto st1129;
		case 59: goto st1130;
		case 62: goto st1131;
		case 79: goto st1132;
		case 80: goto st1133;
		case 81: goto st1143;
	}
	goto st0;
st1125:
	if ( ++p == pe )
		goto _test_eof1125;
case 1125:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2467;
	goto st0;
st1126:
	if ( ++p == pe )
		goto _test_eof1126;
case 1126:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2468;
	goto st0;
st1127:
	if ( ++p == pe )
		goto _test_eof1127;
case 1127:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2469;
	goto st0;
st1128:
	if ( ++p == pe )
		goto _test_eof1128;
case 1128:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2470;
	goto st0;
st1129:
	if ( ++p == pe )
		goto _test_eof1129;
case 1129:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2471;
	goto st0;
st1130:
	if ( ++p == pe )
		goto _test_eof1130;
case 1130:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2472;
	goto st0;
st1131:
	if ( ++p == pe )
		goto _test_eof1131;
case 1131:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2473;
	goto st0;
st1132:
	if ( ++p == pe )
		goto _test_eof1132;
case 1132:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2474;
	goto st0;
st1133:
	if ( ++p == pe )
		goto _test_eof1133;
case 1133:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2475;
		case 5: goto tr2475;
		case 8: goto tr2475;
		case 18: goto tr2477;
		case 19: goto st1142;
		case 21: goto tr2476;
		case 23: goto tr2476;
		case 36: goto tr2477;
		case 44: goto tr2476;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2476;
	goto st0;
tr2475:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1134;
st1134:
	if ( ++p == pe )
		goto _test_eof1134;
case 1134:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1135;
		case 65555: goto tr2480;
		case 131091: goto tr2481;
		case 131109: goto st1140;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1135;
		} else if ( _widec >= 15 )
			goto st1135;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1135;
		} else if ( _widec >= 38 )
			goto st1135;
	} else
		goto st1135;
	goto st0;
tr2484:
	{ expr_open_parens++; }
	goto st1135;
tr2487:
	{ expr_open_parens--; }
	goto st1135;
st1135:
	if ( ++p == pe )
		goto _test_eof1135;
case 1135:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1136;
		case 5: goto st1136;
		case 8: goto st1136;
		case 13: goto st1135;
		case 18: goto tr2484;
		case 21: goto st1135;
		case 23: goto st1135;
		case 36: goto tr2484;
		case 44: goto st1135;
	}
	goto st0;
st1136:
	if ( ++p == pe )
		goto _test_eof1136;
case 1136:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1135;
		case 65555: goto tr2480;
		case 131091: goto st1138;
		case 131109: goto st1138;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1135;
		} else if ( _widec >= 15 )
			goto st1135;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1135;
		} else if ( _widec >= 38 )
			goto st1135;
	} else
		goto st1135;
	goto st0;
tr2480:
	{ push_expr(expr_start, p); }
	goto st1137;
tr2488:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1137;
st1137:
	if ( ++p == pe )
		goto _test_eof1137;
case 1137:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2486;
	goto st0;
tr2489:
	{ expr_open_parens--; }
	goto st1138;
st1138:
	if ( ++p == pe )
		goto _test_eof1138;
case 1138:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2487;
		case 65555: goto tr2488;
		case 131091: goto tr2489;
		case 131109: goto tr2489;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2487;
		} else if ( _widec >= 15 )
			goto tr2487;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2487;
		} else if ( _widec >= 38 )
			goto tr2487;
	} else
		goto tr2487;
	goto st0;
tr2481:
	{ push_expr(expr_start, p); }
	goto st1139;
tr2490:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1139;
st1139:
	if ( ++p == pe )
		goto _test_eof1139;
case 1139:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2486;
		case 23: goto tr2487;
		case 65555: goto tr2488;
		case 131091: goto tr2490;
		case 131109: goto tr2491;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2487;
		} else if ( _widec >= 15 )
			goto tr2487;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2487;
		} else if ( _widec >= 38 )
			goto tr2487;
	} else
		goto tr2487;
	goto st0;
tr2491:
	{ expr_open_parens--; }
	goto st1140;
st1140:
	if ( ++p == pe )
		goto _test_eof1140;
case 1140:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2487;
		case 65555: goto tr2488;
		case 131091: goto tr2490;
		case 131109: goto tr2491;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2487;
		} else if ( _widec >= 15 )
			goto tr2487;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2487;
		} else if ( _widec >= 38 )
			goto tr2487;
	} else
		goto tr2487;
	goto st0;
tr2476:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1141;
tr2477:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1141;
tr2494:
	{ expr_open_parens++; }
	goto st1141;
st1141:
	if ( ++p == pe )
		goto _test_eof1141;
case 1141:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1134;
		case 5: goto st1134;
		case 8: goto st1134;
		case 13: goto st1141;
		case 18: goto tr2494;
		case 21: goto st1141;
		case 23: goto st1141;
		case 36: goto tr2494;
		case 44: goto st1141;
	}
	goto st0;
st1142:
	if ( ++p == pe )
		goto _test_eof1142;
case 1142:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2495;
	goto st0;
st1143:
	if ( ++p == pe )
		goto _test_eof1143;
case 1143:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2496;
		case 5: goto tr2496;
		case 8: goto tr2496;
		case 18: goto tr2498;
		case 19: goto st1152;
		case 21: goto tr2497;
		case 23: goto tr2497;
		case 36: goto tr2498;
		case 44: goto tr2497;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2497;
	goto st0;
tr2496:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1144;
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
		case 23: goto st1145;
		case 65555: goto tr2501;
		case 131091: goto tr2502;
		case 131109: goto st1150;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1145;
		} else if ( _widec >= 15 )
			goto st1145;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1145;
		} else if ( _widec >= 38 )
			goto st1145;
	} else
		goto st1145;
	goto st0;
tr2505:
	{ expr_open_parens++; }
	goto st1145;
tr2508:
	{ expr_open_parens--; }
	goto st1145;
st1145:
	if ( ++p == pe )
		goto _test_eof1145;
case 1145:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1146;
		case 5: goto st1146;
		case 8: goto st1146;
		case 13: goto st1145;
		case 18: goto tr2505;
		case 21: goto st1145;
		case 23: goto st1145;
		case 36: goto tr2505;
		case 44: goto st1145;
	}
	goto st0;
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
		case 23: goto st1145;
		case 65555: goto tr2501;
		case 131091: goto st1148;
		case 131109: goto st1148;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1145;
		} else if ( _widec >= 15 )
			goto st1145;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1145;
		} else if ( _widec >= 38 )
			goto st1145;
	} else
		goto st1145;
	goto st0;
tr2501:
	{ push_expr(expr_start, p); }
	goto st1147;
tr2509:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1147;
st1147:
	if ( ++p == pe )
		goto _test_eof1147;
case 1147:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2507;
	goto st0;
tr2510:
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
		case 23: goto tr2508;
		case 65555: goto tr2509;
		case 131091: goto tr2510;
		case 131109: goto tr2510;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2508;
		} else if ( _widec >= 15 )
			goto tr2508;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2508;
		} else if ( _widec >= 38 )
			goto tr2508;
	} else
		goto tr2508;
	goto st0;
tr2502:
	{ push_expr(expr_start, p); }
	goto st1149;
tr2511:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1149;
st1149:
	if ( ++p == pe )
		goto _test_eof1149;
case 1149:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2507;
		case 23: goto tr2508;
		case 65555: goto tr2509;
		case 131091: goto tr2511;
		case 131109: goto tr2512;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2508;
		} else if ( _widec >= 15 )
			goto tr2508;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2508;
		} else if ( _widec >= 38 )
			goto tr2508;
	} else
		goto tr2508;
	goto st0;
tr2512:
	{ expr_open_parens--; }
	goto st1150;
st1150:
	if ( ++p == pe )
		goto _test_eof1150;
case 1150:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2508;
		case 65555: goto tr2509;
		case 131091: goto tr2511;
		case 131109: goto tr2512;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2508;
		} else if ( _widec >= 15 )
			goto tr2508;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2508;
		} else if ( _widec >= 38 )
			goto tr2508;
	} else
		goto tr2508;
	goto st0;
tr2497:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1151;
tr2498:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1151;
tr2515:
	{ expr_open_parens++; }
	goto st1151;
st1151:
	if ( ++p == pe )
		goto _test_eof1151;
case 1151:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1144;
		case 5: goto st1144;
		case 8: goto st1144;
		case 13: goto st1151;
		case 18: goto tr2515;
		case 21: goto st1151;
		case 23: goto st1151;
		case 36: goto tr2515;
		case 44: goto st1151;
	}
	goto st0;
st1152:
	if ( ++p == pe )
		goto _test_eof1152;
case 1152:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2516;
	goto st0;
st1153:
	if ( ++p == pe )
		goto _test_eof1153;
case 1153:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2517;
	goto st0;
st1154:
	if ( ++p == pe )
		goto _test_eof1154;
case 1154:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2518;
	goto st0;
st1155:
	if ( ++p == pe )
		goto _test_eof1155;
case 1155:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2519;
		case 5: goto tr2519;
		case 8: goto tr2519;
		case 18: goto tr2521;
		case 21: goto tr2520;
		case 23: goto tr2520;
		case 36: goto tr2521;
		case 44: goto tr2520;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2520;
	goto st0;
tr2519:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr2522;
		case 23: goto st1157;
		case 131091: goto st1158;
		case 131109: goto st1158;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1157;
		} else if ( _widec >= 15 )
			goto st1157;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1157;
		} else if ( _widec >= 38 )
			goto st1157;
	} else
		goto st1157;
	goto st0;
tr2520:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1157;
tr2521:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1157;
tr2526:
	{ expr_open_parens++; }
	goto st1157;
tr2528:
	{ expr_open_parens--; }
	goto st1157;
st1157:
	if ( ++p == pe )
		goto _test_eof1157;
case 1157:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1156;
		case 5: goto st1156;
		case 8: goto st1156;
		case 13: goto st1157;
		case 18: goto tr2526;
		case 21: goto st1157;
		case 23: goto st1157;
		case 36: goto tr2526;
		case 44: goto st1157;
	}
	goto st0;
tr2529:
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
		case 12: goto tr2527;
		case 23: goto tr2528;
		case 131091: goto tr2529;
		case 131109: goto tr2529;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2528;
		} else if ( _widec >= 15 )
			goto tr2528;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2528;
		} else if ( _widec >= 38 )
			goto tr2528;
	} else
		goto tr2528;
	goto st0;
st1159:
	if ( ++p == pe )
		goto _test_eof1159;
case 1159:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2530;
		case 5: goto tr2530;
		case 8: goto tr2530;
		case 18: goto tr2532;
		case 21: goto tr2531;
		case 23: goto tr2531;
		case 36: goto tr2532;
		case 44: goto tr2531;
		case 48: goto st1163;
		case 53: goto st1164;
		case 54: goto st1165;
		case 55: goto st1166;
		case 56: goto st1167;
		case 57: goto st1168;
		case 58: goto st1169;
		case 59: goto st1170;
		case 60: goto st1171;
		case 61: goto st1172;
		case 62: goto st1173;
		case 71: goto st1197;
		case 79: goto st1176;
		case 80: goto st1177;
		case 81: goto st1187;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2531;
	goto st0;
tr2530:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1160;
st1160:
	if ( ++p == pe )
		goto _test_eof1160;
case 1160:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 23: goto st1161;
		case 131091: goto st1162;
		case 131109: goto st1162;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1161;
		} else if ( _widec >= 15 )
			goto st1161;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1161;
		} else if ( _widec >= 38 )
			goto st1161;
	} else
		goto st1161;
	goto st0;
tr2531:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1161;
tr2532:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1161;
tr2552:
	{ expr_open_parens++; }
	goto st1161;
tr2554:
	{ expr_open_parens--; }
	goto st1161;
st1161:
	if ( ++p == pe )
		goto _test_eof1161;
case 1161:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1160;
		case 5: goto st1160;
		case 8: goto st1160;
		case 13: goto st1161;
		case 18: goto tr2552;
		case 21: goto st1161;
		case 23: goto st1161;
		case 36: goto tr2552;
		case 44: goto st1161;
	}
	goto st0;
tr2555:
	{ expr_open_parens--; }
	goto st1162;
st1162:
	if ( ++p == pe )
		goto _test_eof1162;
case 1162:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
st1163:
	if ( ++p == pe )
		goto _test_eof1163;
case 1163:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2556;
	goto st0;
st1164:
	if ( ++p == pe )
		goto _test_eof1164;
case 1164:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2557;
	goto st0;
st1165:
	if ( ++p == pe )
		goto _test_eof1165;
case 1165:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2558;
	goto st0;
st1166:
	if ( ++p == pe )
		goto _test_eof1166;
case 1166:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2559;
	goto st0;
st1167:
	if ( ++p == pe )
		goto _test_eof1167;
case 1167:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2560;
	goto st0;
st1168:
	if ( ++p == pe )
		goto _test_eof1168;
case 1168:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2561;
	goto st0;
st1169:
	if ( ++p == pe )
		goto _test_eof1169;
case 1169:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2562;
	goto st0;
st1170:
	if ( ++p == pe )
		goto _test_eof1170;
case 1170:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2563;
	goto st0;
st1171:
	if ( ++p == pe )
		goto _test_eof1171;
case 1171:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2564;
	goto st0;
st1172:
	if ( ++p == pe )
		goto _test_eof1172;
case 1172:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2565;
	goto st0;
st1173:
	if ( ++p == pe )
		goto _test_eof1173;
case 1173:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2566;
		case 22: goto st1174;
	}
	goto st0;
st1174:
	if ( ++p == pe )
		goto _test_eof1174;
case 1174:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2530;
		case 5: goto tr2530;
		case 8: goto tr2530;
		case 18: goto tr2532;
		case 21: goto tr2531;
		case 23: goto tr2531;
		case 36: goto tr2532;
		case 44: goto tr2531;
		case 48: goto st1163;
		case 53: goto st1164;
		case 54: goto st1165;
		case 55: goto st1166;
		case 56: goto st1167;
		case 57: goto st1168;
		case 58: goto st1169;
		case 59: goto st1170;
		case 60: goto st1171;
		case 61: goto st1172;
		case 62: goto st1175;
		case 79: goto st1176;
		case 80: goto st1177;
		case 81: goto st1187;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2531;
	goto st0;
st1175:
	if ( ++p == pe )
		goto _test_eof1175;
case 1175:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2566;
	goto st0;
st1176:
	if ( ++p == pe )
		goto _test_eof1176;
case 1176:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2569;
	goto st0;
st1177:
	if ( ++p == pe )
		goto _test_eof1177;
case 1177:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2570;
		case 5: goto tr2570;
		case 8: goto tr2570;
		case 18: goto tr2572;
		case 19: goto st1186;
		case 21: goto tr2571;
		case 23: goto tr2571;
		case 36: goto tr2572;
		case 44: goto tr2571;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2571;
	goto st0;
tr2570:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1178;
st1178:
	if ( ++p == pe )
		goto _test_eof1178;
case 1178:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1179;
		case 65555: goto tr2575;
		case 131091: goto tr2576;
		case 131109: goto st1184;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1179;
		} else if ( _widec >= 15 )
			goto st1179;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1179;
		} else if ( _widec >= 38 )
			goto st1179;
	} else
		goto st1179;
	goto st0;
tr2579:
	{ expr_open_parens++; }
	goto st1179;
tr2582:
	{ expr_open_parens--; }
	goto st1179;
st1179:
	if ( ++p == pe )
		goto _test_eof1179;
case 1179:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1180;
		case 5: goto st1180;
		case 8: goto st1180;
		case 13: goto st1179;
		case 18: goto tr2579;
		case 21: goto st1179;
		case 23: goto st1179;
		case 36: goto tr2579;
		case 44: goto st1179;
	}
	goto st0;
st1180:
	if ( ++p == pe )
		goto _test_eof1180;
case 1180:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1179;
		case 65555: goto tr2575;
		case 131091: goto st1182;
		case 131109: goto st1182;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1179;
		} else if ( _widec >= 15 )
			goto st1179;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1179;
		} else if ( _widec >= 38 )
			goto st1179;
	} else
		goto st1179;
	goto st0;
tr2575:
	{ push_expr(expr_start, p); }
	goto st1181;
tr2583:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1181;
st1181:
	if ( ++p == pe )
		goto _test_eof1181;
case 1181:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2581;
	goto st0;
tr2584:
	{ expr_open_parens--; }
	goto st1182;
st1182:
	if ( ++p == pe )
		goto _test_eof1182;
case 1182:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2582;
		case 65555: goto tr2583;
		case 131091: goto tr2584;
		case 131109: goto tr2584;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2582;
		} else if ( _widec >= 15 )
			goto tr2582;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2582;
		} else if ( _widec >= 38 )
			goto tr2582;
	} else
		goto tr2582;
	goto st0;
tr2576:
	{ push_expr(expr_start, p); }
	goto st1183;
tr2585:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1183;
st1183:
	if ( ++p == pe )
		goto _test_eof1183;
case 1183:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2581;
		case 23: goto tr2582;
		case 65555: goto tr2583;
		case 131091: goto tr2585;
		case 131109: goto tr2586;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2582;
		} else if ( _widec >= 15 )
			goto tr2582;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2582;
		} else if ( _widec >= 38 )
			goto tr2582;
	} else
		goto tr2582;
	goto st0;
tr2586:
	{ expr_open_parens--; }
	goto st1184;
st1184:
	if ( ++p == pe )
		goto _test_eof1184;
case 1184:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2582;
		case 65555: goto tr2583;
		case 131091: goto tr2585;
		case 131109: goto tr2586;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2582;
		} else if ( _widec >= 15 )
			goto tr2582;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2582;
		} else if ( _widec >= 38 )
			goto tr2582;
	} else
		goto tr2582;
	goto st0;
tr2571:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1185;
tr2572:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1185;
tr2589:
	{ expr_open_parens++; }
	goto st1185;
st1185:
	if ( ++p == pe )
		goto _test_eof1185;
case 1185:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1178;
		case 5: goto st1178;
		case 8: goto st1178;
		case 13: goto st1185;
		case 18: goto tr2589;
		case 21: goto st1185;
		case 23: goto st1185;
		case 36: goto tr2589;
		case 44: goto st1185;
	}
	goto st0;
st1186:
	if ( ++p == pe )
		goto _test_eof1186;
case 1186:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2590;
	goto st0;
st1187:
	if ( ++p == pe )
		goto _test_eof1187;
case 1187:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2591;
		case 5: goto tr2591;
		case 8: goto tr2591;
		case 18: goto tr2593;
		case 19: goto st1196;
		case 21: goto tr2592;
		case 23: goto tr2592;
		case 36: goto tr2593;
		case 44: goto tr2592;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2592;
	goto st0;
tr2591:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1188;
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
		case 23: goto st1189;
		case 65555: goto tr2596;
		case 131091: goto tr2597;
		case 131109: goto st1194;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1189;
		} else if ( _widec >= 15 )
			goto st1189;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1189;
		} else if ( _widec >= 38 )
			goto st1189;
	} else
		goto st1189;
	goto st0;
tr2600:
	{ expr_open_parens++; }
	goto st1189;
tr2603:
	{ expr_open_parens--; }
	goto st1189;
st1189:
	if ( ++p == pe )
		goto _test_eof1189;
case 1189:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1190;
		case 5: goto st1190;
		case 8: goto st1190;
		case 13: goto st1189;
		case 18: goto tr2600;
		case 21: goto st1189;
		case 23: goto st1189;
		case 36: goto tr2600;
		case 44: goto st1189;
	}
	goto st0;
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
		case 23: goto st1189;
		case 65555: goto tr2596;
		case 131091: goto st1192;
		case 131109: goto st1192;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1189;
		} else if ( _widec >= 15 )
			goto st1189;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1189;
		} else if ( _widec >= 38 )
			goto st1189;
	} else
		goto st1189;
	goto st0;
tr2596:
	{ push_expr(expr_start, p); }
	goto st1191;
tr2604:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1191;
st1191:
	if ( ++p == pe )
		goto _test_eof1191;
case 1191:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2602;
	goto st0;
tr2605:
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
		case 23: goto tr2603;
		case 65555: goto tr2604;
		case 131091: goto tr2605;
		case 131109: goto tr2605;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2603;
		} else if ( _widec >= 15 )
			goto tr2603;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2603;
		} else if ( _widec >= 38 )
			goto tr2603;
	} else
		goto tr2603;
	goto st0;
tr2597:
	{ push_expr(expr_start, p); }
	goto st1193;
tr2606:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1193;
st1193:
	if ( ++p == pe )
		goto _test_eof1193;
case 1193:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2602;
		case 23: goto tr2603;
		case 65555: goto tr2604;
		case 131091: goto tr2606;
		case 131109: goto tr2607;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2603;
		} else if ( _widec >= 15 )
			goto tr2603;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2603;
		} else if ( _widec >= 38 )
			goto tr2603;
	} else
		goto tr2603;
	goto st0;
tr2607:
	{ expr_open_parens--; }
	goto st1194;
st1194:
	if ( ++p == pe )
		goto _test_eof1194;
case 1194:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2603;
		case 65555: goto tr2604;
		case 131091: goto tr2606;
		case 131109: goto tr2607;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2603;
		} else if ( _widec >= 15 )
			goto tr2603;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2603;
		} else if ( _widec >= 38 )
			goto tr2603;
	} else
		goto tr2603;
	goto st0;
tr2592:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1195;
tr2593:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1195;
tr2610:
	{ expr_open_parens++; }
	goto st1195;
st1195:
	if ( ++p == pe )
		goto _test_eof1195;
case 1195:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1188;
		case 5: goto st1188;
		case 8: goto st1188;
		case 13: goto st1195;
		case 18: goto tr2610;
		case 21: goto st1195;
		case 23: goto st1195;
		case 36: goto tr2610;
		case 44: goto st1195;
	}
	goto st0;
st1196:
	if ( ++p == pe )
		goto _test_eof1196;
case 1196:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2611;
	goto st0;
st1197:
	if ( ++p == pe )
		goto _test_eof1197;
case 1197:
	if ( ( ((int) p->tok)) == 22 )
		goto st1198;
	goto st0;
st1198:
	if ( ++p == pe )
		goto _test_eof1198;
case 1198:
	switch( ( ((int) p->tok)) ) {
		case 69: goto st1199;
		case 70: goto st1200;
		case 71: goto st1201;
		case 75: goto st1202;
	}
	goto st0;
st1199:
	if ( ++p == pe )
		goto _test_eof1199;
case 1199:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2617;
	goto st0;
st1200:
	if ( ++p == pe )
		goto _test_eof1200;
case 1200:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2618;
	goto st0;
st1201:
	if ( ++p == pe )
		goto _test_eof1201;
case 1201:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2619;
	goto st0;
st1202:
	if ( ++p == pe )
		goto _test_eof1202;
case 1202:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2620;
	goto st0;
st1203:
	if ( ++p == pe )
		goto _test_eof1203;
case 1203:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2621;
	goto st0;
st1204:
	if ( ++p == pe )
		goto _test_eof1204;
case 1204:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2622;
		case 5: goto tr2622;
		case 8: goto tr2622;
		case 18: goto tr2624;
		case 21: goto tr2623;
		case 23: goto tr2623;
		case 36: goto tr2624;
		case 44: goto tr2623;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2623;
	goto st0;
tr2622:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1205;
st1205:
	if ( ++p == pe )
		goto _test_eof1205;
case 1205:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2626;
		case 131091: goto st1236;
		case 131109: goto st1236;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto st1206;
		} else if ( _widec >= 15 )
			goto st1206;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1206;
		} else if ( _widec >= 38 )
			goto st1206;
	} else
		goto st1206;
	goto st0;
tr2623:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1206;
tr2624:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1206;
tr2629:
	{ expr_open_parens++; }
	goto st1206;
tr2690:
	{ expr_open_parens--; }
	goto st1206;
st1206:
	if ( ++p == pe )
		goto _test_eof1206;
case 1206:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1205;
		case 5: goto st1205;
		case 8: goto st1205;
		case 13: goto st1206;
		case 18: goto tr2629;
		case 21: goto st1206;
		case 23: goto st1206;
		case 36: goto tr2629;
		case 44: goto st1206;
	}
	goto st0;
tr2626:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1207;
tr2691:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1207;
st1207:
	if ( ++p == pe )
		goto _test_eof1207;
case 1207:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1208;
		case 53: goto st1209;
		case 54: goto st1210;
		case 55: goto st1211;
		case 56: goto st1212;
		case 59: goto st1213;
		case 62: goto st1214;
		case 79: goto st1215;
		case 80: goto st1216;
		case 81: goto st1226;
	}
	goto st0;
st1208:
	if ( ++p == pe )
		goto _test_eof1208;
case 1208:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2640;
	goto st0;
st1209:
	if ( ++p == pe )
		goto _test_eof1209;
case 1209:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2641;
	goto st0;
st1210:
	if ( ++p == pe )
		goto _test_eof1210;
case 1210:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2642;
	goto st0;
st1211:
	if ( ++p == pe )
		goto _test_eof1211;
case 1211:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2643;
	goto st0;
st1212:
	if ( ++p == pe )
		goto _test_eof1212;
case 1212:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2644;
	goto st0;
st1213:
	if ( ++p == pe )
		goto _test_eof1213;
case 1213:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2645;
	goto st0;
st1214:
	if ( ++p == pe )
		goto _test_eof1214;
case 1214:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2646;
	goto st0;
st1215:
	if ( ++p == pe )
		goto _test_eof1215;
case 1215:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2647;
	goto st0;
st1216:
	if ( ++p == pe )
		goto _test_eof1216;
case 1216:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2648;
		case 5: goto tr2648;
		case 8: goto tr2648;
		case 18: goto tr2650;
		case 19: goto st1225;
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
	goto st1217;
st1217:
	if ( ++p == pe )
		goto _test_eof1217;
case 1217:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1218;
		case 65555: goto tr2653;
		case 131091: goto tr2654;
		case 131109: goto st1223;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1218;
		} else if ( _widec >= 15 )
			goto st1218;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1218;
		} else if ( _widec >= 38 )
			goto st1218;
	} else
		goto st1218;
	goto st0;
tr2657:
	{ expr_open_parens++; }
	goto st1218;
tr2660:
	{ expr_open_parens--; }
	goto st1218;
st1218:
	if ( ++p == pe )
		goto _test_eof1218;
case 1218:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1219;
		case 5: goto st1219;
		case 8: goto st1219;
		case 13: goto st1218;
		case 18: goto tr2657;
		case 21: goto st1218;
		case 23: goto st1218;
		case 36: goto tr2657;
		case 44: goto st1218;
	}
	goto st0;
st1219:
	if ( ++p == pe )
		goto _test_eof1219;
case 1219:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1218;
		case 65555: goto tr2653;
		case 131091: goto st1221;
		case 131109: goto st1221;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1218;
		} else if ( _widec >= 15 )
			goto st1218;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1218;
		} else if ( _widec >= 38 )
			goto st1218;
	} else
		goto st1218;
	goto st0;
tr2653:
	{ push_expr(expr_start, p); }
	goto st1220;
tr2661:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1220;
st1220:
	if ( ++p == pe )
		goto _test_eof1220;
case 1220:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2659;
	goto st0;
tr2662:
	{ expr_open_parens--; }
	goto st1221;
st1221:
	if ( ++p == pe )
		goto _test_eof1221;
case 1221:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2660;
		case 65555: goto tr2661;
		case 131091: goto tr2662;
		case 131109: goto tr2662;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2660;
		} else if ( _widec >= 15 )
			goto tr2660;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2660;
		} else if ( _widec >= 38 )
			goto tr2660;
	} else
		goto tr2660;
	goto st0;
tr2654:
	{ push_expr(expr_start, p); }
	goto st1222;
tr2663:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1222;
st1222:
	if ( ++p == pe )
		goto _test_eof1222;
case 1222:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2659;
		case 23: goto tr2660;
		case 65555: goto tr2661;
		case 131091: goto tr2663;
		case 131109: goto tr2664;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2660;
		} else if ( _widec >= 15 )
			goto tr2660;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2660;
		} else if ( _widec >= 38 )
			goto tr2660;
	} else
		goto tr2660;
	goto st0;
tr2664:
	{ expr_open_parens--; }
	goto st1223;
st1223:
	if ( ++p == pe )
		goto _test_eof1223;
case 1223:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2660;
		case 65555: goto tr2661;
		case 131091: goto tr2663;
		case 131109: goto tr2664;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2660;
		} else if ( _widec >= 15 )
			goto tr2660;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2660;
		} else if ( _widec >= 38 )
			goto tr2660;
	} else
		goto tr2660;
	goto st0;
tr2649:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1224;
tr2650:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1224;
tr2667:
	{ expr_open_parens++; }
	goto st1224;
st1224:
	if ( ++p == pe )
		goto _test_eof1224;
case 1224:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1217;
		case 5: goto st1217;
		case 8: goto st1217;
		case 13: goto st1224;
		case 18: goto tr2667;
		case 21: goto st1224;
		case 23: goto st1224;
		case 36: goto tr2667;
		case 44: goto st1224;
	}
	goto st0;
st1225:
	if ( ++p == pe )
		goto _test_eof1225;
case 1225:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2668;
	goto st0;
st1226:
	if ( ++p == pe )
		goto _test_eof1226;
case 1226:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2669;
		case 5: goto tr2669;
		case 8: goto tr2669;
		case 18: goto tr2671;
		case 19: goto st1235;
		case 21: goto tr2670;
		case 23: goto tr2670;
		case 36: goto tr2671;
		case 44: goto tr2670;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2670;
	goto st0;
tr2669:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1227;
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
		case 23: goto st1228;
		case 65555: goto tr2674;
		case 131091: goto tr2675;
		case 131109: goto st1233;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1228;
		} else if ( _widec >= 15 )
			goto st1228;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1228;
		} else if ( _widec >= 38 )
			goto st1228;
	} else
		goto st1228;
	goto st0;
tr2678:
	{ expr_open_parens++; }
	goto st1228;
tr2681:
	{ expr_open_parens--; }
	goto st1228;
st1228:
	if ( ++p == pe )
		goto _test_eof1228;
case 1228:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1229;
		case 5: goto st1229;
		case 8: goto st1229;
		case 13: goto st1228;
		case 18: goto tr2678;
		case 21: goto st1228;
		case 23: goto st1228;
		case 36: goto tr2678;
		case 44: goto st1228;
	}
	goto st0;
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
		case 23: goto st1228;
		case 65555: goto tr2674;
		case 131091: goto st1231;
		case 131109: goto st1231;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1228;
		} else if ( _widec >= 15 )
			goto st1228;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1228;
		} else if ( _widec >= 38 )
			goto st1228;
	} else
		goto st1228;
	goto st0;
tr2674:
	{ push_expr(expr_start, p); }
	goto st1230;
tr2682:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1230;
st1230:
	if ( ++p == pe )
		goto _test_eof1230;
case 1230:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2680;
	goto st0;
tr2683:
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
		case 23: goto tr2681;
		case 65555: goto tr2682;
		case 131091: goto tr2683;
		case 131109: goto tr2683;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2681;
		} else if ( _widec >= 15 )
			goto tr2681;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2681;
		} else if ( _widec >= 38 )
			goto tr2681;
	} else
		goto tr2681;
	goto st0;
tr2675:
	{ push_expr(expr_start, p); }
	goto st1232;
tr2684:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1232;
st1232:
	if ( ++p == pe )
		goto _test_eof1232;
case 1232:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2680;
		case 23: goto tr2681;
		case 65555: goto tr2682;
		case 131091: goto tr2684;
		case 131109: goto tr2685;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2681;
		} else if ( _widec >= 15 )
			goto tr2681;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2681;
		} else if ( _widec >= 38 )
			goto tr2681;
	} else
		goto tr2681;
	goto st0;
tr2685:
	{ expr_open_parens--; }
	goto st1233;
st1233:
	if ( ++p == pe )
		goto _test_eof1233;
case 1233:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2681;
		case 65555: goto tr2682;
		case 131091: goto tr2684;
		case 131109: goto tr2685;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2681;
		} else if ( _widec >= 15 )
			goto tr2681;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2681;
		} else if ( _widec >= 38 )
			goto tr2681;
	} else
		goto tr2681;
	goto st0;
tr2670:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1234;
tr2671:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1234;
tr2688:
	{ expr_open_parens++; }
	goto st1234;
st1234:
	if ( ++p == pe )
		goto _test_eof1234;
case 1234:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1227;
		case 5: goto st1227;
		case 8: goto st1227;
		case 13: goto st1234;
		case 18: goto tr2688;
		case 21: goto st1234;
		case 23: goto st1234;
		case 36: goto tr2688;
		case 44: goto st1234;
	}
	goto st0;
st1235:
	if ( ++p == pe )
		goto _test_eof1235;
case 1235:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2689;
	goto st0;
tr2692:
	{ expr_open_parens--; }
	goto st1236;
st1236:
	if ( ++p == pe )
		goto _test_eof1236;
case 1236:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 22: goto tr2691;
		case 131091: goto tr2692;
		case 131109: goto tr2692;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 23 )
				goto tr2690;
		} else if ( _widec >= 15 )
			goto tr2690;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2690;
		} else if ( _widec >= 38 )
			goto tr2690;
	} else
		goto tr2690;
	goto st0;
st1237:
	if ( ++p == pe )
		goto _test_eof1237;
case 1237:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1238;
		case 53: goto st1239;
		case 54: goto st1240;
		case 55: goto st1241;
		case 56: goto st1242;
		case 59: goto st1243;
		case 62: goto st1244;
		case 79: goto st1245;
		case 80: goto st1246;
		case 81: goto st1256;
	}
	goto st0;
st1238:
	if ( ++p == pe )
		goto _test_eof1238;
case 1238:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2703;
	goto st0;
st1239:
	if ( ++p == pe )
		goto _test_eof1239;
case 1239:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2704;
	goto st0;
st1240:
	if ( ++p == pe )
		goto _test_eof1240;
case 1240:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2705;
	goto st0;
st1241:
	if ( ++p == pe )
		goto _test_eof1241;
case 1241:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2706;
	goto st0;
st1242:
	if ( ++p == pe )
		goto _test_eof1242;
case 1242:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2707;
	goto st0;
st1243:
	if ( ++p == pe )
		goto _test_eof1243;
case 1243:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2708;
	goto st0;
st1244:
	if ( ++p == pe )
		goto _test_eof1244;
case 1244:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2709;
	goto st0;
st1245:
	if ( ++p == pe )
		goto _test_eof1245;
case 1245:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2710;
	goto st0;
st1246:
	if ( ++p == pe )
		goto _test_eof1246;
case 1246:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2711;
		case 5: goto tr2711;
		case 8: goto tr2711;
		case 18: goto tr2713;
		case 19: goto st1255;
		case 21: goto tr2712;
		case 23: goto tr2712;
		case 36: goto tr2713;
		case 44: goto tr2712;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2712;
	goto st0;
tr2711:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1247;
st1247:
	if ( ++p == pe )
		goto _test_eof1247;
case 1247:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1248;
		case 65555: goto tr2716;
		case 131091: goto tr2717;
		case 131109: goto st1253;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1248;
		} else if ( _widec >= 15 )
			goto st1248;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1248;
		} else if ( _widec >= 38 )
			goto st1248;
	} else
		goto st1248;
	goto st0;
tr2720:
	{ expr_open_parens++; }
	goto st1248;
tr2723:
	{ expr_open_parens--; }
	goto st1248;
st1248:
	if ( ++p == pe )
		goto _test_eof1248;
case 1248:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1249;
		case 5: goto st1249;
		case 8: goto st1249;
		case 13: goto st1248;
		case 18: goto tr2720;
		case 21: goto st1248;
		case 23: goto st1248;
		case 36: goto tr2720;
		case 44: goto st1248;
	}
	goto st0;
st1249:
	if ( ++p == pe )
		goto _test_eof1249;
case 1249:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1248;
		case 65555: goto tr2716;
		case 131091: goto st1251;
		case 131109: goto st1251;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1248;
		} else if ( _widec >= 15 )
			goto st1248;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1248;
		} else if ( _widec >= 38 )
			goto st1248;
	} else
		goto st1248;
	goto st0;
tr2716:
	{ push_expr(expr_start, p); }
	goto st1250;
tr2724:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1250;
st1250:
	if ( ++p == pe )
		goto _test_eof1250;
case 1250:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2722;
	goto st0;
tr2725:
	{ expr_open_parens--; }
	goto st1251;
st1251:
	if ( ++p == pe )
		goto _test_eof1251;
case 1251:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2723;
		case 65555: goto tr2724;
		case 131091: goto tr2725;
		case 131109: goto tr2725;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2723;
		} else if ( _widec >= 15 )
			goto tr2723;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2723;
		} else if ( _widec >= 38 )
			goto tr2723;
	} else
		goto tr2723;
	goto st0;
tr2717:
	{ push_expr(expr_start, p); }
	goto st1252;
tr2726:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1252;
st1252:
	if ( ++p == pe )
		goto _test_eof1252;
case 1252:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2722;
		case 23: goto tr2723;
		case 65555: goto tr2724;
		case 131091: goto tr2726;
		case 131109: goto tr2727;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2723;
		} else if ( _widec >= 15 )
			goto tr2723;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2723;
		} else if ( _widec >= 38 )
			goto tr2723;
	} else
		goto tr2723;
	goto st0;
tr2727:
	{ expr_open_parens--; }
	goto st1253;
st1253:
	if ( ++p == pe )
		goto _test_eof1253;
case 1253:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2723;
		case 65555: goto tr2724;
		case 131091: goto tr2726;
		case 131109: goto tr2727;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2723;
		} else if ( _widec >= 15 )
			goto tr2723;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2723;
		} else if ( _widec >= 38 )
			goto tr2723;
	} else
		goto tr2723;
	goto st0;
tr2712:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1254;
tr2713:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1254;
tr2730:
	{ expr_open_parens++; }
	goto st1254;
st1254:
	if ( ++p == pe )
		goto _test_eof1254;
case 1254:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1247;
		case 5: goto st1247;
		case 8: goto st1247;
		case 13: goto st1254;
		case 18: goto tr2730;
		case 21: goto st1254;
		case 23: goto st1254;
		case 36: goto tr2730;
		case 44: goto st1254;
	}
	goto st0;
st1255:
	if ( ++p == pe )
		goto _test_eof1255;
case 1255:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2731;
	goto st0;
st1256:
	if ( ++p == pe )
		goto _test_eof1256;
case 1256:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2732;
		case 5: goto tr2732;
		case 8: goto tr2732;
		case 18: goto tr2734;
		case 19: goto st1265;
		case 21: goto tr2733;
		case 23: goto tr2733;
		case 36: goto tr2734;
		case 44: goto tr2733;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2733;
	goto st0;
tr2732:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1257;
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
		case 23: goto st1258;
		case 65555: goto tr2737;
		case 131091: goto tr2738;
		case 131109: goto st1263;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1258;
		} else if ( _widec >= 15 )
			goto st1258;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1258;
		} else if ( _widec >= 38 )
			goto st1258;
	} else
		goto st1258;
	goto st0;
tr2741:
	{ expr_open_parens++; }
	goto st1258;
tr2744:
	{ expr_open_parens--; }
	goto st1258;
st1258:
	if ( ++p == pe )
		goto _test_eof1258;
case 1258:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1259;
		case 5: goto st1259;
		case 8: goto st1259;
		case 13: goto st1258;
		case 18: goto tr2741;
		case 21: goto st1258;
		case 23: goto st1258;
		case 36: goto tr2741;
		case 44: goto st1258;
	}
	goto st0;
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
		case 23: goto st1258;
		case 65555: goto tr2737;
		case 131091: goto st1261;
		case 131109: goto st1261;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1258;
		} else if ( _widec >= 15 )
			goto st1258;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1258;
		} else if ( _widec >= 38 )
			goto st1258;
	} else
		goto st1258;
	goto st0;
tr2737:
	{ push_expr(expr_start, p); }
	goto st1260;
tr2745:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1260;
st1260:
	if ( ++p == pe )
		goto _test_eof1260;
case 1260:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2743;
	goto st0;
tr2746:
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
		case 23: goto tr2744;
		case 65555: goto tr2745;
		case 131091: goto tr2746;
		case 131109: goto tr2746;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2744;
		} else if ( _widec >= 15 )
			goto tr2744;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2744;
		} else if ( _widec >= 38 )
			goto tr2744;
	} else
		goto tr2744;
	goto st0;
tr2738:
	{ push_expr(expr_start, p); }
	goto st1262;
tr2747:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1262;
st1262:
	if ( ++p == pe )
		goto _test_eof1262;
case 1262:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2743;
		case 23: goto tr2744;
		case 65555: goto tr2745;
		case 131091: goto tr2747;
		case 131109: goto tr2748;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2744;
		} else if ( _widec >= 15 )
			goto tr2744;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2744;
		} else if ( _widec >= 38 )
			goto tr2744;
	} else
		goto tr2744;
	goto st0;
tr2748:
	{ expr_open_parens--; }
	goto st1263;
st1263:
	if ( ++p == pe )
		goto _test_eof1263;
case 1263:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2744;
		case 65555: goto tr2745;
		case 131091: goto tr2747;
		case 131109: goto tr2748;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2744;
		} else if ( _widec >= 15 )
			goto tr2744;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2744;
		} else if ( _widec >= 38 )
			goto tr2744;
	} else
		goto tr2744;
	goto st0;
tr2733:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1264;
tr2734:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1264;
tr2751:
	{ expr_open_parens++; }
	goto st1264;
st1264:
	if ( ++p == pe )
		goto _test_eof1264;
case 1264:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1257;
		case 5: goto st1257;
		case 8: goto st1257;
		case 13: goto st1264;
		case 18: goto tr2751;
		case 21: goto st1264;
		case 23: goto st1264;
		case 36: goto tr2751;
		case 44: goto st1264;
	}
	goto st0;
st1265:
	if ( ++p == pe )
		goto _test_eof1265;
case 1265:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2752;
	goto st0;
st1266:
	if ( ++p == pe )
		goto _test_eof1266;
case 1266:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1267;
		case 53: goto st1268;
		case 54: goto st1269;
		case 55: goto st1270;
		case 56: goto st1271;
		case 59: goto st1272;
		case 62: goto st1273;
		case 79: goto st1274;
		case 80: goto st1275;
		case 81: goto st1285;
	}
	goto st0;
st1267:
	if ( ++p == pe )
		goto _test_eof1267;
case 1267:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2763;
	goto st0;
st1268:
	if ( ++p == pe )
		goto _test_eof1268;
case 1268:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2764;
	goto st0;
st1269:
	if ( ++p == pe )
		goto _test_eof1269;
case 1269:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2765;
	goto st0;
st1270:
	if ( ++p == pe )
		goto _test_eof1270;
case 1270:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2766;
	goto st0;
st1271:
	if ( ++p == pe )
		goto _test_eof1271;
case 1271:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2767;
	goto st0;
st1272:
	if ( ++p == pe )
		goto _test_eof1272;
case 1272:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2768;
	goto st0;
st1273:
	if ( ++p == pe )
		goto _test_eof1273;
case 1273:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2769;
	goto st0;
st1274:
	if ( ++p == pe )
		goto _test_eof1274;
case 1274:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2770;
	goto st0;
st1275:
	if ( ++p == pe )
		goto _test_eof1275;
case 1275:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2771;
		case 5: goto tr2771;
		case 8: goto tr2771;
		case 18: goto tr2773;
		case 19: goto st1284;
		case 21: goto tr2772;
		case 23: goto tr2772;
		case 36: goto tr2773;
		case 44: goto tr2772;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2772;
	goto st0;
tr2771:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1276;
st1276:
	if ( ++p == pe )
		goto _test_eof1276;
case 1276:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1277;
		case 65555: goto tr2776;
		case 131091: goto tr2777;
		case 131109: goto st1282;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1277;
		} else if ( _widec >= 15 )
			goto st1277;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1277;
		} else if ( _widec >= 38 )
			goto st1277;
	} else
		goto st1277;
	goto st0;
tr2780:
	{ expr_open_parens++; }
	goto st1277;
tr2783:
	{ expr_open_parens--; }
	goto st1277;
st1277:
	if ( ++p == pe )
		goto _test_eof1277;
case 1277:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1278;
		case 5: goto st1278;
		case 8: goto st1278;
		case 13: goto st1277;
		case 18: goto tr2780;
		case 21: goto st1277;
		case 23: goto st1277;
		case 36: goto tr2780;
		case 44: goto st1277;
	}
	goto st0;
st1278:
	if ( ++p == pe )
		goto _test_eof1278;
case 1278:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1277;
		case 65555: goto tr2776;
		case 131091: goto st1280;
		case 131109: goto st1280;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1277;
		} else if ( _widec >= 15 )
			goto st1277;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1277;
		} else if ( _widec >= 38 )
			goto st1277;
	} else
		goto st1277;
	goto st0;
tr2776:
	{ push_expr(expr_start, p); }
	goto st1279;
tr2784:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1279;
st1279:
	if ( ++p == pe )
		goto _test_eof1279;
case 1279:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2782;
	goto st0;
tr2785:
	{ expr_open_parens--; }
	goto st1280;
st1280:
	if ( ++p == pe )
		goto _test_eof1280;
case 1280:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2783;
		case 65555: goto tr2784;
		case 131091: goto tr2785;
		case 131109: goto tr2785;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2783;
		} else if ( _widec >= 15 )
			goto tr2783;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2783;
		} else if ( _widec >= 38 )
			goto tr2783;
	} else
		goto tr2783;
	goto st0;
tr2777:
	{ push_expr(expr_start, p); }
	goto st1281;
tr2786:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1281;
st1281:
	if ( ++p == pe )
		goto _test_eof1281;
case 1281:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2782;
		case 23: goto tr2783;
		case 65555: goto tr2784;
		case 131091: goto tr2786;
		case 131109: goto tr2787;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2783;
		} else if ( _widec >= 15 )
			goto tr2783;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2783;
		} else if ( _widec >= 38 )
			goto tr2783;
	} else
		goto tr2783;
	goto st0;
tr2787:
	{ expr_open_parens--; }
	goto st1282;
st1282:
	if ( ++p == pe )
		goto _test_eof1282;
case 1282:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2783;
		case 65555: goto tr2784;
		case 131091: goto tr2786;
		case 131109: goto tr2787;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2783;
		} else if ( _widec >= 15 )
			goto tr2783;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2783;
		} else if ( _widec >= 38 )
			goto tr2783;
	} else
		goto tr2783;
	goto st0;
tr2772:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1283;
tr2773:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1283;
tr2790:
	{ expr_open_parens++; }
	goto st1283;
st1283:
	if ( ++p == pe )
		goto _test_eof1283;
case 1283:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1276;
		case 5: goto st1276;
		case 8: goto st1276;
		case 13: goto st1283;
		case 18: goto tr2790;
		case 21: goto st1283;
		case 23: goto st1283;
		case 36: goto tr2790;
		case 44: goto st1283;
	}
	goto st0;
st1284:
	if ( ++p == pe )
		goto _test_eof1284;
case 1284:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2791;
	goto st0;
st1285:
	if ( ++p == pe )
		goto _test_eof1285;
case 1285:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2792;
		case 5: goto tr2792;
		case 8: goto tr2792;
		case 18: goto tr2794;
		case 19: goto st1294;
		case 21: goto tr2793;
		case 23: goto tr2793;
		case 36: goto tr2794;
		case 44: goto tr2793;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2793;
	goto st0;
tr2792:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1286;
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
		case 23: goto st1287;
		case 65555: goto tr2797;
		case 131091: goto tr2798;
		case 131109: goto st1292;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1287;
		} else if ( _widec >= 15 )
			goto st1287;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1287;
		} else if ( _widec >= 38 )
			goto st1287;
	} else
		goto st1287;
	goto st0;
tr2801:
	{ expr_open_parens++; }
	goto st1287;
tr2804:
	{ expr_open_parens--; }
	goto st1287;
st1287:
	if ( ++p == pe )
		goto _test_eof1287;
case 1287:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1288;
		case 5: goto st1288;
		case 8: goto st1288;
		case 13: goto st1287;
		case 18: goto tr2801;
		case 21: goto st1287;
		case 23: goto st1287;
		case 36: goto tr2801;
		case 44: goto st1287;
	}
	goto st0;
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
		case 23: goto st1287;
		case 65555: goto tr2797;
		case 131091: goto st1290;
		case 131109: goto st1290;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1287;
		} else if ( _widec >= 15 )
			goto st1287;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1287;
		} else if ( _widec >= 38 )
			goto st1287;
	} else
		goto st1287;
	goto st0;
tr2797:
	{ push_expr(expr_start, p); }
	goto st1289;
tr2805:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1289;
st1289:
	if ( ++p == pe )
		goto _test_eof1289;
case 1289:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2803;
	goto st0;
tr2806:
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
		case 23: goto tr2804;
		case 65555: goto tr2805;
		case 131091: goto tr2806;
		case 131109: goto tr2806;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2804;
		} else if ( _widec >= 15 )
			goto tr2804;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2804;
		} else if ( _widec >= 38 )
			goto tr2804;
	} else
		goto tr2804;
	goto st0;
tr2798:
	{ push_expr(expr_start, p); }
	goto st1291;
tr2807:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1291;
st1291:
	if ( ++p == pe )
		goto _test_eof1291;
case 1291:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2803;
		case 23: goto tr2804;
		case 65555: goto tr2805;
		case 131091: goto tr2807;
		case 131109: goto tr2808;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2804;
		} else if ( _widec >= 15 )
			goto tr2804;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2804;
		} else if ( _widec >= 38 )
			goto tr2804;
	} else
		goto tr2804;
	goto st0;
tr2808:
	{ expr_open_parens--; }
	goto st1292;
st1292:
	if ( ++p == pe )
		goto _test_eof1292;
case 1292:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2804;
		case 65555: goto tr2805;
		case 131091: goto tr2807;
		case 131109: goto tr2808;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2804;
		} else if ( _widec >= 15 )
			goto tr2804;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2804;
		} else if ( _widec >= 38 )
			goto tr2804;
	} else
		goto tr2804;
	goto st0;
tr2793:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1293;
tr2794:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1293;
tr2811:
	{ expr_open_parens++; }
	goto st1293;
st1293:
	if ( ++p == pe )
		goto _test_eof1293;
case 1293:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1286;
		case 5: goto st1286;
		case 8: goto st1286;
		case 13: goto st1293;
		case 18: goto tr2811;
		case 21: goto st1293;
		case 23: goto st1293;
		case 36: goto tr2811;
		case 44: goto st1293;
	}
	goto st0;
st1294:
	if ( ++p == pe )
		goto _test_eof1294;
case 1294:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2812;
	goto st0;
st1295:
	if ( ++p == pe )
		goto _test_eof1295;
case 1295:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1296;
		case 53: goto st1297;
		case 54: goto st1298;
		case 55: goto st1299;
		case 56: goto st1300;
		case 59: goto st1301;
		case 62: goto st1302;
		case 79: goto st1303;
		case 80: goto st1304;
		case 81: goto st1314;
	}
	goto st0;
st1296:
	if ( ++p == pe )
		goto _test_eof1296;
case 1296:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2823;
	goto st0;
st1297:
	if ( ++p == pe )
		goto _test_eof1297;
case 1297:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2824;
	goto st0;
st1298:
	if ( ++p == pe )
		goto _test_eof1298;
case 1298:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2825;
	goto st0;
st1299:
	if ( ++p == pe )
		goto _test_eof1299;
case 1299:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2826;
	goto st0;
st1300:
	if ( ++p == pe )
		goto _test_eof1300;
case 1300:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2827;
	goto st0;
st1301:
	if ( ++p == pe )
		goto _test_eof1301;
case 1301:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2828;
	goto st0;
st1302:
	if ( ++p == pe )
		goto _test_eof1302;
case 1302:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2829;
	goto st0;
st1303:
	if ( ++p == pe )
		goto _test_eof1303;
case 1303:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2830;
	goto st0;
st1304:
	if ( ++p == pe )
		goto _test_eof1304;
case 1304:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2831;
		case 5: goto tr2831;
		case 8: goto tr2831;
		case 18: goto tr2833;
		case 19: goto st1313;
		case 21: goto tr2832;
		case 23: goto tr2832;
		case 36: goto tr2833;
		case 44: goto tr2832;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2832;
	goto st0;
tr2831:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1305;
st1305:
	if ( ++p == pe )
		goto _test_eof1305;
case 1305:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1306;
		case 65555: goto tr2836;
		case 131091: goto tr2837;
		case 131109: goto st1311;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1306;
		} else if ( _widec >= 15 )
			goto st1306;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1306;
		} else if ( _widec >= 38 )
			goto st1306;
	} else
		goto st1306;
	goto st0;
tr2840:
	{ expr_open_parens++; }
	goto st1306;
tr2843:
	{ expr_open_parens--; }
	goto st1306;
st1306:
	if ( ++p == pe )
		goto _test_eof1306;
case 1306:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1307;
		case 5: goto st1307;
		case 8: goto st1307;
		case 13: goto st1306;
		case 18: goto tr2840;
		case 21: goto st1306;
		case 23: goto st1306;
		case 36: goto tr2840;
		case 44: goto st1306;
	}
	goto st0;
st1307:
	if ( ++p == pe )
		goto _test_eof1307;
case 1307:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1306;
		case 65555: goto tr2836;
		case 131091: goto st1309;
		case 131109: goto st1309;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1306;
		} else if ( _widec >= 15 )
			goto st1306;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1306;
		} else if ( _widec >= 38 )
			goto st1306;
	} else
		goto st1306;
	goto st0;
tr2836:
	{ push_expr(expr_start, p); }
	goto st1308;
tr2844:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1308;
st1308:
	if ( ++p == pe )
		goto _test_eof1308;
case 1308:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2842;
	goto st0;
tr2845:
	{ expr_open_parens--; }
	goto st1309;
st1309:
	if ( ++p == pe )
		goto _test_eof1309;
case 1309:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2843;
		case 65555: goto tr2844;
		case 131091: goto tr2845;
		case 131109: goto tr2845;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2843;
		} else if ( _widec >= 15 )
			goto tr2843;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2843;
		} else if ( _widec >= 38 )
			goto tr2843;
	} else
		goto tr2843;
	goto st0;
tr2837:
	{ push_expr(expr_start, p); }
	goto st1310;
tr2846:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1310;
st1310:
	if ( ++p == pe )
		goto _test_eof1310;
case 1310:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2842;
		case 23: goto tr2843;
		case 65555: goto tr2844;
		case 131091: goto tr2846;
		case 131109: goto tr2847;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2843;
		} else if ( _widec >= 15 )
			goto tr2843;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2843;
		} else if ( _widec >= 38 )
			goto tr2843;
	} else
		goto tr2843;
	goto st0;
tr2847:
	{ expr_open_parens--; }
	goto st1311;
st1311:
	if ( ++p == pe )
		goto _test_eof1311;
case 1311:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2843;
		case 65555: goto tr2844;
		case 131091: goto tr2846;
		case 131109: goto tr2847;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2843;
		} else if ( _widec >= 15 )
			goto tr2843;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2843;
		} else if ( _widec >= 38 )
			goto tr2843;
	} else
		goto tr2843;
	goto st0;
tr2832:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1312;
tr2833:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1312;
tr2850:
	{ expr_open_parens++; }
	goto st1312;
st1312:
	if ( ++p == pe )
		goto _test_eof1312;
case 1312:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1305;
		case 5: goto st1305;
		case 8: goto st1305;
		case 13: goto st1312;
		case 18: goto tr2850;
		case 21: goto st1312;
		case 23: goto st1312;
		case 36: goto tr2850;
		case 44: goto st1312;
	}
	goto st0;
st1313:
	if ( ++p == pe )
		goto _test_eof1313;
case 1313:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2851;
	goto st0;
st1314:
	if ( ++p == pe )
		goto _test_eof1314;
case 1314:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2852;
		case 5: goto tr2852;
		case 8: goto tr2852;
		case 18: goto tr2854;
		case 19: goto st1323;
		case 21: goto tr2853;
		case 23: goto tr2853;
		case 36: goto tr2854;
		case 44: goto tr2853;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2853;
	goto st0;
tr2852:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1315;
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
		case 23: goto st1316;
		case 65555: goto tr2857;
		case 131091: goto tr2858;
		case 131109: goto st1321;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1316;
		} else if ( _widec >= 15 )
			goto st1316;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1316;
		} else if ( _widec >= 38 )
			goto st1316;
	} else
		goto st1316;
	goto st0;
tr2861:
	{ expr_open_parens++; }
	goto st1316;
tr2864:
	{ expr_open_parens--; }
	goto st1316;
st1316:
	if ( ++p == pe )
		goto _test_eof1316;
case 1316:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1317;
		case 5: goto st1317;
		case 8: goto st1317;
		case 13: goto st1316;
		case 18: goto tr2861;
		case 21: goto st1316;
		case 23: goto st1316;
		case 36: goto tr2861;
		case 44: goto st1316;
	}
	goto st0;
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
		case 23: goto st1316;
		case 65555: goto tr2857;
		case 131091: goto st1319;
		case 131109: goto st1319;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1316;
		} else if ( _widec >= 15 )
			goto st1316;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1316;
		} else if ( _widec >= 38 )
			goto st1316;
	} else
		goto st1316;
	goto st0;
tr2857:
	{ push_expr(expr_start, p); }
	goto st1318;
tr2865:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1318;
st1318:
	if ( ++p == pe )
		goto _test_eof1318;
case 1318:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2863;
	goto st0;
tr2866:
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
		case 23: goto tr2864;
		case 65555: goto tr2865;
		case 131091: goto tr2866;
		case 131109: goto tr2866;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2864;
		} else if ( _widec >= 15 )
			goto tr2864;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2864;
		} else if ( _widec >= 38 )
			goto tr2864;
	} else
		goto tr2864;
	goto st0;
tr2858:
	{ push_expr(expr_start, p); }
	goto st1320;
tr2867:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1320;
st1320:
	if ( ++p == pe )
		goto _test_eof1320;
case 1320:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2863;
		case 23: goto tr2864;
		case 65555: goto tr2865;
		case 131091: goto tr2867;
		case 131109: goto tr2868;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2864;
		} else if ( _widec >= 15 )
			goto tr2864;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2864;
		} else if ( _widec >= 38 )
			goto tr2864;
	} else
		goto tr2864;
	goto st0;
tr2868:
	{ expr_open_parens--; }
	goto st1321;
st1321:
	if ( ++p == pe )
		goto _test_eof1321;
case 1321:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2864;
		case 65555: goto tr2865;
		case 131091: goto tr2867;
		case 131109: goto tr2868;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2864;
		} else if ( _widec >= 15 )
			goto tr2864;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2864;
		} else if ( _widec >= 38 )
			goto tr2864;
	} else
		goto tr2864;
	goto st0;
tr2853:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1322;
tr2854:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1322;
tr2871:
	{ expr_open_parens++; }
	goto st1322;
st1322:
	if ( ++p == pe )
		goto _test_eof1322;
case 1322:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1315;
		case 5: goto st1315;
		case 8: goto st1315;
		case 13: goto st1322;
		case 18: goto tr2871;
		case 21: goto st1322;
		case 23: goto st1322;
		case 36: goto tr2871;
		case 44: goto st1322;
	}
	goto st0;
st1323:
	if ( ++p == pe )
		goto _test_eof1323;
case 1323:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2872;
	goto st0;
st1324:
	if ( ++p == pe )
		goto _test_eof1324;
case 1324:
	switch( ( ((int) p->tok)) ) {
		case 48: goto st1325;
		case 53: goto st1326;
		case 54: goto st1327;
		case 55: goto st1328;
		case 56: goto st1329;
		case 59: goto st1330;
		case 62: goto st1331;
		case 79: goto st1332;
		case 80: goto st1333;
		case 81: goto st1343;
	}
	goto st0;
st1325:
	if ( ++p == pe )
		goto _test_eof1325;
case 1325:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2883;
	goto st0;
st1326:
	if ( ++p == pe )
		goto _test_eof1326;
case 1326:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2884;
	goto st0;
st1327:
	if ( ++p == pe )
		goto _test_eof1327;
case 1327:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2885;
	goto st0;
st1328:
	if ( ++p == pe )
		goto _test_eof1328;
case 1328:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2886;
	goto st0;
st1329:
	if ( ++p == pe )
		goto _test_eof1329;
case 1329:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2887;
	goto st0;
st1330:
	if ( ++p == pe )
		goto _test_eof1330;
case 1330:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2888;
	goto st0;
st1331:
	if ( ++p == pe )
		goto _test_eof1331;
case 1331:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2889;
	goto st0;
st1332:
	if ( ++p == pe )
		goto _test_eof1332;
case 1332:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2890;
	goto st0;
st1333:
	if ( ++p == pe )
		goto _test_eof1333;
case 1333:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2891;
		case 5: goto tr2891;
		case 8: goto tr2891;
		case 18: goto tr2893;
		case 19: goto st1342;
		case 21: goto tr2892;
		case 23: goto tr2892;
		case 36: goto tr2893;
		case 44: goto tr2892;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2892;
	goto st0;
tr2891:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1334;
st1334:
	if ( ++p == pe )
		goto _test_eof1334;
case 1334:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1335;
		case 65555: goto tr2896;
		case 131091: goto tr2897;
		case 131109: goto st1340;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1335;
		} else if ( _widec >= 15 )
			goto st1335;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1335;
		} else if ( _widec >= 38 )
			goto st1335;
	} else
		goto st1335;
	goto st0;
tr2900:
	{ expr_open_parens++; }
	goto st1335;
tr2903:
	{ expr_open_parens--; }
	goto st1335;
st1335:
	if ( ++p == pe )
		goto _test_eof1335;
case 1335:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1336;
		case 5: goto st1336;
		case 8: goto st1336;
		case 13: goto st1335;
		case 18: goto tr2900;
		case 21: goto st1335;
		case 23: goto st1335;
		case 36: goto tr2900;
		case 44: goto st1335;
	}
	goto st0;
st1336:
	if ( ++p == pe )
		goto _test_eof1336;
case 1336:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1335;
		case 65555: goto tr2896;
		case 131091: goto st1338;
		case 131109: goto st1338;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1335;
		} else if ( _widec >= 15 )
			goto st1335;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1335;
		} else if ( _widec >= 38 )
			goto st1335;
	} else
		goto st1335;
	goto st0;
tr2896:
	{ push_expr(expr_start, p); }
	goto st1337;
tr2904:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1337;
st1337:
	if ( ++p == pe )
		goto _test_eof1337;
case 1337:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2902;
	goto st0;
tr2905:
	{ expr_open_parens--; }
	goto st1338;
st1338:
	if ( ++p == pe )
		goto _test_eof1338;
case 1338:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2903;
		case 65555: goto tr2904;
		case 131091: goto tr2905;
		case 131109: goto tr2905;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2903;
		} else if ( _widec >= 15 )
			goto tr2903;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2903;
		} else if ( _widec >= 38 )
			goto tr2903;
	} else
		goto tr2903;
	goto st0;
tr2897:
	{ push_expr(expr_start, p); }
	goto st1339;
tr2906:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1339;
st1339:
	if ( ++p == pe )
		goto _test_eof1339;
case 1339:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2902;
		case 23: goto tr2903;
		case 65555: goto tr2904;
		case 131091: goto tr2906;
		case 131109: goto tr2907;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2903;
		} else if ( _widec >= 15 )
			goto tr2903;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2903;
		} else if ( _widec >= 38 )
			goto tr2903;
	} else
		goto tr2903;
	goto st0;
tr2907:
	{ expr_open_parens--; }
	goto st1340;
st1340:
	if ( ++p == pe )
		goto _test_eof1340;
case 1340:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2903;
		case 65555: goto tr2904;
		case 131091: goto tr2906;
		case 131109: goto tr2907;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2903;
		} else if ( _widec >= 15 )
			goto tr2903;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2903;
		} else if ( _widec >= 38 )
			goto tr2903;
	} else
		goto tr2903;
	goto st0;
tr2892:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1341;
tr2893:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1341;
tr2910:
	{ expr_open_parens++; }
	goto st1341;
st1341:
	if ( ++p == pe )
		goto _test_eof1341;
case 1341:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1334;
		case 5: goto st1334;
		case 8: goto st1334;
		case 13: goto st1341;
		case 18: goto tr2910;
		case 21: goto st1341;
		case 23: goto st1341;
		case 36: goto tr2910;
		case 44: goto st1341;
	}
	goto st0;
st1342:
	if ( ++p == pe )
		goto _test_eof1342;
case 1342:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2911;
	goto st0;
st1343:
	if ( ++p == pe )
		goto _test_eof1343;
case 1343:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2912;
		case 5: goto tr2912;
		case 8: goto tr2912;
		case 18: goto tr2914;
		case 19: goto st1352;
		case 21: goto tr2913;
		case 23: goto tr2913;
		case 36: goto tr2914;
		case 44: goto tr2913;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2913;
	goto st0;
tr2912:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1344;
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
		case 23: goto st1345;
		case 65555: goto tr2917;
		case 131091: goto tr2918;
		case 131109: goto st1350;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1345;
		} else if ( _widec >= 15 )
			goto st1345;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1345;
		} else if ( _widec >= 38 )
			goto st1345;
	} else
		goto st1345;
	goto st0;
tr2921:
	{ expr_open_parens++; }
	goto st1345;
tr2924:
	{ expr_open_parens--; }
	goto st1345;
st1345:
	if ( ++p == pe )
		goto _test_eof1345;
case 1345:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1346;
		case 5: goto st1346;
		case 8: goto st1346;
		case 13: goto st1345;
		case 18: goto tr2921;
		case 21: goto st1345;
		case 23: goto st1345;
		case 36: goto tr2921;
		case 44: goto st1345;
	}
	goto st0;
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
		case 23: goto st1345;
		case 65555: goto tr2917;
		case 131091: goto st1348;
		case 131109: goto st1348;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1345;
		} else if ( _widec >= 15 )
			goto st1345;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1345;
		} else if ( _widec >= 38 )
			goto st1345;
	} else
		goto st1345;
	goto st0;
tr2917:
	{ push_expr(expr_start, p); }
	goto st1347;
tr2925:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1347;
st1347:
	if ( ++p == pe )
		goto _test_eof1347;
case 1347:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2923;
	goto st0;
tr2926:
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
		case 23: goto tr2924;
		case 65555: goto tr2925;
		case 131091: goto tr2926;
		case 131109: goto tr2926;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2924;
		} else if ( _widec >= 15 )
			goto tr2924;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2924;
		} else if ( _widec >= 38 )
			goto tr2924;
	} else
		goto tr2924;
	goto st0;
tr2918:
	{ push_expr(expr_start, p); }
	goto st1349;
tr2927:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1349;
st1349:
	if ( ++p == pe )
		goto _test_eof1349;
case 1349:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2923;
		case 23: goto tr2924;
		case 65555: goto tr2925;
		case 131091: goto tr2927;
		case 131109: goto tr2928;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2924;
		} else if ( _widec >= 15 )
			goto tr2924;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2924;
		} else if ( _widec >= 38 )
			goto tr2924;
	} else
		goto tr2924;
	goto st0;
tr2928:
	{ expr_open_parens--; }
	goto st1350;
st1350:
	if ( ++p == pe )
		goto _test_eof1350;
case 1350:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2924;
		case 65555: goto tr2925;
		case 131091: goto tr2927;
		case 131109: goto tr2928;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2924;
		} else if ( _widec >= 15 )
			goto tr2924;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2924;
		} else if ( _widec >= 38 )
			goto tr2924;
	} else
		goto tr2924;
	goto st0;
tr2913:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1351;
tr2914:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1351;
tr2931:
	{ expr_open_parens++; }
	goto st1351;
st1351:
	if ( ++p == pe )
		goto _test_eof1351;
case 1351:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1344;
		case 5: goto st1344;
		case 8: goto st1344;
		case 13: goto st1351;
		case 18: goto tr2931;
		case 21: goto st1351;
		case 23: goto st1351;
		case 36: goto tr2931;
		case 44: goto st1351;
	}
	goto st0;
st1352:
	if ( ++p == pe )
		goto _test_eof1352;
case 1352:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2932;
	goto st0;
st1353:
	if ( ++p == pe )
		goto _test_eof1353;
case 1353:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2933;
		case 5: goto tr2933;
		case 8: goto tr2933;
		case 18: goto tr2935;
		case 21: goto tr2934;
		case 23: goto tr2934;
		case 36: goto tr2935;
		case 44: goto tr2934;
		case 48: goto st1357;
		case 53: goto st1358;
		case 54: goto st1359;
		case 55: goto st1360;
		case 56: goto st1361;
		case 57: goto st1362;
		case 58: goto st1363;
		case 59: goto st1364;
		case 60: goto st1365;
		case 61: goto st1366;
		case 62: goto st1367;
		case 79: goto st1370;
		case 80: goto st1371;
		case 81: goto st1381;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2934;
	goto st0;
tr2933:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1354;
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
		case 12: goto tr2950;
		case 23: goto st1355;
		case 131091: goto st1356;
		case 131109: goto st1356;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1355;
		} else if ( _widec >= 15 )
			goto st1355;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1355;
		} else if ( _widec >= 38 )
			goto st1355;
	} else
		goto st1355;
	goto st0;
tr2934:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1355;
tr2935:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1355;
tr2954:
	{ expr_open_parens++; }
	goto st1355;
tr2956:
	{ expr_open_parens--; }
	goto st1355;
st1355:
	if ( ++p == pe )
		goto _test_eof1355;
case 1355:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1354;
		case 5: goto st1354;
		case 8: goto st1354;
		case 13: goto st1355;
		case 18: goto tr2954;
		case 21: goto st1355;
		case 23: goto st1355;
		case 36: goto tr2954;
		case 44: goto st1355;
	}
	goto st0;
tr2957:
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
		case 12: goto tr2955;
		case 23: goto tr2956;
		case 131091: goto tr2957;
		case 131109: goto tr2957;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2956;
		} else if ( _widec >= 15 )
			goto tr2956;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2956;
		} else if ( _widec >= 38 )
			goto tr2956;
	} else
		goto tr2956;
	goto st0;
st1357:
	if ( ++p == pe )
		goto _test_eof1357;
case 1357:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2958;
	goto st0;
st1358:
	if ( ++p == pe )
		goto _test_eof1358;
case 1358:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2959;
	goto st0;
st1359:
	if ( ++p == pe )
		goto _test_eof1359;
case 1359:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2960;
	goto st0;
st1360:
	if ( ++p == pe )
		goto _test_eof1360;
case 1360:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2961;
	goto st0;
st1361:
	if ( ++p == pe )
		goto _test_eof1361;
case 1361:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2962;
	goto st0;
st1362:
	if ( ++p == pe )
		goto _test_eof1362;
case 1362:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2963;
	goto st0;
st1363:
	if ( ++p == pe )
		goto _test_eof1363;
case 1363:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2964;
	goto st0;
st1364:
	if ( ++p == pe )
		goto _test_eof1364;
case 1364:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2965;
	goto st0;
st1365:
	if ( ++p == pe )
		goto _test_eof1365;
case 1365:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2966;
	goto st0;
st1366:
	if ( ++p == pe )
		goto _test_eof1366;
case 1366:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2967;
	goto st0;
st1367:
	if ( ++p == pe )
		goto _test_eof1367;
case 1367:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr2968;
		case 22: goto st1368;
	}
	goto st0;
st1368:
	if ( ++p == pe )
		goto _test_eof1368;
case 1368:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2933;
		case 5: goto tr2933;
		case 8: goto tr2933;
		case 18: goto tr2935;
		case 21: goto tr2934;
		case 23: goto tr2934;
		case 36: goto tr2935;
		case 44: goto tr2934;
		case 48: goto st1357;
		case 53: goto st1358;
		case 54: goto st1359;
		case 55: goto st1360;
		case 56: goto st1361;
		case 57: goto st1362;
		case 58: goto st1363;
		case 59: goto st1364;
		case 60: goto st1365;
		case 61: goto st1366;
		case 62: goto st1369;
		case 79: goto st1370;
		case 80: goto st1371;
		case 81: goto st1381;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2934;
	goto st0;
st1369:
	if ( ++p == pe )
		goto _test_eof1369;
case 1369:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2968;
	goto st0;
st1370:
	if ( ++p == pe )
		goto _test_eof1370;
case 1370:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2971;
	goto st0;
st1371:
	if ( ++p == pe )
		goto _test_eof1371;
case 1371:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2972;
		case 5: goto tr2972;
		case 8: goto tr2972;
		case 18: goto tr2974;
		case 19: goto st1380;
		case 21: goto tr2973;
		case 23: goto tr2973;
		case 36: goto tr2974;
		case 44: goto tr2973;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2973;
	goto st0;
tr2972:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1372;
st1372:
	if ( ++p == pe )
		goto _test_eof1372;
case 1372:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1373;
		case 65555: goto tr2977;
		case 131091: goto tr2978;
		case 131109: goto st1378;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1373;
		} else if ( _widec >= 15 )
			goto st1373;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1373;
		} else if ( _widec >= 38 )
			goto st1373;
	} else
		goto st1373;
	goto st0;
tr2981:
	{ expr_open_parens++; }
	goto st1373;
tr2984:
	{ expr_open_parens--; }
	goto st1373;
st1373:
	if ( ++p == pe )
		goto _test_eof1373;
case 1373:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1374;
		case 5: goto st1374;
		case 8: goto st1374;
		case 13: goto st1373;
		case 18: goto tr2981;
		case 21: goto st1373;
		case 23: goto st1373;
		case 36: goto tr2981;
		case 44: goto st1373;
	}
	goto st0;
st1374:
	if ( ++p == pe )
		goto _test_eof1374;
case 1374:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1373;
		case 65555: goto tr2977;
		case 131091: goto st1376;
		case 131109: goto st1376;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1373;
		} else if ( _widec >= 15 )
			goto st1373;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1373;
		} else if ( _widec >= 38 )
			goto st1373;
	} else
		goto st1373;
	goto st0;
tr2977:
	{ push_expr(expr_start, p); }
	goto st1375;
tr2985:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1375;
st1375:
	if ( ++p == pe )
		goto _test_eof1375;
case 1375:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2983;
	goto st0;
tr2986:
	{ expr_open_parens--; }
	goto st1376;
st1376:
	if ( ++p == pe )
		goto _test_eof1376;
case 1376:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2984;
		case 65555: goto tr2985;
		case 131091: goto tr2986;
		case 131109: goto tr2986;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2984;
		} else if ( _widec >= 15 )
			goto tr2984;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2984;
		} else if ( _widec >= 38 )
			goto tr2984;
	} else
		goto tr2984;
	goto st0;
tr2978:
	{ push_expr(expr_start, p); }
	goto st1377;
tr2987:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1377;
st1377:
	if ( ++p == pe )
		goto _test_eof1377;
case 1377:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr2983;
		case 23: goto tr2984;
		case 65555: goto tr2985;
		case 131091: goto tr2987;
		case 131109: goto tr2988;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2984;
		} else if ( _widec >= 15 )
			goto tr2984;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2984;
		} else if ( _widec >= 38 )
			goto tr2984;
	} else
		goto tr2984;
	goto st0;
tr2988:
	{ expr_open_parens--; }
	goto st1378;
st1378:
	if ( ++p == pe )
		goto _test_eof1378;
case 1378:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr2984;
		case 65555: goto tr2985;
		case 131091: goto tr2987;
		case 131109: goto tr2988;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr2984;
		} else if ( _widec >= 15 )
			goto tr2984;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr2984;
		} else if ( _widec >= 38 )
			goto tr2984;
	} else
		goto tr2984;
	goto st0;
tr2973:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1379;
tr2974:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1379;
tr2991:
	{ expr_open_parens++; }
	goto st1379;
st1379:
	if ( ++p == pe )
		goto _test_eof1379;
case 1379:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1372;
		case 5: goto st1372;
		case 8: goto st1372;
		case 13: goto st1379;
		case 18: goto tr2991;
		case 21: goto st1379;
		case 23: goto st1379;
		case 36: goto tr2991;
		case 44: goto st1379;
	}
	goto st0;
st1380:
	if ( ++p == pe )
		goto _test_eof1380;
case 1380:
	if ( ( ((int) p->tok)) == 12 )
		goto tr2992;
	goto st0;
st1381:
	if ( ++p == pe )
		goto _test_eof1381;
case 1381:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr2993;
		case 5: goto tr2993;
		case 8: goto tr2993;
		case 18: goto tr2995;
		case 19: goto st1390;
		case 21: goto tr2994;
		case 23: goto tr2994;
		case 36: goto tr2995;
		case 44: goto tr2994;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr2994;
	goto st0;
tr2993:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1382;
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
		case 23: goto st1383;
		case 65555: goto tr2998;
		case 131091: goto tr2999;
		case 131109: goto st1388;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1383;
		} else if ( _widec >= 15 )
			goto st1383;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1383;
		} else if ( _widec >= 38 )
			goto st1383;
	} else
		goto st1383;
	goto st0;
tr3002:
	{ expr_open_parens++; }
	goto st1383;
tr3005:
	{ expr_open_parens--; }
	goto st1383;
st1383:
	if ( ++p == pe )
		goto _test_eof1383;
case 1383:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1384;
		case 5: goto st1384;
		case 8: goto st1384;
		case 13: goto st1383;
		case 18: goto tr3002;
		case 21: goto st1383;
		case 23: goto st1383;
		case 36: goto tr3002;
		case 44: goto st1383;
	}
	goto st0;
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
		case 23: goto st1383;
		case 65555: goto tr2998;
		case 131091: goto st1386;
		case 131109: goto st1386;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1383;
		} else if ( _widec >= 15 )
			goto st1383;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1383;
		} else if ( _widec >= 38 )
			goto st1383;
	} else
		goto st1383;
	goto st0;
tr2998:
	{ push_expr(expr_start, p); }
	goto st1385;
tr3006:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1385;
st1385:
	if ( ++p == pe )
		goto _test_eof1385;
case 1385:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3004;
	goto st0;
tr3007:
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
		case 23: goto tr3005;
		case 65555: goto tr3006;
		case 131091: goto tr3007;
		case 131109: goto tr3007;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3005;
		} else if ( _widec >= 15 )
			goto tr3005;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3005;
		} else if ( _widec >= 38 )
			goto tr3005;
	} else
		goto tr3005;
	goto st0;
tr2999:
	{ push_expr(expr_start, p); }
	goto st1387;
tr3008:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1387;
st1387:
	if ( ++p == pe )
		goto _test_eof1387;
case 1387:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3004;
		case 23: goto tr3005;
		case 65555: goto tr3006;
		case 131091: goto tr3008;
		case 131109: goto tr3009;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3005;
		} else if ( _widec >= 15 )
			goto tr3005;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3005;
		} else if ( _widec >= 38 )
			goto tr3005;
	} else
		goto tr3005;
	goto st0;
tr3009:
	{ expr_open_parens--; }
	goto st1388;
st1388:
	if ( ++p == pe )
		goto _test_eof1388;
case 1388:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3005;
		case 65555: goto tr3006;
		case 131091: goto tr3008;
		case 131109: goto tr3009;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3005;
		} else if ( _widec >= 15 )
			goto tr3005;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3005;
		} else if ( _widec >= 38 )
			goto tr3005;
	} else
		goto tr3005;
	goto st0;
tr2994:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1389;
tr2995:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1389;
tr3012:
	{ expr_open_parens++; }
	goto st1389;
st1389:
	if ( ++p == pe )
		goto _test_eof1389;
case 1389:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1382;
		case 5: goto st1382;
		case 8: goto st1382;
		case 13: goto st1389;
		case 18: goto tr3012;
		case 21: goto st1389;
		case 23: goto st1389;
		case 36: goto tr3012;
		case 44: goto st1389;
	}
	goto st0;
st1390:
	if ( ++p == pe )
		goto _test_eof1390;
case 1390:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3013;
	goto st0;
st1391:
	if ( ++p == pe )
		goto _test_eof1391;
case 1391:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3014;
		case 5: goto tr3014;
		case 8: goto tr3014;
		case 18: goto tr3016;
		case 21: goto tr3015;
		case 23: goto tr3015;
		case 36: goto tr3016;
		case 44: goto tr3015;
		case 48: goto st1395;
		case 53: goto st1396;
		case 54: goto st1397;
		case 55: goto st1398;
		case 56: goto st1399;
		case 57: goto st1400;
		case 58: goto st1401;
		case 59: goto st1402;
		case 60: goto st1403;
		case 61: goto st1404;
		case 62: goto st1405;
		case 79: goto st1408;
		case 80: goto st1409;
		case 81: goto st1419;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3015;
	goto st0;
tr3014:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1392;
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
		case 12: goto tr3031;
		case 23: goto st1393;
		case 131091: goto st1394;
		case 131109: goto st1394;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1393;
		} else if ( _widec >= 15 )
			goto st1393;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1393;
		} else if ( _widec >= 38 )
			goto st1393;
	} else
		goto st1393;
	goto st0;
tr3015:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1393;
tr3016:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1393;
tr3035:
	{ expr_open_parens++; }
	goto st1393;
tr3037:
	{ expr_open_parens--; }
	goto st1393;
st1393:
	if ( ++p == pe )
		goto _test_eof1393;
case 1393:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1392;
		case 5: goto st1392;
		case 8: goto st1392;
		case 13: goto st1393;
		case 18: goto tr3035;
		case 21: goto st1393;
		case 23: goto st1393;
		case 36: goto tr3035;
		case 44: goto st1393;
	}
	goto st0;
tr3038:
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
		case 12: goto tr3036;
		case 23: goto tr3037;
		case 131091: goto tr3038;
		case 131109: goto tr3038;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3037;
		} else if ( _widec >= 15 )
			goto tr3037;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3037;
		} else if ( _widec >= 38 )
			goto tr3037;
	} else
		goto tr3037;
	goto st0;
st1395:
	if ( ++p == pe )
		goto _test_eof1395;
case 1395:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3039;
	goto st0;
st1396:
	if ( ++p == pe )
		goto _test_eof1396;
case 1396:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3040;
	goto st0;
st1397:
	if ( ++p == pe )
		goto _test_eof1397;
case 1397:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3041;
	goto st0;
st1398:
	if ( ++p == pe )
		goto _test_eof1398;
case 1398:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3042;
	goto st0;
st1399:
	if ( ++p == pe )
		goto _test_eof1399;
case 1399:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3043;
	goto st0;
st1400:
	if ( ++p == pe )
		goto _test_eof1400;
case 1400:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3044;
	goto st0;
st1401:
	if ( ++p == pe )
		goto _test_eof1401;
case 1401:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3045;
	goto st0;
st1402:
	if ( ++p == pe )
		goto _test_eof1402;
case 1402:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3046;
	goto st0;
st1403:
	if ( ++p == pe )
		goto _test_eof1403;
case 1403:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3047;
	goto st0;
st1404:
	if ( ++p == pe )
		goto _test_eof1404;
case 1404:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3048;
	goto st0;
st1405:
	if ( ++p == pe )
		goto _test_eof1405;
case 1405:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr3049;
		case 22: goto st1406;
	}
	goto st0;
st1406:
	if ( ++p == pe )
		goto _test_eof1406;
case 1406:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3014;
		case 5: goto tr3014;
		case 8: goto tr3014;
		case 18: goto tr3016;
		case 21: goto tr3015;
		case 23: goto tr3015;
		case 36: goto tr3016;
		case 44: goto tr3015;
		case 48: goto st1395;
		case 53: goto st1396;
		case 54: goto st1397;
		case 55: goto st1398;
		case 56: goto st1399;
		case 57: goto st1400;
		case 58: goto st1401;
		case 59: goto st1402;
		case 60: goto st1403;
		case 61: goto st1404;
		case 62: goto st1407;
		case 79: goto st1408;
		case 80: goto st1409;
		case 81: goto st1419;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3015;
	goto st0;
st1407:
	if ( ++p == pe )
		goto _test_eof1407;
case 1407:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3049;
	goto st0;
st1408:
	if ( ++p == pe )
		goto _test_eof1408;
case 1408:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3052;
	goto st0;
st1409:
	if ( ++p == pe )
		goto _test_eof1409;
case 1409:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3053;
		case 5: goto tr3053;
		case 8: goto tr3053;
		case 18: goto tr3055;
		case 19: goto st1418;
		case 21: goto tr3054;
		case 23: goto tr3054;
		case 36: goto tr3055;
		case 44: goto tr3054;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3054;
	goto st0;
tr3053:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1410;
st1410:
	if ( ++p == pe )
		goto _test_eof1410;
case 1410:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1411;
		case 65555: goto tr3058;
		case 131091: goto tr3059;
		case 131109: goto st1416;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1411;
		} else if ( _widec >= 15 )
			goto st1411;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1411;
		} else if ( _widec >= 38 )
			goto st1411;
	} else
		goto st1411;
	goto st0;
tr3062:
	{ expr_open_parens++; }
	goto st1411;
tr3065:
	{ expr_open_parens--; }
	goto st1411;
st1411:
	if ( ++p == pe )
		goto _test_eof1411;
case 1411:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1412;
		case 5: goto st1412;
		case 8: goto st1412;
		case 13: goto st1411;
		case 18: goto tr3062;
		case 21: goto st1411;
		case 23: goto st1411;
		case 36: goto tr3062;
		case 44: goto st1411;
	}
	goto st0;
st1412:
	if ( ++p == pe )
		goto _test_eof1412;
case 1412:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto st1411;
		case 65555: goto tr3058;
		case 131091: goto st1414;
		case 131109: goto st1414;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1411;
		} else if ( _widec >= 15 )
			goto st1411;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1411;
		} else if ( _widec >= 38 )
			goto st1411;
	} else
		goto st1411;
	goto st0;
tr3058:
	{ push_expr(expr_start, p); }
	goto st1413;
tr3066:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1413;
st1413:
	if ( ++p == pe )
		goto _test_eof1413;
case 1413:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3064;
	goto st0;
tr3067:
	{ expr_open_parens--; }
	goto st1414;
st1414:
	if ( ++p == pe )
		goto _test_eof1414;
case 1414:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3065;
		case 65555: goto tr3066;
		case 131091: goto tr3067;
		case 131109: goto tr3067;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3065;
		} else if ( _widec >= 15 )
			goto tr3065;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3065;
		} else if ( _widec >= 38 )
			goto tr3065;
	} else
		goto tr3065;
	goto st0;
tr3059:
	{ push_expr(expr_start, p); }
	goto st1415;
tr3068:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1415;
st1415:
	if ( ++p == pe )
		goto _test_eof1415;
case 1415:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3064;
		case 23: goto tr3065;
		case 65555: goto tr3066;
		case 131091: goto tr3068;
		case 131109: goto tr3069;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3065;
		} else if ( _widec >= 15 )
			goto tr3065;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3065;
		} else if ( _widec >= 38 )
			goto tr3065;
	} else
		goto tr3065;
	goto st0;
tr3069:
	{ expr_open_parens--; }
	goto st1416;
st1416:
	if ( ++p == pe )
		goto _test_eof1416;
case 1416:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3065;
		case 65555: goto tr3066;
		case 131091: goto tr3068;
		case 131109: goto tr3069;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3065;
		} else if ( _widec >= 15 )
			goto tr3065;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3065;
		} else if ( _widec >= 38 )
			goto tr3065;
	} else
		goto tr3065;
	goto st0;
tr3054:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1417;
tr3055:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1417;
tr3072:
	{ expr_open_parens++; }
	goto st1417;
st1417:
	if ( ++p == pe )
		goto _test_eof1417;
case 1417:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1410;
		case 5: goto st1410;
		case 8: goto st1410;
		case 13: goto st1417;
		case 18: goto tr3072;
		case 21: goto st1417;
		case 23: goto st1417;
		case 36: goto tr3072;
		case 44: goto st1417;
	}
	goto st0;
st1418:
	if ( ++p == pe )
		goto _test_eof1418;
case 1418:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3073;
	goto st0;
st1419:
	if ( ++p == pe )
		goto _test_eof1419;
case 1419:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3074;
		case 5: goto tr3074;
		case 8: goto tr3074;
		case 18: goto tr3076;
		case 19: goto st1428;
		case 21: goto tr3075;
		case 23: goto tr3075;
		case 36: goto tr3076;
		case 44: goto tr3075;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3075;
	goto st0;
tr3074:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1420;
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
		case 23: goto st1421;
		case 65555: goto tr3079;
		case 131091: goto tr3080;
		case 131109: goto st1426;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1421;
		} else if ( _widec >= 15 )
			goto st1421;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1421;
		} else if ( _widec >= 38 )
			goto st1421;
	} else
		goto st1421;
	goto st0;
tr3083:
	{ expr_open_parens++; }
	goto st1421;
tr3086:
	{ expr_open_parens--; }
	goto st1421;
st1421:
	if ( ++p == pe )
		goto _test_eof1421;
case 1421:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1422;
		case 5: goto st1422;
		case 8: goto st1422;
		case 13: goto st1421;
		case 18: goto tr3083;
		case 21: goto st1421;
		case 23: goto st1421;
		case 36: goto tr3083;
		case 44: goto st1421;
	}
	goto st0;
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
		case 23: goto st1421;
		case 65555: goto tr3079;
		case 131091: goto st1424;
		case 131109: goto st1424;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1421;
		} else if ( _widec >= 15 )
			goto st1421;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1421;
		} else if ( _widec >= 38 )
			goto st1421;
	} else
		goto st1421;
	goto st0;
tr3079:
	{ push_expr(expr_start, p); }
	goto st1423;
tr3087:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1423;
st1423:
	if ( ++p == pe )
		goto _test_eof1423;
case 1423:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3085;
	goto st0;
tr3088:
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
		case 23: goto tr3086;
		case 65555: goto tr3087;
		case 131091: goto tr3088;
		case 131109: goto tr3088;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3086;
		} else if ( _widec >= 15 )
			goto tr3086;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3086;
		} else if ( _widec >= 38 )
			goto tr3086;
	} else
		goto tr3086;
	goto st0;
tr3080:
	{ push_expr(expr_start, p); }
	goto st1425;
tr3089:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	goto st1425;
st1425:
	if ( ++p == pe )
		goto _test_eof1425;
case 1425:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3085;
		case 23: goto tr3086;
		case 65555: goto tr3087;
		case 131091: goto tr3089;
		case 131109: goto tr3090;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3086;
		} else if ( _widec >= 15 )
			goto tr3086;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3086;
		} else if ( _widec >= 38 )
			goto tr3086;
	} else
		goto tr3086;
	goto st0;
tr3090:
	{ expr_open_parens--; }
	goto st1426;
st1426:
	if ( ++p == pe )
		goto _test_eof1426;
case 1426:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 23: goto tr3086;
		case 65555: goto tr3087;
		case 131091: goto tr3089;
		case 131109: goto tr3090;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3086;
		} else if ( _widec >= 15 )
			goto tr3086;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3086;
		} else if ( _widec >= 38 )
			goto tr3086;
	} else
		goto tr3086;
	goto st0;
tr3075:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1427;
tr3076:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1427;
tr3093:
	{ expr_open_parens++; }
	goto st1427;
st1427:
	if ( ++p == pe )
		goto _test_eof1427;
case 1427:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1420;
		case 5: goto st1420;
		case 8: goto st1420;
		case 13: goto st1427;
		case 18: goto tr3093;
		case 21: goto st1427;
		case 23: goto st1427;
		case 36: goto tr3093;
		case 44: goto st1427;
	}
	goto st0;
st1428:
	if ( ++p == pe )
		goto _test_eof1428;
case 1428:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3094;
	goto st0;
st1429:
	if ( ++p == pe )
		goto _test_eof1429;
case 1429:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3095;
		case 5: goto tr3095;
		case 8: goto tr3095;
		case 18: goto tr3097;
		case 21: goto tr3096;
		case 23: goto tr3096;
		case 36: goto tr3097;
		case 44: goto tr3096;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3096;
	goto st0;
tr3095:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1430;
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
		case 12: goto tr3098;
		case 23: goto st1431;
		case 40: goto tr3100;
		case 131091: goto st1433;
		case 131109: goto st1433;
	}
	if ( _widec < 20 ) {
		if ( 15 <= _widec && _widec <= 17 )
			goto st1431;
	} else if ( _widec > 21 ) {
		if ( _widec > 35 ) {
			if ( 38 <= _widec && _widec <= 42 )
				goto st1431;
		} else if ( _widec >= 25 )
			goto st1431;
	} else
		goto st1431;
	goto st0;
tr3096:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1431;
tr3097:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1431;
tr3103:
	{ expr_open_parens++; }
	goto st1431;
tr3106:
	{ expr_open_parens--; }
	goto st1431;
st1431:
	if ( ++p == pe )
		goto _test_eof1431;
case 1431:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1430;
		case 5: goto st1430;
		case 8: goto st1430;
		case 13: goto st1431;
		case 18: goto tr3103;
		case 21: goto st1431;
		case 23: goto st1431;
		case 36: goto tr3103;
		case 44: goto st1431;
	}
	goto st0;
tr3100:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1432;
tr3107:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	goto st1432;
st1432:
	if ( ++p == pe )
		goto _test_eof1432;
case 1432:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3104;
	goto st0;
tr3108:
	{ expr_open_parens--; }
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
		case 12: goto tr3105;
		case 23: goto tr3106;
		case 40: goto tr3107;
		case 131091: goto tr3108;
		case 131109: goto tr3108;
	}
	if ( _widec < 20 ) {
		if ( 15 <= _widec && _widec <= 17 )
			goto tr3106;
	} else if ( _widec > 21 ) {
		if ( _widec > 35 ) {
			if ( 38 <= _widec && _widec <= 42 )
				goto tr3106;
		} else if ( _widec >= 25 )
			goto tr3106;
	} else
		goto tr3106;
	goto st0;
st1434:
	if ( ++p == pe )
		goto _test_eof1434;
case 1434:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3109;
		case 5: goto tr3109;
		case 8: goto tr3109;
		case 18: goto tr3111;
		case 21: goto tr3110;
		case 23: goto tr3110;
		case 36: goto tr3111;
		case 44: goto tr3110;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3110;
	goto st0;
tr3109:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1435;
st1435:
	if ( ++p == pe )
		goto _test_eof1435;
case 1435:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3112;
		case 23: goto st1436;
		case 131091: goto st1437;
		case 131109: goto st1437;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1436;
		} else if ( _widec >= 15 )
			goto st1436;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1436;
		} else if ( _widec >= 38 )
			goto st1436;
	} else
		goto st1436;
	goto st0;
tr3110:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1436;
tr3111:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1436;
tr3116:
	{ expr_open_parens++; }
	goto st1436;
tr3118:
	{ expr_open_parens--; }
	goto st1436;
st1436:
	if ( ++p == pe )
		goto _test_eof1436;
case 1436:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1435;
		case 5: goto st1435;
		case 8: goto st1435;
		case 13: goto st1436;
		case 18: goto tr3116;
		case 21: goto st1436;
		case 23: goto st1436;
		case 36: goto tr3116;
		case 44: goto st1436;
	}
	goto st0;
tr3119:
	{ expr_open_parens--; }
	goto st1437;
st1437:
	if ( ++p == pe )
		goto _test_eof1437;
case 1437:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3117;
		case 23: goto tr3118;
		case 131091: goto tr3119;
		case 131109: goto tr3119;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3118;
		} else if ( _widec >= 15 )
			goto tr3118;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3118;
		} else if ( _widec >= 38 )
			goto tr3118;
	} else
		goto tr3118;
	goto st0;
case 1438:
	switch( ( ((int) p->tok)) ) {
		case 0: goto tr3120;
		case 12: goto st1460;
		case 40: goto st1439;
	}
	goto st0;
tr3120:
	{ error_missing_block(); }
	goto st1460;
tr3123:
	{ current_sm = SM_DEFVARS_LINE; }
	goto st1460;
st1460:
	if ( ++p == pe )
		goto _test_eof1460;
case 1460:
	goto st0;
st1439:
	if ( ++p == pe )
		goto _test_eof1439;
case 1439:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3123;
	goto st0;
case 1440:
	switch( ( ((int) p->tok)) ) {
		case 0: goto tr3124;
		case 3: goto tr3125;
		case 12: goto st1461;
		case 43: goto st1458;
	}
	goto st0;
tr3124:
	{ error_missing_close_block(); }
	goto st1461;
tr3128:
	{ defvars_define_const( name, 0, 0 ); }
	goto st1461;
tr3136:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_B, expr_value );
    }
	goto st1461;
tr3141:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_B, expr_value );
    }
	goto st1461;
tr3147:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_W, expr_value );
    }
	goto st1461;
tr3152:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_W, expr_value );
    }
	goto st1461;
tr3158:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_P, expr_value );
    }
	goto st1461;
tr3163:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_P, expr_value );
    }
	goto st1461;
tr3169:
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_L, expr_value );
    }
	goto st1461;
tr3174:
	{ expr_open_parens--; }
	{ push_expr(expr_start, p); }
	{ pop_eval_expr(&expr_value, &expr_error); }
	{ if (! expr_error)
    defvars_define_const( name, DEFVARS_SIZE_L, expr_value );
    }
	goto st1461;
tr3177:
	{ current_sm = SM_MAIN; }
	goto st1461;
st1461:
	if ( ++p == pe )
		goto _test_eof1461;
case 1461:
	goto st0;
tr3125:
	{ name = p->string; }
	goto st1441;
st1441:
	if ( ++p == pe )
		goto _test_eof1441;
case 1441:
	switch( ( ((int) p->tok)) ) {
		case 12: goto tr3128;
		case 85: goto st1442;
		case 86: goto st1446;
		case 87: goto st1450;
		case 88: goto st1454;
	}
	goto st0;
st1442:
	if ( ++p == pe )
		goto _test_eof1442;
case 1442:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3133;
		case 5: goto tr3133;
		case 8: goto tr3133;
		case 18: goto tr3135;
		case 21: goto tr3134;
		case 23: goto tr3134;
		case 36: goto tr3135;
		case 44: goto tr3134;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3134;
	goto st0;
tr3133:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr3136;
		case 23: goto st1444;
		case 131091: goto st1445;
		case 131109: goto st1445;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1444;
		} else if ( _widec >= 15 )
			goto st1444;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1444;
		} else if ( _widec >= 38 )
			goto st1444;
	} else
		goto st1444;
	goto st0;
tr3134:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1444;
tr3135:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1444;
tr3140:
	{ expr_open_parens++; }
	goto st1444;
tr3142:
	{ expr_open_parens--; }
	goto st1444;
st1444:
	if ( ++p == pe )
		goto _test_eof1444;
case 1444:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1443;
		case 5: goto st1443;
		case 8: goto st1443;
		case 13: goto st1444;
		case 18: goto tr3140;
		case 21: goto st1444;
		case 23: goto st1444;
		case 36: goto tr3140;
		case 44: goto st1444;
	}
	goto st0;
tr3143:
	{ expr_open_parens--; }
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
		case 23: goto tr3142;
		case 131091: goto tr3143;
		case 131109: goto tr3143;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3142;
		} else if ( _widec >= 15 )
			goto tr3142;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3142;
		} else if ( _widec >= 38 )
			goto tr3142;
	} else
		goto tr3142;
	goto st0;
st1446:
	if ( ++p == pe )
		goto _test_eof1446;
case 1446:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3144;
		case 5: goto tr3144;
		case 8: goto tr3144;
		case 18: goto tr3146;
		case 21: goto tr3145;
		case 23: goto tr3145;
		case 36: goto tr3146;
		case 44: goto tr3145;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3145;
	goto st0;
tr3144:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
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
		case 12: goto tr3147;
		case 23: goto st1448;
		case 131091: goto st1449;
		case 131109: goto st1449;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1448;
		} else if ( _widec >= 15 )
			goto st1448;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1448;
		} else if ( _widec >= 38 )
			goto st1448;
	} else
		goto st1448;
	goto st0;
tr3145:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1448;
tr3146:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1448;
tr3151:
	{ expr_open_parens++; }
	goto st1448;
tr3153:
	{ expr_open_parens--; }
	goto st1448;
st1448:
	if ( ++p == pe )
		goto _test_eof1448;
case 1448:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1447;
		case 5: goto st1447;
		case 8: goto st1447;
		case 13: goto st1448;
		case 18: goto tr3151;
		case 21: goto st1448;
		case 23: goto st1448;
		case 36: goto tr3151;
		case 44: goto st1448;
	}
	goto st0;
tr3154:
	{ expr_open_parens--; }
	goto st1449;
st1449:
	if ( ++p == pe )
		goto _test_eof1449;
case 1449:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3152;
		case 23: goto tr3153;
		case 131091: goto tr3154;
		case 131109: goto tr3154;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3153;
		} else if ( _widec >= 15 )
			goto tr3153;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3153;
		} else if ( _widec >= 38 )
			goto tr3153;
	} else
		goto tr3153;
	goto st0;
st1450:
	if ( ++p == pe )
		goto _test_eof1450;
case 1450:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3155;
		case 5: goto tr3155;
		case 8: goto tr3155;
		case 18: goto tr3157;
		case 21: goto tr3156;
		case 23: goto tr3156;
		case 36: goto tr3157;
		case 44: goto tr3156;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3156;
	goto st0;
tr3155:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1451;
st1451:
	if ( ++p == pe )
		goto _test_eof1451;
case 1451:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3158;
		case 23: goto st1452;
		case 131091: goto st1453;
		case 131109: goto st1453;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1452;
		} else if ( _widec >= 15 )
			goto st1452;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1452;
		} else if ( _widec >= 38 )
			goto st1452;
	} else
		goto st1452;
	goto st0;
tr3156:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1452;
tr3157:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1452;
tr3162:
	{ expr_open_parens++; }
	goto st1452;
tr3164:
	{ expr_open_parens--; }
	goto st1452;
st1452:
	if ( ++p == pe )
		goto _test_eof1452;
case 1452:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1451;
		case 5: goto st1451;
		case 8: goto st1451;
		case 13: goto st1452;
		case 18: goto tr3162;
		case 21: goto st1452;
		case 23: goto st1452;
		case 36: goto tr3162;
		case 44: goto st1452;
	}
	goto st0;
tr3165:
	{ expr_open_parens--; }
	goto st1453;
st1453:
	if ( ++p == pe )
		goto _test_eof1453;
case 1453:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 23: goto tr3164;
		case 131091: goto tr3165;
		case 131109: goto tr3165;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3164;
		} else if ( _widec >= 15 )
			goto tr3164;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3164;
		} else if ( _widec >= 38 )
			goto tr3164;
	} else
		goto tr3164;
	goto st0;
st1454:
	if ( ++p == pe )
		goto _test_eof1454;
case 1454:
	switch( ( ((int) p->tok)) ) {
		case 3: goto tr3166;
		case 5: goto tr3166;
		case 8: goto tr3166;
		case 18: goto tr3168;
		case 21: goto tr3167;
		case 23: goto tr3167;
		case 36: goto tr3168;
		case 44: goto tr3167;
	}
	if ( 13 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 14 )
		goto tr3167;
	goto st0;
tr3166:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1455;
st1455:
	if ( ++p == pe )
		goto _test_eof1455;
case 1455:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
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
		case 23: goto st1456;
		case 131091: goto st1457;
		case 131109: goto st1457;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto st1456;
		} else if ( _widec >= 15 )
			goto st1456;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto st1456;
		} else if ( _widec >= 38 )
			goto st1456;
	} else
		goto st1456;
	goto st0;
tr3167:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	goto st1456;
tr3168:
	{ expr_start = p; expr_in_parens = (expr_start->tok == TK_LPAREN) ? TRUE : FALSE; expr_open_parens = 0;; }
	{ expr_open_parens++; }
	goto st1456;
tr3173:
	{ expr_open_parens++; }
	goto st1456;
tr3175:
	{ expr_open_parens--; }
	goto st1456;
st1456:
	if ( ++p == pe )
		goto _test_eof1456;
case 1456:
	switch( ( ((int) p->tok)) ) {
		case 3: goto st1455;
		case 5: goto st1455;
		case 8: goto st1455;
		case 13: goto st1456;
		case 18: goto tr3173;
		case 21: goto st1456;
		case 23: goto st1456;
		case 36: goto tr3173;
		case 44: goto st1456;
	}
	goto st0;
tr3176:
	{ expr_open_parens--; }
	goto st1457;
st1457:
	if ( ++p == pe )
		goto _test_eof1457;
case 1457:
	_widec = ( ((int) p->tok));
	if ( ( ((int) p->tok)) > 19 ) {
		if ( 37 <= ( ((int) p->tok)) && ( ((int) p->tok)) <= 37 ) {
			_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
			if ( 
 expr_open_parens > 0  ) _widec += 65536;
		}
	} else if ( ( ((int) p->tok)) >= 19 ) {
		_widec = (int)(32768 + (( ((int) p->tok)) - -32768));
		if ( 
 expr_open_parens > 0  ) _widec += 65536;
	}
	switch( _widec ) {
		case 12: goto tr3174;
		case 23: goto tr3175;
		case 131091: goto tr3176;
		case 131109: goto tr3176;
	}
	if ( _widec < 25 ) {
		if ( _widec > 17 ) {
			if ( 20 <= _widec && _widec <= 21 )
				goto tr3175;
		} else if ( _widec >= 15 )
			goto tr3175;
	} else if ( _widec > 35 ) {
		if ( _widec > 39 ) {
			if ( 41 <= _widec && _widec <= 42 )
				goto tr3175;
		} else if ( _widec >= 38 )
			goto tr3175;
	} else
		goto tr3175;
	goto st0;
st1458:
	if ( ++p == pe )
		goto _test_eof1458;
case 1458:
	if ( ( ((int) p->tok)) == 12 )
		goto tr3177;
	goto st0;
	}
	_test_eof1459: cs = 1459; goto _test_eof; 
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
	_test_eof1460: cs = 1460; goto _test_eof; 
	_test_eof1439: cs = 1439; goto _test_eof; 
	_test_eof1461: cs = 1461; goto _test_eof; 
	_test_eof1441: cs = 1441; goto _test_eof; 
	_test_eof1442: cs = 1442; goto _test_eof; 
	_test_eof1443: cs = 1443; goto _test_eof; 
	_test_eof1444: cs = 1444; goto _test_eof; 
	_test_eof1445: cs = 1445; goto _test_eof; 
	_test_eof1446: cs = 1446; goto _test_eof; 
	_test_eof1447: cs = 1447; goto _test_eof; 
	_test_eof1448: cs = 1448; goto _test_eof; 
	_test_eof1449: cs = 1449; goto _test_eof; 
	_test_eof1450: cs = 1450; goto _test_eof; 
	_test_eof1451: cs = 1451; goto _test_eof; 
	_test_eof1452: cs = 1452; goto _test_eof; 
	_test_eof1453: cs = 1453; goto _test_eof; 
	_test_eof1454: cs = 1454; goto _test_eof; 
	_test_eof1455: cs = 1455; goto _test_eof; 
	_test_eof1456: cs = 1456; goto _test_eof; 
	_test_eof1457: cs = 1457; goto _test_eof; 
	_test_eof1458: cs = 1458; goto _test_eof; 
	_test_eof: {}
	_out: {}
	}
  if (get_num_errors() != start_num_errors)
   break;
  if ( cs == 
0
 )
   return FALSE;
  if ( cs >= 
1459
 )
   return TRUE;
 }
 return FALSE;
}
