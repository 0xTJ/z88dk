
; size_t w_array_push_back(w_array_t *a, void *item)

XLIB w_array_push_back

LIB w_array_append

;defc w_array_push_back = w_array_append

w_array_push_back:

   jp w_array_append
