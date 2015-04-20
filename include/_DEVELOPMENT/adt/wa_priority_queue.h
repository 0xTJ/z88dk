
#ifndef _ADT_WA_PRIORITY_QUEUE_H
#define _ADT_WA_PRIORITY_QUEUE_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct wa_priority_queue_s
{

   void       *compar;
   void       *data;
   size_t      size;
   size_t      capacity;

} wa_priority_queue_t;

#ifdef __SDCC

// SDCC

extern size_t               wa_priority_queue_capacity(wa_priority_queue_t *q);
extern void                 wa_priority_queue_clear(wa_priority_queue_t *q);
extern void                *wa_priority_queue_data(wa_priority_queue_t *q);
extern void                 wa_priority_queue_destroy(wa_priority_queue_t *q);
extern int                  wa_priority_queue_empty(wa_priority_queue_t *q);
extern wa_priority_queue_t *wa_priority_queue_init(void *p, void *data, size_t capacity, void *compar);
extern void                *wa_priority_queue_pop(wa_priority_queue_t *q);
extern int                  wa_priority_queue_push(wa_priority_queue_t *q, void *item);
extern int                  wa_priority_queue_resize(wa_priority_queue_t *q, size_t n);
extern size_t               wa_priority_queue_size(wa_priority_queue_t *q);
extern void                *wa_priority_queue_top(wa_priority_queue_t *q);

#ifdef __SDCC_ENABLE_FASTCALL

// SDCC FASTCALL LINKAGE

extern size_t               wa_priority_queue_capacity_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;
extern void                 wa_priority_queue_clear_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;
extern void                *wa_priority_queue_data_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;
extern void                 wa_priority_queue_destroy_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;
extern int                  wa_priority_queue_empty_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;
extern void                *wa_priority_queue_pop_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;
extern size_t               wa_priority_queue_size_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;
extern void                *wa_priority_queue_top_fastcall(wa_priority_queue_t *q) __z88dk_fastcall;

// SDCC MAKE FASTCALL LINKAGE THE DEFAULT

#define wa_priority_queue_capacity(a)            wa_priority_queue_capacity_fastcall(a)
#define wa_priority_queue_clear(a)               wa_priority_queue_clear_fastcall(a)
#define wa_priority_queue_data(a)                wa_priority_queue_data_fastcall(a)
#define wa_priority_queue_destroy(a)             wa_priority_queue_destroy_fastcall(a)
#define wa_priority_queue_empty(a)               wa_priority_queue_empty_fastcall(a)
#define wa_priority_queue_pop(a)                 wa_priority_queue_pop_fastcall(a)
#define wa_priority_queue_size(a)                wa_priority_queue_size_fastcall(a)
#define wa_priority_queue_top(a)                 wa_priority_queue_top_fastcall(a)

#endif

#else

// SCCZ80

extern size_t              __LIB__ __FASTCALL__  wa_priority_queue_capacity(wa_priority_queue_t *q);
extern void                __LIB__ __FASTCALL__  wa_priority_queue_clear(wa_priority_queue_t *q);
extern void                __LIB__ __FASTCALL__ *wa_priority_queue_data(wa_priority_queue_t *q);
extern void                __LIB__ __FASTCALL__  wa_priority_queue_destroy(wa_priority_queue_t *q);
extern int                 __LIB__ __FASTCALL__  wa_priority_queue_empty(wa_priority_queue_t *q);
extern wa_priority_queue_t __LIB__              *wa_priority_queue_init(void *p, void *data, size_t capacity, void *compar);
extern void                __LIB__ __FASTCALL__ *wa_priority_queue_pop(wa_priority_queue_t *q);
extern int                 __LIB__               wa_priority_queue_push(wa_priority_queue_t *q, void *item);
extern int                 __LIB__               wa_priority_queue_resize(wa_priority_queue_t *q, size_t n);
extern size_t              __LIB__ __FASTCALL__  wa_priority_queue_size(wa_priority_queue_t *q);
extern void                __LIB__ __FASTCALL__ *wa_priority_queue_top(wa_priority_queue_t *q);

// SCCZ80 CALLEE LINKAGE

extern wa_priority_queue_t __LIB__ __CALLEE__   *wa_priority_queue_init_callee(void *p, void *data, size_t capacity, void *compar);
extern int                 __LIB__ __CALLEE__    wa_priority_queue_push_callee(wa_priority_queue_t *q, void *item);
extern int                 __LIB__ __CALLEE__    wa_priority_queue_resize_callee(wa_priority_queue_t *q, size_t n);

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#define wa_priority_queue_init(a,b,c,d)          wa_priority_queue_init_callee(a,b,c,d)
#define wa_priority_queue_push(a,b)              wa_priority_queue_push_callee(a,b)
#define wa_priority_queue_resize(a,b)            wa_priority_queue_resize_callee(a,b)

#endif

#endif
