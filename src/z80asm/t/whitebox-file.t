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
#
# Test file

use Modern::Perl;
use Test::More;
use File::Path qw(make_path remove_tree);
require 't/test_utils.pl';

my $objs = "file.o init_obj.o init_obj_file.o class.o safestr.o errors.o strutil.o";

# get init code except init() and main()
my $init = read_file("init.c"); $init =~ s/static void init\(\)\s*\{.*//s;

# test deleting of objects
t_compile_module($init, <<'END', $objs);
	File *file;
	FileStack *file_stack;

	/* test delete of NULL */
	delete_File(NULL);
	file_stack = new_FileStack();	/* items are NULL */
	delete0_FileStack(&file_stack);
	delete_FileStack(NULL);
END

t_run_module([], <<'OUT', <<'ERR', 0);
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=1792, zero-initialized=1772 (98.88%), freed=20 (1.12%), remaining=1772
OUT
ERR

write_file(asm1_file(), {binmode => ':raw'}, "");
write_file(asm2_file(), {binmode => ':raw'}, "A\nB\rC\r\nD\n\rE");
write_file(asm3_file(), {binmode => ':raw'}, "A\nB\rC\r\nD\n\rE\n");
write_file(asm4_file(), {binmode => ':raw'}, "A\nB\rC\r\nD\n\rE\r");
write_file(asm5_file(), {binmode => ':raw'}, "A\nB\rC\r\nD\n\rE\r\n");
write_file(asm6_file(), {binmode => ':raw'}, "A\nB\rC\r\nD\n\rE\n\r");
write_file(asm7_file(), {binmode => ':raw'}, "ABCDEFGHIJ\nabcdefghij\n");

# test file reading
t_compile_module($init, <<'END', $objs);
	File *file;
	char *p;
	int i;
	
	for (i = 1; i < argc; i++) 
	{
		file = new_File(argv[i], "rb");
		
		printf("Read file %s:\n", argv[i]);
		while (getline_File(file)) 
		{
			printf("%s:%d:", file->filename, file->line_nr);
			for (p = file->line->str; *p; p++) 
			{
				if ( *p > 32 && *p < 127 )
					putchar(*p);
				else
					printf("{%02X}", *p);
			}
			putchar('\n');
		}
		printf("End of file\n");
		
		/* let garbage collector delete files */
	}
	delete0_File(&file);
	ASSERT( file == NULL );
	
END

t_run_module([ asm_file(), 
			   asm1_file(), 
			   asm2_file(), 
			   asm3_file(), 
			   asm4_file(), 
			   asm5_file(), 
			   asm6_file(), 
			   asm7_file() ], <<'OUT', <<'ERR', 1);
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        18 |          1 |          0 |          0 |          1 |         +0
        20 |          1 |          1 |          0 |          0 |         +0
        24 |          1 |          1 |          0 |          0 |         +0
        28 |          0 |          1 |          1 |          0 |         +0
        36 |          0 |          0 |          1 |          1 |         +0
        44 |          1 |          0 |          0 |          1 |         +0
        88 |          0 |          1 |          1 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2030, zero-initialized=1772 (87.29%), freed=258 (12.71%), remaining=1772
OUT
Error: cannot read file 'test.asm'
Uncaught runtime exception at errors.c(1)
ERR


t_run_module([ asm1_file(), 
			   asm2_file(), 
			   asm3_file(), 
			   asm4_file(), 
			   asm5_file(), 
			   asm6_file(), 
			   asm7_file() ], <<'OUT', <<'ERR', 0);
Read file test1.asm:
End of file
Read file test2.asm:
test2.asm:1:A{0A}
test2.asm:2:B{0A}
test2.asm:3:C{0A}
test2.asm:4:D{0A}
test2.asm:5:E{0A}
End of file
Read file test3.asm:
test3.asm:1:A{0A}
test3.asm:2:B{0A}
test3.asm:3:C{0A}
test3.asm:4:D{0A}
test3.asm:5:E{0A}
End of file
Read file test4.asm:
test4.asm:1:A{0A}
test4.asm:2:B{0A}
test4.asm:3:C{0A}
test4.asm:4:D{0A}
test4.asm:5:E{0A}
End of file
Read file test5.asm:
test5.asm:1:A{0A}
test5.asm:2:B{0A}
test5.asm:3:C{0A}
test5.asm:4:D{0A}
test5.asm:5:E{0A}
End of file
Read file test6.asm:
test6.asm:1:A{0A}
test6.asm:2:B{0A}
test6.asm:3:C{0A}
test6.asm:4:D{0A}
test6.asm:5:E{0A}
End of file
Read file test7.asm:
test7.asm:1:ABCDEFGHIJ{0A}
test7.asm:2:abcdefghij{0A}
End of file
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
         4 |          0 |          6 |          7 |          1 |         +0
         8 |          0 |          0 |          1 |          1 |         +0
        16 |          0 |          1 |          1 |          0 |         +0
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2964, zero-initialized=1868 (63.02%), freed=1192 (40.22%), remaining=1772
OUT
ERR


# test file-stack reading
t_compile_module($init, <<'END', $objs);
	FileStack *fs;
	char *p;
	char *files[] = {"test2.asm", "test3.asm", "test4.asm", NULL};
	int i;
	
	fs = new_FileStack(); ASSERT( fs );
	ASSERT( getline_FileStack( fs ) == NULL );
	
	read_to_FileStack(fs, "test1.asm");
	ASSERT( getline_FileStack( fs ) == NULL );
	
	i = 0;
	read_to_FileStack(fs, files[i++]);
	while (	p = getline_FileStack( fs ) )
	{
		ASSERT( strcmp( p, fs->top->line->str ) == 0 );
		printf("%s:%d:%s", fs->top->filename, fs->top->line_nr, fs->top->line->str);
		
		if (files[i]) 
			read_to_FileStack(fs, files[i++]);
	}
	
	/* error */
	read_to_FileStack(fs, "test1.asm");
	read_to_FileStack(fs, "test1.asm");
END

t_run_module([], <<'OUT', <<'ERR', 1);
test2.asm:1:A
test3.asm:1:A
test4.asm:1:A
test4.asm:2:B
test4.asm:3:C
test4.asm:4:D
test4.asm:5:E
test3.asm:2:B
test3.asm:3:C
test3.asm:4:D
test3.asm:5:E
test2.asm:2:B
test2.asm:3:C
test2.asm:4:D
test2.asm:5:E
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
         4 |          0 |          5 |          5 |          0 |         +0
        12 |          1 |          0 |          0 |          1 |         +0
        18 |          0 |          1 |          1 |          0 |         +0
        20 |          1 |          1 |          0 |          0 |         +0
        21 |          1 |          0 |          0 |          1 |         +0
        24 |          2 |          2 |          1 |          1 |         +0
        42 |          0 |          0 |          1 |          1 |         +0
        44 |          2 |          1 |          1 |          2 |         +0
        84 |          0 |          0 |          1 |          1 |         +0
        88 |          0 |          2 |          2 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=3489, zero-initialized=1868 (53.54%), freed=1717 (49.21%), remaining=1772
OUT
Error at file 'test1.asm': cannot include file 'test1.asm' recursively
Uncaught runtime exception at errors.c(1)
ERR




# test file writing
t_compile_module($init, <<'END', $objs);
	File *file;
	
	file = new_File("x/y/z/test1.asm", "w");
	printf("write file failed\n");
END

t_run_module([], <<'OUT', <<'ERR', 1);
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        19 |          1 |          0 |          0 |          1 |         +0
        20 |          1 |          1 |          0 |          0 |         +0
        24 |          1 |          1 |          0 |          0 |         +0
        36 |          0 |          1 |          1 |          0 |         +0
        38 |          0 |          0 |          1 |          1 |         +0
        44 |          1 |          0 |          0 |          1 |         +0
        88 |          0 |          1 |          1 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2041, zero-initialized=1772 (86.82%), freed=269 (13.18%), remaining=1772
OUT
Error: cannot write file 'x/y/z/test1.asm'
Uncaught runtime exception at errors.c(1)
ERR


t_compile_module($init, <<'END', $objs);
	File *file;
	
	file = new_File("test1.asm", "w");
	fprintf(file->fp, "write file not flushed\n");
	
	/* leak memory, do not close, test1.asm will be deleted */
	file = new_File("test2.asm", "w");
	fprintf(file->fp, "write file ok\n");
	close_File(file);
END


t_run_module([], <<'OUT', <<'ERR', 0);
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
         4 |          0 |          2 |          2 |          0 |         +0
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2920, zero-initialized=1868 (63.97%), freed=1148 (39.32%), remaining=1772
OUT
ERR

ok ! -f "test1.asm";
is read_file("test2.asm"), "write file ok\n";


# TEST OLD INTERFACE

t_compile_module($init, <<'END', $objs);
	StringList *list = NULL;
	
	if (argv[2][0] != '0')
	{
		add_StringList(&list, "x1");
		add_StringList(&list, "x2");
		add_StringList(&list, "x3");
	}
	
	puts( search_file(argv[1], list) );
END

# create directories and files
make_path(qw( x1 x2 x3 ));
write_file('f0', "");
write_file('x1/f0', "");
write_file('x1/f1', "");
write_file('x2/f1', "");
write_file('x2/f2', "");
write_file('x3/f2', "");
write_file('x3/f3', "");

t_run_module(['f0', '0'], <<'OUT', "", 0);
f0
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f1', '0'], <<'OUT', "", 0);
f1
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f2', '0'], <<'OUT', "", 0);
f2
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f3', '0'], <<'OUT', "", 0);
f3
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f4', '0'], <<'OUT', "", 0);
f4
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT


t_run_module(['f0', '1'], <<'OUT', "", 0);
f0
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f1', '1'], <<'OUT', "", 0);
x1/f1
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f2', '1'], <<'OUT', "", 0);
x2/f2
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f3', '1'], <<'OUT', "", 0);
x3/f3
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT

t_run_module(['f4', '1'], <<'OUT', "", 0);
f4
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=2912, zero-initialized=1868 (64.15%), freed=1140 (39.15%), remaining=1772
OUT


# test file manipulation
t_compile_module($init, <<'END', $objs);
#define T1(init, func, result) \
		strcpy( file, init); \
		p = func; \
		ASSERT( p == file ); \
		ASSERT( strcmp(file, result) == 0 )

#define T2(func, result) \
		p = func; \
		ASSERT( strcmp(p, result) == 0 )
	
	char file[FILENAME_MAX];
	char *p;
	
	T1("abc", 			(path_remove_ext(file)), "abc");
	T1("abc.", 			(path_remove_ext(file)), "abc");
	T1("abc.xpt", 		(path_remove_ext(file)), "abc");
	T1("abc.xpt.obj", 	(path_remove_ext(file)), "abc.xpt");
	T1("./abc", 		(path_remove_ext(file)), "./abc");
	T1(".\\abc",		(path_remove_ext(file)), ".\\abc");
	T1("./abc.", 		(path_remove_ext(file)), "./abc");
	T1(".\\abc.",		(path_remove_ext(file)), ".\\abc");
	T1("./abc.xpt", 	(path_remove_ext(file)), "./abc");
	T1(".\\abc.xpt",	(path_remove_ext(file)), ".\\abc");

	T1("", (path_replace_ext(file, "abc", 			".obj")),	"abc.obj");
	T1("", (path_replace_ext(file, "abc.", 			".obj")),	"abc.obj");
	T1("", (path_replace_ext(file, "abc.xpt.zz",	".obj")),	"abc.xpt.obj");
	T1("", (path_replace_ext(file, "./abc", 		".obj")),	"./abc.obj");
	T1("", (path_replace_ext(file, ".\\abc", 		".obj")),	".\\abc.obj");
	T1("", (path_replace_ext(file, "./abc.", 		".obj")),	"./abc.obj");
	T1("", (path_replace_ext(file, ".\\abc.", 		".obj")),	".\\abc.obj");
	T1("", (path_replace_ext(file, "./abc.xpt", 	".obj")),	"./abc.obj");
	T1("", (path_replace_ext(file, ".\\abc.xpt", 	".obj")),	".\\abc.obj");
	
	T1("", (path_basename(file, "abc")),			"abc");
	T1("", (path_basename(file, "abc.zz")),			"abc.zz");
	T1("", (path_basename(file, "./abc")),			"abc");
	T1("", (path_basename(file, ".\\abc")),			"abc");
	T1("", (path_basename(file, "/a/b/c/abc")),		"abc");
	T1("", (path_basename(file, "\\a\\b\\c\\abc")),	"abc");
	
	T2((asm_filename_ext("./abc.xpt")),		"./abc.asm");
	T2((lst_filename_ext("./abc.xpt")),		"./abc.lst");
	T2((obj_filename_ext("./abc.xpt")),		"./abc.obj");
	T2((def_filename_ext("./abc.xpt")),		"./abc.def");
	T2((err_filename_ext("./abc.xpt")),		"./abc.err");
	T2((bin_filename_ext("./abc.xpt")),		"./abc.bin");
	T2((segbin_filename_ext("./abc.xpt")),	"./abc.bn0");
	T2((lib_filename_ext("./abc.xpt")),		"./abc.lib");
	T2((sym_filename_ext("./abc.xpt")),		"./abc.sym");
	T2((map_filename_ext("./abc.xpt")),		"./abc.map");
END

t_run_module([], <<'OUT', <<'ERR', 0);
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        20 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=20, zero-initialized=0 (0.00%), freed=20 (100.00%), remaining=0
OUT
ERR

# test file IO
t_compile_module($init, <<'END', $objs);
/* 256 characters */
#define BIG_STR "1234567890" "1234567890" "1234567890" "1234567890" "1234567890" \
				"1234567890" "1234567890" "1234567890" "1234567890" "1234567890" \
				"1234567890" "1234567890" "1234567890" "1234567890" "1234567890" \
				"1234567890" "1234567890" "1234567890" "1234567890" "1234567890" \
				"1234567890" "1234567890" "1234567890" "1234567890" "1234567890" \
				"123456" 
	SSTR_DEFINE( small, 5 );
	SSTR_DEFINE( large, 1024 );
	char buffer[1024];
	FILE *file;
	long fpos;
	struct stat filestat;
	
	TITLE("xfopen");
	TRY_NOK( file = xfopen("test1xxxx.bin", "rb") );
	TRY_NOK( file = xfopen("x/x/x/x/test1.bin", "wb") );
	
	TITLE("xfclose");
	TRY_OK( file = xfopen("test1.bin", "wb") );
	TRY_OK( xfclose(file) );
	TRY_NOK( xfclose(file) );
	
	TITLE("xstat");
	TRY_NOK( xstat("test1xxxx.bin", &filestat) );
	memset( &filestat, 0, sizeof(filestat) );
	TRY_OK(  xstat("test1.bin",     &filestat) );
	ASSERT( filestat.st_size == 0 );

	TITLE("xfwrite");
	sstr_set( small, BIG_STR );
	TRY_OK( file = xfopen("test1.bin", "wb") );
	TRY_OK( xfwrite( sstr_data(small), sizeof(char), sstr_len(small), file ) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_NOK( xfwrite( sstr_data(small), sizeof(char), sstr_len(small), file ) );
	TRY_OK( xfclose(file) );

	TITLE("xfread");
	memset(buffer, 0, sizeof(buffer));
	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_OK( xfread( buffer, sizeof(char), sstr_len(small), file ) );
	ASSERT( 0 == memcmp(buffer, sstr_data(small), sstr_len(small)) );
	fseek(file, 1, SEEK_SET);
	TRY_NOK( xfread( buffer, sizeof(char), sstr_len(small), file ) );
	TRY_OK( xfclose(file) );

	TITLE("xfput_char");
	sstr_set( small, BIG_STR );
	TRY_OK( file = xfopen("test1.bin", "wb") );
	TRY_OK( xfput_char( sstr_data(small), sstr_len(small), file ) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_NOK( xfput_char( sstr_data(small), sstr_len(small), file ) );
	TRY_OK( xfclose(file) );

	TITLE("xfget_char");
	memset(buffer, 0, sizeof(buffer));
	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_OK( xfget_char( buffer, sstr_len(small), file ) );
	ASSERT( 0 == memcmp(buffer, sstr_data(small), sstr_len(small)) );
	fseek(file, 1, SEEK_SET);
	TRY_NOK( xfget_char( buffer, sstr_len(small), file ) );
	TRY_OK( xfclose(file) );

	TITLE("xfput_u8");
	TRY_OK( file = xfopen("test1.bin", "wb") );
	TRY_OK( xfput_u8( -128, file ) );
	TRY_OK( xfput_u8( -127, file ) );
	TRY_OK( xfput_u8(    0, file ) );
	TRY_OK( xfput_u8(  127, file ) );
	TRY_OK( xfput_u8(  128, file ) );
	TRY_OK( xfput_u8(  255, file ) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_NOK( xfput_u8( 0, file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfget_u8");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	ASSERT( xfget_u8(file) ==  128 );
	ASSERT( xfget_u8(file) ==  129 );
	ASSERT( xfget_u8(file) ==    0 );
	ASSERT( xfget_u8(file) ==  127 );
	ASSERT( xfget_u8(file) ==  128 );
	ASSERT( xfget_u8(file) ==  255 );
	TRY_NOK( xfget_u8( file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfget_i8");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	ASSERT( xfget_i8(file) == -128 );
	ASSERT( xfget_i8(file) == -127 );
	ASSERT( xfget_i8(file) ==    0 );
	ASSERT( xfget_i8(file) ==  127 );
	ASSERT( xfget_i8(file) == -128 );
	ASSERT( xfget_i8(file) ==   -1 );
	TRY_NOK( xfget_i8( file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfput_u16");
	TRY_OK( file = xfopen("test1.bin", "wb") );
	TRY_OK( xfput_u16( -32768, file ) );
	TRY_OK( xfput_u16( -32767, file ) );
	TRY_OK( xfput_u16(      0, file ) );
	TRY_OK( xfput_u16(  32767, file ) );
	TRY_OK( xfput_u16(  32768, file ) );
	TRY_OK( xfput_u16(  65535, file ) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_NOK( xfput_u16( 0, file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfget_u16");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	ASSERT( xfget_u16(file) ==  32768 );
	ASSERT( xfget_u16(file) ==  32769 );
	ASSERT( xfget_u16(file) ==      0 );
	ASSERT( xfget_u16(file) ==  32767 );
	ASSERT( xfget_u16(file) ==  32768 );
	ASSERT( xfget_u16(file) ==  65535 );
	fseek(file, -1, SEEK_END);
	TRY_NOK( xfget_u16( file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfget_i16");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	ASSERT( xfget_i16(file) == -32768 );
	ASSERT( xfget_i16(file) == -32767 );
	ASSERT( xfget_i16(file) ==      0 );
	ASSERT( xfget_i16(file) ==  32767 );
	ASSERT( xfget_i16(file) == -32768 );
	ASSERT( xfget_i16(file) ==     -1 );
	fseek(file, -1, SEEK_END);
	TRY_NOK( xfget_i16( file ) );
	TRY_OK( xfclose(file) );

	TITLE("xfput_u32");
	TRY_OK( file = xfopen("test1.bin", "wb") );
	TRY_OK( xfput_u32( -2147483648, file ) );
	TRY_OK( xfput_u32( -2147483647, file ) );
	TRY_OK( xfput_u32(           0, file ) );
	TRY_OK( xfput_u32(           1, file ) );
	TRY_OK( xfput_u32(         256, file ) );
	TRY_OK( xfput_u32(       65536, file ) );
	TRY_OK( xfput_u32(    16777216, file ) );
	TRY_OK( xfput_u32(  2147483647, file ) );
	TRY_OK( xfput_u32(  2147483648, file ) );
	TRY_OK( xfput_u32(  4294967295, file ) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_NOK( xfput_u32( 0, file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfget_u32");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	ASSERT( xfget_u32(file) ==  2147483648 );
	ASSERT( xfget_u32(file) ==  2147483649 );
	ASSERT( xfget_u32(file) ==           0 );
	ASSERT( xfget_u32(file) ==           1 );
	ASSERT( xfget_u32(file) ==         256 );
	ASSERT( xfget_u32(file) ==       65536 );
	ASSERT( xfget_u32(file) ==    16777216 );
	ASSERT( xfget_u32(file) ==  2147483647 );
	ASSERT( xfget_u32(file) ==  2147483648 );
	ASSERT( xfget_u32(file) ==  4294967295 );
	fseek(file, -3, SEEK_END);
	TRY_NOK( xfget_u32( file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfget_i32");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	ASSERT( xfget_i32(file) == -2147483648 );
	ASSERT( xfget_i32(file) == -2147483647 );
	ASSERT( xfget_i32(file) ==           0 );
	ASSERT( xfget_i32(file) ==           1 );
	ASSERT( xfget_i32(file) ==         256 );
	ASSERT( xfget_i32(file) ==       65536 );
	ASSERT( xfget_i32(file) ==    16777216 );
	ASSERT( xfget_i32(file) ==  2147483647 );
	ASSERT( xfget_i32(file) ==  2147483648 );
	ASSERT( xfget_i32(file) ==  4294967295 );
	fseek(file, -3, SEEK_END);
	TRY_NOK( xfget_i32( file ) );
	TRY_OK( xfclose(file) );
	
	TITLE("xfput_sstr");
	sstr_set( small, BIG_STR );
	TRY_OK( file = xfopen("test1.bin", "wb") );
	TRY_OK( xfput_sstr( small, file ) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_NOK( xfput_sstr( small, file ) );
	TRY_OK( xfclose(file) );

	TITLE("xfget_sstr");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_OK( xfget_sstr( small, small->size-1, file ) );
	ASSERT( 0 == memcmp(sstr_data(small), BIG_STR, sstr_len(small)) );
	TRY_NOK( xfget_u8( file ) );
	fseek(file, 1, SEEK_SET);
	TRY_NOK( xfget_sstr( small, small->size-1, file ) );
	fseek(file, 0, SEEK_SET);
	TRY_NOK( xfget_sstr( small, small->size, file ) );
	TRY_OK( xfclose(file) );

	TITLE("xfput_c1sstr");
	TRY_OK( file = xfopen("test1.bin", "wb") );
	sstr_set(large, BIG_STR); sstr_data(large)[0] = '\0'; sstr_sync_len(large);
	TRY_OK( xfput_c1sstr(large, file) );
	sstr_set(large, BIG_STR); sstr_data(large)[1] = '\0'; sstr_sync_len(large);
	TRY_OK( xfput_c1sstr(large, file) );
	sstr_set(large, BIG_STR); sstr_data(large)[255] = '\0'; sstr_sync_len(large);
	TRY_OK( xfput_c1sstr(large, file) );
	sstr_set(large, BIG_STR); sstr_data(large)[256] = '\0'; sstr_sync_len(large);
	TRY_NOK( xfput_c1sstr(large, file) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	sstr_set(large, BIG_STR); sstr_data(large)[0] = '\0'; sstr_sync_len(large);
	TRY_NOK( xfput_c1sstr(large, file) );
	TRY_OK( xfclose(file) );

	TITLE("xfget_c1sstr");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_OK( xfget_c1sstr( large, file ) );
	ASSERT( 0 == sstr_len(large) );
	ASSERT( 0 == memcmp(sstr_data(large), BIG_STR, sstr_len(large)) );
	TRY_OK( xfget_c1sstr( large, file ) );
	ASSERT( 1 == sstr_len(large) );
	ASSERT( 0 == memcmp(sstr_data(large), BIG_STR, sstr_len(large)) );
	TRY_OK( xfget_c1sstr( large, file ) );
	ASSERT( 255 == sstr_len(large) );
	ASSERT( 0 == memcmp(sstr_data(large), BIG_STR, sstr_len(large)) );
	TRY_NOK( xfget_u8( file ) );
	fseek(file, 0, SEEK_SET);
	TRY_OK( xfget_c1sstr( small, file ) );
	ASSERT( 0 == sstr_len(small) );
	ASSERT( 0 == memcmp(sstr_data(small), BIG_STR, sstr_len(small)) );
	TRY_OK( xfget_c1sstr( small, file ) );
	ASSERT( 1 == sstr_len(small) );
	ASSERT( 0 == memcmp(sstr_data(small), BIG_STR, sstr_len(small)) );
	TRY_NOK( xfget_c1sstr(small, file) );
	TRY_OK( xfclose(file) );

	TITLE("xfput_c2sstr");
	TRY_OK( file = xfopen("test1.bin", "wb") );
	sstr_set(large, BIG_STR); sstr_data(large)[0] = '\0'; sstr_sync_len(large);
	TRY_OK( xfput_c2sstr(large, file) );
	sstr_set(large, BIG_STR); sstr_data(large)[1] = '\0'; sstr_sync_len(large);
	TRY_OK( xfput_c2sstr(large, file) );
	sstr_set(large, BIG_STR); sstr_data(large)[255] = '\0'; sstr_sync_len(large);
	TRY_OK( xfput_c2sstr(large, file) );
	sstr_set(large, BIG_STR); sstr_data(large)[256] = '\0'; sstr_sync_len(large);
	TRY_OK( xfput_c2sstr(large, file) );
	TRY_OK( xfclose(file) );
	dump_file("test1.bin");

	TRY_OK( file = xfopen("test1.bin", "rb") );
	sstr_set(large, BIG_STR); sstr_data(large)[0] = '\0'; sstr_sync_len(large);
	TRY_NOK( xfput_c2sstr(large, file) );
	TRY_OK( xfclose(file) );

	TITLE("xfget_c2sstr");
	TRY_OK( file = xfopen("test1.bin", "rb") );
	TRY_OK( xfget_c2sstr( large, file ) );
	ASSERT( 0 == sstr_len(large) );
	ASSERT( 0 == memcmp(sstr_data(large), BIG_STR, sstr_len(large)) );
	TRY_OK( xfget_c2sstr( large, file ) );
	ASSERT( 1 == sstr_len(large) );
	ASSERT( 0 == memcmp(sstr_data(large), BIG_STR, sstr_len(large)) );
	TRY_OK( xfget_c2sstr( large, file ) );
	ASSERT( 255 == sstr_len(large) );
	ASSERT( 0 == memcmp(sstr_data(large), BIG_STR, sstr_len(large)) );
	TRY_OK( xfget_c2sstr( large, file ) );
	ASSERT( 256 == sstr_len(large) );
	ASSERT( 0 == memcmp(sstr_data(large), BIG_STR, sstr_len(large)) );
	TRY_NOK( xfget_u8( file ) );
	fseek(file, 0, SEEK_SET);
	TRY_OK( xfget_c2sstr( small, file ) );
	ASSERT( 0 == sstr_len(small) );
	ASSERT( 0 == memcmp(sstr_data(small), BIG_STR, sstr_len(small)) );
	TRY_OK( xfget_c2sstr( small, file ) );
	ASSERT( 1 == sstr_len(small) );
	ASSERT( 0 == memcmp(sstr_data(small), BIG_STR, sstr_len(small)) );
	TRY_NOK( xfget_c2sstr(small, file) );
	TRY_OK( xfclose(file) );

END

t_run_module([], <<'OUT', <<'END', 0);
GLib Memory statistics (successful operations):
 blocks of | allocated  | freed      | allocated  | freed      | n_bytes   
  n_bytes  | n_times by | n_times by | n_times by | n_times by | remaining 
           | malloc()   | free()     | realloc()  | realloc()  |           
===========|============|============|============|============|===========
        18 |         17 |          0 |          0 |         17 |         +0
        19 |         11 |          0 |          0 |         11 |         +0
        20 |          1 |          1 |          0 |          0 |         +0
        24 |         28 |         28 |          0 |          0 |         +0
        29 |          0 |         15 |         15 |          0 |         +0
        30 |          0 |         10 |         10 |          0 |         +0
        32 |          1 |          1 |          0 |          0 |         +0
        33 |          0 |          2 |          2 |          0 |         +0
        36 |          0 |          0 |         17 |         17 |         +0
        38 |          0 |          1 |         11 |         10 |         +0
        40 |          1 |          1 |          0 |          0 |         +0
        44 |         29 |          1 |          0 |         28 |         +0
        88 |          0 |         28 |         28 |          0 |         +0
        96 |          1 |          1 |          0 |          0 |         +0
       252 |          3 |          0 |          0 |          0 |       +756
       384 |          1 |          1 |          0 |          0 |         +0
      1016 |          1 |          0 |          0 |          0 |      +1016
      1024 |          1 |          1 |          0 |          0 |         +0
GLib Memory statistics (failing operations):
 --- none ---
Total bytes: allocated=10126, zero-initialized=2368 (23.39%), freed=8354 (82.50%), remaining=1772
OUT

---- TEST: xfopen ----

Error: cannot read file 'test1xxxx.bin'
Error: cannot write file 'x/x/x/x/test1.bin'

---- TEST: xfclose ----

Error: cannot close file 'test1.bin'

---- TEST: xstat ----

Error: cannot read file 'test1xxxx.bin'

---- TEST: xfwrite ----

File: test1.bin:
   0   1    2    3    4   
Error: cannot write file 'test1.bin'

---- TEST: xfread ----

Error: cannot read file 'test1.bin'

---- TEST: xfput_char ----

File: test1.bin:
   0   1    2    3    4   
Error: cannot write file 'test1.bin'

---- TEST: xfget_char ----

Error: cannot read file 'test1.bin'

---- TEST: xfput_u8 ----

File: test1.bin:
   0  <80> <81> <00> <7F> <80> <FF> 
Error: cannot write file 'test1.bin'

---- TEST: xfget_u8 ----

Error: cannot read file 'test1.bin'

---- TEST: xfget_i8 ----

Error: cannot read file 'test1.bin'

---- TEST: xfput_u16 ----

File: test1.bin:
   0  <00> <80> <01> <80> <00> <00> <FF> <7F> <00> <80> <FF> <FF> 
Error: cannot write file 'test1.bin'

---- TEST: xfget_u16 ----

Error: cannot read file 'test1.bin'

---- TEST: xfget_i16 ----

Error: cannot read file 'test1.bin'

---- TEST: xfput_u32 ----

File: test1.bin:
   0  <00> <00> <00> <80> <01> <00> <00> <80> <00> <00> <00> <00> <01> <00> <00> <00> 
  10  <00> <01> <00> <00> <00> <00> <01> <00> <00> <00> <00> <01> <FF> <FF> <FF> <7F> 
  20  <00> <00> <00> <80> <FF> <FF> <FF> <FF> 
Error: cannot write file 'test1.bin'

---- TEST: xfget_u32 ----

Error: cannot read file 'test1.bin'

---- TEST: xfget_i32 ----

Error: cannot read file 'test1.bin'

---- TEST: xfput_sstr ----

File: test1.bin:
   0   1    2    3    4   
Error: cannot write file 'test1.bin'

---- TEST: xfget_sstr ----

Error: cannot read file 'test1.bin'
Error: cannot read file 'test1.bin'
Error: cannot read file 'test1.bin'

---- TEST: xfput_c1sstr ----

Error: cannot write file 'test1.bin'
File: test1.bin:
   0  <00> <01>  1   <FF>  1    2    3    4    5    6    7    8    9    0    1    2   
  10   3    4    5    6    7    8    9    0    1    2    3    4    5    6    7    8   
  20   9    0    1    2    3    4    5    6    7    8    9    0    1    2    3    4   
  30   5    6    7    8    9    0    1    2    3    4    5    6    7    8    9    0   
  40   1    2    3    4    5    6    7    8    9    0    1    2    3    4    5    6   
  50   7    8    9    0    1    2    3    4    5    6    7    8    9    0    1    2   
  60   3    4    5    6    7    8    9    0    1    2    3    4    5    6    7    8   
  70   9    0    1    2    3    4    5    6    7    8    9    0    1    2    3    4   
  80   5    6    7    8    9    0    1    2    3    4    5    6    7    8    9    0   
  90   1    2    3    4    5    6    7    8    9    0    1    2    3    4    5    6   
  A0   7    8    9    0    1    2    3    4    5    6    7    8    9    0    1    2   
  B0   3    4    5    6    7    8    9    0    1    2    3    4    5    6    7    8   
  C0   9    0    1    2    3    4    5    6    7    8    9    0    1    2    3    4   
  D0   5    6    7    8    9    0    1    2    3    4    5    6    7    8    9    0   
  E0   1    2    3    4    5    6    7    8    9    0    1    2    3    4    5    6   
  F0   7    8    9    0    1    2    3    4    5    6    7    8    9    0    1    2   
 100   3    4    5   
Error: cannot write file 'test1.bin'

---- TEST: xfget_c1sstr ----

Error: cannot read file 'test1.bin'
Error: cannot read file 'test1.bin'

---- TEST: xfput_c2sstr ----

File: test1.bin:
   0  <00> <00> <01> <00>  1   <FF> <00>  1    2    3    4    5    6    7    8    9   
  10   0    1    2    3    4    5    6    7    8    9    0    1    2    3    4    5   
  20   6    7    8    9    0    1    2    3    4    5    6    7    8    9    0    1   
  30   2    3    4    5    6    7    8    9    0    1    2    3    4    5    6    7   
  40   8    9    0    1    2    3    4    5    6    7    8    9    0    1    2    3   
  50   4    5    6    7    8    9    0    1    2    3    4    5    6    7    8    9   
  60   0    1    2    3    4    5    6    7    8    9    0    1    2    3    4    5   
  70   6    7    8    9    0    1    2    3    4    5    6    7    8    9    0    1   
  80   2    3    4    5    6    7    8    9    0    1    2    3    4    5    6    7   
  90   8    9    0    1    2    3    4    5    6    7    8    9    0    1    2    3   
  A0   4    5    6    7    8    9    0    1    2    3    4    5    6    7    8    9   
  B0   0    1    2    3    4    5    6    7    8    9    0    1    2    3    4    5   
  C0   6    7    8    9    0    1    2    3    4    5    6    7    8    9    0    1   
  D0   2    3    4    5    6    7    8    9    0    1    2    3    4    5    6    7   
  E0   8    9    0    1    2    3    4    5    6    7    8    9    0    1    2    3   
  F0   4    5    6    7    8    9    0    1    2    3    4    5    6    7    8    9   
 100   0    1    2    3    4    5   <00> <01>  1    2    3    4    5    6    7    8   
 110   9    0    1    2    3    4    5    6    7    8    9    0    1    2    3    4   
 120   5    6    7    8    9    0    1    2    3    4    5    6    7    8    9    0   
 130   1    2    3    4    5    6    7    8    9    0    1    2    3    4    5    6   
 140   7    8    9    0    1    2    3    4    5    6    7    8    9    0    1    2   
 150   3    4    5    6    7    8    9    0    1    2    3    4    5    6    7    8   
 160   9    0    1    2    3    4    5    6    7    8    9    0    1    2    3    4   
 170   5    6    7    8    9    0    1    2    3    4    5    6    7    8    9    0   
 180   1    2    3    4    5    6    7    8    9    0    1    2    3    4    5    6   
 190   7    8    9    0    1    2    3    4    5    6    7    8    9    0    1    2   
 1A0   3    4    5    6    7    8    9    0    1    2    3    4    5    6    7    8   
 1B0   9    0    1    2    3    4    5    6    7    8    9    0    1    2    3    4   
 1C0   5    6    7    8    9    0    1    2    3    4    5    6    7    8    9    0   
 1D0   1    2    3    4    5    6    7    8    9    0    1    2    3    4    5    6   
 1E0   7    8    9    0    1    2    3    4    5    6    7    8    9    0    1    2   
 1F0   3    4    5    6    7    8    9    0    1    2    3    4    5    6    7    8   
 200   9    0    1    2    3    4    5    6   
Error: cannot write file 'test1.bin'

---- TEST: xfget_c2sstr ----

Error: cannot read file 'test1.bin'
Error: cannot read file 'test1.bin'
END

# delete directories and files
remove_tree(qw( x1 x2 x3 ));
unlink_testfiles('f0');
done_testing;


__END__
# $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/t/Attic/whitebox-file.t,v 1.18 2013-09-26 21:38:08 pauloscustodio Exp $
# $Log: whitebox-file.t,v $
# Revision 1.18  2013-09-26 21:38:08  pauloscustodio
# Set error location while reading files.
# Delete File object when popping from FileStack.
#
# Revision 1.17  2013/09/23 23:14:10  pauloscustodio
# Renamed SzList to StringList, simplified interface by assuming that
# list lives in memory util program ends; it is used for directory searches
# only. Moved interface to strutil.c, removed strlist.c.
#
# Revision 1.16  2013/09/22 21:04:21  pauloscustodio
# New File and FileStack objects
#
# Revision 1.15  2013/09/09 00:20:45  pauloscustodio
# Add default set of modules to t_compile_module:
# -DMEMALLOC_DEBUG memalloc.c die.o except.o strpool.o
#
# Revision 1.14  2013/09/08 00:43:59  pauloscustodio
# New error module with one error function per error, no need for the error
# constants. Allows compiler to type-check error message arguments.
# Included the errors module in the init() mechanism, no need to call
# error initialization from main(). Moved all error-testing scripts to
# one file errors.t.
#
# Revision 1.13  2013/09/01 17:39:26  pauloscustodio
# Change in test output due to memalloc change.
#
# Revision 1.12  2013/09/01 11:52:55  pauloscustodio
# Setup memalloc on init.c.
# Setup GLib memory allocation functions to use memalloc functions.
#
# Revision 1.11  2013/05/12 19:20:34  pauloscustodio
# warnings
#
# Revision 1.10  2013/05/11 00:29:26  pauloscustodio
# CH_0021 : Exceptions on file IO show file name
# Keep a hash table of all opened file names, so that the file name
# is shown on a fatal error.
# Rename file IO funtions: f..._err to xf...
#
# Revision 1.9  2013/04/04 23:08:18  pauloscustodio
# Helper functions to create file names of each of the extensions used in z80asm
#
# Revision 1.8  2013/02/27 20:56:52  pauloscustodio
# search_file() now accepts a NULL dir_list.
#
# Revision 1.7  2013/02/27 20:47:30  pauloscustodio
# Renamed StrList to SzList to solve conflict with CLASS_LIST( Str ) also generating a class StrList
#
# Revision 1.6  2013/02/25 21:36:17  pauloscustodio
# Uniform the APIs of classhash, classlist, strhash, strlist
#
# Revision 1.5  2013/01/20 21:24:29  pauloscustodio
# Updated copyright year to 2013
#
# Revision 1.4  2013/01/19 23:54:04  pauloscustodio
# BUG_0023 : Error file with warning is removed in link phase
# z80asm -b f1.asm
# If assembling f1.asm produces a warning, the link phase removes the f1.err
# file hidding the warning.
#
# Revision 1.3  2012/06/14 15:01:27  pauloscustodio
# Split safe strings from strutil.c to safestr.c
#
# Revision 1.2  2012/05/26 18:50:26  pauloscustodio
# Use .o instead of .c to build test program, faster compilation.
# Use gcc to compile instead of cc.
#
# Revision 1.1  2012/05/24 21:44:00  pauloscustodio
# New search_file() to search file in a StrList
#
