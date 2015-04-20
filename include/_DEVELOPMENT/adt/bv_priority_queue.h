
#ifndef _ADT_BV_PRIORITY_QUEUE_H
#define _ADT_BV_PRIORITY_QUEUE_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct bv_priority_queue_s
{

   void       *compar;
   void       *data;
   size_t      size;
   size_t      capacity;
   size_t      max_size;

} bv_priority_queue_t;

#ifdef __SDCC

// SDCC

extern size_t               bv_priority_queue_capacity(bv_priority_queue_t *q);
extern void                 bv_priority_queue_clear(bv_priority_queue_t *q);
extern void                *bv_priority_queue_data(bv_priority_queue_t *q);
extern void                 bv_priority_queue_destroy(bv_priority_queue_t *q);
extern int                  bv_priority_queue_empty(bv_priority_queue_t *q);
extern bv_priority_queue_t *bv_priority_queue_init(void *p, size_t capacity, size_t max_size, void *compar);
extern size_t               bv_priority_queue_max_size(bv_priority_queue_t *q);
extern int                  bv_priority_queue_pop(bv_priority_queue_t *q);
extern int                  bv_priority_queue_push(bv_priority_queue_t *q, int c);
extern int                  bv_priority_queue_reserve(bv_priority_queue_t *q, size_t n);
extern int                  bv_priority_queue_resize(bv_priority_queue_t *q, size_t n);
extern int                  bv_priority_queue_shrink_to_fit(bv_priority_queue_t *q);
extern size_t               bv_priority_queue_size(bv_priority_queue_t *q);
extern int                  bv_priority_queue_top(bv_priority_queue_t *q);

#ifndef __SDCC_DISABLE_FASTCALL

// SDCC FASTCALL LINKAGE

extern size_t               bv_priority_queue_capacity_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern void                 bv_priority_queue_clear_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern void                *bv_priority_queue_data_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern void                 bv_priority_queue_destroy_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern int                  bv_priority_queue_empty_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern size_t               bv_priority_queue_max_size_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern int                  bv_priority_queue_pop_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern int                  bv_priority_queue_shrink_to_fit_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern size_t               bv_priority_queue_size_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;
extern int                  bv_priority_queue_top_fastcall(bv_priority_queue_t *q) __z88dk_fastcall;

// SDCC MAKE FASTCALL LINKAGE THE DEFAULT

#define bv_priority_queue_capacity(a)            bv_priority_queue_capacity_fastcall(a)
#define bv_priority_queue_clear(a)               bv_priority_queue_clear_fastcall(a)
#define bv_priority_queue_data(a)                bv_priority_queue_data_fastcall(a)
#define bv_priority_queue_destroy(a)             bv_priority_queue_destroy_fastcall(a)
#define bv_priority_queue_empty(a)               bv_priority_queue_empty_fastcall(a)
#define bv_priority_queue_max_size(a)            bv_priority_queue_max_size_fastcall(a)
#define bv_priority_queue_pop(a)                 bv_priority_queue_pop_fastcall(a)
#define bv_priority_queue_shrink_to_fit(a)       bv_priority_queue_shrink_to_fit_fastcall(a)
#define bv_priority_queue_size(a)                bv_priority_queue_size_fastcall(a)
#define bv_priority_queue_top(a)                 bv_priority_queue_top_fastcall(a)

#endif

#else

// SCCZ80

extern size_t              __LIB__ __FASTCALL__  bv_priority_queue_capacity(bv_priority_queue_t *q);
extern void                __LIB__ __FASTCALL__  bv_priority_queue_clear(bv_priority_queue_t *q);
extern void                __LIB__ __FASTCALL__ *bv_priority_queue_data(bv_priority_queue_t *q);
extern void                __LIB__ __FASTCALL__  bv_priority_queue_destroy(bv_priority_queue_t *q);
extern int                 __LIB__ __FASTCALL__  bv_priority_queue_empty(bv_priority_queue_t *q);
extern bv_priority_queue_t __LIB__              *bv_priority_queue_init(void *p, size_t capacity, size_t max_size, void *compar);
extern size_t              __LIB__ __FASTCALL__  bv_priority_queue_max_size(bv_priority_queue_t *q);
extern int                 __LIB__ __FASTCALL__  bv_priority_queue_pop(bv_priority_queue_t *q);
extern int                 __LIB__               bv_priority_queue_push(bv_priority_queue_t *q, int c);
extern int                 __LIB__               bv_priority_queue_reserve(bv_priority_queue_t *q, size_t n);
extern int                 __LIB__               bv_priority_queue_resize(bv_priority_queue_t *q, size_t n);
extern int                 __LIB__ __FASTCALL__  bv_priority_queue_shrink_to_fit(bv_priority_queue_t *q);
extern size_t              __LIB__ __FASTCALL__  bv_priority_queue_size(bv_priority_queue_t *q);
extern int                 __LIB__ __FASTCALL__  bv_priority_queue_top(bv_priority_queue_t *q);

// SCCZ80 CALLEE LINKAGE

extern bv_priority_queue_t __LIB__ __CALLEE__   *bv_priority_queue_init_callee(void *p, size_t capacity, size_t max_size, void *compar);
extern int                 __LIB__ __CALLEE__    bv_priority_queue_push_callee(bv_priority_queue_t *q, int c);
extern int                 __LIB__ __CALLEE__    bv_priority_queue_reserve_callee(bv_priority_queue_t *q, size_t n);
extern int                 __LIB__ __CALLEE__    bv_priority_queue_resize_callee(bv_priority_queue_t *q, size_t n);

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#define bv_priority_queue_init(a,b,c,d)          bv_priority_queue_init_callee(a,b,c,d)
#define bv_priority_queue_push(a,b)              bv_priority_queue_push_callee(a,b)
#define bv_priority_queue_reserve(a,b)           bv_priority_queue_reserve_callee(a,b)
#define bv_priority_queue_resize(a,b)            bv_priority_queue_resize_callee(a,b)

#endif

#endif
