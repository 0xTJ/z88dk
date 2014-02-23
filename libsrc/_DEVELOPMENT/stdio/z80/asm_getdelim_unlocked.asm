
; ===============================================================
; Jan 2014
; ===============================================================
; 
; size_t getdelim_unlocked(char **lineptr, size_t *n, int delimiter, FILE *stream)
;
; Reads characters from the stream up to and including the delimiter
; char and stores them in the buffer provided, then zero terminates
; the buffer.
;
; The existing buffer is communicated by passing its start address
; in *lineptr and its size in *n.  This buffer must have been
; allocated by malloc() as getdelim() will try to grow the buffer
; using realloc() if the amount of space provided is insufficient.
;
; If *lineptr == 0 or *n == 0, getdelim() will call malloc() to
; create an initial buffer.
;
; If delimiter > 255, the subroutine behaves as if there is no
; delimiter and stream chars will be read until either memory
; allocation fails or an error occurs on the stream.
;
; ===============================================================

XLIB asm_getdelim_unlocked

LIB error_mc, asm_b_vector_resize, l_ltu_bc_hl
LIB __stdio_verify_input, __stdio_recv_input_raw_eatc, __stdio_input_sm_getdelim

asm_getdelim_unlocked:

   ; enter : ix = FILE *
   ;         bc = int delimiter
   ;         de = size_t *n
   ;         hl = char **lineptr
   ;
   ; exit  : ix = FILE *
   ;
   ;         success
   ;
   ;            *lineptr = address of buffer
   ;            *n       = size of buffer in bytes, including '\0'
   ;
   ;            hl = number of chars written to buffer (not including '\0')
   ;            carry reset
   ;
   ;         fail
   ;
   ;            hl = -1
   ;            carry set
   ;
   ; uses  : all except ix

   call __stdio_verify_input   ; check if input from stream is ok
   ret c                       ; if stream not readable
   
   push de                     ; save size_t *n
   push hl                     ; save char **lineptr

   ld a,(hl)
   inc hl
   ld h,(hl)
   ld l,a

   ex de,hl                    ; de = char *line
   
   ld a,(hl)
   inc hl
   ld h,(hl)
   ld l,a                      ; hl = size_t n

   ; create a b_vector on the stack
   
   push hl
   ld hl,$ffff
   ex (sp),hl                  ; push vector,max_size
   push hl                     ; push vector.capacity
   push hl                     ; push vector.size
   push de                     ; push vector.array

   ; reserve one byte in the vector for zero terminator
   
   ld hl,0
   add hl,sp                   ; hl = vector *
   
   push bc                     ; save delim_char
   
   ld bc,1
   call asm_b_vector_resize    ; vector.size = 1
   
   pop bc                      ; bc = delim_char
   jr c, error_exit            ; if vector size failed
   
   ; read chars from the stream
   
   ld hl,0
   add hl,sp
   ex de,hl                    ; de = vector *

   ld hl,__stdio_input_sm_getdelim
   
   ; bc = delim_char
   ; de = vector *
   ; hl = state machine
   
   exx
   
   ld hl,$ffff                 ; no limit on number of chars read from stream
   call __stdio_recv_input_raw_eatc

   ld a,b
   or c
   
   exx
   jr z, error_exit            ; if no chars consumed from stream

   ; loose ends prior to exit
   
   ; stack = size_t *n, char **lineptr, vector.max_size,
   ;         vector.capacity, vector.size, vector.array

   pop bc                      ; bc = vector.array = char *line, possibly new address
   pop de                      ; de = num bytes written including '\0'
   pop hl
   pop hl
   pop hl                      ; hl = char **lineptr
   
   ld (hl),c
   inc hl
   ld (hl),b                   ; *lineptr = line
   
   pop hl                      ; hl = size_t *n
   
   ld c,(hl)
   inc hl
   ld b,(hl)                   ; bc = old_n

   ex de,hl                    ; hl = new_n
   
   call l_ltu_bc_hl
   
   dec hl                      ; hl = num bytes written less the '\0'
   ret nc                      ; if bc >= hl, old_n >= new_n

   ; new_n is larger so store new size
   
   inc hl
   ex de,hl
   
   ld (hl),d
   dec hl
   ld (hl),e                   ; *n = new_n
   
   ex de,hl
   dec hl
   
   or a
   ret

error_exit:

   ; stack = size_t *n, char **lineptr, b_vector_t

   ld hl,12
   add hl,sp
   ld sp,hl                    ; repair stack
   
   jp error_mc
