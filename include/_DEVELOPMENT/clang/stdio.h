
// automatically generated by m4 from headers in proto subdir


#ifndef __STDIO_H__
#define __STDIO_H__

#include <stdint.h>

// DATA STRUCTURES

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int    size_t;
#endif

typedef unsigned long   fpos_t;
typedef struct { unsigned char file[13];} FILE;

#ifndef NULL
#define NULL            ((void*)(0))
#endif

#define _IOFBF          0
#define _IOLBF          1
#define _IONBF          2

#define BUFSIZ          1      // clib does not do high level buffering

#define EOF             (-1)

extern unsigned char    _MAX_FOPEN[];
#define FOPEN_MAX       ((unsigned int)_MAX_FOPEN)

#define FILENAME_MAX    128

#define L_tmpnam        8
#define TMP_MAX         16

#ifndef SEEK_SET
#define SEEK_SET        0
#endif

#ifndef SEEK_CUR
#define SEEK_CUR        1
#endif

#ifndef SEEK_END
#define SEEK_END        2
#endif

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

#ifdef __CPM

extern FILE *stdrdr;
extern FILE *stdpun;
extern FILE *stdlst;

#endif

// FUNCTIONS

extern FILE *_fmemopen_(void **bufp,size_t *sizep,char *mode);


extern int asprintf(char **ptr,char *format,...);


extern void clearerr(FILE *stream);


extern int fclose(FILE *stream);


extern FILE *fdopen(int fd,const char *mode);


extern int feof(FILE *stream);


extern int ferror(FILE *stream);


extern int fflush(FILE *stream);


extern int fgetc(FILE *stream);


extern int fgetpos(FILE *stream,fpos_t *pos);


extern char *fgets(char *s,int n,FILE *stream);


extern int fileno(FILE *stream);


extern void flockfile(FILE *stream);


extern FILE *fmemopen(void *buf,size_t size,char *mode);


extern FILE *fopen(const char *filename,const char *mode);


extern int fprintf(FILE *stream,char *format,...);


extern int fputc(int c,FILE *stream);


extern int fputs(char *s,FILE *stream);


extern size_t fread(void *ptr,size_t size,size_t nmemb,FILE *stream);


extern FILE *freopen(char *filename,char *mode,FILE *stream);


extern int fscanf(FILE *stream,char *format,...);


extern int fseek(FILE *stream,long offset,int whence);


extern int fsetpos(FILE *stream,fpos_t *pos);


extern uint32_t ftell(FILE *stream);


extern int ftrylockfile(FILE *stream);


extern void funlockfile(FILE *stream);


extern size_t fwrite(void *ptr,size_t size,size_t nmemb,FILE *stream);


extern int getc(FILE *stream);


extern int getchar(void);


extern int getdelim(char **lineptr,size_t *n,int delim,FILE *stream);


extern int getline(char **lineptr,size_t *n,FILE *stream);


extern char *gets(char *s);


extern int obstack_printf(struct obstack *ob,char *format,...);


extern int obstack_vprintf(struct obstack *ob,char *format,void *arg);


extern FILE *open_memstream(char **bufp,size_t *sizep);


extern void perror(char *s);


extern int printf(char *format,...);


extern int putc(int c,FILE *stream);


extern int putchar(int c);


extern int puts(char *s);


extern void rewind(FILE *stream);


extern int scanf(char *format,...);


extern int snprintf(char *s,size_t n,char *format,...);


extern int sprintf(char *s,char *format,...);


extern int sscanf(char *s,char *format,...);


extern int ungetc(int c,FILE *stream);


extern int vasprintf(char **ptr,char *format,void *arg);


extern int vfprintf(FILE *stream,char *format,void *arg);


extern int vfscanf(FILE *stream,char *format,void *arg);


extern int vprintf(char *format,void *arg);


extern int vscanf(char *format,void *arg);


extern int vsnprintf(char *s,size_t n,char *format,void *arg);


extern int vsprintf(char *s,char *format,void *arg);


extern int vsscanf(char *s,char *format,void *arg);



extern void clearerr_unlocked(FILE *stream);


extern int fclose_unlocked(FILE *stream);


extern int feof_unlocked(FILE *stream);


extern int ferror_unlocked(FILE *stream);


extern int fflush_unlocked(FILE *stream);


extern int fgetc_unlocked(FILE *stream);


extern int fgetpos_unlocked(FILE *stream,fpos_t *pos);


extern char *fgets_unlocked(char *s,int n,FILE *stream);


extern int fileno_unlocked(FILE *stream);


extern int fprintf_unlocked(FILE *stream,char *format,...);


extern int fputc_unlocked(int c,FILE *stream);


extern int fputs_unlocked(char *s,FILE *stream);


extern size_t fread_unlocked(void *ptr,size_t size,size_t nmemb,FILE *stream);


extern FILE *freopen_unlocked(char *filename,char *mode,FILE *stream);


extern int fscanf_unlocked(FILE *stream,char *format,...);


extern int fseek_unlocked(FILE *stream,long offset,int whence);


extern int fsetpos_unlocked(FILE *stream,fpos_t *pos);


extern uint32_t ftell_unlocked(FILE *stream);


extern size_t fwrite_unlocked(void *ptr,size_t size,size_t nmemb,FILE *stream);


extern int getc_unlocked(FILE *stream);


extern int getchar_unlocked(void);


extern int getdelim_unlocked(char **lineptr,size_t *n,int delim,FILE *stream);


extern int getline_unlocked(char **lineptr,size_t *n,FILE *stream);


extern char *gets_unlocked(char *s);


extern int printf_unlocked(char *format,...);


extern int putc_unlocked(int c,FILE *stream);


extern int putchar_unlocked(int c);


extern int puts_unlocked(char *s);


extern void rewind_unlocked(FILE *stream);


extern int scanf_unlocked(char *format,...);


extern int ungetc_unlocked(int c,FILE *stream);


extern int vfprintf_unlocked(FILE *stream,char *format,void *arg);


extern int vfscanf_unlocked(FILE *stream,char *format,void *arg);


extern int vprintf_unlocked(char *format,void *arg);


extern int vscanf_unlocked(char *format,void *arg);



#endif
