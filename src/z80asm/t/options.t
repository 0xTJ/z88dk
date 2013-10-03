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
# Copyright (C) Paulo Custodio, 2011-2013

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/options.t,v 1.14 2013-10-03 22:35:21 pauloscustodio Exp $
#
# Test options

use strict;
use warnings;
use File::Slurp;
use Capture::Tiny 'capture_merged';
use Test::Differences; 
use Test::More;
require 't/test_utils.pl';

my $copyrightmsg = get_copyright()."\n";

#------------------------------------------------------------------------------
# no arguments
#------------------------------------------------------------------------------
unlink_testfiles();
t_z80asm_capture("", 		$copyrightmsg, 	"", 0);

#------------------------------------------------------------------------------
# list of files
#------------------------------------------------------------------------------
unlink_testfiles();
write_file(asm1_file(), "defb 1");
write_file(asm2_file(), "defb 2");
write_file(asm3_file(), "defb 3");
write_file(asm4_file(), "defb 4");
t_z80asm_capture(join(" ", "-r0", "-b", asm1_file(), asm2_file(), asm3_file(), asm4_file()),
				 "", "", 0);
t_binary(read_binfile(bin1_file()), "\1\2\3\4");
ok unlink bin1_file();

write_file(asmlst1_file(), "\r\r\n\n  ".asm2_file()."  \r\r\n\n  \@".asmlst2_file());
write_file(asmlst2_file(), "\r\r\n\n  ".asm3_file()."  \r\r\n\n    ".asm4_file()."\n");
t_z80asm_capture(join(" ", "-r0", "-b", asm1_file(), '@'.asmlst1_file()),
				 "", "", 0);
t_binary(read_binfile(bin1_file()), "\1\2\3\4");
ok unlink bin1_file();

write_file(asmlst1_file(), "\r\r\n\n  ".asm2_file()."  \r\r\n\n  \@".asmlst2_file());
write_file(asmlst2_file(), "\r\r\n\n  ".asm2_file()."  \r\r\n\n  \@".asmlst1_file());
t_z80asm_capture(join(" ", "-r0", "-b", asm1_file(), '@'.asmlst1_file()),
				 "", <<'ERR', 1);
Error at file 'test2.asmlst' line 9: cannot include file 'test1.asmlst' recursively
1 errors occurred during assembly
ERR

#------------------------------------------------------------------------------
# --help, -h
#------------------------------------------------------------------------------
my $help_text = $copyrightmsg . <<'END';

Usage:
  z80asm [options] { @<modulefile> | <filename> }

  [] = optional, {} = may be repeated, | = OR clause.

  To assemble 'fred.asm' use 'fred' or 'fred.asm'

  <modulefile> contains list of file names of all modules to be linked,
  one module per line.

  File types recognized or created by z80asm:
    .asm = source file (default), or alternative -e<ext>
    .obj = object file (default), or alternative -M<ext>
    .lst = list file
    .bin = Z80 binary file
    .sym = symbols file
    .map = map file
    .def = global address definition file
    .err = error file

Help Options:
  -h, --help             Show help options
  -v, --verbose          Be verbose
* -nv, --not-verbose     Be silent

Input / Output File Options:
  -e, --asm-ext=EXT      ASM file extension, excluding '.'
  -M, --obj-ext=EXT      OBJ file extension, excluding '.'
  -o, --output=FILE.BIN  Output binary file

Code Generation Options:
  -sdcc, --sdcc          Assemble for Small Device C Compiler

Output Options:
  -b, --make-bin         Link and relocate object files to file.bin
* -nb, --no-make-bin     No binary file
  -d, --date-stamp       Assemble only if source older than object
* -nd, --no-date-stamp   No date stamp

Other Output File Options:
* -s, --symtable         Generate symbol table file.sym
  -ns, --no-symtable     No symbol table file
  -l, --list             Generate list file.lst
* -nl, --no-list         No list file
* -m, --map              Generate address map file.map
  -nm, --no-map          No address map file
  -g, --globaldef        Generate global address definition file.def
* -ng, --no-globaldef    No global address definition file

Options: -n defines option to be turned OFF (except -r -R -i -x -D -t -o)
-r<ORG> Explicit relocation <ORG> defined in hex (ignore ORG in first module)
-plus Interpret 'Invoke' as RST 28h
-R Generate relocatable code (Automatical relocation before execution)
-D<symbol> define symbol as logically TRUE (used for conditional assembly)
-c split code in 16K banks
-a: -b & -d (assemble only updated source files, then link & relocate)
-i<library> include <library> LIB modules with .obj modules during linking
-x<library> create library from specified modules ( e.g. with @<modules> )
-t<n> tabulator width for .map, .def, .sym files. Column width is 4 times -t
-I<path> additional path to search for includes
-L<path> path to search for libraries
Default options: -nd -nc -nR -t8
END

unlink_testfiles();
t_z80asm_capture("-h", 		$help_text, 	"", 0);
t_z80asm_capture("--help", 	$help_text, 	"", 0);

# make sure help fist in 80 columns
my $out = capture_merged { system z80asm()." --help"; };
my @long_lines = grep {length > 80} split(/\n/, $out);
ok !@long_lines, "help within 80 columns";
diag join("\n", @long_lines) if @long_lines;

# check no arguments
t_z80asm_capture("-h=x", 	"", 	<<'ERR', 1);
Error: illegal option '-h=x'
Error: source filename missing
2 errors occurred during assembly
ERR

t_z80asm_capture("--help=x", 	"", 	<<'ERR', 1);
Error: illegal option '--help=x'
Error: source filename missing
2 errors occurred during assembly
ERR

#------------------------------------------------------------------------------
# --verbose, -v
#------------------------------------------------------------------------------
my $verbose_text = <<'END';
Assemble all files.
Create symbol table file.
Link/relocate assembled modules.
Create address map file.

Assembling 'test.asm'...
Pass1...
Pass2...
Size of module is 3 bytes

Total of 3 lines assembled.
linking module(s)...
Pass1...
ORG address for code is 0000
Code size of linked modules is 3 bytes
Pass2...
Creating map...
Code generation completed.
END

for my $options ('-v', '--verbose') {
	unlink_testfiles();
	write_file(asm_file(), " nop \n nop \n nop");
	t_z80asm_capture("-r0 -b $options ".asm_file(), $verbose_text, "", 0);
	ok -f obj_file();
	ok -f bin_file();
	is read_file(bin_file(), binmode => ':raw'), "\0\0\0";
}

# check no arguments
t_z80asm_capture("-v=x", 	"", 	<<'ERR', 1);
Error: illegal option '-v=x'
Error: source filename missing
2 errors occurred during assembly
ERR

t_z80asm_capture("--verbose=x", 	"", 	<<'ERR', 1);
Error: illegal option '--verbose=x'
Error: source filename missing
2 errors occurred during assembly
ERR

#------------------------------------------------------------------------------
# --not-verbose, -nv
#------------------------------------------------------------------------------
unlink_testfiles();
write_file(asm_file(), "nop");

for my $options ('-nv', '--not-verbose') {
	t_z80asm_capture("-r0 -b $options ".asm_file(), "", "", 0);
	ok -f obj_file();
	ok -f bin_file();
	is read_file(bin_file(), binmode => ':raw'), "\0";
}

# check no arguments
t_z80asm_capture("-nv=x", 	"", 	<<'ERR', 1);
Error: illegal option '-nv=x'
Error: source filename missing
2 errors occurred during assembly
ERR

t_z80asm_capture("--not-verbose=x", 	"", 	<<'ERR', 1);
Error: illegal option '--not-verbose=x'
Error: source filename missing
2 errors occurred during assembly
ERR

#------------------------------------------------------------------------------
# --asm-ext=EXT, -eEXT
#------------------------------------------------------------------------------
my $base = asm_file(); $base =~ s/\.\w+$//;

unlink_testfiles();
write_file(asm_file(), "ret");
t_z80asm_capture("-r0 -b ".$base, "", "", 0);
is read_file(bin_file(), binary => ':raw'), "\xC9", "assemble ok";

for my $options ('-exxx', '-e=xxx', '-e xxx', '--asm-extxxx', '--asm-ext=xxx', '--asm-ext xxx') {
	unlink_testfiles();
	write_file($base.".xxx", "ret");
	t_z80asm_capture("-r0 -b $options $base", "", "", 0);
	is read_file(bin_file(), binary => ':raw'), "\xC9", "assemble ok";
}

unlink_testfiles($base.".xxx");

# check no arguments
t_z80asm_capture("-e", 	"", 	<<'ERR', 1);
Error: illegal option '-e'
Error: source filename missing
2 errors occurred during assembly
ERR

t_z80asm_capture("--asm-ext", 	"", 	<<'ERR', 1);
Error: illegal option '--asm-ext'
Error: source filename missing
2 errors occurred during assembly
ERR

#------------------------------------------------------------------------------
# --obj-ext=EXT, -MEXT
#------------------------------------------------------------------------------
$base = asm_file(); $base =~ s/\.\w+$//;

unlink_testfiles();
write_file(asm_file(), "ret");
t_z80asm_capture($base, "", "", 0);
like read_file(obj_file(), binary => ':raw'), qr/\xC9\z/, "assemble ok";

for my $options ('-Mo', '-M=o', '-M o', '--obj-exto', '--obj-ext=o', '--obj-ext o') {
	unlink_testfiles();
	write_file(asm_file(), "ret");
	t_z80asm_capture("$options $base", "", "", 0);
	like read_file($base.".o", binary => ':raw'), qr/\xC9\z/, "assemble ok";
}

unlink_testfiles($base.".o");

# check no arguments
t_z80asm_capture("-M", 	"", 	<<'ERR', 1);
Error: illegal option '-M'
Error: source filename missing
2 errors occurred during assembly
ERR

t_z80asm_capture("--obj-ext", 	"", 	<<'ERR', 1);
Error: illegal option '--obj-ext'
Error: source filename missing
2 errors occurred during assembly
ERR

#------------------------------------------------------------------------------
# -sdcc
#------------------------------------------------------------------------------
unlink_testfiles();
t_z80asm_error("defc main = 0x1234\ncall _main", 
		"Error at file 'test.asm' module 'TEST' line 2: symbol not defined");
for my $options ('-sdcc', '--sdcc') {
	t_z80asm_ok(0, "defc main = 0x1234\ncall _main", "\xCD\x34\x12", $options);
}

#------------------------------------------------------------------------------
# -s, --symtable, -ns, --no-symtable, -l, --list, -nl, --no-list
#------------------------------------------------------------------------------
unlink_testfiles();

my $asm = "
	xdef main
main:	ld b,10
loop:	djnz loop
	ret
";
my $bin = pack("C*", 
	0x06, 10,
	0x10, -2 & 0xFF,
	0xC9
);

# no symbol table, no list
for my $options ('-nl -ns', '-nl --no-symtable') {
	t_z80asm(
		asm		=> $asm,
		bin		=> $bin,
		options	=> $options,
		nolist	=> 1,
	);
}

# list file implies no symbol table
for my $options ('-l', '-l -s', '-l --symtable') {
	t_z80asm(
		asm		=> $asm,
		bin		=> $bin,
		options	=> $options,
		nolist	=> 1,
	);
}

# no list file implies symbol table
for my $options ('', '-nl', '-s', '--symtable', '-nl -s', '-nl --symtable') {
	t_z80asm(
		asm		=> $asm,
		bin		=> $bin,
		options	=> $options,
		nolist	=> 1,
	);
}

#------------------------------------------------------------------------------
# -m, --map, -nm, --no-map
#------------------------------------------------------------------------------
$asm = "
	define not_shown
	defc zero=0
	xdef main
main: ld b,10
loop: djnz loop
x31_x31_x31_x31_x31_x31_x31_x31: defb zero
x_32_x32_x32_x32_x32_x32_x32_x32: defb zero
";
my $asm2 = "
	define not_shown
	xdef func
func: ld b,10
loop: djnz loop
	  ret
";
$bin = "\x06\x0A\x10\xFE\x00\x00\x06\x0A\x10\xFE\xC9";


# -m, no symbols
for my $options ('-m', '--map') {
	t_z80asm(
		asm		=> "ld b,10 : djnz ASMPC : defw 0",
		asm2	=> "ld b,10 : djnz ASMPC : ret",
		bin		=> $bin,
		options	=> $options,
	);
	ok -f map_file(), map_file();
	eq_or_diff scalar(read_file(map_file())), <<'END', "mapfile contents";
None.
END
}

# -m
for my $options ('-m', '--map') {
	t_z80asm(
		asm		=> $asm,
		asm2	=> $asm2,
		bin		=> $bin,
		options	=> $options,
	);
	ok -f map_file(), map_file();
	eq_or_diff scalar(read_file(map_file())), <<'END', "mapfile contents";
FUNC                            = 0006, G: TEST2
LOOP                            = 0002, L: TEST
LOOP                            = 0008, L: TEST2
MAIN                            = 0000, G: TEST
X31_X31_X31_X31_X31_X31_X31_X31 = 0004, L: TEST
X_32_X32_X32_X32_X32_X32_X32_X32 = 0005, L: TEST


MAIN                            = 0000, G: TEST
LOOP                            = 0002, L: TEST
X31_X31_X31_X31_X31_X31_X31_X31 = 0004, L: TEST
X_32_X32_X32_X32_X32_X32_X32_X32 = 0005, L: TEST
FUNC                            = 0006, G: TEST2
LOOP                            = 0008, L: TEST2
END
}

# -nm
for my $options ('-m -nm', '--map --no-map') {
	t_z80asm(
		asm		=> $asm,
		asm2	=> $asm2,
		bin		=> $bin,
		options	=> $options,
	);
	ok ! -f map_file(), "no ".map_file();
}

#------------------------------------------------------------------------------
# -g, --globaldef, -ng, --no-globaldef
#------------------------------------------------------------------------------
$asm = "
	xdef main, x31_x31_x31_x31_x31_x31_x31_x31, x_32_x32_x32_x32_x32_x32_x32_x32
main: ld b,10
loop: djnz loop
x31_x31_x31_x31_x31_x31_x31_x31: defb 0
x_32_x32_x32_x32_x32_x32_x32_x32: defb 0
";
$asm2 = "
	xdef func
func: ret
";
$bin = "\x06\x0A\x10\xFE\x00\x00\xC9";

# -g
for my $options ('-g', '--globaldef') {
	t_z80asm(
		asm		=> $asm,
		asm2	=> $asm2,
		bin		=> $bin,
		options	=> $options,
	);
	ok -f def_file(), def_file();
	eq_or_diff scalar(read_file(def_file())), <<'END', "deffile contents";
DEFC MAIN                            = $0000 ; Module TEST
DEFC X31_X31_X31_X31_X31_X31_X31_X31 = $0004 ; Module TEST
DEFC X_32_X32_X32_X32_X32_X32_X32_X32 = $0005 ; Module TEST
DEFC FUNC                            = $0006 ; Module TEST2
END
}

# -ng
for my $options ('-g -ng', '--globaldef --no-globaldef') {
	t_z80asm(
		asm		=> $asm,
		asm2	=> $asm2,
		bin		=> $bin,
		options	=> $options,
	);
	ok ! -f def_file(), "no ".def_file();
}

#------------------------------------------------------------------------------
# -b, --make-bin, -nb, --no-make-bin
#------------------------------------------------------------------------------

# -b
for my $options ('-b', '--make-bin') {
	unlink_testfiles();
	write_file(asm_file(), "nop");

	t_z80asm_capture("-r0 $options ".asm_file(), "", "", 0);
	ok -f obj_file();
	ok -f bin_file();
	ok -f map_file();
	is read_file(bin_file(), binmode => ':raw'), "\0";
}

# -nb
for my $options ('-b -nb', '--make-bin --no-make-bin') {
	unlink_testfiles();
	write_file(asm_file(), "nop");

	t_z80asm_capture("$options ".asm_file(), "", "", 0);
	ok -f obj_file();
	ok ! -f map_file();
	ok ! -f bin_file();
}

#------------------------------------------------------------------------------
# -o, --output
#------------------------------------------------------------------------------
$bin = bin_file(); $bin =~ s/\.bin$/2.bin/i;

# no -o
unlink_testfiles($bin);
write_file(asm_file(), "nop");

t_z80asm_capture("-r0 -b ".asm_file(), "", "", 0);
ok -f bin_file();
ok ! -f $bin;
t_binary(read_file(bin_file(), binmode => ':raw'), "\0");

# -o
for my $options ("-o$bin", "-o=$bin", "-o $bin", "--output$bin", "--output=$bin", "--output $bin") {
	unlink_testfiles($bin);
	write_file(asm_file(), "nop");

	t_z80asm_capture("-r0 -b $options ".asm_file(), "", "", 0);
	ok ! -f bin_file();
	ok -f $bin;
	t_binary(read_file($bin, binmode => ':raw'), "\0");
}

unlink_testfiles($bin);

#------------------------------------------------------------------------------
# -d, --date-stamp
#------------------------------------------------------------------------------

for my $options ('-d', '--date-stamp') {
	# first compiles; second skips
	unlink_testfiles();
	write_file(asm_file(), "nop");

	t_z80asm_capture("$options ".asm_file(), "", "", 0);
	is substr(read_file(obj_file(), binmode => ':raw'), -1, 1), "\0";

	my $date_obj = -M obj_file();

	# now skips compile
	sleep 2;		# make sure our obj is older
	t_z80asm_capture("$options ".asm_file(), "", "", 0);
	is substr(read_file(obj_file(), binmode => ':raw'), -1, 1), "\0";

	is -M obj_file(), $date_obj;	# same object

	# touch source
	sleep 2;		# make sure our obj is older
	write_file(asm_file(), "nop");
	t_z80asm_capture("$options ".asm_file(), "", "", 0);
	is substr(read_file(obj_file(), binmode => ':raw'), -1, 1), "\0";

	isnt -M obj_file(), $date_obj;	# new object

	$date_obj = -M obj_file();

	# compile again
	for my $options2 ('-nd', '--no-date-stamp') {
		sleep 2;		# make sure our obj is older
		t_z80asm_capture("$options $options2 ".asm_file(), "", "", 0);
		is substr(read_file(obj_file(), binmode => ':raw'), -1, 1), "\0";

		isnt -M obj_file(), $date_obj;	# new object
	}
}




unlink_testfiles();
done_testing();

__END__
# $Log: options.t,v $
# Revision 1.14  2013-10-03 22:35:21  pauloscustodio
# Parse command line options via look-up tables:
# -d, --date-stamp
# -nd, --no-date-stamp
#
# Revision 1.13  2013/10/03 22:20:10  pauloscustodio
# Parse command line options via look-up tables:
# -o, --output
#
# Revision 1.12  2013/10/03 21:58:41  pauloscustodio
# Parse command line options via look-up tables:
# -b, --make-bin
# -nb, --no-make-bin
#
# Revision 1.11  2013/10/02 23:42:09  pauloscustodio
# Parse command line options via look-up tables:
# add --sdcc in addition to -sdcc, for consistency
#
# Revision 1.10  2013/10/02 23:34:44  pauloscustodio
# Parse command line options via look-up tables:
# show default option in help
#
# Revision 1.9  2013/10/02 23:20:44  pauloscustodio
# Parse command line options via look-up tables:
# -g, --globaldef
# -ng, --no-globaldef
#
# Revision 1.8  2013/10/01 23:46:28  pauloscustodio
# Parse command line options via look-up tables:
# -m, --map
# -nm, --no-map
#
# Revision 1.7  2013/10/01 23:23:53  pauloscustodio
# Parse command line options via look-up tables:
# -l, --list
# -nl, --no-list
#
# Revision 1.6  2013/10/01 22:50:27  pauloscustodio
# Parse command line options via look-up tables:
# -s, --symtable
# -ns, --no-symtable
#
# Revision 1.5  2013/10/01 22:09:33  pauloscustodio
# Parse command line options via look-up tables:
# -sdcc
#
# Revision 1.4  2013/09/30 00:33:11  pauloscustodio
# help text
#
# Revision 1.3  2013/09/30 00:26:57  pauloscustodio
# Parse command line options via look-up tables:
# -e, --asm-ext
# -M, --obj-ext
# Move filename extension functions to options.c
#
# Revision 1.2  2013/09/29 21:43:48  pauloscustodio
# Parse command line options via look-up tables:
# move @file handling to options.c
#
# Revision 1.1  2013/09/27 01:14:33  pauloscustodio
# Parse command line options via look-up tables:
# --help, --verbose
#
# Revision 1.3  2013/04/07 22:30:48  pauloscustodio
# Test output with 3 input lines
#
# Revision 1.2  2013/01/20 21:24:29  pauloscustodio
# Updated copyright year to 2013
#
# Revision 1.1  2011/07/11 15:46:33  pauloscustodio
# Added test scripts for all z80asm options
