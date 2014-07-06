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

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/Attic/op-INCLUDE.t,v 1.8 2014-07-06 23:43:21 pauloscustodio Exp $
#
# Test INCLUDE directive

use strict;
use warnings;
use Test::More;
use File::Path qw( make_path remove_tree );
require 't/test_utils.pl';

my $dir = 'test_dir';
make_path($dir);

# no -I, multiple levels
unlink_testfiles();
write_file(inc1_file(), 'ld a,10');
write_file(inc2_file(), 'include "'.inc1_file().'"');
write_file(inc3_file(), 'include "'.inc2_file().'"');
write_file(inc4_file(), 'include "'.inc3_file().'"');
write_file(inc5_file(), 'include "'.inc4_file().'"');
write_file(inc6_file(), 'include "'.inc5_file().'"');
write_file(inc7_file(), 'include "'.inc6_file().'"');
write_file(inc8_file(), 'include "'.inc7_file().'"');
write_file(inc9_file(), 'include "'.inc8_file().'"');
t_z80asm_ok(0, 'include "'.inc9_file().'"', "\x3E\x0A");

# -I
unlink_testfiles();
write_file($dir.'/'.inc_file(), 'ld a,10');

t_z80asm_ok(0, 'include "'.$dir.'/'.inc_file().'"', "\x3E\x0A");
t_z80asm_error('include "'.inc_file().'"', 
				"Error at file 'test.asm' line 1: cannot read file 'test.inc'");
t_z80asm_ok(0, 'include "'.inc_file().'"', "\x3E\x0A", "-I$dir");

# recursive include
unlink_testfiles();
write_file(inc1_file(), 'include "'.inc2_file().'"');
write_file(inc2_file(), 'include "'.inc1_file().'"');
t_z80asm_error('include "'.inc1_file().'"', 
				"Error at file 'test2.inc' line 1: cannot include file 'test1.inc' recursively");

unlink_testfiles();
remove_tree($dir);
done_testing();
