#!python

#------------------------------------------------------------------------------
# Prefix
#------------------------------------------------------------------------------
P_IX = '(opts.swap_ix_iy ? 0xFD00 : 0xDD00)'
P_IY = '(opts.swap_ix_iy ? 0xDD00 : 0xFD00)'

#------------------------------------------------------------------------------
# Tokens
#------------------------------------------------------------------------------
class Token:
	"""Define an assembly token"""
	def __init__(self, n, asm, tok, prefix):
		self.n		= n
		self.asm	= asm
		self.tok	= tok
		self.prefix	= prefix

ALTD	= Token(0,	"altd",	"_TK_ALTD",		0x76)
COMMA	= Token(0,	",",	"_TK_COMMA",	0)
RPAREN	= Token(0,	")",	"_TK_RPAREN",	0)
LD		= Token(0,	"ld",	"_TK_LD",		0)
NEWLINE = Token(0,	"",		"_TK_NEWLINE",	0)

ADD		= Token(0,	"add",	"_TK_ADD",		0)
ADC		= Token(1,	"adc",	"_TK_ADC",		0)
SUB		= Token(2,	"sub",	"_TK_SUB",		0)
SBC		= Token(3,	"sbc",	"_TK_SBC",		0)
AND		= Token(4,	"and",	"_TK_AND",		0)
XOR		= Token(5,	"xor",	"_TK_XOR",		0)
OR		= Token(6,	"or",	"_TK_OR",		0)
CP		= Token(7,	"cp",	"_TK_CP",		0)

expr	= Token(0,	"",		"expr",			0)

B		= Token(0,	"b",	"_TK_B",		0); B.ix = B; B.iy = B
C		= Token(1,	"c",	"_TK_C",		0); C.ix = C; C.iy = C
D		= Token(2,	"d",	"_TK_D",		0); D.ix = D; D.iy = D
E		= Token(3,	"e",	"_TK_E",		0); E.ix = E; E.iy = E
H		= Token(4,	"h",	"_TK_H",		0); H.ix = H; H.iy = H
L		= Token(5,	"l",	"_TK_L",		0); L.ix = L; L.iy = L
A		= Token(7,	"a",	"_TK_A",		0); A.ix = A; A.iy = A

B1		= Token(0,	"b'",	"_TK_B1",		0x76); B.alt = B1
C1		= Token(1,	"c'",	"_TK_C1",		0x76); C.alt = C1
D1		= Token(2,	"d'",	"_TK_D1",		0x76); D.alt = D1
E1		= Token(3,	"e'",	"_TK_E1",		0x76); E.alt = E1
H1		= Token(4,	"h'",	"_TK_H1",		0x76); H.alt = H1
L1		= Token(5,	"l'",	"_TK_L1",		0x76); L.alt = L1
A1		= Token(7,	"a'",	"_TK_A1",		0x76); A.alt = A1

IXH		= Token(4,	"ixh",	"_TK_IXH",		0xDD); H.ix = IXH
IXL		= Token(5,	"ixl",	"_TK_IXL",		0xDD); L.ix = IXL

IYH		= Token(4,	"iyh",	"_TK_IYH",		0xFD); H.iy = IYH
IYL		= Token(5,	"iyl",	"_TK_IYL",		0xFD); L.iy = IYL

BC		= Token(0,	"bc",	"_TK_BC",		0)
DE		= Token(1,	"de",	"_TK_DE",		0)
HL		= Token(2,	"hl",	"_TK_HL",		0)   ; HL.p_ix = 0
SP		= Token(3,	"sp",	"_TK_SP",		0)
AF		= Token(3,	"af",	"_TK_AF",		0)
IX		= Token(2,	"ix",	"_TK_IX",		0xDD); IX.p_ix = P_IX
IY		= Token(2,	"iy",	"_TK_IY",		0xFD); IY.p_ix = P_IY

BC1		= Token(0,	"bc'",	"_TK_BC1",		0)   ; BC.alt = BC1
DE1		= Token(1,	"de'",	"_TK_DE1",		0)   ; DE.alt = DE1
HL1		= Token(2,	"hl'",	"_TK_HL1",		0)   ; HL.alt = HL1
AF1		= Token(3,	"af'",	"_TK_AF1",		0)   ; AF.alt = AF1

IND_BC	= Token(0,	"(bc",	"_TK_IND_BC",	0)   ; BC.ind = IND_BC
IND_DE	= Token(1,	"(de",	"_TK_IND_DE",	0)   ; DE.ind = IND_DE
IND_HL	= Token(2,	"(hl",	"_TK_IND_HL",	0)   ; HL.ind = IND_HL
IND_SP	= Token(3,	"(sp",	"_TK_IND_SP",	0)   ; SP.ind = IND_SP
IND_IX	= Token(2,	"(ix",	"_TK_IND_IX",	0xDD); IX.ind = IND_IX
IND_IY	= Token(2,	"(iy",	"_TK_IND_IY",	0xFD); IY.ind = IND_IY

sp = " "

#------------------------------------------------------------------------------
# CPUS
#------------------------------------------------------------------------------
Z80		= 1
Z180	= 2
R2K		= 4
R3K		= 8

ALL		= Z80 + Z180 + R2K + R3K
ZILOG	= Z80 + Z180
RABBIT	= R2K + R3K
NOT_Z80 = ALL - Z80

cpu_code = [0] * (ALL+1)

cpu_code[Z80] 	 = '\nif ((opts.cpu & (CPU_Z80)) == 0) { error_illegal_ident(); return FALSE; }'
cpu_code[NOT_Z80]= '\nif ((opts.cpu & (CPU_Z80)) != 0) { error_illegal_ident(); return FALSE; }'
cpu_code[Z180] 	 = '\nif ((opts.cpu & (CPU_Z180)) == 0) { error_illegal_ident(); return FALSE; }'
cpu_code[R2K] 	 = '\nif ((opts.cpu & (CPU_R2K)) == 0) { error_illegal_ident(); return FALSE; }'
cpu_code[R3K] 	 = '\nif ((opts.cpu & (CPU_R3K)) == 0) { error_illegal_ident(); return FALSE; }'
cpu_code[ALL] 	 = ''
cpu_code[ZILOG]	 = '\nif ((opts.cpu & (CPU_ZILOG)) == 0) { error_illegal_ident(); return FALSE; }'
cpu_code[RABBIT] = '\nif ((opts.cpu & (CPU_RABBIT)) == 0) { error_illegal_ident(); return FALSE; }'

#------------------------------------------------------------------------------
# Output files
#------------------------------------------------------------------------------
file_ok  = [0] * (ALL+1)
file_err = [0] * (ALL+1)

file_ok[Z80]  	= open("t/data/z80-ok.asm",	  "w")
file_err[Z80]  	= open("t/data/z80-err.asm",  "w")

file_ok[Z180]  	= open("t/data/z180-ok.asm",  "w")
file_err[Z180] 	= open("t/data/z180-err.asm", "w")

file_ok[R2K]  	= open("t/data/r2k-ok.asm",   "w")
file_err[R2K] 	= open("t/data/r2k-err.asm",  "w")

file_ok[R3K]  	= open("t/data/r3k-ok.asm",   "w")
file_err[R3K] 	= open("t/data/r3k-err.asm",  "w")

file_rules 		= open("cpu_opcodes.h", "w")

#------------------------------------------------------------------------------
# emit
#------------------------------------------------------------------------------
def emit_asm(cpus, asm, bytes):
	bytes_dump = sp.join(["%02X" % x for x in bytes])
	asm_line = " %-30s ; %s\n" % (asm, bytes_dump)
	for arch in (Z80, Z180, R2K, R3K):
		if cpus & arch:
			file_ok[arch].write(asm_line)
		else:
			file_err[arch].write(asm_line)
	file_rules.write("/* " + asm + " */\n")

def emit_rule(cpus, rule_toks, code_toks):
	rule = sp.join([x.tok for x in rule_toks])
	code = sp.join(code_toks)
	rule_line = sp.join(['| label?',
						 rule,
						 NEWLINE.tok,
						 '@{', cpu_code[cpus], 
						 code,
						 '\n}\n\n'])
	file_rules.write(rule_line)

def DO(stmt, opcode, prefix=0, dis0=0):
	arg = '0x%02X' % opcode
	if prefix:
		arg = prefix + ' + ' + arg
	if dis0:
		arg = '(' + arg + ') << 8'
	return '\n' + stmt + '(' + arg + ');'

def DO_stmt(opcode, prefix=0, dis0=0):
	return DO('DO_stmt', opcode, prefix, dis0)

def DO_stmt_n(opcode, prefix=0, dis0=0):
	return DO('DO_stmt_n', opcode, prefix, dis0)

def DO_stmt_nn(opcode, prefix=0, dis0=0):
	return DO('DO_stmt_nn', opcode, prefix, dis0)

def DO_stmt_idx(opcode, prefix=0, dis0=0):
	return DO('DO_stmt_idx', opcode, prefix, dis0)

def DO_stmt_idx_n(opcode, prefix=0, dis0=0):
	return DO('DO_stmt_idx_n', opcode, prefix, dis0)

def DO_ALTD():
	return DO_stmt(ALTD.prefix)

#------------------------------------------------------------------------------
# 8-bit load group
#------------------------------------------------------------------------------

for r1 in (B, C, D, E, H, L, A):
	for r2 in (B, C, D, E, H, L, A):
		opcode = 0x40 + r1.n*8 + r2.n
		
		# ld r,r
		emit_asm( ALL, "ld %s, %s" % (r1.asm, r2.asm), [opcode]);
		emit_rule(ALL, [LD, r1, COMMA, r2], [DO_stmt(opcode)])
		
		# altd ld r,r
		emit_asm( RABBIT, "altd ld %s, %s" % (r1.asm, r2.asm), 
			[ALTD.prefix, opcode]);
		emit_rule(RABBIT, [ALTD, LD, r1, COMMA, r2], 
			[DO_ALTD(), DO_stmt(opcode)])

		# ld r',r
		emit_asm( RABBIT, "ld %s', %s" % (r1.asm, r2.asm), 
			[ALTD.prefix, opcode]);
		emit_rule(RABBIT, [LD, r1.alt, COMMA, r2], 
			[DO_ALTD(), DO_stmt(opcode)])

		dd, fd = r1.ix.prefix or r2.ix.prefix, r1.iy.prefix or r2.iy.prefix
		if dd or fd:
			# ld ixh,r
			emit_asm( Z80, "ld %s, %s" % (r1.ix.asm, r2.ix.asm), [dd, opcode]);
			emit_rule(Z80, [LD, r1.ix, COMMA, r2.ix],
				[DO_stmt(opcode, P_IX)])
			
			# ld iyh,r
			emit_asm( Z80, "ld %s, %s" % (r1.iy.asm, r2.iy.asm), [fd, opcode]);
			emit_rule(Z80, [LD, r1.iy, COMMA, r2.iy],
				[DO_stmt(opcode, P_IY)])

	# ld r, N | ld r, (MN)
	opcode = 0x06 + r1.n*8
	if r1 == A:
		# ld a, N | ld a,(MN)
		emit_asm( ALL, "ld %s, 42"    % r1.asm, [opcode, 42]);
		emit_asm( ALL, "ld %s, (256)" % r1.asm, [0x3A, 0, 1]);
		emit_rule(ALL, [LD, r1, COMMA, expr], 
			['\nif (expr_in_parens) {',
			 DO_stmt_nn(0x3A),
			 '\n} else {',
			 DO_stmt_n(opcode),
			 '\n}'])

		# altd ld a, N | altd ld a,(MN)
		emit_asm( RABBIT, "altd ld %s, 42"    % r1.asm, [ALTD.prefix, opcode, 42]);
		emit_asm( RABBIT, "altd ld %s, (256)" % r1.asm, [ALTD.prefix, 0x3A, 0, 1]);
		emit_rule(RABBIT, [ALTD, LD, r1, COMMA, expr], 
			[DO_ALTD(),
			 '\nif (expr_in_parens) {',
			 DO_stmt_nn(0x3A),
			 '\n} else {',
			 DO_stmt_n(opcode),
			 '\n}'])

		# ld a', N | ld a',(MN)
		emit_asm( RABBIT, "ld %s, 42"    % r1.alt.asm, [ALTD.prefix, opcode, 42]);
		emit_asm( RABBIT, "ld %s, (256)" % r1.alt.asm, [ALTD.prefix, 0x3A, 0, 1]);
		emit_rule(RABBIT, [LD, r1.alt, COMMA, expr], 
			[DO_ALTD(),
			 '\nif (expr_in_parens) {',
			 DO_stmt_nn(0x3A),
			 '\n} else {',
			 DO_stmt_n(opcode),
			 '\n}'])
	else:
		# ld r, N
		emit_asm( ALL, "ld %s,  42 " % r1.asm, [opcode, 42]);
		emit_asm( ALL, "ld %s, (42)" % r1.asm, [opcode, 42]);
		emit_rule(ALL, [LD, r1, COMMA, expr], 
			['\nif (expr_in_parens) warn_expr_in_parens();',
			 DO_stmt_n(opcode)])

		# altd ld r, N
		emit_asm( RABBIT, "altd ld %s,  42 " % r1.asm, [ALTD.prefix, opcode, 42]);
		emit_asm( RABBIT, "altd ld %s, (42)" % r1.asm, [ALTD.prefix, opcode, 42]);
		emit_rule(RABBIT, [ALTD, LD, r1, COMMA, expr], 
			['\nif (expr_in_parens) warn_expr_in_parens();',
			 DO_ALTD(),
			 DO_stmt_n(opcode)])

		# ld r', N
		emit_asm( RABBIT, "ld %s,  42 " % r1.alt.asm, [ALTD.prefix, opcode, 42]);
		emit_asm( RABBIT, "ld %s, (42)" % r1.alt.asm, [ALTD.prefix, opcode, 42]);
		emit_rule(RABBIT, [LD, r1.alt, COMMA, expr], 
			['\nif (expr_in_parens) warn_expr_in_parens();',
			 DO_ALTD(),
			 DO_stmt_n(opcode)])

		dd, fd = r1.ix.prefix, r1.iy.prefix
		if dd or fd:
			# ld ixh, N
			emit_asm( Z80, "ld %s,  42 " % r1.ix.asm, [dd, opcode, 42]);
			emit_asm( Z80, "ld %s, (42)" % r1.ix.asm, [dd, opcode, 42]);
			emit_rule(Z80, [LD, r1.ix, COMMA, expr], 
				['\nif (expr_in_parens) warn_expr_in_parens();',
				 DO_stmt_n(opcode, P_IX)])
				 
			# ld iyh, N
			emit_asm( Z80, "ld %s,  42 " % r1.iy.asm, [fd, opcode, 42]);
			emit_asm( Z80, "ld %s, (42)" % r1.iy.asm, [fd, opcode, 42]);
			emit_rule(Z80, [LD, r1.iy, COMMA, expr], 
				['\nif (expr_in_parens) warn_expr_in_parens();',
				 DO_stmt_n(opcode, P_IY)])

	# ld r, (hl)
	opcode = 0x46 + r1.n*8
	emit_asm( ALL, "ld %s, (hl)" % r1.asm, [opcode])
	emit_rule(ALL, [LD, r1, COMMA, HL.ind, RPAREN],
		[DO_stmt(opcode)])
		 
	# altd ld r, (hl)
	emit_asm( RABBIT, "altd ld %s, (hl)" % r1.asm, [ALTD.prefix, opcode])
	emit_rule(RABBIT, [ALTD, LD, r1, COMMA, HL.ind, RPAREN],
		[DO_ALTD(), DO_stmt(opcode)])
		 
	# ld r', (hl)
	emit_asm( RABBIT, "ld %s, (hl)" % r1.alt.asm, [ALTD.prefix, opcode])
	emit_rule(RABBIT, [LD, r1.alt, COMMA, HL.ind, RPAREN],
		[DO_ALTD(), DO_stmt(opcode)])
		 
	for x in (IX, IY):
		# ld r, (ix)
		emit_asm( ALL, "ld %s, (%s)" % (r1.asm, x.asm), [x.prefix, opcode, 0])
		emit_rule(ALL, [LD, r1, COMMA, x.ind, RPAREN],
			[DO_stmt(opcode, x.p_ix, 1)])
			 
		# altd ld r, (ix)
		emit_asm( RABBIT, "altd ld %s, (%s)" % (r1.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0])
		emit_rule(RABBIT, [ALTD, LD, r1, COMMA, x.ind, RPAREN],
			[DO_ALTD(), DO_stmt(opcode, x.p_ix, 1)])
			 
		# ld r', (ix)
		emit_asm( RABBIT, "ld %s, (%s)" % (r1.alt.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0])
		emit_rule(RABBIT, [LD, r1.alt, COMMA, x.ind, RPAREN],
			[DO_ALTD(), DO_stmt(opcode, x.p_ix, 1)])
			 
		# ld r, (ix+d)
		emit_asm( ALL, "ld %s, (%s + 127)" % (r1.asm, x.asm), [x.prefix, opcode, 0x7F])
		emit_asm( ALL, "ld %s, (%s - 128)" % (r1.asm, x.asm), [x.prefix, opcode, 0x80])
		emit_rule(ALL, [LD, r1, COMMA, x.ind, expr, RPAREN],
			[DO_stmt_idx(opcode, x.p_ix)])
			 
		# altd ld r, (ix+d)
		emit_asm( RABBIT, "altd ld %s, (%s + 127)" % (r1.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x7F])
		emit_asm( RABBIT, "altd ld %s, (%s - 128)" % (r1.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x80])
		emit_rule(RABBIT, [ALTD, LD, r1, COMMA, x.ind, expr, RPAREN],
			[DO_ALTD(), DO_stmt_idx(opcode, x.p_ix)])
			 
		# ld r', (ix)
		emit_asm( RABBIT, "ld %s, (%s + 127)" % (r1.alt.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x7F])
		emit_asm( RABBIT, "ld %s, (%s - 128)" % (r1.alt.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x80])
		emit_rule(RABBIT, [LD, r1.alt, COMMA, x.ind, expr, RPAREN],
			[DO_ALTD(), DO_stmt_idx(opcode, x.p_ix)])
	
	# ld (hl), r
	opcode = 0x70 + r1.n
	emit_asm( ALL, "ld (hl), %s" % r1.asm, [opcode])
	emit_rule(ALL, [LD, HL.ind, RPAREN, COMMA, r1],
		[DO_stmt(opcode)])
	
	for x in (IX, IY):
		# ld (ix), r
		emit_asm( ALL, "ld (%s), %s" % (x.asm, r1.asm), [x.prefix, opcode, 0])
		emit_rule(ALL, [LD, x.ind, RPAREN, COMMA, r1],
			[DO_stmt(opcode, x.p_ix, 1)])
			
		# ld (ix+d), r
		emit_asm( ALL, "ld (%s + 127), %s" % (x.asm, r1.asm), [x.prefix, opcode, 0x7F])
		emit_asm( ALL, "ld (%s - 128), %s" % (x.asm, r1.asm), [x.prefix, opcode, 0x80])
		emit_rule(ALL, [LD, x.ind, expr, RPAREN, COMMA, r1],
			[DO_stmt_idx(opcode, x.p_ix)])
	
# ld (hl), N
emit_asm( ALL, "ld (hl), 42", [0x36, 42])
emit_rule(ALL, [LD, HL.ind, RPAREN, COMMA, expr],
	['\nif (expr_in_parens) warn_expr_in_parens();',
	 DO_stmt_n(0x36)])
	 
for x in (IX, IY):
	# ld (ix | iy), N
	emit_asm( ALL, "ld (%s), 42" % x.asm, [x.prefix, 0x36, 0, 42])
	emit_rule(ALL, [LD, x.ind, RPAREN, COMMA, expr],
		['\nif (expr_in_parens) warn_expr_in_parens();',
		 DO_stmt_n(0x36, x.p_ix, 1)])
		 
	# ld (ix + d | iy + d), N
	emit_asm( ALL, "ld (%s + 127), 42" % x.asm, [x.prefix, 0x36, 0x7F, 42])
	emit_asm( ALL, "ld (%s - 128), 42" % x.asm, [x.prefix, 0x36, 0x80, 42])
	emit_rule(ALL, [LD, x.ind, expr, RPAREN, COMMA, expr],
		['\nif (expr_in_parens) warn_expr_in_parens();',
		 DO_stmt_idx_n(0x36, x.p_ix)])
		 
for x in (BC, DE):
	# ld (bc | de), a
	opcode = 0x02 + x.n*16
	emit_asm( ALL, "ld (%s), a" % x.asm, [opcode])
	emit_rule(ALL, [LD, x.ind, RPAREN, COMMA, A],
		[DO_stmt(opcode)])
		 
	# ld a, (bc | de)
	opcode = 0x0A + x.n*16
	emit_asm( ALL, "ld a, (%s)" % x.asm, [opcode])
	emit_rule(ALL, [LD, A, COMMA, x.ind, RPAREN],
		[DO_stmt(opcode)])

	# altd ld a, (bc | de)
	emit_asm( RABBIT, "altd ld a, (%s)" % x.asm, [ALTD.prefix, opcode])
	emit_rule(RABBIT, [ALTD, LD, A, COMMA, x.ind, RPAREN],
		[DO_ALTD(), DO_stmt(opcode)])

	# ld a', (bc | de)
	emit_asm( RABBIT, "ld a', (%s)" % x.asm, [ALTD.prefix, opcode])
	emit_rule(RABBIT, [LD, A1, COMMA, x.ind, RPAREN],
		[DO_ALTD(), DO_stmt(opcode)])

# ld (MN), a
opcode = 0x32
emit_asm( ALL, "ld (256), a", [opcode, 0, 1])
emit_rule(ALL, [LD, expr, COMMA, A],
	['\nif (!expr_in_parens) return FALSE;',
	 DO_stmt_nn(opcode)])

#------------------------------------------------------------------------------
# 8-bit arithmetic group
#------------------------------------------------------------------------------

for op in (ADD, ADC, SUB, SBC, AND, XOR, OR, CP):
	for r in (B, C, D, E, H, L, A):
		# add a, r
		opcode = 0x80 + op.n*8 + r.n
		emit_asm( ALL, "%s a, %s" % (op.asm, r.asm), [opcode])
		emit_rule(ALL, [op, A, COMMA, r],
			[DO_stmt(opcode)])
			
		# add r
		emit_asm( ALL, "%s %s" % (op.asm, r.asm), [opcode])
		emit_rule(ALL, [op, r],
			[DO_stmt(opcode)])
			
		# altd add a, r
		emit_asm( RABBIT, "altd %s a, %s" % (op.asm, r.asm), [ALTD.prefix, opcode])
		emit_rule(RABBIT, [ALTD, op, A, COMMA, r],
			[DO_ALTD(), DO_stmt(opcode)])
			
		# altd add r
		emit_asm( RABBIT, "altd %s %s" % (op.asm, r.asm), [ALTD.prefix, opcode])
		emit_rule(RABBIT, [ALTD, op, r],
			[DO_ALTD(), DO_stmt(opcode)])
			
		# add a', r
		emit_asm( RABBIT, "%s a', %s" % (op.asm, r.asm), [ALTD.prefix, opcode])
		emit_rule(RABBIT, [op, A1, COMMA, r],
			[DO_ALTD(), DO_stmt(opcode)])
			
		dd, fd = r.ix.prefix, r.iy.prefix
		if dd or fd:
			# add a, ixh
			emit_asm( Z80, "%s a, %s" % (op.asm, r.ix.asm), [dd, opcode])
			emit_rule(Z80, [op, A, COMMA, r.ix],
				[DO_stmt(opcode, P_IX)])
				
			# add ixh
			emit_asm( Z80, "%s %s" % (op.asm, r.ix.asm), [dd, opcode])
			emit_rule(Z80, [op, r.ix],
				[DO_stmt(opcode, P_IX)])
				
			# add a, iyh
			emit_asm( Z80, "%s a, %s" % (op.asm, r.iy.asm), [fd, opcode])
			emit_rule(Z80, [op, A, COMMA, r.iy],
				[DO_stmt(opcode, P_IY)])
				
			# add iyh
			emit_asm( Z80, "%s %s" % (op.asm, r.iy.asm), [fd, opcode])
			emit_rule(Z80, [op, r.iy],
				[DO_stmt(opcode, P_IY)])

	# add a, (hl)
	opcode = 0x86 + op.n*8
	emit_asm( ALL, "%s a, (hl)" % op.asm, [opcode])
	emit_rule(ALL, [op, A, COMMA, IND_HL, RPAREN],
		[DO_stmt(opcode)])
	
	# add (hl)
	emit_asm( ALL, "%s (hl)" % op.asm, [opcode])
	emit_rule(ALL, [op, IND_HL, RPAREN],
		[DO_stmt(opcode)])
	
	# altd add a, (hl)
	emit_asm( RABBIT, "altd %s a, (hl)" % op.asm, [ALTD.prefix, opcode])
	emit_rule(RABBIT, [ALTD, op, A, COMMA, IND_HL, RPAREN],
		[DO_ALTD(), DO_stmt(opcode)])
		
	# altd add (hl)
	emit_asm( RABBIT, "altd %s (hl)" % op.asm, [ALTD.prefix, opcode])
	emit_rule(RABBIT, [ALTD, op, IND_HL, RPAREN],
		[DO_ALTD(), DO_stmt(opcode)])
		
	# add a', (hl)
	emit_asm( RABBIT, "%s a', (hl)" % op.asm, [ALTD.prefix, opcode])
	emit_rule(RABBIT, [op, A1, COMMA, IND_HL, RPAREN],
		[DO_ALTD(), DO_stmt(opcode)])
		
	for x in (IX, IY):
		# add a, (ix)
		emit_asm( ALL, "%s a, (%s)" % (op.asm, x.asm), [x.prefix, opcode, 0])
		emit_rule(ALL, [op, A, COMMA, x.ind, RPAREN],
			[DO_stmt(opcode, x.p_ix, 1)])
		
		# add a, (ix+d)
		emit_asm( ALL, "%s a, (%s + 127)" % (op.asm, x.asm), [x.prefix, opcode, 0x7F])
		emit_asm( ALL, "%s a, (%s - 128)" % (op.asm, x.asm), [x.prefix, opcode, 0x80])
		emit_rule(ALL, [op, A, COMMA, x.ind, expr, RPAREN],
			[DO_stmt_idx(opcode, x.p_ix)])
		
		# add (ix)
		emit_asm( ALL, "%s (%s)" % (op.asm, x.asm), [x.prefix, opcode, 0])
		emit_rule(ALL, [op, x.ind, RPAREN],
			[DO_stmt(opcode, x.p_ix, 1)])
		
		# add (ix+d)
		emit_asm( ALL, "%s (%s + 127)" % (op.asm, x.asm), [x.prefix, opcode, 0x7F])
		emit_asm( ALL, "%s (%s - 128)" % (op.asm, x.asm), [x.prefix, opcode, 0x80])
		emit_rule(ALL, [op, x.ind, expr, RPAREN],
			[DO_stmt_idx(opcode, x.p_ix)])
		
		# altd add a, (ix)
		emit_asm( RABBIT, "altd %s a, (%s)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0])
		emit_rule(RABBIT, [ALTD, op, A, COMMA, x.ind, RPAREN],
			[DO_ALTD(), DO_stmt(opcode, x.p_ix, 1)])
		
		# altd add a, (ix+d)
		emit_asm( RABBIT, "altd %s a, (%s + 127)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x7F])
		emit_asm( RABBIT, "altd %s a, (%s - 128)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x80])
		emit_rule(RABBIT, [ALTD, op, A, COMMA, x.ind, expr, RPAREN],
			[DO_ALTD(), DO_stmt_idx(opcode, x.p_ix)])
		
		# altd add (ix)
		emit_asm( RABBIT, "altd %s (%s)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0])
		emit_rule(RABBIT, [ALTD, op, x.ind, RPAREN],
			[DO_ALTD(), DO_stmt(opcode, x.p_ix, 1)])
		
		# altd add (ix+d)
		emit_asm( RABBIT, "altd %s (%s + 127)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x7F])
		emit_asm( RABBIT, "altd %s (%s - 128)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x80])
		emit_rule(RABBIT, [ALTD, op, x.ind, expr, RPAREN],
			[DO_ALTD(), DO_stmt_idx(opcode, x.p_ix)])
		
		# add a', (ix)
		emit_asm( RABBIT, "%s a', (%s)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0])
		emit_rule(RABBIT, [op, A1, COMMA, x.ind, RPAREN],
			[DO_ALTD(), DO_stmt(opcode, x.p_ix, 1)])
		
		# add a', (ix+d)
		emit_asm( RABBIT, "%s a', (%s + 127)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x7F])
		emit_asm( RABBIT, "%s a', (%s - 128)" % (op.asm, x.asm), [ALTD.prefix, x.prefix, opcode, 0x80])
		emit_rule(RABBIT, [op, A1, COMMA, x.ind, expr, RPAREN],
			[DO_ALTD(), DO_stmt_idx(opcode, x.p_ix)])
