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

# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/Attic/whitebox-memalloc.t,v 1.9 2013-09-01 11:52:55 pauloscustodio Exp $
#
# Test memory allocation

use Modern::Perl;
use Test::More;
require 't/test_utils.pl';

my $objs = "die.o except.o strutil.o safestr.o init.o";
ok ! system "make $objs";
my $compile = "-DMEMALLOC_DEBUG memalloc.c $objs";

# allocate and no free no debug
t_compile_module("", <<'END', "memalloc.c die.o except.o strutil.o safestr.o init.o");
	char * p1 = xmalloc(1);
	char * p2 = xmalloc(2);
	p1[0] = p2[0] = p2[1] = 0;
	if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\0\xAA\xAA\xAA\xAA", 9) == 0 &&
	    memcmp(p2-4, "\xAA\xAA\xAA\xAA\0\0\xAA\xAA\xAA\xAA", 10) == 0)
		return 0;
	else 
		return 1;
END
t_run_module([], "", <<END, 0);
memalloc memalloc.c(1): free memory leak of 2 bytes at ADDR_1 allocated at test.c(2)
memalloc memalloc.c(1): free memory leak of 1 bytes at ADDR_2 allocated at test.c(1)
END


# debug
t_compile_module("", <<'END', $compile);
#define ERROR return __LINE__
	char *p1, *p2;
	int test;
	
	if (argc != 2) ERROR;
	test = atoi(argv[1]);
	
	switch (test) {
	case 1:							// no allocation
		break;
	
	case 2:							// alloc & no free, free in opposite order of alloc
		p1 = xmalloc(1);
		p2 = xmalloc(2);
		p1[0] = p2[0] = p2[1] = 0;
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\0\xAA\xAA\xAA\xAA", 9)) ERROR;
		if (memcmp(p2-4, "\xAA\xAA\xAA\xAA\0\0\xAA\xAA\xAA\xAA", 10)) ERROR;
		break;

	case 3:							// alloc & free
		p1 = xmalloc(1);
		xfree(p1);
		if (p1) ERROR;
		break;
	
	case 4:							// alloc failed
		p1 = xmalloc(0x80000000);
		ERROR;
	
	case 5:							// unmatched block
		xfree(argv);
		break;
		
	case 6:							// buffer underflow
		p1 = xmalloc(1);
		p1[-1] = 0;
		xfree(p1);
		break;
	
	case 7:							// buffer overflow
		p1 = xmalloc(1);
		p1[1] = 0;
		xfree(p1);
		break;
		
	case 8:							// xmalloc
		p1 = xmalloc(0);
		p2 = xmalloc(1);
		p2[0] = 0;
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\xAA\xAA\xAA\xAA", 8)) ERROR;
		if (memcmp(p2-4, "\xAA\xAA\xAA\xAA\0\xAA\xAA\xAA\xAA", 9)) ERROR;
		break;

	case 9:							// xcalloc
		p1 = xcalloc(5, 1);
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\0\0\0\0\0\xAA\xAA\xAA\xAA", 13)) ERROR;
		break;

	case 10:						// realloc - NULL input
		p1 = xrealloc(NULL, 2);
		p1[0] = p1[1] = 2;
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\2\2\xAA\xAA\xAA\xAA", 10)) ERROR;
		break;
	
	case 11:						// xrealloc - shrink
		p1 = xmalloc(2);
		p1[0] = p1[1] = 2;
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\2\2\xAA\xAA\xAA\xAA", 10)) ERROR;
		p1 = xrealloc(p1, 1);
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\2\xAA\xAA\xAA\xAA", 9)) ERROR;
		p1 = xrealloc(p1, 0);
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\xAA\xAA\xAA\xAA", 8)) ERROR;
		break;

	case 12:						// xrealloc - grow
		p1 = xmalloc(1);
		p1[0] = 2;
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\2\xAA\xAA\xAA\xAA", 9)) ERROR;
		p1 = xrealloc(p1, 2);
		p1[1] = 3;
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\2\3\xAA\xAA\xAA\xAA", 10)) ERROR;
		break;

	case 13:						// xstrdup
		p1 = xstrdup("hello");
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAAhello\0\xAA\xAA\xAA\xAA", 14)) ERROR;
		break;

	case 14:						// xcalloc_struct
		p1 = xcalloc_struct(char);
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\0\xAA\xAA\xAA\xAA", 9)) ERROR;
		break;

	case 15:						// xcalloc_n_struct
		p1 = xcalloc_n_struct(2, char);
		if (memcmp(p1-4, "\xAA\xAA\xAA\xAA\0\0\xAA\xAA\xAA\xAA", 10)) ERROR;
		break;

	case 16:
		p1 = NULL;
		xfree(p1);
		break;
		
	default:
		ERROR;
	}
	
	return 0;
END

# no allocation
t_run_module([1], "", <<END, 0);
memalloc: init
memalloc: cleanup
END

# alloc & no free, free in opposite order of alloc
t_run_module([2], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 1 bytes at ADDR_1
memalloc test.c(2): alloc 2 bytes at ADDR_2
memalloc: cleanup
memalloc memalloc.c(1): free 2 bytes at ADDR_2 allocated at test.c(2)
memalloc memalloc.c(1): free 1 bytes at ADDR_1 allocated at test.c(1)
END

# alloc & free
t_run_module([3], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 1 bytes at ADDR_1
memalloc test.c(2): free 1 bytes at ADDR_1 allocated at test.c(1)
memalloc: cleanup
END

# alloc failed
t_run_module([4], "", <<END, 1);
memalloc: init
memalloc test.c(1): alloc 2147483680 bytes failed
memalloc: cleanup
END

# unmatched block
t_run_module([5], "", <<END, 1);
memalloc: init
memalloc test.c(1): block not found
memalloc: cleanup
END

# buffer underflow
t_run_module([6], "", <<END, 1);
memalloc: init
memalloc test.c(1): alloc 1 bytes at ADDR_1
memalloc test.c(2): free 1 bytes at ADDR_1 allocated at test.c(1)
memalloc test.c(2): buffer underflow, memory allocated at test.c(1)
memalloc: cleanup
END

# buffer overflow
t_run_module([7], "", <<END, 1);
memalloc: init
memalloc test.c(1): alloc 1 bytes at ADDR_1
memalloc test.c(2): free 1 bytes at ADDR_1 allocated at test.c(1)
memalloc test.c(2): buffer overflow, memory allocated at test.c(1)
memalloc: cleanup
END

# memalloc
t_run_module([8], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 0 bytes at ADDR_1
memalloc test.c(2): alloc 1 bytes at ADDR_2
memalloc: cleanup
memalloc memalloc.c(1): free 1 bytes at ADDR_2 allocated at test.c(2)
memalloc memalloc.c(1): free 0 bytes at ADDR_1 allocated at test.c(1)
END

# xcalloc
t_run_module([9], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 5 bytes at ADDR_1
memalloc: cleanup
memalloc memalloc.c(1): free 5 bytes at ADDR_1 allocated at test.c(1)
END

# xrealloc - NULL input
t_run_module([10], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 2 bytes at ADDR_1
memalloc: cleanup
memalloc memalloc.c(1): free 2 bytes at ADDR_1 allocated at test.c(1)
END

# xrealloc - shrink
t_run_module([11], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 2 bytes at ADDR_1
memalloc test.c(2): free 2 bytes at ADDR_1 allocated at test.c(1)
memalloc test.c(2): alloc 1 bytes at ADDR_2
memalloc test.c(3): free 1 bytes at ADDR_2 allocated at test.c(2)
memalloc test.c(3): alloc 0 bytes at ADDR_3
memalloc: cleanup
memalloc memalloc.c(1): free 0 bytes at ADDR_3 allocated at test.c(3)
END

# xrealloc - grow
t_run_module([12], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 1 bytes at ADDR_1
memalloc test.c(2): free 1 bytes at ADDR_1 allocated at test.c(1)
memalloc test.c(2): alloc 2 bytes at ADDR_2
memalloc: cleanup
memalloc memalloc.c(1): free 2 bytes at ADDR_2 allocated at test.c(2)
END

# xstrdup
t_run_module([13], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 6 bytes at ADDR_1
memalloc: cleanup
memalloc memalloc.c(1): free 6 bytes at ADDR_1 allocated at test.c(1)
END

# xcalloc_struct
t_run_module([14], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 1 bytes at ADDR_1
memalloc: cleanup
memalloc memalloc.c(1): free 1 bytes at ADDR_1 allocated at test.c(1)
END

# xcalloc_n_struct
t_run_module([15], "", <<END, 0);
memalloc: init
memalloc test.c(1): alloc 2 bytes at ADDR_1
memalloc: cleanup
memalloc memalloc.c(1): free 2 bytes at ADDR_1 allocated at test.c(1)
END

# xfree with NULL pointer
t_run_module([16], "", <<END, 0);
memalloc: init
memalloc: cleanup
END


unlink_testfiles();
done_testing;

__END__
# $Log: whitebox-memalloc.t,v $
# Revision 1.9  2013-09-01 11:52:55  pauloscustodio
# Setup memalloc on init.c.
# Setup GLib memory allocation functions to use memalloc functions.
#
# Revision 1.8  2013/09/01 00:18:30  pauloscustodio
# - Replaced e4c exception mechanism by a much simpler one based on a few
#   macros. The former did not allow an exit(1) to be called within a
#   try-catch block.
#
# Revision 1.7  2013/02/22 17:16:40  pauloscustodio
# Output memory leaks on exit
#
# Revision 1.6  2013/01/20 21:24:29  pauloscustodio
# Updated copyright year to 2013
#
# Revision 1.5  2012/06/14 15:01:27  pauloscustodio
# Split safe strings from strutil.c to safestr.c
#
# Revision 1.4  2012/05/26 18:50:26  pauloscustodio
# Use .o instead of .c to build test program, faster compilation.
# Use gcc to compile instead of cc.
#
# Revision 1.3  2012/05/22 20:33:34  pauloscustodio
# Added tests
#
# Revision 1.2  2012/05/20 06:32:50  pauloscustodio
# Added tests
#
# Revision 1.1  2012/05/20 05:48:26  pauloscustodio
# Test garbage collector
#
# Revision 1.1  2012/05/17 15:04:47  pauloscustodio
# white box test of new modules
