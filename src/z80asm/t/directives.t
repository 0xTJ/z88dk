#!/usr/bin/perl

#     ZZZZZZZZZZZZZZZZZZZZ    8888888888888       00000000000
#   ZZZZZZZZZZZZZZZZZZZZ    88888888888888888    0000000000000
#                ZZZZZ      888           888  0000         0000
#              ZZZZZ        88888888888888888  0000         0000
#            ZZZZZ            8888888888888    0000         0000       AAAAAA         SSSSSSSSSSS   MMMM       MMMM
#          ZZZZZ            88888888888888888  0000         0000      AAAAAAAA      SSSS            MMMMMM   MMMMMM
#        ZZZZZ              8888         8888  0000         0000     AAAA  AAAA     SSSSSSSSSSS     MMMMMMMMMMMMMMM
#      ZZZZZ                8888         8888  0000         0000    AAAAAAAAAAAA      SSSSSSSSSSS   MMMM MMMMM MMMM
#    ZZZZZZZZZZZZZZZZZZZZZ  88888888888888888    0000000000000     AAAA      AAAA           SSSSS   MMMM       MMMM
#  ZZZZZZZZZZZZZZZZZZZZZ      8888888888888       00000000000     AAAA        AAAA  SSSSSSSSSSS     MMMM       MMMM
#
# Copyright (C) Paulo Custodio, 2011-2014

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/directives.t,v 1.9 2015-01-19 22:50:01 pauloscustodio Exp $
#
# Test assembly directives

use Modern::Perl;
use t::TestZ80asm;
use File::Slurp;
use File::Path qw( make_path remove_tree );

#------------------------------------------------------------------------------
# INCLUDE
#------------------------------------------------------------------------------

# no -I, multiple levels
write_file("test0.inc", 'ld a,10');
for (1..9) { write_file("test$_.inc", 'include "test'.($_-1).'.inc"'."\n defb $_"); }
z80asm(
	asm		=> <<'END',
		include "test9.inc"		;; 3E 0A 01 02 03 04 05 06 07 08 09
		nop						;; 00
END
);

# -I, --inc-path
unlink(<test*.inc>);
make_path("test_dir");
delete $ENV{Z80_OZFILES};
	write_file("test_dir/test.inc", 'ld a,10');
	
	# no -I, full path : OK
	z80asm(
		asm		=> 'include "test_dir/test.inc"		;; 3E 0A',
	);
	
	# no -I, only file name : error
	z80asm(
		asm		=> 'include "test.inc"	;; error: cannot read file \'test.inc\'',
	);
	
	# -I : OK
	z80asm(
		asm		=> 'include "test.inc"				;; 3E 0A',
		options	=> "-b -Itest_dir",
	);
	z80asm(
		asm		=> 'include "test.inc"				;; 3E 0A',
		options	=> "-b -I=test_dir",
	);
	z80asm(
		asm		=> 'include "test.inc"				;; 3E 0A',
		options	=> "-b --inc-path=test_dir",
	);
	z80asm(
		asm		=> 'include "test.inc"				;; 3E 0A',
		options	=> "-b --inc-pathtest_dir",
	);
	z80asm(
		asm		=> 'include "test_dir/test.inc"		;; 3E 0A',
		options	=> "-b -Itest_dir",
	);
	
	# Z80_OZFILES : OK
	$ENV{Z80_OZFILES} = "test_dir";
	z80asm(
		asm		=> 'include "test.inc"				;; 3E 0A',
	);
remove_tree("test_dir");
delete $ENV{Z80_OZFILES};

# fatal_read_file
# BUG_0034 : If assembly process fails with fatal error, invalid library is kept
unlink("test.lib", "test.inc");
z80asm(
	asm		=> <<'ASM',
		include "test.inc"		;; error: cannot read file 'test.inc'
ASM
	options	=> "-xtest.lib",
);
ok ! -f "test.lib", "test.lib does not exist";

# fatal_include_recursion
write_file("test.inc", 'include "test.asm"');
z80asm(
	asm		=> <<'ASM',
		include "test.inc"
ASM
	error	=> "Error at file 'test.inc' line 1: cannot include file 'test.asm' recursively",
);

# syntax
z80asm(
	asm		=> <<'ASM',
		include 				;; error: syntax error
ASM
);

#------------------------------------------------------------------------------
# DEFGROUP - simple use tested in opcodes.t
# test error messages here
#------------------------------------------------------------------------------
z80asm(
	asm 	=> <<END,
	defgroup {
		dg1 = 65535
		dg2	= 65536					;; error: integer '65536' out of range
		dg3 = -32768
		dg4 = -32769				;; error: integer '-32769' out of range
		dg5 = undefined				;; error: symbol not defined
	}
END
);

z80asm(
	asm 	=> <<END,
	defgroup 
END
	error	=> "Error at file 'test.asm' line 2: missing {} block",
);

z80asm(
	asm 	=> <<END,
	defgroup {
END
	error	=> "Error at file 'test.asm' line 2: {} block not closed",
);

# BUG_0032 : DEFGROUP ignores name after assignment
z80asm(
	asm 	=> <<END,
		defgroup
		{
			f10 = 10, f11
		}
		defb f10, f11		;; 0A 0B
END
);

#------------------------------------------------------------------------------
# DEFS - simple use tested in opcodes.t
# test error messages here
#------------------------------------------------------------------------------
z80asm(
	asm		=> <<END,
		defs 65536
END
	bin		=> "\x00" x 65536,
);
z80asm(
	asm		=> <<END,
		defb 0
		defs 65535
END
	bin		=> "\x00" x 65536,
);
z80asm(
	asm		=> <<END,
		defs				;; error: syntax error
		defb 0
		defs 65536			;; error: max. code size of 65536 bytes reached
END
);


#------------------------------------------------------------------------------
# DEFVARS - simple use tested in opcodes.t
# test multi-file and error messages here
#------------------------------------------------------------------------------
z80asm(
	asm		=> <<END,
	defc defvars_base = 0x80			
	defvars defvars_base				
										
	{									
		df1 ds.b 4;						; df1 = 0x80
		df2 ds.w 2;						; df2 = 0x80 + 4 = 0x84
		df3 ds.p 2;						; df3 = 0x84 + 2*2 = 0x88
		df4 ds.l 2;						; df4 = 0x88 + 2*3 = 0x8E
		df5 							; df5 = 0x8E + 2*4 = 0x96
										
	}									
	defb df1, df2, df3, df4, df5		;; 80 84 88 8E 96
END
	asm1	=> <<END,
	defvars -1 ; continue after df5		
	{									
		df9  ds.b 1						; df9 = 0x96
		df10 ds.b 1						; df10 = 0x97
		df11							; df11 = 0x98
		df12							; df12 = 0x98
	}									
	defb df9, df10, df11, df12			;; 96 97 98 98
END
	asm2 	=> <<END,
	defvars -1 ; continue after df12	
	{									
		df16 ds.b 1						; df16 = 0x98
		df17 ds.b 1						; df17 = 0x99
		df18							; df18 = 0x9A
	}									
	defb df16, df17, df18				;; 98 99 9A
END
);

z80asm(
	asm 	=> <<END,
	defvars -1 ; continue from 0
	{
		df1	ds.b 1
	}
	defb df1							;; 00
END
);

z80asm(
	asm 	=> <<END,
	defvars 0
	{
		df1	ds.l 10
		df2	ds.l 16383					;; error: integer '65572' out of range
	}
END
);

z80asm(
	asm 	=> <<END,
	defvars 0
	{
		df2	ds.l 16384					;; error: integer '65536' out of range
	}
END
);

z80asm(
	asm 	=> <<END,
	defvars 							;; error: syntax error
END
);

z80asm(
	asm 	=> <<END,
	defvars 0
END
	error	=> "Error at file 'test.asm' line 2: missing {} block",
);

z80asm(
	asm 	=> <<END,
	defvars 0 {
END
	error	=> "Error at file 'test.asm' line 2: {} block not closed",
);

z80asm(
	asm 	=> <<END,
	defvars undefined					;; error: symbol not defined
	{
		df2	ds.l 1
	}
END
);

# BUG_0051: DEFC and DEFVARS constants do not appear in map file
z80asm(
	asm		=> <<'ASM',
			public minus_d_var, defc_var, defvars_var, public_label
			defc defc_var = 2
			defvars 3 { 
			defvars_var ds.b 1
			}
		public_label: 
			defb minus_d_var	;; 01
			defb defc_var		;; 02
			defb defvars_var	;; 03
			defb public_label	;; 04
			defb local_label 	;; 09
		local_label:
ASM
	options	=> "-r4 -b -m -g -Dminus_d_var"
);

eq_or_diff scalar(read_file("test.def")), <<'END', "test.def";
DEFC public_label                    = $0004 ; Module test
END

eq_or_diff scalar(read_file("test.map")), <<'END', "test.map";
ASMHEAD                         = 0004, G: 
ASMSIZE                         = 0005, G: 
ASMTAIL                         = 0009, G: 
defc_var                        = 0002, G: test
defvars_var                     = 0003, G: test
local_label                     = 0009, L: test
minus_d_var                     = 0001, G: test
public_label                    = 0004, G: test


minus_d_var                     = 0001, G: test
defc_var                        = 0002, G: test
defvars_var                     = 0003, G: test
ASMHEAD                         = 0004, G: 
public_label                    = 0004, G: test
ASMSIZE                         = 0005, G: 
ASMTAIL                         = 0009, G: 
local_label                     = 0009, L: test
END

#------------------------------------------------------------------------------
# MODULE
#------------------------------------------------------------------------------

# -forcexlib, --forcexlib

# OK
unlink "test1.lib";
z80asm(
	asm		=> "public main \n main: ret",
	options	=> "-xtest1.lib",
	ok		=> 1,
);
ok -f "test1.lib";
z80asm(
	asm		=> "extern main \n call main ;; CD 03 00 C9",
	options	=> "-b -itest1.lib",
);

# no PUBLIC, error
unlink "test1.lib";
z80asm(
	asm		=> "module main \n main: ret",
	options	=> "-xtest1.lib",
	ok		=> 1,
);
ok -f "test1.lib";
z80asm(
	asm		=> "extern main \n call main ;; error: symbol not defined",
	options	=> "-b -itest1.lib",
);

# -forcexlib - OK
for my $options ('-forcexlib', '--forcexlib') {
	unlink "test1.lib";
	z80asm(
		asm		=> "module main \n main: ret",
		options	=> "-xtest1.lib $options",
		ok		=> 1,
	);
	ok -f "test1.lib";
	z80asm(
		asm		=> "extern main \n call main ;; CD 03 00 C9",
		options	=> "-b -itest1.lib",
	);
}

# error_module_redefined
z80asm(
	asm 	=> <<'END',
		module			;; error: syntax error
		module aa
		module bb		;; error: module name already defined
END
);

# module name in object file
z80asm(
	asm 	=> <<'END',
		module lib
		main: ret	;; C9
END
);
z80nm("test.obj", <<'END');

File test.obj at $0000: Z80RMF08
  Name: lib
  Names:
    L A $0000 main
  Code: 1 bytes
    C $0000: C9
END

#------------------------------------------------------------------------------
# ORG
#------------------------------------------------------------------------------

# no ORG defined
z80asm(
	asm		=> "start: jp start ;; C3 00 00",
);

# ORG defined
z80asm(
	asm		=> "org 0x1234 \n start: jp start ;; C3 34 12",
);
z80asm(
	asm		=> "defc org = 0x1234 \n org org \n start: jp start ;; C3 34 12",
);

# ORG defined and overridden by command line
z80asm(
	options	=> "-b -r1234",
	asm		=> "org 0x1000 \n start: jp start ;; C3 34 12",
);

# no ORG
z80asm(
	asm		=> "org ;; error: syntax error",
);

# ORG redefined
z80asm(
	asm		=> "org 0x1234 \n org 0x5678 ;; error: ORG redefined",
);

# ORG OK
z80asm(
	asm		=> "org 0 \n jp ASMPC ;; C3 00 00",
);
z80asm(
	asm		=> "org 65535 \n defb ASMPC & 0xFF ;; FF",
);
z80asm(
	asm		=> "org 65535 \n defb ASMPC >> 8 ;; FF",
);

# ORG out of range
z80asm(
	asm		=> "org -2 		;; error: integer '-2' out of range",
);
z80asm(
	asm		=> "org 65536 	;; error: integer '65536' out of range",
);

# ORG not constant
z80asm(
	asm		=> "org start ;; error: symbol not defined",
);

# -r, --origin
for my $origin (0, 0x1234) {
	for my $options ("-r", "-r=", "--origin", "--origin=") {
		z80asm(
			options	=> "-b $options".sprintf("%x", $origin),
			asm		=> "start: jp start",
			bin		=> "\xC3" . pack("v", $origin),
		);
	}
}

# option out of range
for my $origin (-1, 0x10000) {
	my $origin_hex = ($origin < 0 ? "-" : "") . sprintf("%x", abs($origin));
	z80asm(
		options	=> "-b -r$origin_hex",
		asm		=> "start: jp start",
		error	=> "Error: integer '$origin' out of range",
	);
}
z80asm(
	options	=> "-b -r123Z",
	asm		=> "start: jp start",
	error	=> "Error: invalid ORG option '123Z'",
);

# BUG_0025 : JR at org 0 with out-of-range jump crashes WriteListFile()
z80asm(
	asm		=> "jr ASMPC+2-129 ;; error: integer '-129' out of range",
);
z80asm(
	asm		=> "jr ASMPC+2+128 ;; error: integer '128' out of range",
);

# --split-bin, ORG -1
z80asm(
	asm 	=> <<END,
	defw ASMPC
	
	section code
	defw ASMPC
	
	section data
	defw ASMPC
	
	section bss		; split file here
	org 0x4000
	defw ASMPC
END
	bin		=> pack("v*", 0, 2, 4),
);
ok   -f "test.bin";
ok ! -f "test_code.bin";
ok ! -f "test_data.bin";
test_binfile("test_bss.bin", pack("v*", 0x4000));

z80asm(
	options	=> "-b --split-bin",
	asm 	=> <<END,
	defw ASMPC		; split file here
	
	section code	; split file here
	defw ASMPC
	
	section data	; split file here
	defw ASMPC
	
	section bss		; split file here
	org 0x4000
	defw ASMPC
END
	bin		=> pack("v*", 0),
);
ok   -f "test.bin";
test_binfile("test_code.bin", 	pack("v*", 2));
test_binfile("test_data.bin", 	pack("v*", 4));
test_binfile("test_bss.bin", 	pack("v*", 0x4000));

# ORG -1 to split
z80asm(
	options	=> "-b",
	asm 	=> <<END,
	defw ASMPC
	
	section code
	defw ASMPC
	
	section data	; split file here
	org 0x4000
	defw ASMPC
	
	section bss		; split file here
	org -1
	defw ASMPC
END
	bin		=> pack("v*", 0, 2),
);
ok   -f "test.bin";
ok ! -f "test_code.bin";
test_binfile("test_data.bin", 	pack("v*", 0x4000));
test_binfile("test_bss.bin", 	pack("v*", 0x4002));

#------------------------------------------------------------------------------
# EXTERN / PUBLIC / XDEF / XLIB / XREF / LIB
#------------------------------------------------------------------------------
z80asm(
	asm		=> <<'END',
		extern 				;; error: syntax error
		public 				;; error: syntax error
END
);

z80asm(
	asm		=> <<'END',
		public	p1,p2
		xdef    p3			;; warn: 'XDEF' is deprecated, use 'PUBLIC' instead
		xlib    p4			;; warn: 'XLIB' is deprecated, use 'PUBLIC' instead
		
	p1:	defb ASMPC			;; 00
	p2:	defb ASMPC			;; 01
	p3:	defb ASMPC			;; 02
	p4:	defb ASMPC			;; 03
END
	asm1	=> <<'END',
		extern p1,p2
		xref   p3			;; warn: 'XREF' is deprecated, use 'EXTERN' instead
		lib	   p4			;; warn: 'LIB' is deprecated, use 'EXTERN' instead
		
		defb p1,p2,p3,p4	;; 00 01 02 03
END
);

#------------------------------------------------------------------------------
# LSTON / LSTOFF
#------------------------------------------------------------------------------
z80asm(
	asm		=> <<'END',
		lstoff				;;
		ld bc,1				;; 01 01 00
		lston				;;
		ld hl,1				;; 21 01 00
END
	options => "-b -l",
);
ok -f "test.lst", "test.lst exists";
ok my @lines = read_file("test.lst");
ok $lines[3] =~ /^ \s* $/x;
ok $lines[4] =~ /^ 1 \s+ 0000                      \s+ lstoff          /x;
ok $lines[5] =~ /^ 4 \s+ 0003 \s+ 21 \s+ 01 \s+ 00 \s+ ld     \s+ hl,1 /x;
ok $lines[6] =~ /^ 5 \s+ 0006 \s* $/x;
ok $lines[7] =~ /^ \s* $/x;

z80asm(
	asm		=> <<'END',
		lstoff				;;
		ld bc,1				;; 01 01 00
		lston				;;
		ld hl,1				;; 21 01 00
END
	options => "-b",
);
ok ! -f "test.lst", "test.lst does not exist";
