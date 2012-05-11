/*
     ZZZZZZZZZZZZZZZZZZZZ    8888888888888       00000000000
   ZZZZZZZZZZZZZZZZZZZZ    88888888888888888    0000000000000
                ZZZZZ      888           888  0000         0000
              ZZZZZ        88888888888888888  0000         0000
            ZZZZZ            8888888888888    0000         0000       AAAAAA         SSSSSSSSSSS   MMMM       MMMM
          ZZZZZ            88888888888888888  0000         0000      AAAAAAAA      SSSS            MMMMMM   MMMMMM
        ZZZZZ              8888         8888  0000         0000     AAAA  AAAA     SSSSSSSSSSS     MMMMMMMMMMMMMMM
      ZZZZZ                8888         8888  0000         0000    AAAAAAAAAAAA      SSSSSSSSSSS   MMMM MMMMM MMMM
    ZZZZZZZZZZZZZZZZZZZZZ  88888888888888888    0000000000000     AAAA      AAAA           SSSSS   MMMM       MMMM
  ZZZZZZZZZZZZZZZZZZZZZ      8888888888888       00000000000     AAAA        AAAA  SSSSSSSSSSS     MMMM       MMMM

Copyright (C) Gunther Strube, InterLogic 1993-99
Copyright (C) Paulo Custodio, 2011

Utilities for file handling
*/

/* $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/Attic/file.c,v 1.6 2012-05-11 19:29:49 pauloscustodio Exp $ */
/* $Log: file.c,v $
/* Revision 1.6  2012-05-11 19:29:49  pauloscustodio
/* Format code with AStyle (http://astyle.sourceforge.net/) to unify brackets, spaces instead of tabs, indenting style, space padding in parentheses and operators. Options written in the makefile, target astyle.
/*         --mode=c
/*         --lineend=linux
/*         --indent=spaces=4
/*         --style=ansi --add-brackets
/*         --indent-switches --indent-classes
/*         --indent-preprocessor --convert-tabs
/*         --break-blocks
/*         --pad-oper --pad-paren-in --pad-header --unpad-paren
/*         --align-pointer=name
/*
/* Revision 1.5  2011/10/14 14:54:54  pauloscustodio
/* - New path_basename() in file.c, change functions to return result string
/*  pointer.
/*
/* Revision 1.4  2011/09/30 10:30:06  pauloscustodio
/* BUG_0014 : -x./zx_clib should create ./zx_clib.lib but actually creates .lib
/* (reported on Tue, Sep 27, 2011 at 8:09 PM by dom)
/* path_remove_ext() removed everything after last ".", ignoring directory
/*  separators. Fixed.
/*
/* Revision 1.3  2011/08/21 20:21:21  pauloscustodio
/* CH_0005 : handle files as char[FILENAME_MAX] instead of strdup for every operation
/* - Factor all pathname manipulation into module file.c.
/*
/* Revision 1.2  2011/08/18 23:27:54  pauloscustodio
/* BUG_0009 : file read/write not tested for errors
/* - In case of disk full file write fails, but assembler does not detect the error
/*   and leaves back corruped object/binary files
/* - Created new exception FileIOException and ERR_FILE_IO error.
/* - Created new functions xfputc, xfgetc, ... to raise the exception on error.
/*
/* Revision 1.1  2011/08/18 21:42:05  pauloscustodio
/* Utilities for file handling
/*
/* */

#include <string.h>
#include <stdlib.h>
#include "file.h"
#include "config.h"

/*-----------------------------------------------------------------------------
*   File IO with exception
*----------------------------------------------------------------------------*/
int xfputc( int c, FILE *stream )
{
    int ret = fputc( c, stream );

    if ( ret == EOF )
    {
        throw( FileIOException, "fputc error" );
    }

    return ret;
}

int xfgetc( FILE *stream )
{
    int ret = fgetc( stream );

    if ( ret == EOF )
    {
        throw( FileIOException, "fgetc error" );
    }

    return ret;
}

size_t xfwrite( const void *buffer, size_t size, size_t count, FILE *stream )
{
    size_t written = fwrite( buffer, size, count, stream );

    if ( written != count )
    {
        throw( FileIOException, "fwrite error" );
    }

    return written;
}

size_t xfread( void *buffer, size_t size, size_t count, FILE *stream )
{
    size_t read = fread( buffer, size, count, stream );

    if ( read != count )
    {
        throw( FileIOException, "fread error" );
    }

    return read;
}

/*-----------------------------------------------------------------------------
*   File IO words and longs
*----------------------------------------------------------------------------*/
void xfput_word( size_t word, FILE *stream )
{
    xfputc( word & 0xFF, stream );
    word >>= 8;
    xfputc( word & 0xFF, stream );
    word >>= 8;
}

size_t xfget_word( FILE *stream )
{
    size_t word =  xfgetc( stream );
    word       |= ( xfgetc( stream ) << 8 );
    return word;
}

void xfput_long( long dword, FILE *stream )
{
    xfputc( dword & 0xFF, stream );
    dword >>= 8;
    xfputc( dword & 0xFF, stream );
    dword >>= 8;
    xfputc( dword & 0xFF, stream );
    dword >>= 8;
    xfputc( dword & 0xFF, stream );
    dword >>= 8;
}

long xfget_long( FILE *stream )
{
    long dword =  xfgetc( stream );
    dword     |= ( xfgetc( stream ) <<  8 );
    dword     |= ( xfgetc( stream ) << 16 );
    dword     |= ( xfgetc( stream ) << 24 );

    return dword;
}

/*-----------------------------------------------------------------------------
*   Pathname manipulation
*   All filenames are passed as char file[FILENAME_MAX] elements
*   return string is written to passed buffer and returned by the function
*----------------------------------------------------------------------------*/

/* remove the extension of the passed filename, modifies the string in place */
char *path_remove_ext( char *filename )
{
    char *dot_pos = strrchr( filename, FILEEXT_SEPARATOR[0] );
    char *dir_pos;

    if ( dot_pos != NULL )
    {
        /* BUG_0014 : need to ignore dot if before a directory separator */
        dir_pos = strrchr( filename, '/' );

        if ( dir_pos != NULL && dot_pos < dir_pos )
        {
            return filename;    /* dot before slash */
        }

        dir_pos = strrchr( filename, '\\' );

        if ( dir_pos != NULL && dot_pos < dir_pos )
        {
            return filename;    /* dot before backslash */
        }

        *dot_pos = '\0';                /* terminate the string */
    }

    return filename;
}

/* make a copy of the file name, replacing the extension */
char *path_replace_ext( char *dest, const char *source, const char *new_ext )
{
    int length;

    dest[0] = '\0';                     /* prepare for strncat */
    strncat( dest, source, FILENAME_MAX - 1 );

    path_remove_ext( dest );            /* file without extension */

    /* copy extension, make sure the final file fits in FILENAME_MAX-1 */
    length = strlen( dest );
    strncat( dest + length, new_ext, FILENAME_MAX - 1 - length );

    return dest;
}

/* make a copy of the file basename, skipping the directory part */
char *path_basename( char *dest, const char *source )
{
    const char *path_sep1, *path_sep2, *basename;

    path_sep1 = strrchr( source, '/' );

    if ( path_sep1 == NULL )
    {
        path_sep1 = source - 1;
    }

    path_sep2 = strrchr( source, '\\' );

    if ( path_sep2 == NULL )
    {
        path_sep2 = source - 1;
    }

    if ( path_sep1 > path_sep2 )
    {
        basename = path_sep1 + 1;
    }
    else
    {
        basename = path_sep2 + 1;
    }

    dest[0] = '\0';                     /* prepare for strncat */
    strncat( dest, basename, FILENAME_MAX - 1 );

    return dest;
}


