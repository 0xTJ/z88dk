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

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/Attic/BUG_0015.t,v 1.8 2014-04-22 23:32:42 pauloscustodio Exp $
#
# Error in linking of addresses:
# Base address of each module is independent of start address of the module in
# the code area.
# When linking in a module, it has to be loaded at the base address offset into
# the code area, and not immediatelly after the last module. E.g. when linking A, B and
# library L1, the sequence in the object file is A,B,L1; but the load sequence
# is A, L1, B; L1 has to be loaded at the final address.

use strict;
use warnings;
use File::Slurp;
use Test::More;
require 't/test_utils.pl';

my @testfiles = qw( testa.asm testa.lst testa.sym testa.obj testa.map testa.bin
		    testb.asm testb.lst testb.sym testb.obj
		    testl.asm testl.lst testl.sym testl.obj testl.lib
		);

#------------------------------------------------------------------------------
my $testa_asm = "
		PUBLIC a1
		PUBLIC a2
		EXTERN b1
		EXTERN b2
		EXTERN l1

	    a1:	ld a,1		; 8000  3E 01
		call b1		; 8002  CD 16 80
		call l1		; 8005  CD 2C 80
		jp a2		; 8008  C3 0B 80

	    a2:	ld a,2		; 800B  3E 02
		call b2		; 800D  CD 21 80
		call l1		; 8010  CD 2C 80
		jp a1		; 8013  C3 00 80
				; 8016
	   ";
my $testa_obj = objfile(NAME => 'testa',
			EXPR => [
				['C', 0x0002, 0x0003, 'b1'],
				['C', 0x0005, 0x0006, 'l1'],
				['C', 0x000D, 0x000E, 'b2'],
				['C', 0x0010, 0x0011, 'l1'],
				['C', 0x0013, 0x0014, 'a1'],
				['C', 0x0008, 0x0009, 'a2']],
			SYMBOLS => [['G', 'A', 0x0000, 'a1'],
				    ['G', 'A', 0x000B, 'a2']],
			LIBS => ['b1','b2','l1'],
			CODE => "\x3E\x01".
				"\xCD\x00\x00".
				"\xCD\x00\x00".
				"\xC3\x0B\x00".
				"\x3E\x02".
				"\xCD\x00\x00".
				"\xCD\x00\x00".
				"\xC3\x00\x00");

#------------------------------------------------------------------------------
my $testb_asm = "
		PUBLIC b1
		PUBLIC b2
		EXTERN a1
		EXTERN a2
		EXTERN l1

	    b1:	ld b,1		; 8016  06 01
		call a1		; 8018  CD 00 80
		call l1		; 801B  CD 2C 80
		jp b2		; 801E  C3 21 80

	    b2:	ld b,2		; 8021  06 02
		call a2		; 8023  CD 0B 80
		call l1		; 8026  CD 2C 80
		jp b1		; 8029  C3 16 80
				; 802C
	   ";
my $testb_obj = objfile(NAME => 'testb',
			EXPR => [
				['C', 0x0002, 0x0003, 'a1'],
				['C', 0x0005, 0x0006, 'l1'],
				['C', 0x000D, 0x000E, 'a2'],
				['C', 0x0010, 0x0011, 'l1'],
				['C', 0x0013, 0x0014, 'b1'],
				['C', 0x0008, 0x0009, 'b2']],
			SYMBOLS => [['G', 'A', 0x0000, 'b1'],
				    ['G', 'A', 0x000B, 'b2']],
			LIBS => ['a1','a2','l1'],
			CODE => "\x06\x01".
				"\xCD\x00\x00".
				"\xCD\x00\x00".
				"\xC3\x0B\x00".
				"\x06\x02".
				"\xCD\x00\x00".
				"\xCD\x00\x00".
				"\xC3\x00\x00");

#------------------------------------------------------------------------------
my $testl_asm = "
		PUBLIC l1

	    l1:	ld l,1		; 802C  2E 01
		jp l2		; 802E  C3 31 80

	    l2:	ld l,2		; 8031  2E 02
		jp l1		; 8033  C3 2C 80
				; 8036
	   ";
my $testl_obj = objfile(NAME => 'testl',
			EXPR => [
				['C', 0x0007, 0x0008, 'l1'],
				['C', 0x0002, 0x0003, 'l2']],
			SYMBOLS => [['L', 'A', 0x0005, 'l2'],
				    ['G', 'A', 0x0000, 'l1']],
			CODE => "\x2E\x01".
				"\xC3\x05\x00".
				"\x2E\x02".
				"\xC3\x00\x00");

#------------------------------------------------------------------------------
my $testa_bin =
	"\x3E\x01".
	"\xCD\x16\x80".
	"\xCD\x2C\x80".
	"\xC3\x0B\x80".
	"\x3E\x02".
	"\xCD\x21\x80".
	"\xCD\x2C\x80".
	"\xC3\x00\x80".
	"\x06\x01".
	"\xCD\x00\x80".
	"\xCD\x2C\x80".
	"\xC3\x21\x80".
	"\x06\x02".
	"\xCD\x0B\x80".
	"\xCD\x2C\x80".
	"\xC3\x16\x80".
	"\x2E\x01".
	"\xC3\x31\x80".
	"\x2E\x02".
	"\xC3\x2C\x80";

#------------------------------------------------------------------------------
unlink_testfiles(@testfiles);

write_file('testa.asm', $testa_asm);
t_z80asm_capture("-l testa.asm", "", "", 0);
t_binary(read_binfile('testa.obj'), $testa_obj);

write_file('testb.asm', $testb_asm);
t_z80asm_capture("-l testb.asm", "", "", 0);
t_binary(read_binfile('testb.obj'), $testb_obj);

write_file('testl.asm', $testl_asm);
t_z80asm_capture("-xtestl.lib -l testl.asm", "", "", 0);
t_binary(read_binfile('testl.obj'), $testl_obj);
t_binary(read_binfile('testl.lib'), libfile($testl_obj));

t_z80asm_capture("-itestl.lib -a -r8000 testa.obj testb.obj", "", "", 0);
t_binary(read_binfile('testa.bin'), $testa_bin);

unlink_testfiles(@testfiles);
done_testing();

# $Log: BUG_0015.t,v $
# Revision 1.8  2014-04-22 23:32:42  pauloscustodio
# Release 2.2.0 with major fixes:
#
# - Object file format changed to version 03, to include address of start
# of the opcode of each expression stored in the object file, to allow
# ASMPC to refer to the start of the opcode instead of the patch pointer.
# This solves long standing BUG_0011 and BUG_0048.
#
# - ASMPC no longer stored in the symbol table and evaluated as a separate
# token, to allow expressions including ASMPC to be relocated. This solves
# long standing and never detected BUG_0047.
#
# - Handling ASMPC during assembly simplified - no need to call inc_PC() on
# every assembled instruction, no need to store list of JRPC addresses as
# ASMPC is now stored in the expression.
#
# BUG_0047: Expressions including ASMPC not relocated - impacts call po|pe|p|m emulation in RCMX000
# ASMPC is computed on zero-base address of the code section and expressions
# including ASMPC are not relocated at link time.
# "call po, xx" is emulated in --RCMX000 as "jp pe, ASMPC+3; call xx".
# The expression ASMPC+3 is not marked as relocateable, and the resulting
# code only works when linked at address 0.
#
# BUG_0048: ASMPC used in JP/CALL argument does not refer to start of statement
# In "JP ASMPC", ASMPC is coded as instruction-address + 1 instead
# of instruction-address.
#
# BUG_0011 : ASMPC should refer to start of statememnt, not current element in DEFB/DEFW
# Bug only happens with forward references to relative addresses in expressions.
# See example from zx48.asm ROM image in t/BUG_0011.t test file.
# Need to change object file format to correct - need patchptr and address of instruction start.
#
# Revision 1.7  2014/04/13 20:32:10  pauloscustodio
# PUBLIC and EXTERN instead of LIB, XREF, XDEF, XLIB
#
# Revision 1.6  2014/04/13 11:54:01  pauloscustodio
# CH_0025: PUBLIC and EXTERN instead of LIB, XREF, XDEF, XLIB
# Use new keywords PUBLIC and EXTERN, make the old ones synonyms.
# Remove 'X' scope for symbols in object files used before for XLIB -
# all PUBLIC symbols have scope 'G'.
# Remove SDCC hack on object files trating XLIB and XDEF the same.
# Created a warning to say XDEF et.al. are deprecated, but for the
# momment keep it commented.
#
# Revision 1.5  2014/04/05 23:36:11  pauloscustodio
# CH_0024: Case-preserving, case-insensitive symbols
# Symbols no longer converted to upper-case, but still case-insensitive
# searched. Warning when a symbol is used with different case than
# defined. Intermidiate stage before making z80asm case-sensitive, to
# be more C-code friendly.
#
# Revision 1.4  2014/01/11 01:29:46  pauloscustodio
# Extend copyright to 2014.
# Move CVS log to bottom of file.
#
# Revision 1.3  2013/12/11 23:33:55  pauloscustodio
# BUG_0039: library not pulled in if XLIB symbol not referenced in expression
#
# Revision 1.2  2013/01/20 21:24:28  pauloscustodio
# Updated copyright year to 2013
#
# Revision 1.1  2011/10/07 17:53:05  pauloscustodio
# BUG_0015 : Relocation issue - dubious addresses come out of linking
# (reported on Tue, Sep 27, 2011 at 8:09 PM by dom)
# - Introduced in version 1.1.8, when the CODESIZE and the codeptr were merged into the same entity.
# - This caused the problem because CODESIZE keeps track of the start offset of each module in the sequence they will appear in the object file, and codeptr is reset to the start of the codearea for each module.
# The effect was that all address calculations at link phase were considering
#  a start offset of zero for all modules.
# - Moreover, when linking modules from a libary, the modules are pulled in to the code area as they are needed, and not in the sequence they will be in the object file. The start offset was being ignored and the modules were being loaded in the incorrect order
# - Consequence of these two issues were all linked addresses wrong.
#
