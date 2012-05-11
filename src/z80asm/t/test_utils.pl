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

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/test_utils.pl,v 1.10 2012-05-11 19:41:26 pauloscustodio Exp $
# $Log: test_utils.pl,v $
# Revision 1.10  2012-05-11 19:41:26  pauloscustodio
# white space
#
# Revision 1.9  2012/04/22 20:34:13  pauloscustodio
# tab width
#
# Revision 1.8	2011/10/07 17:29:10  pauloscustodio
# Add test functions for lib file format
#
# Revision 1.7	2011/08/18 21:49:44  pauloscustodio
# add objfile() to generate expected object file format
#
# Revision 1.6	2011/08/14 19:49:05  pauloscustodio
# - Added test case to verify that incomplete files are deleted on error
#
# Revision 1.5	2011/07/14 01:32:09  pauloscustodio
#	  - Unified "Integer out of range" and "Out of range" errors; they are the same error.
#	  - Unified ReportIOError as ReportError(ERR_FILE_OPEN)
#	  CH_0003 : Error messages should be more informative
#		  - Added printf-args to error messages, added "Error:" prefix.
#	  BUG_0006 : sub-expressions with unbalanced parentheses type accepted, e.g. (2+3] or [2+3)
#		  - Raise ERR_UNBALANCED_PAREN instead
#
# Revision 1.4	2011/07/11 16:23:44  pauloscustodio
# Factor capture code in t_z80asm_capture() in test_utils.pl
#
# Revision 1.3	2011/07/09 18:25:35  pauloscustodio
# Log keyword in checkin comment was expanded inside Log expansion... recursive
# Added Z80asm banner to all source files
#
# Revision 1.2	2011/07/09 17:36:09  pauloscustodio
# Copied cvs log into Log history
#
# Revision 1.1	2011/07/09 01:02:45  pauloscustodio
# Started to build test suite in t/ *.t unsing Perl prove. Included test for all standard
# Z80 opcodes; need to be extended with directives and opcodes for Z80 variants.
#
# Common utils for tests

use strict;
use warnings;
use Capture::Tiny::Extended 'capture';
use File::Slurp;

my $STOP_ON_ERR = grep {/-stop/} @ARGV; 
my $KEEP_FILES	= grep {/-keep/} @ARGV; 
my $test	 = "test";

sub z80asm	 { $ENV{Z80ASM} || "z80asm" }
sub asm_file {"$test.asm"}
sub lst_file {"$test.lst"}
sub inc_file {"$test.inc"}
sub bin_file {"$test.bin"}
sub map_file {"$test.map"}
sub obj_file {"$test.obj"}
sub lib_file {"$test.lib"}
sub sym_file {"$test.sym"}
sub def_file {"$test.def"}
sub err_file {"$test.err"}

sub unlink_testfiles {
	my(@additional_files) = @_;
	my $line = "[line ".((caller)[2])."]";
	if ($KEEP_FILES) {
		ok 0, "$line -keep : kept test files";
	}
	else {
		my @files = (asm_file(), lst_file(), inc_file(), bin_file(), map_file(), 
					 obj_file(), lib_file(), sym_file(), def_file(), err_file(),
					 @additional_files);
		my $count = 0;
		map {$count++ if -f} @files;
		is unlink(@files), $count, "$line unlink $count testfiles";
	}
}

sub t_z80asm_error {
	my($code, $expected_err, $options) = @_;

	my $line = "[line ".((caller)[2])."]";
	(my $test_name = $code) =~ s/\n.*/.../s;
	ok 1, "$line t_z80asm_error $test_name - $expected_err";
	
	unlink_testfiles();
	write_file(asm_file(), "$code\n");
	
	my $cmd = z80asm()." ".($options || "")." ".asm_file();
	ok 1, "$line $cmd";
	my($stdout, $stderr, $return) = capture {
		system $cmd;
	};
	is $stdout, "", "$line stdout";
	is $stderr, $expected_err."\n".
				"1 errors occurred during assembly\n", "$line stderr";
	ok $return != 0, "$line exit value";
	ok -f err_file(), "$line error file found";
	ok ! -f obj_file(), "$line object file deleted";
	ok ! -f bin_file(), "$line binary file deleted";
	if (defined($options) && $options =~ /-x(\S+)/) {
		my $lib = $1;
		$lib .= ".lib" unless $lib =~ /\.lib$/i;
		
		ok ! -f $1, "$line library file deleted";
	}
	
	is read_file(err_file(), err_mode => 'quiet'), 
				$expected_err."\n", "$line error in error file";

	exit 1 if $return == 0 && $STOP_ON_ERR;
}

sub t_z80asm_ok {
	my($address_hex, $code, $expected_binary, $options) = @_;

	my $line = "[line ".((caller)[2])."]";
	(my $test_name = $code) =~ s/\n.*/.../s;
	ok 1, "$line t_z80asm_ok $test_name - ".
		hexdump(substr($expected_binary, 0, 16)).
		(length($expected_binary) > 16 ? "..." : "");
	
	unlink_testfiles();
	write_file(asm_file(), "org 0x$address_hex\n$code\n");
	
	my $cmd = z80asm()." -l -b ".($options || "")." ".asm_file();
	ok 1, "$line $cmd";
	my($stdout, $stderr, $return) = capture {
		system $cmd;
	};
	is $stdout, "", "$line stdout";
	is $stderr, "", "$line stderr";
	ok $return == 0, "$line exit value";
	ok ! -f err_file(), "$line no error file";
	ok -f bin_file(), "$line bin file found";
	
	my $binary = read_file(bin_file(), binmode => ':raw', err_mode => 'quiet');
	t_binary($binary, $expected_binary, $line);

	exit 1 if $return != 0 && $STOP_ON_ERR;
}

sub t_binary {
	my($binary, $expected_binary, $test_name) = @_;
	
	$test_name //= "[line ".((caller)[2])."]";
	$binary //= "";
	$expected_binary //= "";
	my $ok = $binary eq $expected_binary;
	ok $ok, "$test_name binary";
	if (! $ok) {
		my $addr = 0;
		$addr++ while (substr($binary, $addr, 1) eq substr($expected_binary, $addr, 1));
		diag sprintf("$test_name Assembly differs at %04X:\n".
					 "	   got: %s\n".
					 "expected: %s\n", 
					 $addr, 
					 hexdump(substr($binary, $addr, 16)),
					 hexdump(substr($expected_binary, $addr, 16)));
	}
}

sub t_z80asm_capture {
	my($args, $expected_out, $expected_err, $expected_retval) = @_;

	my $line = "[line ".((caller)[2])."]";
	ok 1, $line." t_z80asm_capture - ".z80asm()." ".$args;
	
	my($stdout, $stderr, $return) = capture {
		system z80asm()." ".$args;
	};

	is $stdout, $expected_out, "$line stdout";
	is $stderr, $expected_err, "$line stderr";
	ok !!$return == !!$expected_retval, "$line retval";
}

sub hexdump {
	return join(' ', map { sprintf("%02X", ord($_)) } split(//, shift));
}

# return object file binary representation
sub objfile {
	my(%args) = @_;

	my $obj = "Z80RMF01";
	$obj .= pack("v", $args{ORG} // -1);

	# store empty pointers; mark position for later
	my $name_addr	 = length($obj); $obj .= pack("V", -1);
	my $expr_addr	 = length($obj); $obj .= pack("V", -1);
	my $symbols_addr = length($obj); $obj .= pack("V", -1);
	my $lib_addr	 = length($obj); $obj .= pack("V", -1);
	my $code_addr	 = length($obj); $obj .= pack("V", -1);

	# store expressions
	if ($args{EXPR}) {
		store_ptr(\$obj, $expr_addr);
		for (@{$args{EXPR}}) {
			my($type, $ptr, $string) = @$_;
			$obj .= $type . pack("v", $ptr) . pack_string($string) ."\0";
		}
	}

	# store symbols
	if ($args{SYMBOLS}) {
		store_ptr(\$obj, $symbols_addr);
		for (@{$args{SYMBOLS}}) {
			my($scope, $type, $value, $name) = @$_;
			$obj .= $scope . $type . pack("V", $value) . pack_string($name);
		}
	}

	# store library
	if ($args{LIBS}) {
		store_ptr(\$obj, $lib_addr);
		for my $name (@{$args{LIBS}}) {
			$obj .= pack_string($name);
		}
	}

	# store name
	store_ptr(\$obj, $name_addr);
	$obj .= pack_string($args{NAME});

	# store code
	if (length($args{CODE}) > 0) {
		store_ptr(\$obj, $code_addr);
		$obj .= pack("v", length($args{CODE}));
		$obj .= $args{CODE};
	}

	return $obj;
}

# store a pointer to the end of the binary object at the given address
sub store_ptr {
	my($robj, $addr) = @_;
	my $ptr = length($$robj);
	my $packed_ptr = pack("V", $ptr);
	substr($$robj, $addr, length($packed_ptr)) = $packed_ptr;
}

sub pack_string {
	my($string) = @_;
	return pack("C", length($string)).uc($string);
}

sub read_binfile {
	my($file) = @_;
	ok -f $file, "$file exists";
	return scalar read_file($file, binmode => ':raw');
}

# return library file binary representation
sub libfile {
	my(@obj_files) = @_;
	my $lib = 'Z80LMF01';
	for my $i (0 .. $#obj_files) {
		my $obj_file = $obj_files[$i];
		my $next_ptr = ($i == $#obj_files) ?
						-1 : length($lib) + 4 + 4 + length($obj_file);

		$lib .= pack("V", $next_ptr);
		$lib .= pack("V", length($obj_file));
		$lib .= $obj_file;
	}

	return $lib;
}

1;


