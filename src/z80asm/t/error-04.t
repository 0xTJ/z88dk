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
# Copyright (C) Paulo Custodio, 2011

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/Attic/error-04.t,v 1.1 2011-07-12 22:47:59 pauloscustodio Exp $
# $Log: error-04.t,v $
# Revision 1.1  2011-07-12 22:47:59  pauloscustodio
# - Moved all error variables and error reporting code to a separate module errors.c,
#   replaced all extern declarations of these variables by include errors.h,
#   created symbolic constants for error codes.
# - Added test scripts for error messages.
#
#
#
# Test error 4

use strict;
use warnings;
use Test::More;
require 't/test_utils.pl';

# Integer out of range
t_z80asm_error("ld a,-129",	"File 'test.asm', at line 1, Integer out of range");
t_z80asm_ok(0, "ld a,-128", 	"\x3E\x80");
t_z80asm_ok(0, "ld a,255", 	"\x3E\xFF");
t_z80asm_error("ld a,256", 	"File 'test.asm', at line 1, Integer out of range");

t_z80asm_error("ld bc,-32769", 	"File 'test.asm', at line 1, Integer out of range");
t_z80asm_ok(0, "ld bc,-32768", 	"\x01\x00\x80");
t_z80asm_ok(0, "ld bc,65535", 	"\x01\xFF\xFF");
t_z80asm_error("ld bc,65536", 	"File 'test.asm', at line 1, Integer out of range");

unlink_testfiles();
done_testing();
