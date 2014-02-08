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
#
# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/lib/t/srcfile.t,v 1.1 2014-02-08 11:21:09 pauloscustodio Exp $
#
# Test srcfile

use Modern::Perl;
use Test::More;
use File::Slurp;
use File::Path qw(make_path remove_tree);
use Capture::Tiny 'capture';
use Test::Differences; 

my $compile = "cc -Wall -Ilib -otest test.c srcfile.c ".
			  "class.c xmalloc.c strpool.c strutil.c fileutil.c die.c list.c";

#------------------------------------------------------------------------------
# create directories and files
make_path('test.x1');
write_binfile('test.f0',    		"F0 1\r\rF0 3\n\nF0 5\r\n\nF0 7\r\n\r".
									"F0 9\n\r\rF0 11\n\r\nF0 13");
write_binfile('test.x1/test.f1', 	"F0 x1\r");
write_binfile('test.x1/test.f2', 	"F1 x1\n");
write_binfile('test.x1/test.f3', 	"F2 x1\r\n");


write_file("test.c", <<'END');
#include "srcfile.h"
#include "die.h"
#include <string.h>
#include <assert.h>

#define T_GETLINE(_filename, _line_nr, _expected)	\
			assert( str = SrcFile_getline( file ) ); \
			warn("(%s:%d)%s", _filename, _line_nr, _expected); \
			assert( strcmp( file->filename, _filename ) == 0 ); \
			assert( file->line_nr == _line_nr ); \
			assert( strcmp( str, _expected ) == 0 ); \
			assert( strcmp( file->line->str, _expected ) == 0 );
			
#define T_GETLINE_END()	\
			assert( SrcFile_getline( file ) == NULL ); \
			warn("(eof)\n");
			
static void new_line_cb( char *filename, int line_nr )
{
	warn("File %s line %d\n", filename ? filename : "NULL", line_nr);
}

static void incl_recursion_err_cb( char *filename )
{
	die("Recursive include %s\n", filename ? filename : "NULL");
}


int main(int argc, char *argv[])
{
	SrcFile *file;
	List *dirs = NULL;
	char *str;
	
	List_push(&dirs, "test.x1");
	
	switch (*argv[1]) 
	{
	case 'A':	
		warn("read first file, no new line callback\n");
		assert( file = OBJ_NEW( SrcFile ) );
		SrcFile_open( file, "test.f0", NULL );
		T_GETLINE("test.f0",  1, "F0 1\n");
		T_GETLINE("test.f0",  2, "\n");
		T_GETLINE("test.f0",  3, "F0 3\n");
		T_GETLINE("test.f0",  4, "\n");
		T_GETLINE("test.f0",  5, "F0 5\n");
		T_GETLINE("test.f0",  6, "\n");
		T_GETLINE("test.f0",  7, "F0 7\n");
		T_GETLINE("test.f0",  8, "\n");
		T_GETLINE("test.f0",  9, "F0 9\n");
		T_GETLINE("test.f0", 10, "\n");
		T_GETLINE("test.f0", 11, "F0 11\n");
		T_GETLINE("test.f0", 12, "\n");
		T_GETLINE("test.f0", 13, "F0 13\n");
		T_GETLINE_END();
		T_GETLINE_END();
		T_GETLINE_END();
		
		warn("read second file, no new line callback\n");
		SrcFile_open( file, "test.f1", dirs );
		T_GETLINE("test.x1/test.f1", 1, "F0 x1\n");
		T_GETLINE_END();
		T_GETLINE_END();
		T_GETLINE_END();
		
		warn("read third file, no new line callback\n");
		SrcFile_open( file, "test.f2", dirs );
		T_GETLINE("test.x1/test.f2", 1, "F1 x1\n");
		T_GETLINE_END();
		T_GETLINE_END();
		T_GETLINE_END();
		
		warn("read fourth file, no new line callback\n");
		SrcFile_open( file, "test.f3", dirs );
		T_GETLINE("test.x1/test.f3", 1, "F2 x1\n");
		T_GETLINE_END();
		T_GETLINE_END();
		T_GETLINE_END();
		
		warn("set new line callback\n");
		assert( set_new_line_cb( new_line_cb ) == NULL );
		assert( set_new_line_cb( new_line_cb ) == new_line_cb );

		warn("read first file with new line callback\n");
		SrcFile_open( file, "test.f0", NULL );
		T_GETLINE("test.f0",  1, "F0 1\n");
		T_GETLINE("test.f0",  2, "\n");
		T_GETLINE("test.f0",  3, "F0 3\n");
		T_GETLINE("test.f0",  4, "\n");
		T_GETLINE("test.f0",  5, "F0 5\n");
		T_GETLINE("test.f0",  6, "\n");
		T_GETLINE("test.f0",  7, "F0 7\n");
		T_GETLINE("test.f0",  8, "\n");
		T_GETLINE("test.f0",  9, "F0 9\n");
		T_GETLINE("test.f0", 10, "\n");
		T_GETLINE("test.f0", 11, "F0 11\n");
		T_GETLINE("test.f0", 12, "\n");
		T_GETLINE("test.f0", 13, "F0 13\n");
		
		warn("ungetline\n");
		SrcFile_ungetline( file, "line 6\n" );
		SrcFile_ungetline( file, "line 5" );
		SrcFile_ungetline( file, "line 1\n\nline 3\nline 4" );
		
		T_GETLINE("test.f0", 13, "line 1\n" );
		T_GETLINE("test.f0", 13, "\n" );
		T_GETLINE("test.f0", 13, "line 3\n" );
		T_GETLINE("test.f0", 13, "line 4\n" );
		T_GETLINE("test.f0", 13, "line 5\n" );
		T_GETLINE("test.f0", 13, "line 6\n" );
		
		T_GETLINE_END();
		T_GETLINE_END();
		T_GETLINE_END();

		warn("includes\n");
		SrcFile_open( file, "test.f1", dirs );
		SrcFile_push( file );
		SrcFile_open( file, "test.f2", dirs );
		SrcFile_push( file );
		SrcFile_open( file, "test.f3", dirs );

		T_GETLINE("test.x1/test.f3", 1, "F2 x1\n");
		T_GETLINE_END();	
		assert( SrcFile_pop( file ) );
		
		T_GETLINE("test.x1/test.f2", 1, "F1 x1\n");
		T_GETLINE_END();	
		assert( SrcFile_pop( file ) );
		
		T_GETLINE("test.x1/test.f1", 1, "F0 x1\n");
		T_GETLINE_END();	
		assert( ! SrcFile_pop( file ) );

		T_GETLINE_END();
		T_GETLINE_END();
		
		warn("recursive include, no callback\n");
		SrcFile_open( file, "test.f1", dirs );
		SrcFile_push( file );
		SrcFile_open( file, "test.f1", dirs );

		T_GETLINE("test.x1/test.f1", 1, "F0 x1\n");
		T_GETLINE_END();	
		assert( SrcFile_pop( file ) );

		T_GETLINE("test.x1/test.f1", 1, "F0 x1\n");
		T_GETLINE_END();	
		assert( ! SrcFile_pop( file ) );

		warn("set callback\n");
		assert( set_incl_recursion_err_cb( incl_recursion_err_cb ) == NULL );
		assert( set_incl_recursion_err_cb( incl_recursion_err_cb ) == incl_recursion_err_cb );

		warn("recursive include, with callback\n");
		SrcFile_open( file, "test.f1", dirs );
		SrcFile_push( file );
		SrcFile_open( file, "test.f1", dirs );

		assert(0); /* not reached */
		
		return 0;
	
	case 'B':	
		/* test garbage collection */
		assert( file = OBJ_NEW( SrcFile ) );
		SrcFile_open( file, "test.f0", NULL );
		SrcFile_ungetline( file, "line 1\n\nline 3\nline 4" );
		SrcFile_push( file );
		SrcFile_open( file, "test.f1", dirs );
		SrcFile_push( file );
		SrcFile_open( file, "test.f2", dirs );
		SrcFile_push( file );
		SrcFile_open( file, "test.f3", dirs );
		SrcFile_push( file );
		return 0;
	
	default:	
		assert(0);
	}
	
	return 0;
}
END

system($compile) and die "compile failed: $compile\n";
t_capture("test A", "", <<END, 1);
read first file, no new line callback
(test.f0:1)F0 1
(test.f0:2)
(test.f0:3)F0 3
(test.f0:4)
(test.f0:5)F0 5
(test.f0:6)
(test.f0:7)F0 7
(test.f0:8)
(test.f0:9)F0 9
(test.f0:10)
(test.f0:11)F0 11
(test.f0:12)
(test.f0:13)F0 13
(eof)
(eof)
(eof)
read second file, no new line callback
(test.x1/test.f1:1)F0 x1
(eof)
(eof)
(eof)
read third file, no new line callback
(test.x1/test.f2:1)F1 x1
(eof)
(eof)
(eof)
read fourth file, no new line callback
(test.x1/test.f3:1)F2 x1
(eof)
(eof)
(eof)
set new line callback
read first file with new line callback
File test.f0 line 1
(test.f0:1)F0 1
File test.f0 line 2
(test.f0:2)
File test.f0 line 3
(test.f0:3)F0 3
File test.f0 line 4
(test.f0:4)
File test.f0 line 5
(test.f0:5)F0 5
File test.f0 line 6
(test.f0:6)
File test.f0 line 7
(test.f0:7)F0 7
File test.f0 line 8
(test.f0:8)
File test.f0 line 9
(test.f0:9)F0 9
File test.f0 line 10
(test.f0:10)
File test.f0 line 11
(test.f0:11)F0 11
File test.f0 line 12
(test.f0:12)
File test.f0 line 13
(test.f0:13)F0 13
ungetline
(test.f0:13)line 1
(test.f0:13)
(test.f0:13)line 3
(test.f0:13)line 4
(test.f0:13)line 5
(test.f0:13)line 6
File NULL line 0
(eof)
(eof)
(eof)
includes
File test.x1/test.f3 line 1
(test.x1/test.f3:1)F2 x1
File NULL line 0
(eof)
File test.x1/test.f2 line 1
(test.x1/test.f2:1)F1 x1
File NULL line 0
(eof)
File test.x1/test.f1 line 1
(test.x1/test.f1:1)F0 x1
File NULL line 0
(eof)
(eof)
(eof)
recursive include, no callback
File test.x1/test.f1 line 1
(test.x1/test.f1:1)F0 x1
File NULL line 0
(eof)
File test.x1/test.f1 line 1
(test.x1/test.f1:1)F0 x1
File NULL line 0
(eof)
set callback
recursive include, with callback
Recursive include test.x1/test.f1
END

t_capture("test B", "", "", 0);

#------------------------------------------------------------------------------
# cleanup and exit
remove_tree(<test.x*>);
unlink <test.*>;
done_testing;

#------------------------------------------------------------------------------
# util
sub t_capture {
	my($cmd, $exp_out, $exp_err, $exp_exit) = @_;
	my $line = "[line ".((caller)[2])."]";
	ok 1, "$line command: $cmd";
	
	my($out, $err, $exit) = capture { system $cmd; };
	eq_or_diff_text $out, $exp_out, "$line out";
	eq_or_diff_text $err, $exp_err, "$line err";
	ok !!$exit == !!$exp_exit, "$line exit";
}

sub read_binfile  { scalar(read_file($_[0], { binmode => ':raw' })) }
sub write_binfile { my $file = shift; write_file($file, { binmode => ':raw' }, @_) }

exit 0;




use Modern::Perl;
use Test::More;
use File::Path qw(make_path remove_tree);
require 't/test_utils.pl';

SKIP: {
	skip "SourceFile and SourceFileList not implemented";
	
my $objs = "srcfile.o lib/class.o errors.o dynstr.o lib/strutil.o scan.o options.o hist.o";

my $init_code = <<'END';
#include "symbol.h"
#define ERROR return __LINE__
struct module *CURRENTMODULE;
FILE *errfile;
size_t get_PC( void ) { return 0; }
void list_start_line( size_t address, char *source_file, int source_line_nr, char *line ) {}
char *CreateLibfile( char *filename ) {return NULL;}
char *GetLibfile( char *filename ) {return NULL;}
Symbol *define_static_def_sym( char *name, long value ) {return NULL;}
char ident[MAXLINE];
char separators[MAXLINE];
END



# test module
t_compile_module($init_code, <<'END', $objs);

#define T_GETLINE(nr,text)										\
	line = SourceFile_getline( src );							\
	if (line == NULL)							ERROR;			\
	if (strcmp(line, text))	{ puts(line); puts(text); ERROR; } 	\
	if (src->line_nr != nr)						ERROR;			\

#define T_END()													\
	line = SourceFile_getline( src );							\
	if (line != NULL)							ERROR;			\
	if (strcmp(Str_data(src->line), ""))		ERROR; 		 	\
	if (src->line_nr != 0)						ERROR;			\

#define T_LST_GETLINE(filename,nr,text)							\
	line = SourceFileList_getline( lst );						\
	if (line == NULL)							ERROR;			\
	if (SourceFileList_line( lst ) != line) 	ERROR;			\
	if (strcmp(line, text))	{ puts(line); puts(text); ERROR; } 	\
	if (SourceFileList_line_nr( lst ) != nr)	ERROR;			\
	if (strcmp(SourceFileList_filename( lst ), filename))	ERROR;			\

#define T_LST_END()												\
	line = SourceFileList_getline( lst );						\
	if (line != NULL)							ERROR;			\
	if (strcmp(SourceFileList_line( lst ), ""))	ERROR; 		 	\
	if (SourceFileList_line_nr( lst ) != 0)		ERROR;			\

#define T_SINGLETON_GETLINE(filename,nr,text)					\
	line = source_getline();									\
	if (line == NULL)							ERROR;			\
	if (source_line() != line)				 	ERROR;			\
	if (strcmp(line, text))	{ puts(line); puts(text); ERROR; } 	\
	if (source_line_nr() != nr)					ERROR;			\
	if (strcmp(source_filename(), filename))	ERROR;			\

#define T_SINGLETON_END()										\
	line = source_getline();									\
	if (line != NULL)							ERROR;			\
	if (strcmp(source_line(), ""))				ERROR; 		 	\
	if (source_line_nr() != 0)					ERROR;			\

	/* main */
	SourceFile *src;
	SourceFileList *lst;
	char *line;
	
	List_push(&opts.inc_path, "x1");
	List_push(&opts.inc_path, "x2");
	List_push(&opts.inc_path, "x3");
	
	src = OBJ_NEW( SourceFile );
	if (strcmp(src->filename, "")) 			ERROR;
	if (src->file       	!= NULL) 		ERROR;
	if (src->line       	== NULL) 		ERROR;
	if (Str_len(src->line) 	!= 0)			ERROR;
	if (src->line_nr    	!= 0   ) 		ERROR;
	if (src->line_stack 	== NULL) 		ERROR;
	if (src->line_stack->count != 0) 		ERROR;
	
	T_END();
	T_END();
	T_END();
	
	SourceFile_open( src, "f0" );
	if (strcmp(src->filename, "f0")) 		ERROR;
	if (src->file       	== NULL) 		ERROR;
	if (src->line       	== NULL) 		ERROR;
	if (Str_len(src->line) 	!= 0)			ERROR;
	if (src->line_nr    	!= 0   ) 		ERROR;
	if (src->line_stack 	== NULL) 		ERROR;
	if (src->line_stack->count != 0) 		ERROR;

	T_GETLINE(1, "F0 1\n");
	T_GETLINE(2, "\n");
	T_GETLINE(3, "F0 3\n");
	T_GETLINE(4, "\n");
	

	/* open file again */
	SourceFile_open( src, "f0" );
	if (strcmp(src->filename, "f0")) 		ERROR;
	if (src->file       	== NULL) 		ERROR;
	if (src->line       	== NULL) 		ERROR;
	if (Str_len(src->line) 	!= 0)			ERROR;
	if (src->line_nr    	!= 0   ) 		ERROR;
	if (src->line_stack 	== NULL) 		ERROR;
	if (src->line_stack->count != 0) 		ERROR;

	T_GETLINE( 1, "F0 1\n");
	T_GETLINE( 2, "\n");
	T_GETLINE( 3, "F0 3\n");
	T_GETLINE( 4, "\n");
	T_GETLINE( 5, "F0 5\n");
	T_GETLINE( 6, "\n");
	T_GETLINE( 7, "F0 7\n");
	T_GETLINE( 8, "\n");
	T_GETLINE( 9, "F0 9\n");
	T_GETLINE(10, "\n");
	T_GETLINE(11, "F0 11\n");
	T_GETLINE(12, "\n");
	T_GETLINE(13, "F0 13\n");
	T_END();
	T_END();
	T_END();
	
	
	/* open new file */
	SourceFile_open( src, "f1" );
	if (strcmp(src->filename, "x1/f1"))		ERROR;
	if (src->file       	== NULL) 		ERROR;
	if (src->line       	== NULL) 		ERROR;
	if (Str_len(src->line) 	!= 0)			ERROR;
	if (src->line_nr    	!= 0   ) 		ERROR;
	if (src->line_stack 	== NULL) 		ERROR;
	if (src->line_stack->count != 0) 		ERROR;

	T_GETLINE( 1, "F1 1\n");
	T_GETLINE( 2, "F1 2\n");
	T_GETLINE( 3, "F1 3\n");
	T_END();
	T_END();
	T_END();
	
	/* ungetline */
	SourceFile_ungetline( src, "line 6\n" );
	SourceFile_ungetline( src, "line 5" );
	SourceFile_ungetline( src, "line 1\nline 2\nline 3\nline 4" );
	
	T_GETLINE( 0, "line 1\n" );
	T_GETLINE( 0, "line 2\n" );
	T_GETLINE( 0, "line 3\n" );
	T_GETLINE( 0, "line 4" );
	T_GETLINE( 0, "line 5" );
	T_GETLINE( 0, "line 6\n" );
	T_END();
	T_END();
	T_END();
	
	/* open new file */
	SourceFile_open( src, "f1" );
	if (strcmp(src->filename, "x1/f1"))		ERROR;
	if (src->file       	== NULL) 		ERROR;
	if (src->line       	== NULL) 		ERROR;
	if (Str_len(src->line) 	!= 0)			ERROR;
	if (src->line_nr    	!= 0   ) 		ERROR;
	if (src->line_stack 	== NULL) 		ERROR;
	if (src->line_stack->count != 0) 		ERROR;

	T_GETLINE( 1, "F1 1\n");

	/* ungetline in the middle of file */
	SourceFile_ungetline( src, "line 1\nline 2\nline 3\nline 4" );
	
	T_GETLINE( 1, "line 1\n" );
	T_GETLINE( 1, "line 2\n" );
	T_GETLINE( 1, "line 3\n" );
	T_GETLINE( 1, "line 4" );

	/* continue from file */
	T_GETLINE( 2, "F1 2\n");
	T_GETLINE( 3, "F1 3\n");
	T_END();
	T_END();
	T_END();
	
	
	/* SourceFileList_getline / ungetline before open */
	lst = OBJ_NEW( SourceFileList );
	
	T_LST_END();
	T_LST_END();
	T_LST_END();
	
	SourceFileList_ungetline( lst, "line 6\n" );
	SourceFileList_ungetline( lst, "line 5" );
	SourceFileList_ungetline( lst, "line 1\nline 2\nline 3\nline 4" );
	
	T_LST_GETLINE("", 0, "line 1\n" );
	T_LST_GETLINE("", 0, "line 2\n" );
	T_LST_GETLINE("", 0, "line 3\n" );
	T_LST_GETLINE("", 0, "line 4" );
	T_LST_GETLINE("", 0, "line 5" );
	T_LST_GETLINE("", 0, "line 6\n" );
	T_LST_END();
	T_LST_END();
	T_LST_END();

	/* open file */
	SourceFileList_open( lst, "f0" );
	if (strcmp(SourceFileList_filename(lst),"f0"))	ERROR;
	if (strcmp(SourceFileList_line( lst ), ""))	ERROR;
	if (SourceFileList_line_nr( lst ) != 0)		ERROR;

	T_LST_GETLINE("f0",1, "F0 1\n");
	T_LST_GETLINE("f0",2, "\n");
	T_LST_GETLINE("f0",3, "F0 3\n");
	T_LST_GETLINE("f0",4, "\n");
	
	SourceFileList_ungetline( lst, "line 6\n" );
	SourceFileList_ungetline( lst, "line 5" );
	SourceFileList_ungetline( lst, "line 1\nline 2\nline 3\nline 4" );
	
	T_LST_GETLINE("f0", 4, "line 1\n" );
	T_LST_GETLINE("f0", 4, "line 2\n" );
	T_LST_GETLINE("f0", 4, "line 3\n" );
	T_LST_GETLINE("f0", 4, "line 4" );
	T_LST_GETLINE("f0", 4, "line 5" );
	T_LST_GETLINE("f0", 4, "line 6\n" );

	T_LST_GETLINE("f0", 5, "F0 5\n");
	T_LST_GETLINE("f0", 6, "\n");
	T_LST_GETLINE("f0", 7, "F0 7\n");
	T_LST_GETLINE("f0", 8, "\n");
	
	/* open new file */
	SourceFileList_open( lst, "f1" );
	if (strcmp(SourceFileList_filename(lst),"x1/f1"))	ERROR;
	if (strcmp(SourceFileList_line( lst ), ""))	ERROR;
	if (SourceFileList_line_nr( lst ) != 0)		ERROR;
	
	T_LST_GETLINE("x1/f1", 1, "F1 1\n");
	T_LST_GETLINE("x1/f1", 2, "F1 2\n");
	T_LST_GETLINE("x1/f1", 3, "F1 3\n");
	
	T_LST_GETLINE("f0", 9, "F0 9\n");
	T_LST_GETLINE("f0",10, "\n");
	T_LST_GETLINE("f0",11, "F0 11\n");
	T_LST_GETLINE("f0",12, "\n");
	T_LST_GETLINE("f0",13, "F0 13\n");
	T_LST_END();
	T_LST_END();
	T_LST_END();
	

	/* singleton API */
	T_SINGLETON_END();
	T_SINGLETON_END();
	T_SINGLETON_END();
	
	source_ungetline("line 6\n" );
	source_ungetline("line 5" );
	source_ungetline("line 1\nline 2\nline 3\nline 4" );
	
	T_SINGLETON_GETLINE("", 0, "line 1\n" );
	T_SINGLETON_GETLINE("", 0, "line 2\n" );
	T_SINGLETON_GETLINE("", 0, "line 3\n" );
	T_SINGLETON_GETLINE("", 0, "line 4" );
	T_SINGLETON_GETLINE("", 0, "line 5" );
	T_SINGLETON_GETLINE("", 0, "line 6\n" );
	T_SINGLETON_END();
	T_SINGLETON_END();
	T_SINGLETON_END();
	
	/* open file */
	source_open("f0");
	if (strcmp(source_filename(),"f0"))	ERROR;
	if (strcmp(source_line(), ""))	ERROR;
	if (source_line_nr() != 0)		ERROR;

	T_SINGLETON_GETLINE("f0",1, "F0 1\n");
	T_SINGLETON_GETLINE("f0",2, "\n");
	T_SINGLETON_GETLINE("f0",3, "F0 3\n");
	T_SINGLETON_GETLINE("f0",4, "\n");
	
	source_ungetline("line 6\n" );
	source_ungetline("line 5" );
	source_ungetline("line 1\nline 2\nline 3\nline 4" );
	
	T_SINGLETON_GETLINE("f0", 4, "line 1\n" );
	T_SINGLETON_GETLINE("f0", 4, "line 2\n" );
	T_SINGLETON_GETLINE("f0", 4, "line 3\n" );
	T_SINGLETON_GETLINE("f0", 4, "line 4" );
	T_SINGLETON_GETLINE("f0", 4, "line 5" );
	T_SINGLETON_GETLINE("f0", 4, "line 6\n" );

	T_SINGLETON_GETLINE("f0", 5, "F0 5\n");
	T_SINGLETON_GETLINE("f0", 6, "\n");
	T_SINGLETON_GETLINE("f0", 7, "F0 7\n");
	T_SINGLETON_GETLINE("f0", 8, "\n");
	
	/* open new file */
	source_open("f1");
	if (strcmp(source_filename(),"x1/f1"))	ERROR;
	if (strcmp(source_line(), ""))	ERROR;
	if (source_line_nr() != 0)		ERROR;
	
	T_SINGLETON_GETLINE("x1/f1", 1, "F1 1\n");
	T_SINGLETON_GETLINE("x1/f1", 2, "F1 2\n");
	T_SINGLETON_GETLINE("x1/f1", 3, "F1 3\n");
	
	T_SINGLETON_GETLINE("f0", 9, "F0 9\n");
	T_SINGLETON_GETLINE("f0",10, "\n");
	T_SINGLETON_GETLINE("f0",11, "F0 11\n");
	T_SINGLETON_GETLINE("f0",12, "\n");
	T_SINGLETON_GETLINE("f0",13, "F0 13\n");
	T_SINGLETON_END();
	T_SINGLETON_END();
	T_SINGLETON_END();


	OBJ_DELETE( src );
	OBJ_DELETE( lst );
	warn("last object deleted\n");
	
	return 0;
END

t_run_module([], '', <<'ERR', 0);
last object deleted
ERR


# check recursive includes
t_compile_module($init_code, <<'END', $objs);
	/* main */
	SourceFileList *lst;
	int ret = 1;
	
    /* start try..catch with finally to cleanup any allocated memory */
    TRY
    {
		List_push(&opts.inc_path, "x1");
		List_push(&opts.inc_path, "x2");
		List_push(&opts.inc_path, "x3");
		
		lst = OBJ_NEW( SourceFileList );
		if (lst->count != 0) ERROR;
		
		SourceFileList_open( lst, "f0" );
		if (lst->count != 1) ERROR;
		
		SourceFileList_open( lst, "f1" );
		if (lst->count != 2) ERROR;

		SourceFileList_open( lst, "f0" );
		
		warn("not reached\n");
	}
    CATCH ( FatalErrorException )
    {
        ret = 0;		/* ok */
    }
	FINALLY {}
	ETRY;
	
	return ret;
END

t_run_module([], '', <<'END', 0);
Error: cannot include file 'f0' recursively
END
diag "Should show error message location";


# Check file open error at top level
t_compile_module($init_code, <<'END', $objs);
	/* main */
	SourceFileList *lst;
	int ret = 1;
	
    /* start try..catch with finally to cleanup any allocated memory */
    TRY
    {
		lst = OBJ_NEW( SourceFileList );
		if (lst->count != 0) ERROR;
		
		SourceFileList_open( lst, "fxxx" );
		warn("not reached\n");
	}
    CATCH ( FatalErrorException )
    {
        ret = 0;		/* ok */
    }
	FINALLY {}
	ETRY;
	
	return ret;
END

t_run_module([], '', <<'END', 0);
Error: cannot read file 'fxxx'
END


# Check file open error at include level
t_compile_module($init_code, <<'END', $objs);
	/* main */
	SourceFileList *lst;
	int ret = 1;
	
    /* start try..catch with finally to cleanup any allocated memory */
    TRY
    {
		lst = OBJ_NEW( SourceFileList );
		if (lst->count != 0) ERROR;
		
		SourceFileList_open( lst, "f0" );
		if (lst->count != 1) ERROR;
		
		SourceFileList_open( lst, "fxxx" );
		
		warn("not reached\n");
	}
    CATCH ( FatalErrorException )
    {
        ret = 0;		/* ok */
    }
	FINALLY {}
	ETRY;
	
	return ret;
END

t_run_module([], '', <<'END', 0);
Error: cannot read file 'fxxx'
END
diag "Should show error message location";

}

# delete directories and files
remove_tree(qw( x1 x2 x3 ));
unlink_testfiles('f0');
done_testing;


# $Log: srcfile.t,v $
# Revision 1.1  2014-02-08 11:21:09  pauloscustodio
# Moved srcfile.c to lib/
#
# Revision 1.28  2014/01/23 22:30:55  pauloscustodio
# Use xfclose() instead of fclose() to detect file write errors during buffer flush called
# at fclose()
#
# Revision 1.27  2014/01/20 23:29:19  pauloscustodio
# Moved file.c to lib/fileutil.c
#
# Revision 1.26  2014/01/11 01:29:46  pauloscustodio
# Extend copyright to 2014.
# Move CVS log to bottom of file.
#
# Revision 1.25  2014/01/11 01:06:33  pauloscustodio
# -Wall comments
#
# Revision 1.24  2013/12/30 02:05:34  pauloscustodio
# Merge dynstr.c and safestr.c into lib/strutil.c; the new Str type
# handles both dynamically allocated strings and fixed-size strings.
# Replaced g_strchomp by chomp by; g_ascii_tolower by tolower;
# g_ascii_toupper by toupper; g_ascii_strcasecmp by stricompare.
#
# Revision 1.23  2013/12/26 23:42:28  pauloscustodio
# Replace StringList from strutil by StrList in new strlis.c, to keep lists of strings (e.g. directory search paths)
#
# Revision 1.22  2013/12/25 14:39:50  pauloscustodio
# Move strutil.c to the z80asm/lib directory
#
# Revision 1.21  2013/12/18 23:05:52  pauloscustodio
# Move class.c to the z80asm/lib directory
#
# Revision 1.20  2013/12/15 13:18:35  pauloscustodio
# Move memory allocation routines to lib/xmalloc, instead of glib,
# introduce memory leak report on exit and memory fence check.
#
# Revision 1.19  2013/11/11 23:47:04  pauloscustodio
# Move source code generation tools to dev/Makefile, only called on request,
# and keep the generated files in z80asm directory, so that build does
# not require tools used for the code generation (ragel, perl).
# Remove code generation for structs - use CLASS macro instead.
#
# Revision 1.18  2013/10/15 23:24:33  pauloscustodio
# Move reading by lines or tokens and file reading interface to scan.rl
# to decouple file.c from scan.c.
# Add singleton interface to scan to be used by parser.
#
# Revision 1.17  2013/10/08 21:53:07  pauloscustodio
# Replace Flex-based lexer by a Ragel-based one.
# Add interface to file.c to read files by tokens, calling the lexer.
#
# Revision 1.16  2013/10/05 13:43:05  pauloscustodio
# Parse command line options via look-up tables:
# -i, --use-lib
# -x, --make-lib
#
# Revision 1.15  2013/10/05 10:54:36  pauloscustodio
# Parse command line options via look-up tables:
# -I, --inc-path
# -L, --lib-path
#
# Revision 1.14  2013/10/05 08:14:43  pauloscustodio
# Parse command line options via look-up tables:
# -C, --line-mode
#
# Revision 1.13  2013/10/01 23:23:53  pauloscustodio
# Parse command line options via look-up tables:
# -l, --list
# -nl, --no-list
#
# Revision 1.12  2013/09/30 00:26:57  pauloscustodio
# Parse command line options via look-up tables:
# -e, --asm-ext
# -M, --obj-ext
# Move filename extension functions to options.c
#
# Revision 1.11  2013/09/23 23:14:10  pauloscustodio
# Renamed SzList to StringList, simplified interface by assuming that
# list lives in memory util program ends; it is used for directory searches
# only. Moved interface to strutil.c, removed strlist.c.
#
# Revision 1.10  2013/09/22 21:04:22  pauloscustodio
# New File and FileStack objects
#
# Revision 1.9  2013/09/09 00:20:45  pauloscustodio
# Add default set of modules to t_compile_module:
# -DMEMALLOC_DEBUG xmalloc.c die.o except.o strpool.o
#
# Revision 1.8  2013/09/08 00:43:59  pauloscustodio
# New error module with one error function per error, no need for the error
# constants. Allows compiler to type-check error message arguments.
# Included the errors module in the init() mechanism, no need to call
# error initialization from main(). Moved all error-testing scripts to
# one file errors.t.
#
# Revision 1.7  2013/09/01 17:14:02  pauloscustodio
# Change in test output due to xmalloc change.
#
# Revision 1.6  2013/09/01 11:52:56  pauloscustodio
# Setup xmalloc on init.c.
# Setup GLib memory allocation functions to use xmalloc functions.
#
# Revision 1.5  2013/09/01 00:18:30  pauloscustodio
# - Replaced e4c exception mechanism by a much simpler one based on a few
#   macros. The former did not allow an exit(1) to be called within a
#   try-catch block.
#
# Revision 1.4  2013/05/11 00:29:26  pauloscustodio
# CH_0021 : Exceptions on file IO show file name
# Keep a hash table of all opened file names, so that the file name
# is shown on a fatal error.
# Rename file IO funtions: f..._err to xf...
#
# Revision 1.3  2013/03/10 18:00:24  pauloscustodio
# Interface with errors (set input position for errors) and  listfile (start list of each input line)
#
# Revision 1.2  2013/03/02 23:52:49  pauloscustodio
# Add API to handle a stack of open sorce files and singleton API
#
# Revision 1.1  2013/02/27 22:31:43  pauloscustodio
# New srcfile.c to handle reading lines from source files
#
