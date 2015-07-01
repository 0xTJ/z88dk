


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

extern size_t __LIB__ w_vector_append(w_vector_t *v,void *item);
extern size_t __LIB__ __CALLEE__ w_vector_append_callee(w_vector_t *v,void *item);
#define w_vector_append(a,b) w_vector_append_callee(a,b)


extern size_t __LIB__ w_vector_append_n(w_vector_t *v,size_t n,void *item);
extern size_t __LIB__ __CALLEE__ w_vector_append_n_callee(w_vector_t *v,size_t n,void *item);
#define w_vector_append_n(a,b,c) w_vector_append_n_callee(a,b,c)


extern void __LIB__ w_vector_at(w_vector_t *v,size_t idx);
extern void __LIB__ __CALLEE__ w_vector_at_callee(w_vector_t *v,size_t idx);
#define w_vector_at(a,b) w_vector_at_callee(a,b)


extern void __LIB__ __FASTCALL__ *w_vector_back(w_vector_t *v);


extern size_t __LIB__ __FASTCALL__ w_vector_capacity(w_vector_t *v);


extern void __LIB__ __FASTCALL__ w_vector_clear(w_vector_t *v);


extern void __LIB__ __FASTCALL__ *w_vector_data(w_vector_t *v);


extern void __LIB__ __FASTCALL__ w_vector_destroy(w_vector_t *v);


extern void __LIB__ __FASTCALL__ w_vector_empty(w_vector_t *v);


extern size_t __LIB__ w_vector_erase(w_vector_t *v,size_t idx);
extern size_t __LIB__ __CALLEE__ w_vector_erase_callee(w_vector_t *v,size_t idx);
#define w_vector_erase(a,b) w_vector_erase_callee(a,b)


extern size_t __LIB__ w_vector_erase_range(w_vector_t *v,size_t idx_first,size_t idx_last);
extern size_t __LIB__ __CALLEE__ w_vector_erase_range_callee(w_vector_t *v,size_t idx_first,size_t idx_last);
#define w_vector_erase_range(a,b,c) w_vector_erase_range_callee(a,b,c)


extern void __LIB__ __FASTCALL__ *w_vector_front(w_vector_t *v);


extern w_vector_t __LIB__ *w_vector_init(void *p,size_t capacity,size_t max_size);
extern w_vector_t __LIB__ __CALLEE__ *w_vector_init_callee(void *p,size_t capacity,size_t max_size);
#define w_vector_init(a,b,c) w_vector_init_callee(a,b,c)


extern size_t __LIB__ w_vector_insert(w_vector_t *v,size_t idx,void *item);
extern size_t __LIB__ __CALLEE__ w_vector_insert_callee(w_vector_t *v,size_t idx,void *item);
#define w_vector_insert(a,b,c) w_vector_insert_callee(a,b,c)


extern size_t __LIB__ w_vector_insert_n(w_vector_t *v,size_t idx,size_t n,void *item);
extern size_t __LIB__ __CALLEE__ w_vector_insert_n_callee(w_vector_t *v,size_t idx,size_t n,void *item);
#define w_vector_insert_n(a,b,c,d) w_vector_insert_n_callee(a,b,c,d)


extern void __LIB__ __FASTCALL__ *w_vector_max_size(w_vector_t *v);


extern void __LIB__ __FASTCALL__ *w_vector_pop_back(w_vector_t *v);


extern size_t __LIB__ w_vector_push_back(w_vector_t *v,void *item);
extern size_t __LIB__ __CALLEE__ w_vector_push_back_callee(w_vector_t *v,void *item);
#define w_vector_push_back(a,b) w_vector_push_back_callee(a,b)


extern int __LIB__ w_vector_reserve(w_vector_t *v,size_t n);
extern int __LIB__ __CALLEE__ w_vector_reserve_callee(w_vector_t *v,size_t n);
#define w_vector_reserve(a,b) w_vector_reserve_callee(a,b)


extern int __LIB__ w_vector_resize(w_vector_t *v,size_t n);
extern int __LIB__ __CALLEE__ w_vector_resize_callee(w_vector_t *v,size_t n);
#define w_vector_resize(a,b) w_vector_resize_callee(a,b)


extern int __LIB__ __FASTCALL__ w_vector_shrink_to_fit(w_vector_t *v);


extern size_t __LIB__ __FASTCALL__ w_vector_size(w_vector_t *v);



#endif