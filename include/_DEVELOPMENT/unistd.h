
#ifndef _UNISTD_H
#define _UNISTD_H

#ifndef NULL
#define NULL                   ((void*)(0))
#endif

#ifndef SEEK_SET
#define SEEK_SET               0
#endif

#ifndef SEEK_CUR
#define SEEK_CUR               1
#endif

#ifndef SEEK_END
#define SEEK_END               2
#endif

#define STDIN_FILENO           0
#define STDOUT_FILENO          1
#define STDERR_FILENO          2

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int           size_t;
#endif

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED
typedef unsigned int           ssize_t;
#endif

#ifndef _OFF_T_DEFINED
#define _OFF_T_DEFINED
typedef unsigned long          off_t;
#endif

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
typedef int                    intptr_t;
#endif


#ifdef __SDCC

// SDCC

extern int               close(int fd);
extern int               dup(int fd);
extern int               dup2(int fd, int fd2);
extern void              _exit(int status);
extern off_t             lseek(int fd, off_t offset, int whence);
extern ssize_t           read(int fd, void *buf, size_t nbyte);
extern ssize_t           write(int fd, const void *buf, size_t nbyte);

#ifdef __SDCC_ENABLE_FASTCALL

// SDCC FASTCALL LINKAGE

extern int               close_fastcall(int fd) __z88dk_fastcall;
extern int               dup_fastcall(int fd) __z88dk_fastcall;
extern void              _exit_fastcall(int status) __z88dk_fastcall;

// SDCC MAKE FASTCALL LINKAGE THE DEFAULT

#define close(a)         close_fastcall(a)
#define dup(a)           dup_fastcall(a)
#define _exit(a)         _exit_fastcall(a)

#endif

#else

// SCCZ80

extern int      __LIB__ __FASTCALL__ close(int fd);
extern int      __LIB__ __FASTCALL__ dup(int fd);
extern int      __LIB__              dup2(int fd, int fd2);
extern void     __LIB__ __FASTCALL__ _exit(int status);
extern off_t    __LIB__              lseek(int fd, off_t offset, int whence);
extern ssize_t  __LIB__              read(int fd, void *buf, size_t nbyte);
extern ssize_t  __LIB__              write(int fd, const void *buf, size_t nbyte);

// SCCZ80 CALLEE LINKAGE

extern int      __LIB__ __CALLEE__   dup2_callee(int fd, int fd2);
extern off_t    __LIB__ __CALLEE__   lseek_callee(int fd, off_t offset, int whence);
extern ssize_t  __LIB__ __CALLEE__   read_callee(int fd, void *buf, size_t nbyte);
extern ssize_t  __LIB__ __CALLEE__   write_callee(int fd, const void *buf, size_t nbyte);

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#define dup2(a,b)                    dup2_callee(a,b)
#define lseek(a,b,c)                 lseek_callee(a,b,c)
#define read(a,b,c)                  read_callee(a,b,c)
#define write(a,b,c)                 write_callee(a,b,c)

#endif

#endif
