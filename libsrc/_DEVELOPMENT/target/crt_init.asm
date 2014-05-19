
; == crt initialization =======================================

   ; BSS SEGMENT

   IF (__crt_segment_bss_end - __crt_segment_bss_begin) > 0

     EXTERN asm_memset
     
     ld hl,__crt_segment_bss_begin
     ld bc,__crt_segment_bss_end - __crt_segment_bss_begin
     ld e,0
   
     call asm_memset
   
   ENDIF
   
   ; DATA SEGMENT
   
   IF (__crt_cfg_segment_data & $01) & ((__crt_segment_data_end - __crt_segment_data_begin) > 0)
   
      EXTERN asm_memcpy
      
      ld hl,__crt_segment_data_source_begin
      ld de,__crt_segment_data_begin
      ld bc,__crt_segment_data_end - __crt_segment_data_begin
      
      call asm_memcpy
   
   ENDIF
   
   ; DYNAMIC INITIALIZATION

   IF __crt_cfg_heap_size > 14
   
      ; malloc's heap
      
      EXTERN asm_heap_init
      
      ld hl,(__heap)
      ld bc,__crt_cfg_heap_size
      
      call asm_heap_init

   ENDIF

   IF __crt_cfg_fopen_max > 3
   
         ; available stdio FILE structures

         EXTERN asm_p_forward_list_alt_push_front

         ld de,__file_block
         ld b,__crt_cfg_fopen_max - 3

      __file_init_loop:
      
         push bc
         
         ld bc,__stdio_file_list_avail
         call asm_p_forward_list_alt_push_front
         
         ld de,__CLIB_OPT_STDIO_FILE_EXTRA + 15
         add hl,de
         
         ex de,hl
         
         pop bc
         djnz __file_init_loop
   
   ENDIF

; =============================================================
