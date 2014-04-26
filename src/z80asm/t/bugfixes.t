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

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/bugfixes.t,v 1.2 2014-04-26 09:25:32 pauloscustodio Exp $
#
# Test bugfixes

use strict;
use warnings;
use File::Slurp;
use File::Basename;
use File::Copy;
use Test::Differences; 
use Test::More;
require 't/test_utils.pl';

#------------------------------------------------------------------------------
diag "BUG_0049";
# Making a library with -d and 512 object files fails - Too many open files
#------------------------------------------------------------------------------
{
	unlink_testfiles();
	my @asm_list;
	my @obj_list;
	for (1..512) {
		my $asm_file = "test_$_.asm";
		my $obj_file = "test_$_.obj";
		push @asm_list, $asm_file;
		push @obj_list, $obj_file;
		write_file($asm_file, " public test_$_ \n defc test_$_ = $_\n");
	}
	write_file(prj_file(), join("\n", @asm_list), "\n");
	
	# assemble all first
	t_z80asm_capture('-ns -nm @'.prj_file(), "", "", 0);
	
	# assemble all with -d, make lib - failed with too many open files
	t_z80asm_capture('-d -ns -nm -x'.lib_file().' @'.prj_file(), "", "", 0);
	
	unlink_testfiles(@asm_list, @obj_list);
}

#------------------------------------------------------------------------------
diag "BUG_0050";
# Making a library with more than 64K and -d option fails - max. code size reached
#------------------------------------------------------------------------------
{
	unlink_testfiles();
	write_file(asm1_file(), " public test1 \ntest1: defs 65000\n");
	write_file(asm2_file(), " public test2 \ntest2: defs 65000\n");
	
	# assemble all first
	t_z80asm_capture('-ns -nm '.asm1_file().' '.asm2_file(), "", "", 0);
	
	# assemble all with -d, make lib - failed with too many open files
	t_z80asm_capture('-d -ns -nm '.asm1_file().' '.asm2_file(), "", "", 0);
}




unlink_testfiles();
done_testing();

# $Log: bugfixes.t,v $
# Revision 1.2  2014-04-26 09:25:32  pauloscustodio
# BUG_0050: Making a library with more than 64K and -d option fails - max. code size reached
# When a library is built with -d, and the total size of the loaded
# modules is more than 64K, z80asm fails with "max. code size reached".
#
# Revision 1.1  2014/04/26 08:12:04  pauloscustodio
# BUG_0049: Making a library with -d and 512 object files fails - Too many open files
# Error caused by z80asm not closing the intermediate object files, when
# assembling with -d.
#
