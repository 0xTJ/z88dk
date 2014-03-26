
#ifndef _STDLIB_H
#define _STDLIB_H

// SCCZ80

extern void   __LIB__               _div(div_t *d, int numer, int denom);
extern void   __LIB__               _ldiv(ldiv_t *ld, long numer, long denom);
extern int    __LIB__               _strtoi(char *nptr, char **endptr, int base);
extern uint   __LIB__               _strtou(char *nptr, char **endptr, int base);
extern int    __LIB__ __FASTCALL__  abs(int j);
extern int    __LIB__ __FASTCALL__  at_quick_exit(void *func);
extern int    __LIB__ __FASTCALL__  atexit(void *func);
extern int    __LIB__ __FASTCALL__  atoi(char *buf);
extern long   __LIB__ __FASTCALL__  atol(char *buf);
extern void   __LIB__               bsearch(void *key, void *base, size_t nmemb, size_t size, void *compar);
extern void   __LIB__ __FASTCALL__  exit(int status);
extern char   __LIB__              *itoa(int num, char *buf, int radix);
extern long   __LIB__ __FASTCALL__  labs(long j);
extern char   __LIB__              *ltoa(long num, char *buf, int radix);
extern void   __LIB__               qsort(void *base, size_t nmemb, size_t size, void *compar);
extern void   __LIB__ __FASTCALL__  quick_exit(int status);
extern int    __LIB__               rand(void);
extern void   __LIB__ __FASTCALL__  srand(uint seed);
extern long   __LIB__               strtol(char *nptr, char **endptr, int base);
extern ulong  __LIB__               strtoul(char *nptr, char **endptr, int base);
extern int    __LIB__ __FASTCALL__  system(char *s);
extern char   __LIB__              *ultoa(ulong num, char *buf, int radix);
extern char   __LIB__              *utoa(uint num, char *buf, int radix);

#ifndef _ALLOC_H

extern void   __LIB__              *aligned_alloc(size_t alignment, size_t size);
extern void   __LIB__              *calloc(size_t nmemb, size_t size);
extern void   __LIB__ __FASTCALL__  free(void *p);
extern void   __LIB__ __FASTCALL__ *malloc(size_t size);
extern void   __LIB__              *realloc(void *p, size_t size);

#endif

// SCCZ80 CALLEE LINKAGE

extern void   __LIB__ __CALLEE__    _div_callee(div_t *d, int numer, int denom);
extern void   __LIB__ __CALLEE__    _ldiv_callee(ldiv_t *ld, long numer, long denom);
extern int    __LIB__ __CALLEE__    _strtoi_callee(char *nptr, char **endptr, int base);
extern uint   __LIB__ __CALLEE__    _strtou_callee(char *nptr, char **endptr, int base);
extern void   __LIB__ __CALLEE__    bsearch_callee(void *key, void *base, size_t nmemb, size_t size, void *compar);
extern char   __LIB__ __CALLEE__   *itoa_callee(int num, char *buf, int radix);
extern char   __LIB__ __CALLEE__   *ltoa_callee(long num, char *buf, int radix);
extern void   __LIB__ __CALLEE__    qsort_callee(void *base, size_t nmemb, size_t size, void *compar);
extern long   __LIB__ __CALLEE__    strtol_callee(char *nptr, char **endptr, int base);
extern ulong  __LIB__ __CALLEE__    strtoul_callee(char *nptr, char **endptr, int base);
extern char   __LIB__ __CALLEE__   *ultoa_callee(ulong num, char *buf, int radix);
extern char   __LIB__ __CALLEE__   *utoa_callee(uint num, char *buf, int radix);

#ifndef _ALLOC_H

extern void   __LIB__ __CALLEE__   *aligned_alloc_callee(size_t alignment, size_t size);
extern void   __LIB__ __CALLEE__   *calloc_callee(size_t nmemb, size_t size);
extern void   __LIB__ __CALLEE__   *realloc_callee(void *p, size_t size);

#endif

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#define _div(a,b,c)                 _div_callee(a,b,c)
#define _ldiv(a,b,c)                _ldiv_callee(a,b,c)
#define _strtoi(a,b,c)              _strtoi_callee(a,b,c)
#define _strtou(a,b,c)              _strtou_callee(a,b,c)
#define bsearch(a,b,c,d,e)          bsearch_callee(a,b,c,d,e)
#define itoa(a,b,c)                 itoa_callee(a,b,c)
#define ltoa(a,b,c)                 ltoa_callee(a,b,c)
#define qsort(a,b,c,d)              qsort_callee(a,b,c,d)
#define strtol(a,b,c)               strtol_callee(a,b,c)
#define strtoul(a,b,c)              strtoul_callee(a,b,c)
#define ultoa(a,b,c)                ultoa_callee(a,b,c)
#define utoa(a,b,c)                 utoa_callee(a,b,c)

#ifndef _ALLOC_H

#define aligned_alloc(a,b)          aligned_alloc_callee(a,b)
#define calloc(a,b)                 calloc_callee(a,b)
#define realloc(a,b)                realloc_callee(a,b)

#endif

#endif
