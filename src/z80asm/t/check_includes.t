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
# Copyright (C) Paulo Custodio, 2011-2015
#
# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/Attic/check_includes.t,v 1.7 2015-01-26 23:46:34 pauloscustodio Exp $
#
# Check that xmalloc.h is included before any other include

use Modern::Perl;
use File::Slurp;
use Test::More;

for (read_dir(".")) {
	next unless -f $_;
	next unless /\.c$/i;
	
	check_file($_);
}

done_testing;


sub check_file {
	my($file) = @_;
	
	return if $file eq "xmalloc.h";
	
	open(my $fh, "<", $file) or die "Open $file: $!\n";
	$. = 0;
	while (<$fh>) {
		if (/^\s*\#\s*include\s*[<\"]([\w\\\/\.]+)/) {
			if ($1 ne 'xmalloc.h') {
				ok 0, "File $file:$. includes $1 before xmalloc.h";
			}
			last;
		}
	}
	ok 1, "File $file ok";
}
