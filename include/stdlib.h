#ifndef STDLIB_H
#define STDLIB_H

/*
 * Lots of nice support functions here and a few defines
 * to support some functions
 */

extern __LIB__ abs(int);
extern long __LIB__ labs(long);
extern __LIB__ atexit();
extern __LIB__ __FASTCALL__ exit(int);  /* Fast call stops pushing on stack*/


extern long __LIB__ strtol(char *,char **,int);
extern unsigned long __LIB__ strtoul(char *,char **,int);

#ifndef USEATOISTRTOL
extern int __LIB__ atoi(char *);
#else
#define atoi(s) (int)strtol((s),(char **)NULL,10)
#endif

#ifdef __Z88__
extern long __LIB__ atol(char *);
#else
#define atol(s) strtol((s),(char **)NULL,10)
#endif

#if 0
#ifndef _HAVE_ATOF_
#define _HAVE_ATOF_
extern double __LIB__ atof(char *);
#endif
#endif


/* random number things */

extern int __LIB__ rand(void);
extern void __LIB__ srand(int);

extern __LIB__ sleep(int);


/* Non standard stdlib.h defs (mode is ignored)*/
extern __LIB__ mkdir(char *, int mode);
extern char __LIB__ *getcwd(char *buf, int maxlen); 

#ifdef __Z88__
extern __LIB__ csleep(int);  /* Very non standard! sleep for centisecs! (z88)*/
#endif

/* abort is a macro to exit with RC_Err - only for apps */

#define abort() exit(15)

/*
 *	Okay..include in malloc.h to be standard..
 */
#include <malloc.h>

#endif
