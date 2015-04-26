
#ifndef _ADT_W_VECTOR_H
#define _ADT_W_VECTOR_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct w_vector_s
{

   void       *data;
   size_t      size;
   size_t      capacity;
   size_t      max_size;

} w_vector_t;

#ifdef __SDCC

// SDCC

extern size_t      w_vector_append(w_vector_t *v, void *item);
extern size_t      w_vector_append_n(w_vector_t *v, size_t n, void *item);
extern void        w_vector_at(w_vector_t *v, size_t idx);
extern void       *w_vector_back(w_vector_t *v);
extern size_t      w_vector_capacity(w_vector_t *v);
extern void        w_vector_clear(w_vector_t *v);
extern void       *w_vector_data(w_vector_t *v);
extern void        w_vector_destroy(w_vector_t *v);
extern void        w_vector_empty(w_vector_t *v);
extern size_t      w_vector_erase(w_vector_t *v, size_t idx);
extern size_t      w_vector_erase_range(w_vector_t *v, size_t idx_first, size_t idx_last);
extern void       *w_vector_front(w_vector_t *v);
extern w_vector_t *w_vector_init(void *p, size_t capacity, size_t max_size);
extern size_t      w_vector_insert(w_vector_t *v, size_t idx, void *item);
extern size_t      w_vector_insert_n(w_vector_t *v, size_t idx, size_t n, void *item);
extern void       *w_vector_max_size(w_vector_t *v);
extern void       *w_vector_pop_back(w_vector_t *v);
extern size_t      w_vector_push_back(w_vector_t *v, void *item);
extern int         w_vector_reserve(w_vector_t *v, size_t n);
extern int         w_vector_resize(w_vector_t *v, size_t n);
extern int         w_vector_shrink_to_fit(w_vector_t *v);
extern size_t      w_vector_size(w_vector_t *v);

#ifndef __SDCC_DISABLE_FASTCALL

// SDCC FASTCALL LINKAGE

extern void       *w_vector_back_fastcall(w_vector_t *v) __z88dk_fastcall;
extern size_t      w_vector_capacity_fastcall(w_vector_t *v) __z88dk_fastcall;
extern void        w_vector_clear_fastcall(w_vector_t *v) __z88dk_fastcall;
extern void       *w_vector_data_fastcall(w_vector_t *v) __z88dk_fastcall;
extern void        w_vector_destroy_fastcall(w_vector_t *v) __z88dk_fastcall;
extern void        w_vector_empty_fastcall(w_vector_t *v) __z88dk_fastcall;
extern void       *w_vector_front_fastcall(w_vector_t *v) __z88dk_fastcall;
extern void       *w_vector_max_size_fastcall(w_vector_t *v) __z88dk_fastcall;
extern void       *w_vector_pop_back_fastcall(w_vector_t *v) __z88dk_fastcall;
extern int         w_vector_shrink_to_fit_fastcall(w_vector_t *v) __z88dk_fastcall;
extern size_t      w_vector_size_fastcall(w_vector_t *v) __z88dk_fastcall;

// SDCC MAKE FASTCALL LINKAGE THE DEFAULT

#define w_vector_back(a)                w_vector_back_fastcall(a)
#define w_vector_capacity(a)            w_vector_capacity_fastcall(a)
#define w_vector_clear(a)               w_vector_clear_fastcall(a)
#define w_vector_data(a)                w_vector_data_fastcall(a)
#define w_vector_destroy(a)             w_vector_destroy_fastcall(a)
#define w_vector_empty(a)               w_vector_empty_fastcall(a)
#define w_vector_front(a)               w_vector_front_fastcall(a)
#define w_vector_max_size(a)            w_vector_max_size_fastcall(a)
#define w_vector_pop_back(a)            w_vector_pop_back_fastcall(a)
#define w_vector_shrink_to_fit(a)       w_vector_shrink_to_fit_fastcall(a)
#define w_vector_size(a)                w_vector_size_fastcall(a)

#endif

#ifndef __SDCC_DISABLE_CALLEE

// SDCC CALLEE LINKAGE

extern size_t                           w_vector_append_callee(w_vector_t *v, void *item) __z88dk_callee;
extern size_t                           w_vector_append_n_callee(w_vector_t *v, size_t n, void *item) __z88dk_callee;
extern void                             w_vector_at_callee(w_vector_t *v, size_t idx) __z88dk_callee;
extern size_t                           w_vector_erase_callee(w_vector_t *v, size_t idx) __z88dk_callee;
extern size_t                           w_vector_erase_range_callee(w_vector_t *v, size_t idx_first, size_t idx_last) __z88dk_callee;
extern w_vector_t                      *w_vector_init_callee(void *p, size_t capacity, size_t max_size) __z88dk_callee;
extern size_t                           w_vector_insert_callee(w_vector_t *v, size_t idx, void *item) __z88dk_callee;
extern size_t                           w_vector_insert_n_callee(w_vector_t *v, size_t idx, size_t n, void *item) __z88dk_callee;
extern size_t                           w_vector_push_back_callee(w_vector_t *v, void *item) __z88dk_callee;
extern int                              w_vector_reserve_callee(w_vector_t *v, size_t n) __z88dk_callee;
extern int                              w_vector_resize_callee(w_vector_t *v, size_t n) __z88dk_callee;

// SDCC MAKE CALLEE LINKAGE THE DEFAULT

#define w_vector_append(a,b)                     w_vector_append_callee(a,b)
#define w_vector_append_n(a,b,c)                 w_vector_append_n_callee(a,b,c)
#define w_vector_at(a,b)                         w_vector_at_callee(a,b)
#define w_vector_erase(a,b)                      w_vector_erase_callee(a,b)
#define w_vector_erase_range(a,b,c)              w_vector_erase_range_callee(a,b,c)
#define w_vector_init(a,b,c)                     w_vector_init_callee(a,b,c)
#define w_vector_insert(a,b,c)                   w_vector_insert_callee(a,b,c)
#define w_vector_insert_n(a,b,c,d)               w_vector_insert_n_callee(a,b,c,d)
#define w_vector_push_back(a,b)                  w_vector_push_back_callee(a,b)
#define w_vector_reserve(a,b)                    w_vector_reserve_callee(a,b)
#define w_vector_resize(a,b)                     w_vector_resize_callee(a,b)

#endif

#else

// SCCZ80

extern size_t     __LIB__               w_vector_append(w_vector_t *v, void *item);
extern size_t     __LIB__               w_vector_append_n(w_vector_t *v, size_t n, void *item);
extern void       __LIB__               w_vector_at(w_vector_t *v, size_t idx);
extern void       __LIB__ __FASTCALL__ *w_vector_back(w_vector_t *v);
extern size_t     __LIB__ __FASTCALL__  w_vector_capacity(w_vector_t *v);
extern void       __LIB__ __FASTCALL__  w_vector_clear(w_vector_t *v);
extern void       __LIB__ __FASTCALL__ *w_vector_data(w_vector_t *v);
extern void       __LIB__ __FASTCALL__  w_vector_destroy(w_vector_t *v);
extern void       __LIB__ __FASTCALL__  w_vector_empty(w_vector_t *v);
extern size_t     __LIB__               w_vector_erase(w_vector_t *v, size_t idx);
extern size_t     __LIB__               w_vector_erase_range(w_vector_t *v, size_t idx_first, size_t idx_last);
extern void       __LIB__ __FASTCALL__ *w_vector_front(w_vector_t *v);
extern w_vector_t __LIB__              *w_vector_init(void *p, size_t capacity, size_t max_size);
extern size_t     __LIB__               w_vector_insert(w_vector_t *v, size_t idx, void *item);
extern size_t     __LIB__               w_vector_insert_n(w_vector_t *v, size_t idx, size_t n, void *item);
extern void       __LIB__ __FASTCALL__ *w_vector_max_size(w_vector_t *v);
extern void       __LIB__ __FASTCALL__ *w_vector_pop_back(w_vector_t *v);
extern size_t     __LIB__               w_vector_push_back(w_vector_t *v, void *item);
extern int        __LIB__               w_vector_reserve(w_vector_t *v, size_t n);
extern int        __LIB__               w_vector_resize(w_vector_t *v, size_t n);
extern int        __LIB__ __FASTCALL__  w_vector_shrink_to_fit(w_vector_t *v);
extern size_t     __LIB__ __FASTCALL__  w_vector_size(w_vector_t *v);

// SCCZ80 CALLEE LINKAGE

extern size_t     __LIB__ __CALLEE__    w_vector_append_callee(w_vector_t *v, void *item);
extern size_t     __LIB__ __CALLEE__    w_vector_append_n_callee(w_vector_t *v, size_t n, void *item);
extern void       __LIB__ __CALLEE__    w_vector_at_callee(w_vector_t *v, size_t idx);
extern size_t     __LIB__ __CALLEE__    w_vector_erase_callee(w_vector_t *v, size_t idx);
extern size_t     __LIB__ __CALLEE__    w_vector_erase_range_callee(w_vector_t *v, size_t idx_first, size_t idx_last);
extern w_vector_t __LIB__ __CALLEE__   *w_vector_init_callee(void *p, size_t capacity, size_t max_size);
extern size_t     __LIB__ __CALLEE__    w_vector_insert_callee(w_vector_t *v, size_t idx, void *item);
extern size_t     __LIB__ __CALLEE__    w_vector_insert_n_callee(w_vector_t *v, size_t idx, size_t n, void *item);
extern size_t     __LIB__ __CALLEE__    w_vector_push_back_callee(w_vector_t *v, void *item);
extern int        __LIB__ __CALLEE__    w_vector_reserve_callee(w_vector_t *v, size_t n);
extern int        __LIB__ __CALLEE__    w_vector_resize_callee(w_vector_t *v, size_t n);

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#define w_vector_append(a,b)                     w_vector_append_callee(a,b)
#define w_vector_append_n(a,b,c)                 w_vector_append_n_callee(a,b,c)
#define w_vector_at(a,b)                         w_vector_at_callee(a,b)
#define w_vector_erase(a,b)                      w_vector_erase_callee(a,b)
#define w_vector_erase_range(a,b,c)              w_vector_erase_range_callee(a,b,c)
#define w_vector_init(a,b,c)                     w_vector_init_callee(a,b,c)
#define w_vector_insert(a,b,c)                   w_vector_insert_callee(a,b,c)
#define w_vector_insert_n(a,b,c,d)               w_vector_insert_n_callee(a,b,c,d)
#define w_vector_push_back(a,b)                  w_vector_push_back_callee(a,b)
#define w_vector_reserve(a,b)                    w_vector_reserve_callee(a,b)
#define w_vector_resize(a,b)                     w_vector_resize_callee(a,b)

#endif

#endif
