 adc (hl)                       ; 8E
 adc (ix)                       ; DD 8E 00
 adc (ix+127)                   ; DD 8E 7F
 adc (ix-128)                   ; DD 8E 80
 adc (iy)                       ; FD 8E 00
 adc (iy+127)                   ; FD 8E 7F
 adc (iy-128)                   ; FD 8E 80
 adc -128                       ; CE 80
 adc 127                        ; CE 7F
 adc 255                        ; CE FF
 adc a                          ; 8F
 adc a', (hl)                   ; 76 8E
 adc a', (ix)                   ; 76 DD 8E 00
 adc a', (ix+127)               ; 76 DD 8E 7F
 adc a', (ix-128)               ; 76 DD 8E 80
 adc a', (iy)                   ; 76 FD 8E 00
 adc a', (iy+127)               ; 76 FD 8E 7F
 adc a', (iy-128)               ; 76 FD 8E 80
 adc a', -128                   ; 76 CE 80
 adc a', 127                    ; 76 CE 7F
 adc a', 255                    ; 76 CE FF
 adc a', a                      ; 76 8F
 adc a', b                      ; 76 88
 adc a', c                      ; 76 89
 adc a', d                      ; 76 8A
 adc a', e                      ; 76 8B
 adc a', h                      ; 76 8C
 adc a', l                      ; 76 8D
 adc a, (hl)                    ; 8E
 adc a, (ix)                    ; DD 8E 00
 adc a, (ix+127)                ; DD 8E 7F
 adc a, (ix-128)                ; DD 8E 80
 adc a, (iy)                    ; FD 8E 00
 adc a, (iy+127)                ; FD 8E 7F
 adc a, (iy-128)                ; FD 8E 80
 adc a, -128                    ; CE 80
 adc a, 127                     ; CE 7F
 adc a, 255                     ; CE FF
 adc a, a                       ; 8F
 adc a, b                       ; 88
 adc a, c                       ; 89
 adc a, d                       ; 8A
 adc a, e                       ; 8B
 adc a, h                       ; 8C
 adc a, l                       ; 8D
 adc b                          ; 88
 adc c                          ; 89
 adc d                          ; 8A
 adc e                          ; 8B
 adc h                          ; 8C
 adc l                          ; 8D
 add (hl)                       ; 86
 add (ix)                       ; DD 86 00
 add (ix+127)                   ; DD 86 7F
 add (ix-128)                   ; DD 86 80
 add (iy)                       ; FD 86 00
 add (iy+127)                   ; FD 86 7F
 add (iy-128)                   ; FD 86 80
 add -128                       ; C6 80
 add 127                        ; C6 7F
 add 255                        ; C6 FF
 add a                          ; 87
 add a', (hl)                   ; 76 86
 add a', (ix)                   ; 76 DD 86 00
 add a', (ix+127)               ; 76 DD 86 7F
 add a', (ix-128)               ; 76 DD 86 80
 add a', (iy)                   ; 76 FD 86 00
 add a', (iy+127)               ; 76 FD 86 7F
 add a', (iy-128)               ; 76 FD 86 80
 add a', -128                   ; 76 C6 80
 add a', 127                    ; 76 C6 7F
 add a', 255                    ; 76 C6 FF
 add a', a                      ; 76 87
 add a', b                      ; 76 80
 add a', c                      ; 76 81
 add a', d                      ; 76 82
 add a', e                      ; 76 83
 add a', h                      ; 76 84
 add a', l                      ; 76 85
 add a, (hl)                    ; 86
 add a, (ix)                    ; DD 86 00
 add a, (ix+127)                ; DD 86 7F
 add a, (ix-128)                ; DD 86 80
 add a, (iy)                    ; FD 86 00
 add a, (iy+127)                ; FD 86 7F
 add a, (iy-128)                ; FD 86 80
 add a, -128                    ; C6 80
 add a, 127                     ; C6 7F
 add a, 255                     ; C6 FF
 add a, a                       ; 87
 add a, b                       ; 80
 add a, c                       ; 81
 add a, d                       ; 82
 add a, e                       ; 83
 add a, h                       ; 84
 add a, l                       ; 85
 add b                          ; 80
 add c                          ; 81
 add d                          ; 82
 add e                          ; 83
 add h                          ; 84
 add l                          ; 85
 altd adc (hl)                  ; 76 8E
 altd adc (ix)                  ; 76 DD 8E 00
 altd adc (ix+127)              ; 76 DD 8E 7F
 altd adc (ix-128)              ; 76 DD 8E 80
 altd adc (iy)                  ; 76 FD 8E 00
 altd adc (iy+127)              ; 76 FD 8E 7F
 altd adc (iy-128)              ; 76 FD 8E 80
 altd adc -128                  ; 76 CE 80
 altd adc 127                   ; 76 CE 7F
 altd adc 255                   ; 76 CE FF
 altd adc a                     ; 76 8F
 altd adc a, (hl)               ; 76 8E
 altd adc a, (ix)               ; 76 DD 8E 00
 altd adc a, (ix+127)           ; 76 DD 8E 7F
 altd adc a, (ix-128)           ; 76 DD 8E 80
 altd adc a, (iy)               ; 76 FD 8E 00
 altd adc a, (iy+127)           ; 76 FD 8E 7F
 altd adc a, (iy-128)           ; 76 FD 8E 80
 altd adc a, -128               ; 76 CE 80
 altd adc a, 127                ; 76 CE 7F
 altd adc a, 255                ; 76 CE FF
 altd adc a, a                  ; 76 8F
 altd adc a, b                  ; 76 88
 altd adc a, c                  ; 76 89
 altd adc a, d                  ; 76 8A
 altd adc a, e                  ; 76 8B
 altd adc a, h                  ; 76 8C
 altd adc a, l                  ; 76 8D
 altd adc b                     ; 76 88
 altd adc c                     ; 76 89
 altd adc d                     ; 76 8A
 altd adc e                     ; 76 8B
 altd adc h                     ; 76 8C
 altd adc l                     ; 76 8D
 altd add (hl)                  ; 76 86
 altd add (ix)                  ; 76 DD 86 00
 altd add (ix+127)              ; 76 DD 86 7F
 altd add (ix-128)              ; 76 DD 86 80
 altd add (iy)                  ; 76 FD 86 00
 altd add (iy+127)              ; 76 FD 86 7F
 altd add (iy-128)              ; 76 FD 86 80
 altd add -128                  ; 76 C6 80
 altd add 127                   ; 76 C6 7F
 altd add 255                   ; 76 C6 FF
 altd add a                     ; 76 87
 altd add a, (hl)               ; 76 86
 altd add a, (ix)               ; 76 DD 86 00
 altd add a, (ix+127)           ; 76 DD 86 7F
 altd add a, (ix-128)           ; 76 DD 86 80
 altd add a, (iy)               ; 76 FD 86 00
 altd add a, (iy+127)           ; 76 FD 86 7F
 altd add a, (iy-128)           ; 76 FD 86 80
 altd add a, -128               ; 76 C6 80
 altd add a, 127                ; 76 C6 7F
 altd add a, 255                ; 76 C6 FF
 altd add a, a                  ; 76 87
 altd add a, b                  ; 76 80
 altd add a, c                  ; 76 81
 altd add a, d                  ; 76 82
 altd add a, e                  ; 76 83
 altd add a, h                  ; 76 84
 altd add a, l                  ; 76 85
 altd add b                     ; 76 80
 altd add c                     ; 76 81
 altd add d                     ; 76 82
 altd add e                     ; 76 83
 altd add h                     ; 76 84
 altd add l                     ; 76 85
 altd and (hl)                  ; 76 A6
 altd and (ix)                  ; 76 DD A6 00
 altd and (ix+127)              ; 76 DD A6 7F
 altd and (ix-128)              ; 76 DD A6 80
 altd and (iy)                  ; 76 FD A6 00
 altd and (iy+127)              ; 76 FD A6 7F
 altd and (iy-128)              ; 76 FD A6 80
 altd and -128                  ; 76 E6 80
 altd and 127                   ; 76 E6 7F
 altd and 255                   ; 76 E6 FF
 altd and a                     ; 76 A7
 altd and a, (hl)               ; 76 A6
 altd and a, (ix)               ; 76 DD A6 00
 altd and a, (ix+127)           ; 76 DD A6 7F
 altd and a, (ix-128)           ; 76 DD A6 80
 altd and a, (iy)               ; 76 FD A6 00
 altd and a, (iy+127)           ; 76 FD A6 7F
 altd and a, (iy-128)           ; 76 FD A6 80
 altd and a, -128               ; 76 E6 80
 altd and a, 127                ; 76 E6 7F
 altd and a, 255                ; 76 E6 FF
 altd and a, a                  ; 76 A7
 altd and a, b                  ; 76 A0
 altd and a, c                  ; 76 A1
 altd and a, d                  ; 76 A2
 altd and a, e                  ; 76 A3
 altd and a, h                  ; 76 A4
 altd and a, l                  ; 76 A5
 altd and b                     ; 76 A0
 altd and c                     ; 76 A1
 altd and d                     ; 76 A2
 altd and e                     ; 76 A3
 altd and h                     ; 76 A4
 altd and l                     ; 76 A5
 altd cp (hl)                   ; 76 BE
 altd cp (ix)                   ; 76 DD BE 00
 altd cp (ix+127)               ; 76 DD BE 7F
 altd cp (ix-128)               ; 76 DD BE 80
 altd cp (iy)                   ; 76 FD BE 00
 altd cp (iy+127)               ; 76 FD BE 7F
 altd cp (iy-128)               ; 76 FD BE 80
 altd cp -128                   ; 76 FE 80
 altd cp 127                    ; 76 FE 7F
 altd cp 255                    ; 76 FE FF
 altd cp a                      ; 76 BF
 altd cp a, (hl)                ; 76 BE
 altd cp a, (ix)                ; 76 DD BE 00
 altd cp a, (ix+127)            ; 76 DD BE 7F
 altd cp a, (ix-128)            ; 76 DD BE 80
 altd cp a, (iy)                ; 76 FD BE 00
 altd cp a, (iy+127)            ; 76 FD BE 7F
 altd cp a, (iy-128)            ; 76 FD BE 80
 altd cp a, -128                ; 76 FE 80
 altd cp a, 127                 ; 76 FE 7F
 altd cp a, 255                 ; 76 FE FF
 altd cp a, a                   ; 76 BF
 altd cp a, b                   ; 76 B8
 altd cp a, c                   ; 76 B9
 altd cp a, d                   ; 76 BA
 altd cp a, e                   ; 76 BB
 altd cp a, h                   ; 76 BC
 altd cp a, l                   ; 76 BD
 altd cp b                      ; 76 B8
 altd cp c                      ; 76 B9
 altd cp d                      ; 76 BA
 altd cp e                      ; 76 BB
 altd cp h                      ; 76 BC
 altd cp l                      ; 76 BD
 altd dec a                     ; 76 3D
 altd dec b                     ; 76 05
 altd dec c                     ; 76 0D
 altd dec d                     ; 76 15
 altd dec e                     ; 76 1D
 altd dec h                     ; 76 25
 altd dec l                     ; 76 2D
 altd inc a                     ; 76 3C
 altd inc b                     ; 76 04
 altd inc c                     ; 76 0C
 altd inc d                     ; 76 14
 altd inc e                     ; 76 1C
 altd inc h                     ; 76 24
 altd inc l                     ; 76 2C
 altd ioe adc (hl)              ; 76 DB 8E
 altd ioe adc (ix)              ; 76 DB DD 8E 00
 altd ioe adc (ix+127)          ; 76 DB DD 8E 7F
 altd ioe adc (ix-128)          ; 76 DB DD 8E 80
 altd ioe adc (iy)              ; 76 DB FD 8E 00
 altd ioe adc (iy+127)          ; 76 DB FD 8E 7F
 altd ioe adc (iy-128)          ; 76 DB FD 8E 80
 altd ioe adc a, (hl)           ; 76 DB 8E
 altd ioe adc a, (ix)           ; 76 DB DD 8E 00
 altd ioe adc a, (ix+127)       ; 76 DB DD 8E 7F
 altd ioe adc a, (ix-128)       ; 76 DB DD 8E 80
 altd ioe adc a, (iy)           ; 76 DB FD 8E 00
 altd ioe adc a, (iy+127)       ; 76 DB FD 8E 7F
 altd ioe adc a, (iy-128)       ; 76 DB FD 8E 80
 altd ioe add (hl)              ; 76 DB 86
 altd ioe add (ix)              ; 76 DB DD 86 00
 altd ioe add (ix+127)          ; 76 DB DD 86 7F
 altd ioe add (ix-128)          ; 76 DB DD 86 80
 altd ioe add (iy)              ; 76 DB FD 86 00
 altd ioe add (iy+127)          ; 76 DB FD 86 7F
 altd ioe add (iy-128)          ; 76 DB FD 86 80
 altd ioe add a, (hl)           ; 76 DB 86
 altd ioe add a, (ix)           ; 76 DB DD 86 00
 altd ioe add a, (ix+127)       ; 76 DB DD 86 7F
 altd ioe add a, (ix-128)       ; 76 DB DD 86 80
 altd ioe add a, (iy)           ; 76 DB FD 86 00
 altd ioe add a, (iy+127)       ; 76 DB FD 86 7F
 altd ioe add a, (iy-128)       ; 76 DB FD 86 80
 altd ioe and (hl)              ; 76 DB A6
 altd ioe and (ix)              ; 76 DB DD A6 00
 altd ioe and (ix+127)          ; 76 DB DD A6 7F
 altd ioe and (ix-128)          ; 76 DB DD A6 80
 altd ioe and (iy)              ; 76 DB FD A6 00
 altd ioe and (iy+127)          ; 76 DB FD A6 7F
 altd ioe and (iy-128)          ; 76 DB FD A6 80
 altd ioe and a, (hl)           ; 76 DB A6
 altd ioe and a, (ix)           ; 76 DB DD A6 00
 altd ioe and a, (ix+127)       ; 76 DB DD A6 7F
 altd ioe and a, (ix-128)       ; 76 DB DD A6 80
 altd ioe and a, (iy)           ; 76 DB FD A6 00
 altd ioe and a, (iy+127)       ; 76 DB FD A6 7F
 altd ioe and a, (iy-128)       ; 76 DB FD A6 80
 altd ioe cp (hl)               ; 76 DB BE
 altd ioe cp (ix)               ; 76 DB DD BE 00
 altd ioe cp (ix+127)           ; 76 DB DD BE 7F
 altd ioe cp (ix-128)           ; 76 DB DD BE 80
 altd ioe cp (iy)               ; 76 DB FD BE 00
 altd ioe cp (iy+127)           ; 76 DB FD BE 7F
 altd ioe cp (iy-128)           ; 76 DB FD BE 80
 altd ioe cp a, (hl)            ; 76 DB BE
 altd ioe cp a, (ix)            ; 76 DB DD BE 00
 altd ioe cp a, (ix+127)        ; 76 DB DD BE 7F
 altd ioe cp a, (ix-128)        ; 76 DB DD BE 80
 altd ioe cp a, (iy)            ; 76 DB FD BE 00
 altd ioe cp a, (iy+127)        ; 76 DB FD BE 7F
 altd ioe cp a, (iy-128)        ; 76 DB FD BE 80
 altd ioe ld a, (-32768)        ; 76 DB 3A 00 80
 altd ioe ld a, (32767)         ; 76 DB 3A FF 7F
 altd ioe ld a, (65535)         ; 76 DB 3A FF FF
 altd ioe ld a, (bc)            ; 76 DB 0A
 altd ioe ld a, (de)            ; 76 DB 1A
 altd ioe ld a, (hl)            ; 76 DB 7E
 altd ioe ld a, (ix)            ; 76 DB DD 7E 00
 altd ioe ld a, (ix+127)        ; 76 DB DD 7E 7F
 altd ioe ld a, (ix-128)        ; 76 DB DD 7E 80
 altd ioe ld a, (iy)            ; 76 DB FD 7E 00
 altd ioe ld a, (iy+127)        ; 76 DB FD 7E 7F
 altd ioe ld a, (iy-128)        ; 76 DB FD 7E 80
 altd ioe ld b, (hl)            ; 76 DB 46
 altd ioe ld b, (ix)            ; 76 DB DD 46 00
 altd ioe ld b, (ix+127)        ; 76 DB DD 46 7F
 altd ioe ld b, (ix-128)        ; 76 DB DD 46 80
 altd ioe ld b, (iy)            ; 76 DB FD 46 00
 altd ioe ld b, (iy+127)        ; 76 DB FD 46 7F
 altd ioe ld b, (iy-128)        ; 76 DB FD 46 80
 altd ioe ld c, (hl)            ; 76 DB 4E
 altd ioe ld c, (ix)            ; 76 DB DD 4E 00
 altd ioe ld c, (ix+127)        ; 76 DB DD 4E 7F
 altd ioe ld c, (ix-128)        ; 76 DB DD 4E 80
 altd ioe ld c, (iy)            ; 76 DB FD 4E 00
 altd ioe ld c, (iy+127)        ; 76 DB FD 4E 7F
 altd ioe ld c, (iy-128)        ; 76 DB FD 4E 80
 altd ioe ld d, (hl)            ; 76 DB 56
 altd ioe ld d, (ix)            ; 76 DB DD 56 00
 altd ioe ld d, (ix+127)        ; 76 DB DD 56 7F
 altd ioe ld d, (ix-128)        ; 76 DB DD 56 80
 altd ioe ld d, (iy)            ; 76 DB FD 56 00
 altd ioe ld d, (iy+127)        ; 76 DB FD 56 7F
 altd ioe ld d, (iy-128)        ; 76 DB FD 56 80
 altd ioe ld e, (hl)            ; 76 DB 5E
 altd ioe ld e, (ix)            ; 76 DB DD 5E 00
 altd ioe ld e, (ix+127)        ; 76 DB DD 5E 7F
 altd ioe ld e, (ix-128)        ; 76 DB DD 5E 80
 altd ioe ld e, (iy)            ; 76 DB FD 5E 00
 altd ioe ld e, (iy+127)        ; 76 DB FD 5E 7F
 altd ioe ld e, (iy-128)        ; 76 DB FD 5E 80
 altd ioe ld h, (hl)            ; 76 DB 66
 altd ioe ld h, (ix)            ; 76 DB DD 66 00
 altd ioe ld h, (ix+127)        ; 76 DB DD 66 7F
 altd ioe ld h, (ix-128)        ; 76 DB DD 66 80
 altd ioe ld h, (iy)            ; 76 DB FD 66 00
 altd ioe ld h, (iy+127)        ; 76 DB FD 66 7F
 altd ioe ld h, (iy-128)        ; 76 DB FD 66 80
 altd ioe ld l, (hl)            ; 76 DB 6E
 altd ioe ld l, (ix)            ; 76 DB DD 6E 00
 altd ioe ld l, (ix+127)        ; 76 DB DD 6E 7F
 altd ioe ld l, (ix-128)        ; 76 DB DD 6E 80
 altd ioe ld l, (iy)            ; 76 DB FD 6E 00
 altd ioe ld l, (iy+127)        ; 76 DB FD 6E 7F
 altd ioe ld l, (iy-128)        ; 76 DB FD 6E 80
 altd ioe or (hl)               ; 76 DB B6
 altd ioe or (ix)               ; 76 DB DD B6 00
 altd ioe or (ix+127)           ; 76 DB DD B6 7F
 altd ioe or (ix-128)           ; 76 DB DD B6 80
 altd ioe or (iy)               ; 76 DB FD B6 00
 altd ioe or (iy+127)           ; 76 DB FD B6 7F
 altd ioe or (iy-128)           ; 76 DB FD B6 80
 altd ioe or a, (hl)            ; 76 DB B6
 altd ioe or a, (ix)            ; 76 DB DD B6 00
 altd ioe or a, (ix+127)        ; 76 DB DD B6 7F
 altd ioe or a, (ix-128)        ; 76 DB DD B6 80
 altd ioe or a, (iy)            ; 76 DB FD B6 00
 altd ioe or a, (iy+127)        ; 76 DB FD B6 7F
 altd ioe or a, (iy-128)        ; 76 DB FD B6 80
 altd ioe sbc (hl)              ; 76 DB 9E
 altd ioe sbc (ix)              ; 76 DB DD 9E 00
 altd ioe sbc (ix+127)          ; 76 DB DD 9E 7F
 altd ioe sbc (ix-128)          ; 76 DB DD 9E 80
 altd ioe sbc (iy)              ; 76 DB FD 9E 00
 altd ioe sbc (iy+127)          ; 76 DB FD 9E 7F
 altd ioe sbc (iy-128)          ; 76 DB FD 9E 80
 altd ioe sbc a, (hl)           ; 76 DB 9E
 altd ioe sbc a, (ix)           ; 76 DB DD 9E 00
 altd ioe sbc a, (ix+127)       ; 76 DB DD 9E 7F
 altd ioe sbc a, (ix-128)       ; 76 DB DD 9E 80
 altd ioe sbc a, (iy)           ; 76 DB FD 9E 00
 altd ioe sbc a, (iy+127)       ; 76 DB FD 9E 7F
 altd ioe sbc a, (iy-128)       ; 76 DB FD 9E 80
 altd ioe sub (hl)              ; 76 DB 96
 altd ioe sub (ix)              ; 76 DB DD 96 00
 altd ioe sub (ix+127)          ; 76 DB DD 96 7F
 altd ioe sub (ix-128)          ; 76 DB DD 96 80
 altd ioe sub (iy)              ; 76 DB FD 96 00
 altd ioe sub (iy+127)          ; 76 DB FD 96 7F
 altd ioe sub (iy-128)          ; 76 DB FD 96 80
 altd ioe sub a, (hl)           ; 76 DB 96
 altd ioe sub a, (ix)           ; 76 DB DD 96 00
 altd ioe sub a, (ix+127)       ; 76 DB DD 96 7F
 altd ioe sub a, (ix-128)       ; 76 DB DD 96 80
 altd ioe sub a, (iy)           ; 76 DB FD 96 00
 altd ioe sub a, (iy+127)       ; 76 DB FD 96 7F
 altd ioe sub a, (iy-128)       ; 76 DB FD 96 80
 altd ioe xor (hl)              ; 76 DB AE
 altd ioe xor (ix)              ; 76 DB DD AE 00
 altd ioe xor (ix+127)          ; 76 DB DD AE 7F
 altd ioe xor (ix-128)          ; 76 DB DD AE 80
 altd ioe xor (iy)              ; 76 DB FD AE 00
 altd ioe xor (iy+127)          ; 76 DB FD AE 7F
 altd ioe xor (iy-128)          ; 76 DB FD AE 80
 altd ioe xor a, (hl)           ; 76 DB AE
 altd ioe xor a, (ix)           ; 76 DB DD AE 00
 altd ioe xor a, (ix+127)       ; 76 DB DD AE 7F
 altd ioe xor a, (ix-128)       ; 76 DB DD AE 80
 altd ioe xor a, (iy)           ; 76 DB FD AE 00
 altd ioe xor a, (iy+127)       ; 76 DB FD AE 7F
 altd ioe xor a, (iy-128)       ; 76 DB FD AE 80
 altd ioi adc (hl)              ; 76 D3 8E
 altd ioi adc (ix)              ; 76 D3 DD 8E 00
 altd ioi adc (ix+127)          ; 76 D3 DD 8E 7F
 altd ioi adc (ix-128)          ; 76 D3 DD 8E 80
 altd ioi adc (iy)              ; 76 D3 FD 8E 00
 altd ioi adc (iy+127)          ; 76 D3 FD 8E 7F
 altd ioi adc (iy-128)          ; 76 D3 FD 8E 80
 altd ioi adc a, (hl)           ; 76 D3 8E
 altd ioi adc a, (ix)           ; 76 D3 DD 8E 00
 altd ioi adc a, (ix+127)       ; 76 D3 DD 8E 7F
 altd ioi adc a, (ix-128)       ; 76 D3 DD 8E 80
 altd ioi adc a, (iy)           ; 76 D3 FD 8E 00
 altd ioi adc a, (iy+127)       ; 76 D3 FD 8E 7F
 altd ioi adc a, (iy-128)       ; 76 D3 FD 8E 80
 altd ioi add (hl)              ; 76 D3 86
 altd ioi add (ix)              ; 76 D3 DD 86 00
 altd ioi add (ix+127)          ; 76 D3 DD 86 7F
 altd ioi add (ix-128)          ; 76 D3 DD 86 80
 altd ioi add (iy)              ; 76 D3 FD 86 00
 altd ioi add (iy+127)          ; 76 D3 FD 86 7F
 altd ioi add (iy-128)          ; 76 D3 FD 86 80
 altd ioi add a, (hl)           ; 76 D3 86
 altd ioi add a, (ix)           ; 76 D3 DD 86 00
 altd ioi add a, (ix+127)       ; 76 D3 DD 86 7F
 altd ioi add a, (ix-128)       ; 76 D3 DD 86 80
 altd ioi add a, (iy)           ; 76 D3 FD 86 00
 altd ioi add a, (iy+127)       ; 76 D3 FD 86 7F
 altd ioi add a, (iy-128)       ; 76 D3 FD 86 80
 altd ioi and (hl)              ; 76 D3 A6
 altd ioi and (ix)              ; 76 D3 DD A6 00
 altd ioi and (ix+127)          ; 76 D3 DD A6 7F
 altd ioi and (ix-128)          ; 76 D3 DD A6 80
 altd ioi and (iy)              ; 76 D3 FD A6 00
 altd ioi and (iy+127)          ; 76 D3 FD A6 7F
 altd ioi and (iy-128)          ; 76 D3 FD A6 80
 altd ioi and a, (hl)           ; 76 D3 A6
 altd ioi and a, (ix)           ; 76 D3 DD A6 00
 altd ioi and a, (ix+127)       ; 76 D3 DD A6 7F
 altd ioi and a, (ix-128)       ; 76 D3 DD A6 80
 altd ioi and a, (iy)           ; 76 D3 FD A6 00
 altd ioi and a, (iy+127)       ; 76 D3 FD A6 7F
 altd ioi and a, (iy-128)       ; 76 D3 FD A6 80
 altd ioi cp (hl)               ; 76 D3 BE
 altd ioi cp (ix)               ; 76 D3 DD BE 00
 altd ioi cp (ix+127)           ; 76 D3 DD BE 7F
 altd ioi cp (ix-128)           ; 76 D3 DD BE 80
 altd ioi cp (iy)               ; 76 D3 FD BE 00
 altd ioi cp (iy+127)           ; 76 D3 FD BE 7F
 altd ioi cp (iy-128)           ; 76 D3 FD BE 80
 altd ioi cp a, (hl)            ; 76 D3 BE
 altd ioi cp a, (ix)            ; 76 D3 DD BE 00
 altd ioi cp a, (ix+127)        ; 76 D3 DD BE 7F
 altd ioi cp a, (ix-128)        ; 76 D3 DD BE 80
 altd ioi cp a, (iy)            ; 76 D3 FD BE 00
 altd ioi cp a, (iy+127)        ; 76 D3 FD BE 7F
 altd ioi cp a, (iy-128)        ; 76 D3 FD BE 80
 altd ioi ld a, (-32768)        ; 76 D3 3A 00 80
 altd ioi ld a, (32767)         ; 76 D3 3A FF 7F
 altd ioi ld a, (65535)         ; 76 D3 3A FF FF
 altd ioi ld a, (bc)            ; 76 D3 0A
 altd ioi ld a, (de)            ; 76 D3 1A
 altd ioi ld a, (hl)            ; 76 D3 7E
 altd ioi ld a, (ix)            ; 76 D3 DD 7E 00
 altd ioi ld a, (ix+127)        ; 76 D3 DD 7E 7F
 altd ioi ld a, (ix-128)        ; 76 D3 DD 7E 80
 altd ioi ld a, (iy)            ; 76 D3 FD 7E 00
 altd ioi ld a, (iy+127)        ; 76 D3 FD 7E 7F
 altd ioi ld a, (iy-128)        ; 76 D3 FD 7E 80
 altd ioi ld b, (hl)            ; 76 D3 46
 altd ioi ld b, (ix)            ; 76 D3 DD 46 00
 altd ioi ld b, (ix+127)        ; 76 D3 DD 46 7F
 altd ioi ld b, (ix-128)        ; 76 D3 DD 46 80
 altd ioi ld b, (iy)            ; 76 D3 FD 46 00
 altd ioi ld b, (iy+127)        ; 76 D3 FD 46 7F
 altd ioi ld b, (iy-128)        ; 76 D3 FD 46 80
 altd ioi ld c, (hl)            ; 76 D3 4E
 altd ioi ld c, (ix)            ; 76 D3 DD 4E 00
 altd ioi ld c, (ix+127)        ; 76 D3 DD 4E 7F
 altd ioi ld c, (ix-128)        ; 76 D3 DD 4E 80
 altd ioi ld c, (iy)            ; 76 D3 FD 4E 00
 altd ioi ld c, (iy+127)        ; 76 D3 FD 4E 7F
 altd ioi ld c, (iy-128)        ; 76 D3 FD 4E 80
 altd ioi ld d, (hl)            ; 76 D3 56
 altd ioi ld d, (ix)            ; 76 D3 DD 56 00
 altd ioi ld d, (ix+127)        ; 76 D3 DD 56 7F
 altd ioi ld d, (ix-128)        ; 76 D3 DD 56 80
 altd ioi ld d, (iy)            ; 76 D3 FD 56 00
 altd ioi ld d, (iy+127)        ; 76 D3 FD 56 7F
 altd ioi ld d, (iy-128)        ; 76 D3 FD 56 80
 altd ioi ld e, (hl)            ; 76 D3 5E
 altd ioi ld e, (ix)            ; 76 D3 DD 5E 00
 altd ioi ld e, (ix+127)        ; 76 D3 DD 5E 7F
 altd ioi ld e, (ix-128)        ; 76 D3 DD 5E 80
 altd ioi ld e, (iy)            ; 76 D3 FD 5E 00
 altd ioi ld e, (iy+127)        ; 76 D3 FD 5E 7F
 altd ioi ld e, (iy-128)        ; 76 D3 FD 5E 80
 altd ioi ld h, (hl)            ; 76 D3 66
 altd ioi ld h, (ix)            ; 76 D3 DD 66 00
 altd ioi ld h, (ix+127)        ; 76 D3 DD 66 7F
 altd ioi ld h, (ix-128)        ; 76 D3 DD 66 80
 altd ioi ld h, (iy)            ; 76 D3 FD 66 00
 altd ioi ld h, (iy+127)        ; 76 D3 FD 66 7F
 altd ioi ld h, (iy-128)        ; 76 D3 FD 66 80
 altd ioi ld l, (hl)            ; 76 D3 6E
 altd ioi ld l, (ix)            ; 76 D3 DD 6E 00
 altd ioi ld l, (ix+127)        ; 76 D3 DD 6E 7F
 altd ioi ld l, (ix-128)        ; 76 D3 DD 6E 80
 altd ioi ld l, (iy)            ; 76 D3 FD 6E 00
 altd ioi ld l, (iy+127)        ; 76 D3 FD 6E 7F
 altd ioi ld l, (iy-128)        ; 76 D3 FD 6E 80
 altd ioi or (hl)               ; 76 D3 B6
 altd ioi or (ix)               ; 76 D3 DD B6 00
 altd ioi or (ix+127)           ; 76 D3 DD B6 7F
 altd ioi or (ix-128)           ; 76 D3 DD B6 80
 altd ioi or (iy)               ; 76 D3 FD B6 00
 altd ioi or (iy+127)           ; 76 D3 FD B6 7F
 altd ioi or (iy-128)           ; 76 D3 FD B6 80
 altd ioi or a, (hl)            ; 76 D3 B6
 altd ioi or a, (ix)            ; 76 D3 DD B6 00
 altd ioi or a, (ix+127)        ; 76 D3 DD B6 7F
 altd ioi or a, (ix-128)        ; 76 D3 DD B6 80
 altd ioi or a, (iy)            ; 76 D3 FD B6 00
 altd ioi or a, (iy+127)        ; 76 D3 FD B6 7F
 altd ioi or a, (iy-128)        ; 76 D3 FD B6 80
 altd ioi sbc (hl)              ; 76 D3 9E
 altd ioi sbc (ix)              ; 76 D3 DD 9E 00
 altd ioi sbc (ix+127)          ; 76 D3 DD 9E 7F
 altd ioi sbc (ix-128)          ; 76 D3 DD 9E 80
 altd ioi sbc (iy)              ; 76 D3 FD 9E 00
 altd ioi sbc (iy+127)          ; 76 D3 FD 9E 7F
 altd ioi sbc (iy-128)          ; 76 D3 FD 9E 80
 altd ioi sbc a, (hl)           ; 76 D3 9E
 altd ioi sbc a, (ix)           ; 76 D3 DD 9E 00
 altd ioi sbc a, (ix+127)       ; 76 D3 DD 9E 7F
 altd ioi sbc a, (ix-128)       ; 76 D3 DD 9E 80
 altd ioi sbc a, (iy)           ; 76 D3 FD 9E 00
 altd ioi sbc a, (iy+127)       ; 76 D3 FD 9E 7F
 altd ioi sbc a, (iy-128)       ; 76 D3 FD 9E 80
 altd ioi sub (hl)              ; 76 D3 96
 altd ioi sub (ix)              ; 76 D3 DD 96 00
 altd ioi sub (ix+127)          ; 76 D3 DD 96 7F
 altd ioi sub (ix-128)          ; 76 D3 DD 96 80
 altd ioi sub (iy)              ; 76 D3 FD 96 00
 altd ioi sub (iy+127)          ; 76 D3 FD 96 7F
 altd ioi sub (iy-128)          ; 76 D3 FD 96 80
 altd ioi sub a, (hl)           ; 76 D3 96
 altd ioi sub a, (ix)           ; 76 D3 DD 96 00
 altd ioi sub a, (ix+127)       ; 76 D3 DD 96 7F
 altd ioi sub a, (ix-128)       ; 76 D3 DD 96 80
 altd ioi sub a, (iy)           ; 76 D3 FD 96 00
 altd ioi sub a, (iy+127)       ; 76 D3 FD 96 7F
 altd ioi sub a, (iy-128)       ; 76 D3 FD 96 80
 altd ioi xor (hl)              ; 76 D3 AE
 altd ioi xor (ix)              ; 76 D3 DD AE 00
 altd ioi xor (ix+127)          ; 76 D3 DD AE 7F
 altd ioi xor (ix-128)          ; 76 D3 DD AE 80
 altd ioi xor (iy)              ; 76 D3 FD AE 00
 altd ioi xor (iy+127)          ; 76 D3 FD AE 7F
 altd ioi xor (iy-128)          ; 76 D3 FD AE 80
 altd ioi xor a, (hl)           ; 76 D3 AE
 altd ioi xor a, (ix)           ; 76 D3 DD AE 00
 altd ioi xor a, (ix+127)       ; 76 D3 DD AE 7F
 altd ioi xor a, (ix-128)       ; 76 D3 DD AE 80
 altd ioi xor a, (iy)           ; 76 D3 FD AE 00
 altd ioi xor a, (iy+127)       ; 76 D3 FD AE 7F
 altd ioi xor a, (iy-128)       ; 76 D3 FD AE 80
 altd ld a, (-32768)            ; 76 3A 00 80
 altd ld a, (32767)             ; 76 3A FF 7F
 altd ld a, (65535)             ; 76 3A FF FF
 altd ld a, (bc)                ; 76 0A
 altd ld a, (de)                ; 76 1A
 altd ld a, (hl)                ; 76 7E
 altd ld a, (ix)                ; 76 DD 7E 00
 altd ld a, (ix+127)            ; 76 DD 7E 7F
 altd ld a, (ix-128)            ; 76 DD 7E 80
 altd ld a, (iy)                ; 76 FD 7E 00
 altd ld a, (iy+127)            ; 76 FD 7E 7F
 altd ld a, (iy-128)            ; 76 FD 7E 80
 altd ld a, -128                ; 76 3E 80
 altd ld a, 127                 ; 76 3E 7F
 altd ld a, 255                 ; 76 3E FF
 altd ld a, a                   ; 76 7F
 altd ld a, b                   ; 76 78
 altd ld a, c                   ; 76 79
 altd ld a, d                   ; 76 7A
 altd ld a, e                   ; 76 7B
 altd ld a, h                   ; 76 7C
 altd ld a, l                   ; 76 7D
 altd ld b, (hl)                ; 76 46
 altd ld b, (ix)                ; 76 DD 46 00
 altd ld b, (ix+127)            ; 76 DD 46 7F
 altd ld b, (ix-128)            ; 76 DD 46 80
 altd ld b, (iy)                ; 76 FD 46 00
 altd ld b, (iy+127)            ; 76 FD 46 7F
 altd ld b, (iy-128)            ; 76 FD 46 80
 altd ld b, -128                ; 76 06 80
 altd ld b, 127                 ; 76 06 7F
 altd ld b, 255                 ; 76 06 FF
 altd ld b, a                   ; 76 47
 altd ld b, b                   ; 76 40
 altd ld b, c                   ; 76 41
 altd ld b, d                   ; 76 42
 altd ld b, e                   ; 76 43
 altd ld b, h                   ; 76 44
 altd ld b, l                   ; 76 45
 altd ld c, (hl)                ; 76 4E
 altd ld c, (ix)                ; 76 DD 4E 00
 altd ld c, (ix+127)            ; 76 DD 4E 7F
 altd ld c, (ix-128)            ; 76 DD 4E 80
 altd ld c, (iy)                ; 76 FD 4E 00
 altd ld c, (iy+127)            ; 76 FD 4E 7F
 altd ld c, (iy-128)            ; 76 FD 4E 80
 altd ld c, -128                ; 76 0E 80
 altd ld c, 127                 ; 76 0E 7F
 altd ld c, 255                 ; 76 0E FF
 altd ld c, a                   ; 76 4F
 altd ld c, b                   ; 76 48
 altd ld c, c                   ; 76 49
 altd ld c, d                   ; 76 4A
 altd ld c, e                   ; 76 4B
 altd ld c, h                   ; 76 4C
 altd ld c, l                   ; 76 4D
 altd ld d, (hl)                ; 76 56
 altd ld d, (ix)                ; 76 DD 56 00
 altd ld d, (ix+127)            ; 76 DD 56 7F
 altd ld d, (ix-128)            ; 76 DD 56 80
 altd ld d, (iy)                ; 76 FD 56 00
 altd ld d, (iy+127)            ; 76 FD 56 7F
 altd ld d, (iy-128)            ; 76 FD 56 80
 altd ld d, -128                ; 76 16 80
 altd ld d, 127                 ; 76 16 7F
 altd ld d, 255                 ; 76 16 FF
 altd ld d, a                   ; 76 57
 altd ld d, b                   ; 76 50
 altd ld d, c                   ; 76 51
 altd ld d, d                   ; 76 52
 altd ld d, e                   ; 76 53
 altd ld d, h                   ; 76 54
 altd ld d, l                   ; 76 55
 altd ld e, (hl)                ; 76 5E
 altd ld e, (ix)                ; 76 DD 5E 00
 altd ld e, (ix+127)            ; 76 DD 5E 7F
 altd ld e, (ix-128)            ; 76 DD 5E 80
 altd ld e, (iy)                ; 76 FD 5E 00
 altd ld e, (iy+127)            ; 76 FD 5E 7F
 altd ld e, (iy-128)            ; 76 FD 5E 80
 altd ld e, -128                ; 76 1E 80
 altd ld e, 127                 ; 76 1E 7F
 altd ld e, 255                 ; 76 1E FF
 altd ld e, a                   ; 76 5F
 altd ld e, b                   ; 76 58
 altd ld e, c                   ; 76 59
 altd ld e, d                   ; 76 5A
 altd ld e, e                   ; 76 5B
 altd ld e, h                   ; 76 5C
 altd ld e, l                   ; 76 5D
 altd ld h, (hl)                ; 76 66
 altd ld h, (ix)                ; 76 DD 66 00
 altd ld h, (ix+127)            ; 76 DD 66 7F
 altd ld h, (ix-128)            ; 76 DD 66 80
 altd ld h, (iy)                ; 76 FD 66 00
 altd ld h, (iy+127)            ; 76 FD 66 7F
 altd ld h, (iy-128)            ; 76 FD 66 80
 altd ld h, -128                ; 76 26 80
 altd ld h, 127                 ; 76 26 7F
 altd ld h, 255                 ; 76 26 FF
 altd ld h, a                   ; 76 67
 altd ld h, b                   ; 76 60
 altd ld h, c                   ; 76 61
 altd ld h, d                   ; 76 62
 altd ld h, e                   ; 76 63
 altd ld h, h                   ; 76 64
 altd ld h, l                   ; 76 65
 altd ld l, (hl)                ; 76 6E
 altd ld l, (ix)                ; 76 DD 6E 00
 altd ld l, (ix+127)            ; 76 DD 6E 7F
 altd ld l, (ix-128)            ; 76 DD 6E 80
 altd ld l, (iy)                ; 76 FD 6E 00
 altd ld l, (iy+127)            ; 76 FD 6E 7F
 altd ld l, (iy-128)            ; 76 FD 6E 80
 altd ld l, -128                ; 76 2E 80
 altd ld l, 127                 ; 76 2E 7F
 altd ld l, 255                 ; 76 2E FF
 altd ld l, a                   ; 76 6F
 altd ld l, b                   ; 76 68
 altd ld l, c                   ; 76 69
 altd ld l, d                   ; 76 6A
 altd ld l, e                   ; 76 6B
 altd ld l, h                   ; 76 6C
 altd ld l, l                   ; 76 6D
 altd or (hl)                   ; 76 B6
 altd or (ix)                   ; 76 DD B6 00
 altd or (ix+127)               ; 76 DD B6 7F
 altd or (ix-128)               ; 76 DD B6 80
 altd or (iy)                   ; 76 FD B6 00
 altd or (iy+127)               ; 76 FD B6 7F
 altd or (iy-128)               ; 76 FD B6 80
 altd or -128                   ; 76 F6 80
 altd or 127                    ; 76 F6 7F
 altd or 255                    ; 76 F6 FF
 altd or a                      ; 76 B7
 altd or a, (hl)                ; 76 B6
 altd or a, (ix)                ; 76 DD B6 00
 altd or a, (ix+127)            ; 76 DD B6 7F
 altd or a, (ix-128)            ; 76 DD B6 80
 altd or a, (iy)                ; 76 FD B6 00
 altd or a, (iy+127)            ; 76 FD B6 7F
 altd or a, (iy-128)            ; 76 FD B6 80
 altd or a, -128                ; 76 F6 80
 altd or a, 127                 ; 76 F6 7F
 altd or a, 255                 ; 76 F6 FF
 altd or a, a                   ; 76 B7
 altd or a, b                   ; 76 B0
 altd or a, c                   ; 76 B1
 altd or a, d                   ; 76 B2
 altd or a, e                   ; 76 B3
 altd or a, h                   ; 76 B4
 altd or a, l                   ; 76 B5
 altd or b                      ; 76 B0
 altd or c                      ; 76 B1
 altd or d                      ; 76 B2
 altd or e                      ; 76 B3
 altd or h                      ; 76 B4
 altd or l                      ; 76 B5
 altd sbc (hl)                  ; 76 9E
 altd sbc (ix)                  ; 76 DD 9E 00
 altd sbc (ix+127)              ; 76 DD 9E 7F
 altd sbc (ix-128)              ; 76 DD 9E 80
 altd sbc (iy)                  ; 76 FD 9E 00
 altd sbc (iy+127)              ; 76 FD 9E 7F
 altd sbc (iy-128)              ; 76 FD 9E 80
 altd sbc -128                  ; 76 DE 80
 altd sbc 127                   ; 76 DE 7F
 altd sbc 255                   ; 76 DE FF
 altd sbc a                     ; 76 9F
 altd sbc a, (hl)               ; 76 9E
 altd sbc a, (ix)               ; 76 DD 9E 00
 altd sbc a, (ix+127)           ; 76 DD 9E 7F
 altd sbc a, (ix-128)           ; 76 DD 9E 80
 altd sbc a, (iy)               ; 76 FD 9E 00
 altd sbc a, (iy+127)           ; 76 FD 9E 7F
 altd sbc a, (iy-128)           ; 76 FD 9E 80
 altd sbc a, -128               ; 76 DE 80
 altd sbc a, 127                ; 76 DE 7F
 altd sbc a, 255                ; 76 DE FF
 altd sbc a, a                  ; 76 9F
 altd sbc a, b                  ; 76 98
 altd sbc a, c                  ; 76 99
 altd sbc a, d                  ; 76 9A
 altd sbc a, e                  ; 76 9B
 altd sbc a, h                  ; 76 9C
 altd sbc a, l                  ; 76 9D
 altd sbc b                     ; 76 98
 altd sbc c                     ; 76 99
 altd sbc d                     ; 76 9A
 altd sbc e                     ; 76 9B
 altd sbc h                     ; 76 9C
 altd sbc l                     ; 76 9D
 altd sub (hl)                  ; 76 96
 altd sub (ix)                  ; 76 DD 96 00
 altd sub (ix+127)              ; 76 DD 96 7F
 altd sub (ix-128)              ; 76 DD 96 80
 altd sub (iy)                  ; 76 FD 96 00
 altd sub (iy+127)              ; 76 FD 96 7F
 altd sub (iy-128)              ; 76 FD 96 80
 altd sub -128                  ; 76 D6 80
 altd sub 127                   ; 76 D6 7F
 altd sub 255                   ; 76 D6 FF
 altd sub a                     ; 76 97
 altd sub a, (hl)               ; 76 96
 altd sub a, (ix)               ; 76 DD 96 00
 altd sub a, (ix+127)           ; 76 DD 96 7F
 altd sub a, (ix-128)           ; 76 DD 96 80
 altd sub a, (iy)               ; 76 FD 96 00
 altd sub a, (iy+127)           ; 76 FD 96 7F
 altd sub a, (iy-128)           ; 76 FD 96 80
 altd sub a, -128               ; 76 D6 80
 altd sub a, 127                ; 76 D6 7F
 altd sub a, 255                ; 76 D6 FF
 altd sub a, a                  ; 76 97
 altd sub a, b                  ; 76 90
 altd sub a, c                  ; 76 91
 altd sub a, d                  ; 76 92
 altd sub a, e                  ; 76 93
 altd sub a, h                  ; 76 94
 altd sub a, l                  ; 76 95
 altd sub b                     ; 76 90
 altd sub c                     ; 76 91
 altd sub d                     ; 76 92
 altd sub e                     ; 76 93
 altd sub h                     ; 76 94
 altd sub l                     ; 76 95
 altd xor (hl)                  ; 76 AE
 altd xor (ix)                  ; 76 DD AE 00
 altd xor (ix+127)              ; 76 DD AE 7F
 altd xor (ix-128)              ; 76 DD AE 80
 altd xor (iy)                  ; 76 FD AE 00
 altd xor (iy+127)              ; 76 FD AE 7F
 altd xor (iy-128)              ; 76 FD AE 80
 altd xor -128                  ; 76 EE 80
 altd xor 127                   ; 76 EE 7F
 altd xor 255                   ; 76 EE FF
 altd xor a                     ; 76 AF
 altd xor a, (hl)               ; 76 AE
 altd xor a, (ix)               ; 76 DD AE 00
 altd xor a, (ix+127)           ; 76 DD AE 7F
 altd xor a, (ix-128)           ; 76 DD AE 80
 altd xor a, (iy)               ; 76 FD AE 00
 altd xor a, (iy+127)           ; 76 FD AE 7F
 altd xor a, (iy-128)           ; 76 FD AE 80
 altd xor a, -128               ; 76 EE 80
 altd xor a, 127                ; 76 EE 7F
 altd xor a, 255                ; 76 EE FF
 altd xor a, a                  ; 76 AF
 altd xor a, b                  ; 76 A8
 altd xor a, c                  ; 76 A9
 altd xor a, d                  ; 76 AA
 altd xor a, e                  ; 76 AB
 altd xor a, h                  ; 76 AC
 altd xor a, l                  ; 76 AD
 altd xor b                     ; 76 A8
 altd xor c                     ; 76 A9
 altd xor d                     ; 76 AA
 altd xor e                     ; 76 AB
 altd xor h                     ; 76 AC
 altd xor l                     ; 76 AD
 and (hl)                       ; A6
 and (ix)                       ; DD A6 00
 and (ix+127)                   ; DD A6 7F
 and (ix-128)                   ; DD A6 80
 and (iy)                       ; FD A6 00
 and (iy+127)                   ; FD A6 7F
 and (iy-128)                   ; FD A6 80
 and -128                       ; E6 80
 and 127                        ; E6 7F
 and 255                        ; E6 FF
 and a                          ; A7
 and a', (hl)                   ; 76 A6
 and a', (ix)                   ; 76 DD A6 00
 and a', (ix+127)               ; 76 DD A6 7F
 and a', (ix-128)               ; 76 DD A6 80
 and a', (iy)                   ; 76 FD A6 00
 and a', (iy+127)               ; 76 FD A6 7F
 and a', (iy-128)               ; 76 FD A6 80
 and a', -128                   ; 76 E6 80
 and a', 127                    ; 76 E6 7F
 and a', 255                    ; 76 E6 FF
 and a', a                      ; 76 A7
 and a', b                      ; 76 A0
 and a', c                      ; 76 A1
 and a', d                      ; 76 A2
 and a', e                      ; 76 A3
 and a', h                      ; 76 A4
 and a', l                      ; 76 A5
 and a, (hl)                    ; A6
 and a, (ix)                    ; DD A6 00
 and a, (ix+127)                ; DD A6 7F
 and a, (ix-128)                ; DD A6 80
 and a, (iy)                    ; FD A6 00
 and a, (iy+127)                ; FD A6 7F
 and a, (iy-128)                ; FD A6 80
 and a, -128                    ; E6 80
 and a, 127                     ; E6 7F
 and a, 255                     ; E6 FF
 and a, a                       ; A7
 and a, b                       ; A0
 and a, c                       ; A1
 and a, d                       ; A2
 and a, e                       ; A3
 and a, h                       ; A4
 and a, l                       ; A5
 and b                          ; A0
 and c                          ; A1
 and d                          ; A2
 and e                          ; A3
 and h                          ; A4
 and l                          ; A5
 cp (hl)                        ; BE
 cp (ix)                        ; DD BE 00
 cp (ix+127)                    ; DD BE 7F
 cp (ix-128)                    ; DD BE 80
 cp (iy)                        ; FD BE 00
 cp (iy+127)                    ; FD BE 7F
 cp (iy-128)                    ; FD BE 80
 cp -128                        ; FE 80
 cp 127                         ; FE 7F
 cp 255                         ; FE FF
 cp a                           ; BF
 cp a, (hl)                     ; BE
 cp a, (ix)                     ; DD BE 00
 cp a, (ix+127)                 ; DD BE 7F
 cp a, (ix-128)                 ; DD BE 80
 cp a, (iy)                     ; FD BE 00
 cp a, (iy+127)                 ; FD BE 7F
 cp a, (iy-128)                 ; FD BE 80
 cp a, -128                     ; FE 80
 cp a, 127                      ; FE 7F
 cp a, 255                      ; FE FF
 cp a, a                        ; BF
 cp a, b                        ; B8
 cp a, c                        ; B9
 cp a, d                        ; BA
 cp a, e                        ; BB
 cp a, h                        ; BC
 cp a, l                        ; BD
 cp b                           ; B8
 cp c                           ; B9
 cp d                           ; BA
 cp e                           ; BB
 cp h                           ; BC
 cp l                           ; BD
 dec (hl)                       ; 35
 dec (ix)                       ; DD 35 00
 dec (ix+127)                   ; DD 35 7F
 dec (ix-128)                   ; DD 35 80
 dec (iy)                       ; FD 35 00
 dec (iy+127)                   ; FD 35 7F
 dec (iy-128)                   ; FD 35 80
 dec a                          ; 3D
 dec a'                         ; 76 3D
 dec b                          ; 05
 dec b'                         ; 76 05
 dec c                          ; 0D
 dec c'                         ; 76 0D
 dec d                          ; 15
 dec d'                         ; 76 15
 dec e                          ; 1D
 dec e'                         ; 76 1D
 dec h                          ; 25
 dec h'                         ; 76 25
 dec l                          ; 2D
 dec l'                         ; 76 2D
 inc (hl)                       ; 34
 inc (ix)                       ; DD 34 00
 inc (ix+127)                   ; DD 34 7F
 inc (ix-128)                   ; DD 34 80
 inc (iy)                       ; FD 34 00
 inc (iy+127)                   ; FD 34 7F
 inc (iy-128)                   ; FD 34 80
 inc a                          ; 3C
 inc a'                         ; 76 3C
 inc b                          ; 04
 inc b'                         ; 76 04
 inc c                          ; 0C
 inc c'                         ; 76 0C
 inc d                          ; 14
 inc d'                         ; 76 14
 inc e                          ; 1C
 inc e'                         ; 76 1C
 inc h                          ; 24
 inc h'                         ; 76 24
 inc l                          ; 2C
 inc l'                         ; 76 2C
 ioe adc (hl)                   ; DB 8E
 ioe adc (ix)                   ; DB DD 8E 00
 ioe adc (ix+127)               ; DB DD 8E 7F
 ioe adc (ix-128)               ; DB DD 8E 80
 ioe adc (iy)                   ; DB FD 8E 00
 ioe adc (iy+127)               ; DB FD 8E 7F
 ioe adc (iy-128)               ; DB FD 8E 80
 ioe adc a', (hl)               ; DB 76 8E
 ioe adc a', (ix)               ; DB 76 DD 8E 00
 ioe adc a', (ix+127)           ; DB 76 DD 8E 7F
 ioe adc a', (ix-128)           ; DB 76 DD 8E 80
 ioe adc a', (iy)               ; DB 76 FD 8E 00
 ioe adc a', (iy+127)           ; DB 76 FD 8E 7F
 ioe adc a', (iy-128)           ; DB 76 FD 8E 80
 ioe adc a, (hl)                ; DB 8E
 ioe adc a, (ix)                ; DB DD 8E 00
 ioe adc a, (ix+127)            ; DB DD 8E 7F
 ioe adc a, (ix-128)            ; DB DD 8E 80
 ioe adc a, (iy)                ; DB FD 8E 00
 ioe adc a, (iy+127)            ; DB FD 8E 7F
 ioe adc a, (iy-128)            ; DB FD 8E 80
 ioe add (hl)                   ; DB 86
 ioe add (ix)                   ; DB DD 86 00
 ioe add (ix+127)               ; DB DD 86 7F
 ioe add (ix-128)               ; DB DD 86 80
 ioe add (iy)                   ; DB FD 86 00
 ioe add (iy+127)               ; DB FD 86 7F
 ioe add (iy-128)               ; DB FD 86 80
 ioe add a', (hl)               ; DB 76 86
 ioe add a', (ix)               ; DB 76 DD 86 00
 ioe add a', (ix+127)           ; DB 76 DD 86 7F
 ioe add a', (ix-128)           ; DB 76 DD 86 80
 ioe add a', (iy)               ; DB 76 FD 86 00
 ioe add a', (iy+127)           ; DB 76 FD 86 7F
 ioe add a', (iy-128)           ; DB 76 FD 86 80
 ioe add a, (hl)                ; DB 86
 ioe add a, (ix)                ; DB DD 86 00
 ioe add a, (ix+127)            ; DB DD 86 7F
 ioe add a, (ix-128)            ; DB DD 86 80
 ioe add a, (iy)                ; DB FD 86 00
 ioe add a, (iy+127)            ; DB FD 86 7F
 ioe add a, (iy-128)            ; DB FD 86 80
 ioe altd adc (hl)              ; DB 76 8E
 ioe altd adc (ix)              ; DB 76 DD 8E 00
 ioe altd adc (ix+127)          ; DB 76 DD 8E 7F
 ioe altd adc (ix-128)          ; DB 76 DD 8E 80
 ioe altd adc (iy)              ; DB 76 FD 8E 00
 ioe altd adc (iy+127)          ; DB 76 FD 8E 7F
 ioe altd adc (iy-128)          ; DB 76 FD 8E 80
 ioe altd adc a, (hl)           ; DB 76 8E
 ioe altd adc a, (ix)           ; DB 76 DD 8E 00
 ioe altd adc a, (ix+127)       ; DB 76 DD 8E 7F
 ioe altd adc a, (ix-128)       ; DB 76 DD 8E 80
 ioe altd adc a, (iy)           ; DB 76 FD 8E 00
 ioe altd adc a, (iy+127)       ; DB 76 FD 8E 7F
 ioe altd adc a, (iy-128)       ; DB 76 FD 8E 80
 ioe altd add (hl)              ; DB 76 86
 ioe altd add (ix)              ; DB 76 DD 86 00
 ioe altd add (ix+127)          ; DB 76 DD 86 7F
 ioe altd add (ix-128)          ; DB 76 DD 86 80
 ioe altd add (iy)              ; DB 76 FD 86 00
 ioe altd add (iy+127)          ; DB 76 FD 86 7F
 ioe altd add (iy-128)          ; DB 76 FD 86 80
 ioe altd add a, (hl)           ; DB 76 86
 ioe altd add a, (ix)           ; DB 76 DD 86 00
 ioe altd add a, (ix+127)       ; DB 76 DD 86 7F
 ioe altd add a, (ix-128)       ; DB 76 DD 86 80
 ioe altd add a, (iy)           ; DB 76 FD 86 00
 ioe altd add a, (iy+127)       ; DB 76 FD 86 7F
 ioe altd add a, (iy-128)       ; DB 76 FD 86 80
 ioe altd and (hl)              ; DB 76 A6
 ioe altd and (ix)              ; DB 76 DD A6 00
 ioe altd and (ix+127)          ; DB 76 DD A6 7F
 ioe altd and (ix-128)          ; DB 76 DD A6 80
 ioe altd and (iy)              ; DB 76 FD A6 00
 ioe altd and (iy+127)          ; DB 76 FD A6 7F
 ioe altd and (iy-128)          ; DB 76 FD A6 80
 ioe altd and a, (hl)           ; DB 76 A6
 ioe altd and a, (ix)           ; DB 76 DD A6 00
 ioe altd and a, (ix+127)       ; DB 76 DD A6 7F
 ioe altd and a, (ix-128)       ; DB 76 DD A6 80
 ioe altd and a, (iy)           ; DB 76 FD A6 00
 ioe altd and a, (iy+127)       ; DB 76 FD A6 7F
 ioe altd and a, (iy-128)       ; DB 76 FD A6 80
 ioe altd cp (hl)               ; DB 76 BE
 ioe altd cp (ix)               ; DB 76 DD BE 00
 ioe altd cp (ix+127)           ; DB 76 DD BE 7F
 ioe altd cp (ix-128)           ; DB 76 DD BE 80
 ioe altd cp (iy)               ; DB 76 FD BE 00
 ioe altd cp (iy+127)           ; DB 76 FD BE 7F
 ioe altd cp (iy-128)           ; DB 76 FD BE 80
 ioe altd cp a, (hl)            ; DB 76 BE
 ioe altd cp a, (ix)            ; DB 76 DD BE 00
 ioe altd cp a, (ix+127)        ; DB 76 DD BE 7F
 ioe altd cp a, (ix-128)        ; DB 76 DD BE 80
 ioe altd cp a, (iy)            ; DB 76 FD BE 00
 ioe altd cp a, (iy+127)        ; DB 76 FD BE 7F
 ioe altd cp a, (iy-128)        ; DB 76 FD BE 80
 ioe altd ld a, (-32768)        ; DB 76 3A 00 80
 ioe altd ld a, (32767)         ; DB 76 3A FF 7F
 ioe altd ld a, (65535)         ; DB 76 3A FF FF
 ioe altd ld a, (bc)            ; DB 76 0A
 ioe altd ld a, (de)            ; DB 76 1A
 ioe altd ld a, (hl)            ; DB 76 7E
 ioe altd ld a, (ix)            ; DB 76 DD 7E 00
 ioe altd ld a, (ix+127)        ; DB 76 DD 7E 7F
 ioe altd ld a, (ix-128)        ; DB 76 DD 7E 80
 ioe altd ld a, (iy)            ; DB 76 FD 7E 00
 ioe altd ld a, (iy+127)        ; DB 76 FD 7E 7F
 ioe altd ld a, (iy-128)        ; DB 76 FD 7E 80
 ioe altd ld b, (hl)            ; DB 76 46
 ioe altd ld b, (ix)            ; DB 76 DD 46 00
 ioe altd ld b, (ix+127)        ; DB 76 DD 46 7F
 ioe altd ld b, (ix-128)        ; DB 76 DD 46 80
 ioe altd ld b, (iy)            ; DB 76 FD 46 00
 ioe altd ld b, (iy+127)        ; DB 76 FD 46 7F
 ioe altd ld b, (iy-128)        ; DB 76 FD 46 80
 ioe altd ld c, (hl)            ; DB 76 4E
 ioe altd ld c, (ix)            ; DB 76 DD 4E 00
 ioe altd ld c, (ix+127)        ; DB 76 DD 4E 7F
 ioe altd ld c, (ix-128)        ; DB 76 DD 4E 80
 ioe altd ld c, (iy)            ; DB 76 FD 4E 00
 ioe altd ld c, (iy+127)        ; DB 76 FD 4E 7F
 ioe altd ld c, (iy-128)        ; DB 76 FD 4E 80
 ioe altd ld d, (hl)            ; DB 76 56
 ioe altd ld d, (ix)            ; DB 76 DD 56 00
 ioe altd ld d, (ix+127)        ; DB 76 DD 56 7F
 ioe altd ld d, (ix-128)        ; DB 76 DD 56 80
 ioe altd ld d, (iy)            ; DB 76 FD 56 00
 ioe altd ld d, (iy+127)        ; DB 76 FD 56 7F
 ioe altd ld d, (iy-128)        ; DB 76 FD 56 80
 ioe altd ld e, (hl)            ; DB 76 5E
 ioe altd ld e, (ix)            ; DB 76 DD 5E 00
 ioe altd ld e, (ix+127)        ; DB 76 DD 5E 7F
 ioe altd ld e, (ix-128)        ; DB 76 DD 5E 80
 ioe altd ld e, (iy)            ; DB 76 FD 5E 00
 ioe altd ld e, (iy+127)        ; DB 76 FD 5E 7F
 ioe altd ld e, (iy-128)        ; DB 76 FD 5E 80
 ioe altd ld h, (hl)            ; DB 76 66
 ioe altd ld h, (ix)            ; DB 76 DD 66 00
 ioe altd ld h, (ix+127)        ; DB 76 DD 66 7F
 ioe altd ld h, (ix-128)        ; DB 76 DD 66 80
 ioe altd ld h, (iy)            ; DB 76 FD 66 00
 ioe altd ld h, (iy+127)        ; DB 76 FD 66 7F
 ioe altd ld h, (iy-128)        ; DB 76 FD 66 80
 ioe altd ld l, (hl)            ; DB 76 6E
 ioe altd ld l, (ix)            ; DB 76 DD 6E 00
 ioe altd ld l, (ix+127)        ; DB 76 DD 6E 7F
 ioe altd ld l, (ix-128)        ; DB 76 DD 6E 80
 ioe altd ld l, (iy)            ; DB 76 FD 6E 00
 ioe altd ld l, (iy+127)        ; DB 76 FD 6E 7F
 ioe altd ld l, (iy-128)        ; DB 76 FD 6E 80
 ioe altd or (hl)               ; DB 76 B6
 ioe altd or (ix)               ; DB 76 DD B6 00
 ioe altd or (ix+127)           ; DB 76 DD B6 7F
 ioe altd or (ix-128)           ; DB 76 DD B6 80
 ioe altd or (iy)               ; DB 76 FD B6 00
 ioe altd or (iy+127)           ; DB 76 FD B6 7F
 ioe altd or (iy-128)           ; DB 76 FD B6 80
 ioe altd or a, (hl)            ; DB 76 B6
 ioe altd or a, (ix)            ; DB 76 DD B6 00
 ioe altd or a, (ix+127)        ; DB 76 DD B6 7F
 ioe altd or a, (ix-128)        ; DB 76 DD B6 80
 ioe altd or a, (iy)            ; DB 76 FD B6 00
 ioe altd or a, (iy+127)        ; DB 76 FD B6 7F
 ioe altd or a, (iy-128)        ; DB 76 FD B6 80
 ioe altd sbc (hl)              ; DB 76 9E
 ioe altd sbc (ix)              ; DB 76 DD 9E 00
 ioe altd sbc (ix+127)          ; DB 76 DD 9E 7F
 ioe altd sbc (ix-128)          ; DB 76 DD 9E 80
 ioe altd sbc (iy)              ; DB 76 FD 9E 00
 ioe altd sbc (iy+127)          ; DB 76 FD 9E 7F
 ioe altd sbc (iy-128)          ; DB 76 FD 9E 80
 ioe altd sbc a, (hl)           ; DB 76 9E
 ioe altd sbc a, (ix)           ; DB 76 DD 9E 00
 ioe altd sbc a, (ix+127)       ; DB 76 DD 9E 7F
 ioe altd sbc a, (ix-128)       ; DB 76 DD 9E 80
 ioe altd sbc a, (iy)           ; DB 76 FD 9E 00
 ioe altd sbc a, (iy+127)       ; DB 76 FD 9E 7F
 ioe altd sbc a, (iy-128)       ; DB 76 FD 9E 80
 ioe altd sub (hl)              ; DB 76 96
 ioe altd sub (ix)              ; DB 76 DD 96 00
 ioe altd sub (ix+127)          ; DB 76 DD 96 7F
 ioe altd sub (ix-128)          ; DB 76 DD 96 80
 ioe altd sub (iy)              ; DB 76 FD 96 00
 ioe altd sub (iy+127)          ; DB 76 FD 96 7F
 ioe altd sub (iy-128)          ; DB 76 FD 96 80
 ioe altd sub a, (hl)           ; DB 76 96
 ioe altd sub a, (ix)           ; DB 76 DD 96 00
 ioe altd sub a, (ix+127)       ; DB 76 DD 96 7F
 ioe altd sub a, (ix-128)       ; DB 76 DD 96 80
 ioe altd sub a, (iy)           ; DB 76 FD 96 00
 ioe altd sub a, (iy+127)       ; DB 76 FD 96 7F
 ioe altd sub a, (iy-128)       ; DB 76 FD 96 80
 ioe altd xor (hl)              ; DB 76 AE
 ioe altd xor (ix)              ; DB 76 DD AE 00
 ioe altd xor (ix+127)          ; DB 76 DD AE 7F
 ioe altd xor (ix-128)          ; DB 76 DD AE 80
 ioe altd xor (iy)              ; DB 76 FD AE 00
 ioe altd xor (iy+127)          ; DB 76 FD AE 7F
 ioe altd xor (iy-128)          ; DB 76 FD AE 80
 ioe altd xor a, (hl)           ; DB 76 AE
 ioe altd xor a, (ix)           ; DB 76 DD AE 00
 ioe altd xor a, (ix+127)       ; DB 76 DD AE 7F
 ioe altd xor a, (ix-128)       ; DB 76 DD AE 80
 ioe altd xor a, (iy)           ; DB 76 FD AE 00
 ioe altd xor a, (iy+127)       ; DB 76 FD AE 7F
 ioe altd xor a, (iy-128)       ; DB 76 FD AE 80
 ioe and (hl)                   ; DB A6
 ioe and (ix)                   ; DB DD A6 00
 ioe and (ix+127)               ; DB DD A6 7F
 ioe and (ix-128)               ; DB DD A6 80
 ioe and (iy)                   ; DB FD A6 00
 ioe and (iy+127)               ; DB FD A6 7F
 ioe and (iy-128)               ; DB FD A6 80
 ioe and a', (hl)               ; DB 76 A6
 ioe and a', (ix)               ; DB 76 DD A6 00
 ioe and a', (ix+127)           ; DB 76 DD A6 7F
 ioe and a', (ix-128)           ; DB 76 DD A6 80
 ioe and a', (iy)               ; DB 76 FD A6 00
 ioe and a', (iy+127)           ; DB 76 FD A6 7F
 ioe and a', (iy-128)           ; DB 76 FD A6 80
 ioe and a, (hl)                ; DB A6
 ioe and a, (ix)                ; DB DD A6 00
 ioe and a, (ix+127)            ; DB DD A6 7F
 ioe and a, (ix-128)            ; DB DD A6 80
 ioe and a, (iy)                ; DB FD A6 00
 ioe and a, (iy+127)            ; DB FD A6 7F
 ioe and a, (iy-128)            ; DB FD A6 80
 ioe cp (hl)                    ; DB BE
 ioe cp (ix)                    ; DB DD BE 00
 ioe cp (ix+127)                ; DB DD BE 7F
 ioe cp (ix-128)                ; DB DD BE 80
 ioe cp (iy)                    ; DB FD BE 00
 ioe cp (iy+127)                ; DB FD BE 7F
 ioe cp (iy-128)                ; DB FD BE 80
 ioe cp a, (hl)                 ; DB BE
 ioe cp a, (ix)                 ; DB DD BE 00
 ioe cp a, (ix+127)             ; DB DD BE 7F
 ioe cp a, (ix-128)             ; DB DD BE 80
 ioe cp a, (iy)                 ; DB FD BE 00
 ioe cp a, (iy+127)             ; DB FD BE 7F
 ioe cp a, (iy-128)             ; DB FD BE 80
 ioe dec (hl)                   ; DB 35
 ioe dec (ix)                   ; DB DD 35 00
 ioe dec (ix+127)               ; DB DD 35 7F
 ioe dec (ix-128)               ; DB DD 35 80
 ioe dec (iy)                   ; DB FD 35 00
 ioe dec (iy+127)               ; DB FD 35 7F
 ioe dec (iy-128)               ; DB FD 35 80
 ioe inc (hl)                   ; DB 34
 ioe inc (ix)                   ; DB DD 34 00
 ioe inc (ix+127)               ; DB DD 34 7F
 ioe inc (ix-128)               ; DB DD 34 80
 ioe inc (iy)                   ; DB FD 34 00
 ioe inc (iy+127)               ; DB FD 34 7F
 ioe inc (iy-128)               ; DB FD 34 80
 ioe ld (-32768), a             ; DB 32 00 80
 ioe ld (32767), a              ; DB 32 FF 7F
 ioe ld (65535), a              ; DB 32 FF FF
 ioe ld (bc), a                 ; DB 02
 ioe ld (de), a                 ; DB 12
 ioe ld (hl), -128              ; DB 36 80
 ioe ld (hl), 127               ; DB 36 7F
 ioe ld (hl), 255               ; DB 36 FF
 ioe ld (hl), a                 ; DB 77
 ioe ld (hl), b                 ; DB 70
 ioe ld (hl), c                 ; DB 71
 ioe ld (hl), d                 ; DB 72
 ioe ld (hl), e                 ; DB 73
 ioe ld (hl), h                 ; DB 74
 ioe ld (hl), l                 ; DB 75
 ioe ld (ix), -128              ; DB DD 36 00 80
 ioe ld (ix), 127               ; DB DD 36 00 7F
 ioe ld (ix), 255               ; DB DD 36 00 FF
 ioe ld (ix), a                 ; DB DD 77 00
 ioe ld (ix), b                 ; DB DD 70 00
 ioe ld (ix), c                 ; DB DD 71 00
 ioe ld (ix), d                 ; DB DD 72 00
 ioe ld (ix), e                 ; DB DD 73 00
 ioe ld (ix), h                 ; DB DD 74 00
 ioe ld (ix), l                 ; DB DD 75 00
 ioe ld (ix+127), -128          ; DB DD 36 7F 80
 ioe ld (ix+127), 127           ; DB DD 36 7F 7F
 ioe ld (ix+127), 255           ; DB DD 36 7F FF
 ioe ld (ix+127), a             ; DB DD 77 7F
 ioe ld (ix+127), b             ; DB DD 70 7F
 ioe ld (ix+127), c             ; DB DD 71 7F
 ioe ld (ix+127), d             ; DB DD 72 7F
 ioe ld (ix+127), e             ; DB DD 73 7F
 ioe ld (ix+127), h             ; DB DD 74 7F
 ioe ld (ix+127), l             ; DB DD 75 7F
 ioe ld (ix-128), -128          ; DB DD 36 80 80
 ioe ld (ix-128), 127           ; DB DD 36 80 7F
 ioe ld (ix-128), 255           ; DB DD 36 80 FF
 ioe ld (ix-128), a             ; DB DD 77 80
 ioe ld (ix-128), b             ; DB DD 70 80
 ioe ld (ix-128), c             ; DB DD 71 80
 ioe ld (ix-128), d             ; DB DD 72 80
 ioe ld (ix-128), e             ; DB DD 73 80
 ioe ld (ix-128), h             ; DB DD 74 80
 ioe ld (ix-128), l             ; DB DD 75 80
 ioe ld (iy), -128              ; DB FD 36 00 80
 ioe ld (iy), 127               ; DB FD 36 00 7F
 ioe ld (iy), 255               ; DB FD 36 00 FF
 ioe ld (iy), a                 ; DB FD 77 00
 ioe ld (iy), b                 ; DB FD 70 00
 ioe ld (iy), c                 ; DB FD 71 00
 ioe ld (iy), d                 ; DB FD 72 00
 ioe ld (iy), e                 ; DB FD 73 00
 ioe ld (iy), h                 ; DB FD 74 00
 ioe ld (iy), l                 ; DB FD 75 00
 ioe ld (iy+127), -128          ; DB FD 36 7F 80
 ioe ld (iy+127), 127           ; DB FD 36 7F 7F
 ioe ld (iy+127), 255           ; DB FD 36 7F FF
 ioe ld (iy+127), a             ; DB FD 77 7F
 ioe ld (iy+127), b             ; DB FD 70 7F
 ioe ld (iy+127), c             ; DB FD 71 7F
 ioe ld (iy+127), d             ; DB FD 72 7F
 ioe ld (iy+127), e             ; DB FD 73 7F
 ioe ld (iy+127), h             ; DB FD 74 7F
 ioe ld (iy+127), l             ; DB FD 75 7F
 ioe ld (iy-128), -128          ; DB FD 36 80 80
 ioe ld (iy-128), 127           ; DB FD 36 80 7F
 ioe ld (iy-128), 255           ; DB FD 36 80 FF
 ioe ld (iy-128), a             ; DB FD 77 80
 ioe ld (iy-128), b             ; DB FD 70 80
 ioe ld (iy-128), c             ; DB FD 71 80
 ioe ld (iy-128), d             ; DB FD 72 80
 ioe ld (iy-128), e             ; DB FD 73 80
 ioe ld (iy-128), h             ; DB FD 74 80
 ioe ld (iy-128), l             ; DB FD 75 80
 ioe ld a', (-32768)            ; DB 76 3A 00 80
 ioe ld a', (32767)             ; DB 76 3A FF 7F
 ioe ld a', (65535)             ; DB 76 3A FF FF
 ioe ld a', (bc)                ; DB 76 0A
 ioe ld a', (de)                ; DB 76 1A
 ioe ld a', (hl)                ; DB 76 7E
 ioe ld a', (ix)                ; DB 76 DD 7E 00
 ioe ld a', (ix+127)            ; DB 76 DD 7E 7F
 ioe ld a', (ix-128)            ; DB 76 DD 7E 80
 ioe ld a', (iy)                ; DB 76 FD 7E 00
 ioe ld a', (iy+127)            ; DB 76 FD 7E 7F
 ioe ld a', (iy-128)            ; DB 76 FD 7E 80
 ioe ld a, (-32768)             ; DB 3A 00 80
 ioe ld a, (32767)              ; DB 3A FF 7F
 ioe ld a, (65535)              ; DB 3A FF FF
 ioe ld a, (bc)                 ; DB 0A
 ioe ld a, (de)                 ; DB 1A
 ioe ld a, (hl)                 ; DB 7E
 ioe ld a, (ix)                 ; DB DD 7E 00
 ioe ld a, (ix+127)             ; DB DD 7E 7F
 ioe ld a, (ix-128)             ; DB DD 7E 80
 ioe ld a, (iy)                 ; DB FD 7E 00
 ioe ld a, (iy+127)             ; DB FD 7E 7F
 ioe ld a, (iy-128)             ; DB FD 7E 80
 ioe ld b', (hl)                ; DB 76 46
 ioe ld b', (ix)                ; DB 76 DD 46 00
 ioe ld b', (ix+127)            ; DB 76 DD 46 7F
 ioe ld b', (ix-128)            ; DB 76 DD 46 80
 ioe ld b', (iy)                ; DB 76 FD 46 00
 ioe ld b', (iy+127)            ; DB 76 FD 46 7F
 ioe ld b', (iy-128)            ; DB 76 FD 46 80
 ioe ld b, (hl)                 ; DB 46
 ioe ld b, (ix)                 ; DB DD 46 00
 ioe ld b, (ix+127)             ; DB DD 46 7F
 ioe ld b, (ix-128)             ; DB DD 46 80
 ioe ld b, (iy)                 ; DB FD 46 00
 ioe ld b, (iy+127)             ; DB FD 46 7F
 ioe ld b, (iy-128)             ; DB FD 46 80
 ioe ld c', (hl)                ; DB 76 4E
 ioe ld c', (ix)                ; DB 76 DD 4E 00
 ioe ld c', (ix+127)            ; DB 76 DD 4E 7F
 ioe ld c', (ix-128)            ; DB 76 DD 4E 80
 ioe ld c', (iy)                ; DB 76 FD 4E 00
 ioe ld c', (iy+127)            ; DB 76 FD 4E 7F
 ioe ld c', (iy-128)            ; DB 76 FD 4E 80
 ioe ld c, (hl)                 ; DB 4E
 ioe ld c, (ix)                 ; DB DD 4E 00
 ioe ld c, (ix+127)             ; DB DD 4E 7F
 ioe ld c, (ix-128)             ; DB DD 4E 80
 ioe ld c, (iy)                 ; DB FD 4E 00
 ioe ld c, (iy+127)             ; DB FD 4E 7F
 ioe ld c, (iy-128)             ; DB FD 4E 80
 ioe ld d', (hl)                ; DB 76 56
 ioe ld d', (ix)                ; DB 76 DD 56 00
 ioe ld d', (ix+127)            ; DB 76 DD 56 7F
 ioe ld d', (ix-128)            ; DB 76 DD 56 80
 ioe ld d', (iy)                ; DB 76 FD 56 00
 ioe ld d', (iy+127)            ; DB 76 FD 56 7F
 ioe ld d', (iy-128)            ; DB 76 FD 56 80
 ioe ld d, (hl)                 ; DB 56
 ioe ld d, (ix)                 ; DB DD 56 00
 ioe ld d, (ix+127)             ; DB DD 56 7F
 ioe ld d, (ix-128)             ; DB DD 56 80
 ioe ld d, (iy)                 ; DB FD 56 00
 ioe ld d, (iy+127)             ; DB FD 56 7F
 ioe ld d, (iy-128)             ; DB FD 56 80
 ioe ld e', (hl)                ; DB 76 5E
 ioe ld e', (ix)                ; DB 76 DD 5E 00
 ioe ld e', (ix+127)            ; DB 76 DD 5E 7F
 ioe ld e', (ix-128)            ; DB 76 DD 5E 80
 ioe ld e', (iy)                ; DB 76 FD 5E 00
 ioe ld e', (iy+127)            ; DB 76 FD 5E 7F
 ioe ld e', (iy-128)            ; DB 76 FD 5E 80
 ioe ld e, (hl)                 ; DB 5E
 ioe ld e, (ix)                 ; DB DD 5E 00
 ioe ld e, (ix+127)             ; DB DD 5E 7F
 ioe ld e, (ix-128)             ; DB DD 5E 80
 ioe ld e, (iy)                 ; DB FD 5E 00
 ioe ld e, (iy+127)             ; DB FD 5E 7F
 ioe ld e, (iy-128)             ; DB FD 5E 80
 ioe ld h', (hl)                ; DB 76 66
 ioe ld h', (ix)                ; DB 76 DD 66 00
 ioe ld h', (ix+127)            ; DB 76 DD 66 7F
 ioe ld h', (ix-128)            ; DB 76 DD 66 80
 ioe ld h', (iy)                ; DB 76 FD 66 00
 ioe ld h', (iy+127)            ; DB 76 FD 66 7F
 ioe ld h', (iy-128)            ; DB 76 FD 66 80
 ioe ld h, (hl)                 ; DB 66
 ioe ld h, (ix)                 ; DB DD 66 00
 ioe ld h, (ix+127)             ; DB DD 66 7F
 ioe ld h, (ix-128)             ; DB DD 66 80
 ioe ld h, (iy)                 ; DB FD 66 00
 ioe ld h, (iy+127)             ; DB FD 66 7F
 ioe ld h, (iy-128)             ; DB FD 66 80
 ioe ld l', (hl)                ; DB 76 6E
 ioe ld l', (ix)                ; DB 76 DD 6E 00
 ioe ld l', (ix+127)            ; DB 76 DD 6E 7F
 ioe ld l', (ix-128)            ; DB 76 DD 6E 80
 ioe ld l', (iy)                ; DB 76 FD 6E 00
 ioe ld l', (iy+127)            ; DB 76 FD 6E 7F
 ioe ld l', (iy-128)            ; DB 76 FD 6E 80
 ioe ld l, (hl)                 ; DB 6E
 ioe ld l, (ix)                 ; DB DD 6E 00
 ioe ld l, (ix+127)             ; DB DD 6E 7F
 ioe ld l, (ix-128)             ; DB DD 6E 80
 ioe ld l, (iy)                 ; DB FD 6E 00
 ioe ld l, (iy+127)             ; DB FD 6E 7F
 ioe ld l, (iy-128)             ; DB FD 6E 80
 ioe or (hl)                    ; DB B6
 ioe or (ix)                    ; DB DD B6 00
 ioe or (ix+127)                ; DB DD B6 7F
 ioe or (ix-128)                ; DB DD B6 80
 ioe or (iy)                    ; DB FD B6 00
 ioe or (iy+127)                ; DB FD B6 7F
 ioe or (iy-128)                ; DB FD B6 80
 ioe or a', (hl)                ; DB 76 B6
 ioe or a', (ix)                ; DB 76 DD B6 00
 ioe or a', (ix+127)            ; DB 76 DD B6 7F
 ioe or a', (ix-128)            ; DB 76 DD B6 80
 ioe or a', (iy)                ; DB 76 FD B6 00
 ioe or a', (iy+127)            ; DB 76 FD B6 7F
 ioe or a', (iy-128)            ; DB 76 FD B6 80
 ioe or a, (hl)                 ; DB B6
 ioe or a, (ix)                 ; DB DD B6 00
 ioe or a, (ix+127)             ; DB DD B6 7F
 ioe or a, (ix-128)             ; DB DD B6 80
 ioe or a, (iy)                 ; DB FD B6 00
 ioe or a, (iy+127)             ; DB FD B6 7F
 ioe or a, (iy-128)             ; DB FD B6 80
 ioe sbc (hl)                   ; DB 9E
 ioe sbc (ix)                   ; DB DD 9E 00
 ioe sbc (ix+127)               ; DB DD 9E 7F
 ioe sbc (ix-128)               ; DB DD 9E 80
 ioe sbc (iy)                   ; DB FD 9E 00
 ioe sbc (iy+127)               ; DB FD 9E 7F
 ioe sbc (iy-128)               ; DB FD 9E 80
 ioe sbc a', (hl)               ; DB 76 9E
 ioe sbc a', (ix)               ; DB 76 DD 9E 00
 ioe sbc a', (ix+127)           ; DB 76 DD 9E 7F
 ioe sbc a', (ix-128)           ; DB 76 DD 9E 80
 ioe sbc a', (iy)               ; DB 76 FD 9E 00
 ioe sbc a', (iy+127)           ; DB 76 FD 9E 7F
 ioe sbc a', (iy-128)           ; DB 76 FD 9E 80
 ioe sbc a, (hl)                ; DB 9E
 ioe sbc a, (ix)                ; DB DD 9E 00
 ioe sbc a, (ix+127)            ; DB DD 9E 7F
 ioe sbc a, (ix-128)            ; DB DD 9E 80
 ioe sbc a, (iy)                ; DB FD 9E 00
 ioe sbc a, (iy+127)            ; DB FD 9E 7F
 ioe sbc a, (iy-128)            ; DB FD 9E 80
 ioe sub (hl)                   ; DB 96
 ioe sub (ix)                   ; DB DD 96 00
 ioe sub (ix+127)               ; DB DD 96 7F
 ioe sub (ix-128)               ; DB DD 96 80
 ioe sub (iy)                   ; DB FD 96 00
 ioe sub (iy+127)               ; DB FD 96 7F
 ioe sub (iy-128)               ; DB FD 96 80
 ioe sub a', (hl)               ; DB 76 96
 ioe sub a', (ix)               ; DB 76 DD 96 00
 ioe sub a', (ix+127)           ; DB 76 DD 96 7F
 ioe sub a', (ix-128)           ; DB 76 DD 96 80
 ioe sub a', (iy)               ; DB 76 FD 96 00
 ioe sub a', (iy+127)           ; DB 76 FD 96 7F
 ioe sub a', (iy-128)           ; DB 76 FD 96 80
 ioe sub a, (hl)                ; DB 96
 ioe sub a, (ix)                ; DB DD 96 00
 ioe sub a, (ix+127)            ; DB DD 96 7F
 ioe sub a, (ix-128)            ; DB DD 96 80
 ioe sub a, (iy)                ; DB FD 96 00
 ioe sub a, (iy+127)            ; DB FD 96 7F
 ioe sub a, (iy-128)            ; DB FD 96 80
 ioe xor (hl)                   ; DB AE
 ioe xor (ix)                   ; DB DD AE 00
 ioe xor (ix+127)               ; DB DD AE 7F
 ioe xor (ix-128)               ; DB DD AE 80
 ioe xor (iy)                   ; DB FD AE 00
 ioe xor (iy+127)               ; DB FD AE 7F
 ioe xor (iy-128)               ; DB FD AE 80
 ioe xor a', (hl)               ; DB 76 AE
 ioe xor a', (ix)               ; DB 76 DD AE 00
 ioe xor a', (ix+127)           ; DB 76 DD AE 7F
 ioe xor a', (ix-128)           ; DB 76 DD AE 80
 ioe xor a', (iy)               ; DB 76 FD AE 00
 ioe xor a', (iy+127)           ; DB 76 FD AE 7F
 ioe xor a', (iy-128)           ; DB 76 FD AE 80
 ioe xor a, (hl)                ; DB AE
 ioe xor a, (ix)                ; DB DD AE 00
 ioe xor a, (ix+127)            ; DB DD AE 7F
 ioe xor a, (ix-128)            ; DB DD AE 80
 ioe xor a, (iy)                ; DB FD AE 00
 ioe xor a, (iy+127)            ; DB FD AE 7F
 ioe xor a, (iy-128)            ; DB FD AE 80
 ioi adc (hl)                   ; D3 8E
 ioi adc (ix)                   ; D3 DD 8E 00
 ioi adc (ix+127)               ; D3 DD 8E 7F
 ioi adc (ix-128)               ; D3 DD 8E 80
 ioi adc (iy)                   ; D3 FD 8E 00
 ioi adc (iy+127)               ; D3 FD 8E 7F
 ioi adc (iy-128)               ; D3 FD 8E 80
 ioi adc a', (hl)               ; D3 76 8E
 ioi adc a', (ix)               ; D3 76 DD 8E 00
 ioi adc a', (ix+127)           ; D3 76 DD 8E 7F
 ioi adc a', (ix-128)           ; D3 76 DD 8E 80
 ioi adc a', (iy)               ; D3 76 FD 8E 00
 ioi adc a', (iy+127)           ; D3 76 FD 8E 7F
 ioi adc a', (iy-128)           ; D3 76 FD 8E 80
 ioi adc a, (hl)                ; D3 8E
 ioi adc a, (ix)                ; D3 DD 8E 00
 ioi adc a, (ix+127)            ; D3 DD 8E 7F
 ioi adc a, (ix-128)            ; D3 DD 8E 80
 ioi adc a, (iy)                ; D3 FD 8E 00
 ioi adc a, (iy+127)            ; D3 FD 8E 7F
 ioi adc a, (iy-128)            ; D3 FD 8E 80
 ioi add (hl)                   ; D3 86
 ioi add (ix)                   ; D3 DD 86 00
 ioi add (ix+127)               ; D3 DD 86 7F
 ioi add (ix-128)               ; D3 DD 86 80
 ioi add (iy)                   ; D3 FD 86 00
 ioi add (iy+127)               ; D3 FD 86 7F
 ioi add (iy-128)               ; D3 FD 86 80
 ioi add a', (hl)               ; D3 76 86
 ioi add a', (ix)               ; D3 76 DD 86 00
 ioi add a', (ix+127)           ; D3 76 DD 86 7F
 ioi add a', (ix-128)           ; D3 76 DD 86 80
 ioi add a', (iy)               ; D3 76 FD 86 00
 ioi add a', (iy+127)           ; D3 76 FD 86 7F
 ioi add a', (iy-128)           ; D3 76 FD 86 80
 ioi add a, (hl)                ; D3 86
 ioi add a, (ix)                ; D3 DD 86 00
 ioi add a, (ix+127)            ; D3 DD 86 7F
 ioi add a, (ix-128)            ; D3 DD 86 80
 ioi add a, (iy)                ; D3 FD 86 00
 ioi add a, (iy+127)            ; D3 FD 86 7F
 ioi add a, (iy-128)            ; D3 FD 86 80
 ioi altd adc (hl)              ; D3 76 8E
 ioi altd adc (ix)              ; D3 76 DD 8E 00
 ioi altd adc (ix+127)          ; D3 76 DD 8E 7F
 ioi altd adc (ix-128)          ; D3 76 DD 8E 80
 ioi altd adc (iy)              ; D3 76 FD 8E 00
 ioi altd adc (iy+127)          ; D3 76 FD 8E 7F
 ioi altd adc (iy-128)          ; D3 76 FD 8E 80
 ioi altd adc a, (hl)           ; D3 76 8E
 ioi altd adc a, (ix)           ; D3 76 DD 8E 00
 ioi altd adc a, (ix+127)       ; D3 76 DD 8E 7F
 ioi altd adc a, (ix-128)       ; D3 76 DD 8E 80
 ioi altd adc a, (iy)           ; D3 76 FD 8E 00
 ioi altd adc a, (iy+127)       ; D3 76 FD 8E 7F
 ioi altd adc a, (iy-128)       ; D3 76 FD 8E 80
 ioi altd add (hl)              ; D3 76 86
 ioi altd add (ix)              ; D3 76 DD 86 00
 ioi altd add (ix+127)          ; D3 76 DD 86 7F
 ioi altd add (ix-128)          ; D3 76 DD 86 80
 ioi altd add (iy)              ; D3 76 FD 86 00
 ioi altd add (iy+127)          ; D3 76 FD 86 7F
 ioi altd add (iy-128)          ; D3 76 FD 86 80
 ioi altd add a, (hl)           ; D3 76 86
 ioi altd add a, (ix)           ; D3 76 DD 86 00
 ioi altd add a, (ix+127)       ; D3 76 DD 86 7F
 ioi altd add a, (ix-128)       ; D3 76 DD 86 80
 ioi altd add a, (iy)           ; D3 76 FD 86 00
 ioi altd add a, (iy+127)       ; D3 76 FD 86 7F
 ioi altd add a, (iy-128)       ; D3 76 FD 86 80
 ioi altd and (hl)              ; D3 76 A6
 ioi altd and (ix)              ; D3 76 DD A6 00
 ioi altd and (ix+127)          ; D3 76 DD A6 7F
 ioi altd and (ix-128)          ; D3 76 DD A6 80
 ioi altd and (iy)              ; D3 76 FD A6 00
 ioi altd and (iy+127)          ; D3 76 FD A6 7F
 ioi altd and (iy-128)          ; D3 76 FD A6 80
 ioi altd and a, (hl)           ; D3 76 A6
 ioi altd and a, (ix)           ; D3 76 DD A6 00
 ioi altd and a, (ix+127)       ; D3 76 DD A6 7F
 ioi altd and a, (ix-128)       ; D3 76 DD A6 80
 ioi altd and a, (iy)           ; D3 76 FD A6 00
 ioi altd and a, (iy+127)       ; D3 76 FD A6 7F
 ioi altd and a, (iy-128)       ; D3 76 FD A6 80
 ioi altd cp (hl)               ; D3 76 BE
 ioi altd cp (ix)               ; D3 76 DD BE 00
 ioi altd cp (ix+127)           ; D3 76 DD BE 7F
 ioi altd cp (ix-128)           ; D3 76 DD BE 80
 ioi altd cp (iy)               ; D3 76 FD BE 00
 ioi altd cp (iy+127)           ; D3 76 FD BE 7F
 ioi altd cp (iy-128)           ; D3 76 FD BE 80
 ioi altd cp a, (hl)            ; D3 76 BE
 ioi altd cp a, (ix)            ; D3 76 DD BE 00
 ioi altd cp a, (ix+127)        ; D3 76 DD BE 7F
 ioi altd cp a, (ix-128)        ; D3 76 DD BE 80
 ioi altd cp a, (iy)            ; D3 76 FD BE 00
 ioi altd cp a, (iy+127)        ; D3 76 FD BE 7F
 ioi altd cp a, (iy-128)        ; D3 76 FD BE 80
 ioi altd ld a, (-32768)        ; D3 76 3A 00 80
 ioi altd ld a, (32767)         ; D3 76 3A FF 7F
 ioi altd ld a, (65535)         ; D3 76 3A FF FF
 ioi altd ld a, (bc)            ; D3 76 0A
 ioi altd ld a, (de)            ; D3 76 1A
 ioi altd ld a, (hl)            ; D3 76 7E
 ioi altd ld a, (ix)            ; D3 76 DD 7E 00
 ioi altd ld a, (ix+127)        ; D3 76 DD 7E 7F
 ioi altd ld a, (ix-128)        ; D3 76 DD 7E 80
 ioi altd ld a, (iy)            ; D3 76 FD 7E 00
 ioi altd ld a, (iy+127)        ; D3 76 FD 7E 7F
 ioi altd ld a, (iy-128)        ; D3 76 FD 7E 80
 ioi altd ld b, (hl)            ; D3 76 46
 ioi altd ld b, (ix)            ; D3 76 DD 46 00
 ioi altd ld b, (ix+127)        ; D3 76 DD 46 7F
 ioi altd ld b, (ix-128)        ; D3 76 DD 46 80
 ioi altd ld b, (iy)            ; D3 76 FD 46 00
 ioi altd ld b, (iy+127)        ; D3 76 FD 46 7F
 ioi altd ld b, (iy-128)        ; D3 76 FD 46 80
 ioi altd ld c, (hl)            ; D3 76 4E
 ioi altd ld c, (ix)            ; D3 76 DD 4E 00
 ioi altd ld c, (ix+127)        ; D3 76 DD 4E 7F
 ioi altd ld c, (ix-128)        ; D3 76 DD 4E 80
 ioi altd ld c, (iy)            ; D3 76 FD 4E 00
 ioi altd ld c, (iy+127)        ; D3 76 FD 4E 7F
 ioi altd ld c, (iy-128)        ; D3 76 FD 4E 80
 ioi altd ld d, (hl)            ; D3 76 56
 ioi altd ld d, (ix)            ; D3 76 DD 56 00
 ioi altd ld d, (ix+127)        ; D3 76 DD 56 7F
 ioi altd ld d, (ix-128)        ; D3 76 DD 56 80
 ioi altd ld d, (iy)            ; D3 76 FD 56 00
 ioi altd ld d, (iy+127)        ; D3 76 FD 56 7F
 ioi altd ld d, (iy-128)        ; D3 76 FD 56 80
 ioi altd ld e, (hl)            ; D3 76 5E
 ioi altd ld e, (ix)            ; D3 76 DD 5E 00
 ioi altd ld e, (ix+127)        ; D3 76 DD 5E 7F
 ioi altd ld e, (ix-128)        ; D3 76 DD 5E 80
 ioi altd ld e, (iy)            ; D3 76 FD 5E 00
 ioi altd ld e, (iy+127)        ; D3 76 FD 5E 7F
 ioi altd ld e, (iy-128)        ; D3 76 FD 5E 80
 ioi altd ld h, (hl)            ; D3 76 66
 ioi altd ld h, (ix)            ; D3 76 DD 66 00
 ioi altd ld h, (ix+127)        ; D3 76 DD 66 7F
 ioi altd ld h, (ix-128)        ; D3 76 DD 66 80
 ioi altd ld h, (iy)            ; D3 76 FD 66 00
 ioi altd ld h, (iy+127)        ; D3 76 FD 66 7F
 ioi altd ld h, (iy-128)        ; D3 76 FD 66 80
 ioi altd ld l, (hl)            ; D3 76 6E
 ioi altd ld l, (ix)            ; D3 76 DD 6E 00
 ioi altd ld l, (ix+127)        ; D3 76 DD 6E 7F
 ioi altd ld l, (ix-128)        ; D3 76 DD 6E 80
 ioi altd ld l, (iy)            ; D3 76 FD 6E 00
 ioi altd ld l, (iy+127)        ; D3 76 FD 6E 7F
 ioi altd ld l, (iy-128)        ; D3 76 FD 6E 80
 ioi altd or (hl)               ; D3 76 B6
 ioi altd or (ix)               ; D3 76 DD B6 00
 ioi altd or (ix+127)           ; D3 76 DD B6 7F
 ioi altd or (ix-128)           ; D3 76 DD B6 80
 ioi altd or (iy)               ; D3 76 FD B6 00
 ioi altd or (iy+127)           ; D3 76 FD B6 7F
 ioi altd or (iy-128)           ; D3 76 FD B6 80
 ioi altd or a, (hl)            ; D3 76 B6
 ioi altd or a, (ix)            ; D3 76 DD B6 00
 ioi altd or a, (ix+127)        ; D3 76 DD B6 7F
 ioi altd or a, (ix-128)        ; D3 76 DD B6 80
 ioi altd or a, (iy)            ; D3 76 FD B6 00
 ioi altd or a, (iy+127)        ; D3 76 FD B6 7F
 ioi altd or a, (iy-128)        ; D3 76 FD B6 80
 ioi altd sbc (hl)              ; D3 76 9E
 ioi altd sbc (ix)              ; D3 76 DD 9E 00
 ioi altd sbc (ix+127)          ; D3 76 DD 9E 7F
 ioi altd sbc (ix-128)          ; D3 76 DD 9E 80
 ioi altd sbc (iy)              ; D3 76 FD 9E 00
 ioi altd sbc (iy+127)          ; D3 76 FD 9E 7F
 ioi altd sbc (iy-128)          ; D3 76 FD 9E 80
 ioi altd sbc a, (hl)           ; D3 76 9E
 ioi altd sbc a, (ix)           ; D3 76 DD 9E 00
 ioi altd sbc a, (ix+127)       ; D3 76 DD 9E 7F
 ioi altd sbc a, (ix-128)       ; D3 76 DD 9E 80
 ioi altd sbc a, (iy)           ; D3 76 FD 9E 00
 ioi altd sbc a, (iy+127)       ; D3 76 FD 9E 7F
 ioi altd sbc a, (iy-128)       ; D3 76 FD 9E 80
 ioi altd sub (hl)              ; D3 76 96
 ioi altd sub (ix)              ; D3 76 DD 96 00
 ioi altd sub (ix+127)          ; D3 76 DD 96 7F
 ioi altd sub (ix-128)          ; D3 76 DD 96 80
 ioi altd sub (iy)              ; D3 76 FD 96 00
 ioi altd sub (iy+127)          ; D3 76 FD 96 7F
 ioi altd sub (iy-128)          ; D3 76 FD 96 80
 ioi altd sub a, (hl)           ; D3 76 96
 ioi altd sub a, (ix)           ; D3 76 DD 96 00
 ioi altd sub a, (ix+127)       ; D3 76 DD 96 7F
 ioi altd sub a, (ix-128)       ; D3 76 DD 96 80
 ioi altd sub a, (iy)           ; D3 76 FD 96 00
 ioi altd sub a, (iy+127)       ; D3 76 FD 96 7F
 ioi altd sub a, (iy-128)       ; D3 76 FD 96 80
 ioi altd xor (hl)              ; D3 76 AE
 ioi altd xor (ix)              ; D3 76 DD AE 00
 ioi altd xor (ix+127)          ; D3 76 DD AE 7F
 ioi altd xor (ix-128)          ; D3 76 DD AE 80
 ioi altd xor (iy)              ; D3 76 FD AE 00
 ioi altd xor (iy+127)          ; D3 76 FD AE 7F
 ioi altd xor (iy-128)          ; D3 76 FD AE 80
 ioi altd xor a, (hl)           ; D3 76 AE
 ioi altd xor a, (ix)           ; D3 76 DD AE 00
 ioi altd xor a, (ix+127)       ; D3 76 DD AE 7F
 ioi altd xor a, (ix-128)       ; D3 76 DD AE 80
 ioi altd xor a, (iy)           ; D3 76 FD AE 00
 ioi altd xor a, (iy+127)       ; D3 76 FD AE 7F
 ioi altd xor a, (iy-128)       ; D3 76 FD AE 80
 ioi and (hl)                   ; D3 A6
 ioi and (ix)                   ; D3 DD A6 00
 ioi and (ix+127)               ; D3 DD A6 7F
 ioi and (ix-128)               ; D3 DD A6 80
 ioi and (iy)                   ; D3 FD A6 00
 ioi and (iy+127)               ; D3 FD A6 7F
 ioi and (iy-128)               ; D3 FD A6 80
 ioi and a', (hl)               ; D3 76 A6
 ioi and a', (ix)               ; D3 76 DD A6 00
 ioi and a', (ix+127)           ; D3 76 DD A6 7F
 ioi and a', (ix-128)           ; D3 76 DD A6 80
 ioi and a', (iy)               ; D3 76 FD A6 00
 ioi and a', (iy+127)           ; D3 76 FD A6 7F
 ioi and a', (iy-128)           ; D3 76 FD A6 80
 ioi and a, (hl)                ; D3 A6
 ioi and a, (ix)                ; D3 DD A6 00
 ioi and a, (ix+127)            ; D3 DD A6 7F
 ioi and a, (ix-128)            ; D3 DD A6 80
 ioi and a, (iy)                ; D3 FD A6 00
 ioi and a, (iy+127)            ; D3 FD A6 7F
 ioi and a, (iy-128)            ; D3 FD A6 80
 ioi cp (hl)                    ; D3 BE
 ioi cp (ix)                    ; D3 DD BE 00
 ioi cp (ix+127)                ; D3 DD BE 7F
 ioi cp (ix-128)                ; D3 DD BE 80
 ioi cp (iy)                    ; D3 FD BE 00
 ioi cp (iy+127)                ; D3 FD BE 7F
 ioi cp (iy-128)                ; D3 FD BE 80
 ioi cp a, (hl)                 ; D3 BE
 ioi cp a, (ix)                 ; D3 DD BE 00
 ioi cp a, (ix+127)             ; D3 DD BE 7F
 ioi cp a, (ix-128)             ; D3 DD BE 80
 ioi cp a, (iy)                 ; D3 FD BE 00
 ioi cp a, (iy+127)             ; D3 FD BE 7F
 ioi cp a, (iy-128)             ; D3 FD BE 80
 ioi dec (hl)                   ; D3 35
 ioi dec (ix)                   ; D3 DD 35 00
 ioi dec (ix+127)               ; D3 DD 35 7F
 ioi dec (ix-128)               ; D3 DD 35 80
 ioi dec (iy)                   ; D3 FD 35 00
 ioi dec (iy+127)               ; D3 FD 35 7F
 ioi dec (iy-128)               ; D3 FD 35 80
 ioi inc (hl)                   ; D3 34
 ioi inc (ix)                   ; D3 DD 34 00
 ioi inc (ix+127)               ; D3 DD 34 7F
 ioi inc (ix-128)               ; D3 DD 34 80
 ioi inc (iy)                   ; D3 FD 34 00
 ioi inc (iy+127)               ; D3 FD 34 7F
 ioi inc (iy-128)               ; D3 FD 34 80
 ioi ld (-32768), a             ; D3 32 00 80
 ioi ld (32767), a              ; D3 32 FF 7F
 ioi ld (65535), a              ; D3 32 FF FF
 ioi ld (bc), a                 ; D3 02
 ioi ld (de), a                 ; D3 12
 ioi ld (hl), -128              ; D3 36 80
 ioi ld (hl), 127               ; D3 36 7F
 ioi ld (hl), 255               ; D3 36 FF
 ioi ld (hl), a                 ; D3 77
 ioi ld (hl), b                 ; D3 70
 ioi ld (hl), c                 ; D3 71
 ioi ld (hl), d                 ; D3 72
 ioi ld (hl), e                 ; D3 73
 ioi ld (hl), h                 ; D3 74
 ioi ld (hl), l                 ; D3 75
 ioi ld (ix), -128              ; D3 DD 36 00 80
 ioi ld (ix), 127               ; D3 DD 36 00 7F
 ioi ld (ix), 255               ; D3 DD 36 00 FF
 ioi ld (ix), a                 ; D3 DD 77 00
 ioi ld (ix), b                 ; D3 DD 70 00
 ioi ld (ix), c                 ; D3 DD 71 00
 ioi ld (ix), d                 ; D3 DD 72 00
 ioi ld (ix), e                 ; D3 DD 73 00
 ioi ld (ix), h                 ; D3 DD 74 00
 ioi ld (ix), l                 ; D3 DD 75 00
 ioi ld (ix+127), -128          ; D3 DD 36 7F 80
 ioi ld (ix+127), 127           ; D3 DD 36 7F 7F
 ioi ld (ix+127), 255           ; D3 DD 36 7F FF
 ioi ld (ix+127), a             ; D3 DD 77 7F
 ioi ld (ix+127), b             ; D3 DD 70 7F
 ioi ld (ix+127), c             ; D3 DD 71 7F
 ioi ld (ix+127), d             ; D3 DD 72 7F
 ioi ld (ix+127), e             ; D3 DD 73 7F
 ioi ld (ix+127), h             ; D3 DD 74 7F
 ioi ld (ix+127), l             ; D3 DD 75 7F
 ioi ld (ix-128), -128          ; D3 DD 36 80 80
 ioi ld (ix-128), 127           ; D3 DD 36 80 7F
 ioi ld (ix-128), 255           ; D3 DD 36 80 FF
 ioi ld (ix-128), a             ; D3 DD 77 80
 ioi ld (ix-128), b             ; D3 DD 70 80
 ioi ld (ix-128), c             ; D3 DD 71 80
 ioi ld (ix-128), d             ; D3 DD 72 80
 ioi ld (ix-128), e             ; D3 DD 73 80
 ioi ld (ix-128), h             ; D3 DD 74 80
 ioi ld (ix-128), l             ; D3 DD 75 80
 ioi ld (iy), -128              ; D3 FD 36 00 80
 ioi ld (iy), 127               ; D3 FD 36 00 7F
 ioi ld (iy), 255               ; D3 FD 36 00 FF
 ioi ld (iy), a                 ; D3 FD 77 00
 ioi ld (iy), b                 ; D3 FD 70 00
 ioi ld (iy), c                 ; D3 FD 71 00
 ioi ld (iy), d                 ; D3 FD 72 00
 ioi ld (iy), e                 ; D3 FD 73 00
 ioi ld (iy), h                 ; D3 FD 74 00
 ioi ld (iy), l                 ; D3 FD 75 00
 ioi ld (iy+127), -128          ; D3 FD 36 7F 80
 ioi ld (iy+127), 127           ; D3 FD 36 7F 7F
 ioi ld (iy+127), 255           ; D3 FD 36 7F FF
 ioi ld (iy+127), a             ; D3 FD 77 7F
 ioi ld (iy+127), b             ; D3 FD 70 7F
 ioi ld (iy+127), c             ; D3 FD 71 7F
 ioi ld (iy+127), d             ; D3 FD 72 7F
 ioi ld (iy+127), e             ; D3 FD 73 7F
 ioi ld (iy+127), h             ; D3 FD 74 7F
 ioi ld (iy+127), l             ; D3 FD 75 7F
 ioi ld (iy-128), -128          ; D3 FD 36 80 80
 ioi ld (iy-128), 127           ; D3 FD 36 80 7F
 ioi ld (iy-128), 255           ; D3 FD 36 80 FF
 ioi ld (iy-128), a             ; D3 FD 77 80
 ioi ld (iy-128), b             ; D3 FD 70 80
 ioi ld (iy-128), c             ; D3 FD 71 80
 ioi ld (iy-128), d             ; D3 FD 72 80
 ioi ld (iy-128), e             ; D3 FD 73 80
 ioi ld (iy-128), h             ; D3 FD 74 80
 ioi ld (iy-128), l             ; D3 FD 75 80
 ioi ld a', (-32768)            ; D3 76 3A 00 80
 ioi ld a', (32767)             ; D3 76 3A FF 7F
 ioi ld a', (65535)             ; D3 76 3A FF FF
 ioi ld a', (bc)                ; D3 76 0A
 ioi ld a', (de)                ; D3 76 1A
 ioi ld a', (hl)                ; D3 76 7E
 ioi ld a', (ix)                ; D3 76 DD 7E 00
 ioi ld a', (ix+127)            ; D3 76 DD 7E 7F
 ioi ld a', (ix-128)            ; D3 76 DD 7E 80
 ioi ld a', (iy)                ; D3 76 FD 7E 00
 ioi ld a', (iy+127)            ; D3 76 FD 7E 7F
 ioi ld a', (iy-128)            ; D3 76 FD 7E 80
 ioi ld a, (-32768)             ; D3 3A 00 80
 ioi ld a, (32767)              ; D3 3A FF 7F
 ioi ld a, (65535)              ; D3 3A FF FF
 ioi ld a, (bc)                 ; D3 0A
 ioi ld a, (de)                 ; D3 1A
 ioi ld a, (hl)                 ; D3 7E
 ioi ld a, (ix)                 ; D3 DD 7E 00
 ioi ld a, (ix+127)             ; D3 DD 7E 7F
 ioi ld a, (ix-128)             ; D3 DD 7E 80
 ioi ld a, (iy)                 ; D3 FD 7E 00
 ioi ld a, (iy+127)             ; D3 FD 7E 7F
 ioi ld a, (iy-128)             ; D3 FD 7E 80
 ioi ld b', (hl)                ; D3 76 46
 ioi ld b', (ix)                ; D3 76 DD 46 00
 ioi ld b', (ix+127)            ; D3 76 DD 46 7F
 ioi ld b', (ix-128)            ; D3 76 DD 46 80
 ioi ld b', (iy)                ; D3 76 FD 46 00
 ioi ld b', (iy+127)            ; D3 76 FD 46 7F
 ioi ld b', (iy-128)            ; D3 76 FD 46 80
 ioi ld b, (hl)                 ; D3 46
 ioi ld b, (ix)                 ; D3 DD 46 00
 ioi ld b, (ix+127)             ; D3 DD 46 7F
 ioi ld b, (ix-128)             ; D3 DD 46 80
 ioi ld b, (iy)                 ; D3 FD 46 00
 ioi ld b, (iy+127)             ; D3 FD 46 7F
 ioi ld b, (iy-128)             ; D3 FD 46 80
 ioi ld c', (hl)                ; D3 76 4E
 ioi ld c', (ix)                ; D3 76 DD 4E 00
 ioi ld c', (ix+127)            ; D3 76 DD 4E 7F
 ioi ld c', (ix-128)            ; D3 76 DD 4E 80
 ioi ld c', (iy)                ; D3 76 FD 4E 00
 ioi ld c', (iy+127)            ; D3 76 FD 4E 7F
 ioi ld c', (iy-128)            ; D3 76 FD 4E 80
 ioi ld c, (hl)                 ; D3 4E
 ioi ld c, (ix)                 ; D3 DD 4E 00
 ioi ld c, (ix+127)             ; D3 DD 4E 7F
 ioi ld c, (ix-128)             ; D3 DD 4E 80
 ioi ld c, (iy)                 ; D3 FD 4E 00
 ioi ld c, (iy+127)             ; D3 FD 4E 7F
 ioi ld c, (iy-128)             ; D3 FD 4E 80
 ioi ld d', (hl)                ; D3 76 56
 ioi ld d', (ix)                ; D3 76 DD 56 00
 ioi ld d', (ix+127)            ; D3 76 DD 56 7F
 ioi ld d', (ix-128)            ; D3 76 DD 56 80
 ioi ld d', (iy)                ; D3 76 FD 56 00
 ioi ld d', (iy+127)            ; D3 76 FD 56 7F
 ioi ld d', (iy-128)            ; D3 76 FD 56 80
 ioi ld d, (hl)                 ; D3 56
 ioi ld d, (ix)                 ; D3 DD 56 00
 ioi ld d, (ix+127)             ; D3 DD 56 7F
 ioi ld d, (ix-128)             ; D3 DD 56 80
 ioi ld d, (iy)                 ; D3 FD 56 00
 ioi ld d, (iy+127)             ; D3 FD 56 7F
 ioi ld d, (iy-128)             ; D3 FD 56 80
 ioi ld e', (hl)                ; D3 76 5E
 ioi ld e', (ix)                ; D3 76 DD 5E 00
 ioi ld e', (ix+127)            ; D3 76 DD 5E 7F
 ioi ld e', (ix-128)            ; D3 76 DD 5E 80
 ioi ld e', (iy)                ; D3 76 FD 5E 00
 ioi ld e', (iy+127)            ; D3 76 FD 5E 7F
 ioi ld e', (iy-128)            ; D3 76 FD 5E 80
 ioi ld e, (hl)                 ; D3 5E
 ioi ld e, (ix)                 ; D3 DD 5E 00
 ioi ld e, (ix+127)             ; D3 DD 5E 7F
 ioi ld e, (ix-128)             ; D3 DD 5E 80
 ioi ld e, (iy)                 ; D3 FD 5E 00
 ioi ld e, (iy+127)             ; D3 FD 5E 7F
 ioi ld e, (iy-128)             ; D3 FD 5E 80
 ioi ld h', (hl)                ; D3 76 66
 ioi ld h', (ix)                ; D3 76 DD 66 00
 ioi ld h', (ix+127)            ; D3 76 DD 66 7F
 ioi ld h', (ix-128)            ; D3 76 DD 66 80
 ioi ld h', (iy)                ; D3 76 FD 66 00
 ioi ld h', (iy+127)            ; D3 76 FD 66 7F
 ioi ld h', (iy-128)            ; D3 76 FD 66 80
 ioi ld h, (hl)                 ; D3 66
 ioi ld h, (ix)                 ; D3 DD 66 00
 ioi ld h, (ix+127)             ; D3 DD 66 7F
 ioi ld h, (ix-128)             ; D3 DD 66 80
 ioi ld h, (iy)                 ; D3 FD 66 00
 ioi ld h, (iy+127)             ; D3 FD 66 7F
 ioi ld h, (iy-128)             ; D3 FD 66 80
 ioi ld l', (hl)                ; D3 76 6E
 ioi ld l', (ix)                ; D3 76 DD 6E 00
 ioi ld l', (ix+127)            ; D3 76 DD 6E 7F
 ioi ld l', (ix-128)            ; D3 76 DD 6E 80
 ioi ld l', (iy)                ; D3 76 FD 6E 00
 ioi ld l', (iy+127)            ; D3 76 FD 6E 7F
 ioi ld l', (iy-128)            ; D3 76 FD 6E 80
 ioi ld l, (hl)                 ; D3 6E
 ioi ld l, (ix)                 ; D3 DD 6E 00
 ioi ld l, (ix+127)             ; D3 DD 6E 7F
 ioi ld l, (ix-128)             ; D3 DD 6E 80
 ioi ld l, (iy)                 ; D3 FD 6E 00
 ioi ld l, (iy+127)             ; D3 FD 6E 7F
 ioi ld l, (iy-128)             ; D3 FD 6E 80
 ioi or (hl)                    ; D3 B6
 ioi or (ix)                    ; D3 DD B6 00
 ioi or (ix+127)                ; D3 DD B6 7F
 ioi or (ix-128)                ; D3 DD B6 80
 ioi or (iy)                    ; D3 FD B6 00
 ioi or (iy+127)                ; D3 FD B6 7F
 ioi or (iy-128)                ; D3 FD B6 80
 ioi or a', (hl)                ; D3 76 B6
 ioi or a', (ix)                ; D3 76 DD B6 00
 ioi or a', (ix+127)            ; D3 76 DD B6 7F
 ioi or a', (ix-128)            ; D3 76 DD B6 80
 ioi or a', (iy)                ; D3 76 FD B6 00
 ioi or a', (iy+127)            ; D3 76 FD B6 7F
 ioi or a', (iy-128)            ; D3 76 FD B6 80
 ioi or a, (hl)                 ; D3 B6
 ioi or a, (ix)                 ; D3 DD B6 00
 ioi or a, (ix+127)             ; D3 DD B6 7F
 ioi or a, (ix-128)             ; D3 DD B6 80
 ioi or a, (iy)                 ; D3 FD B6 00
 ioi or a, (iy+127)             ; D3 FD B6 7F
 ioi or a, (iy-128)             ; D3 FD B6 80
 ioi sbc (hl)                   ; D3 9E
 ioi sbc (ix)                   ; D3 DD 9E 00
 ioi sbc (ix+127)               ; D3 DD 9E 7F
 ioi sbc (ix-128)               ; D3 DD 9E 80
 ioi sbc (iy)                   ; D3 FD 9E 00
 ioi sbc (iy+127)               ; D3 FD 9E 7F
 ioi sbc (iy-128)               ; D3 FD 9E 80
 ioi sbc a', (hl)               ; D3 76 9E
 ioi sbc a', (ix)               ; D3 76 DD 9E 00
 ioi sbc a', (ix+127)           ; D3 76 DD 9E 7F
 ioi sbc a', (ix-128)           ; D3 76 DD 9E 80
 ioi sbc a', (iy)               ; D3 76 FD 9E 00
 ioi sbc a', (iy+127)           ; D3 76 FD 9E 7F
 ioi sbc a', (iy-128)           ; D3 76 FD 9E 80
 ioi sbc a, (hl)                ; D3 9E
 ioi sbc a, (ix)                ; D3 DD 9E 00
 ioi sbc a, (ix+127)            ; D3 DD 9E 7F
 ioi sbc a, (ix-128)            ; D3 DD 9E 80
 ioi sbc a, (iy)                ; D3 FD 9E 00
 ioi sbc a, (iy+127)            ; D3 FD 9E 7F
 ioi sbc a, (iy-128)            ; D3 FD 9E 80
 ioi sub (hl)                   ; D3 96
 ioi sub (ix)                   ; D3 DD 96 00
 ioi sub (ix+127)               ; D3 DD 96 7F
 ioi sub (ix-128)               ; D3 DD 96 80
 ioi sub (iy)                   ; D3 FD 96 00
 ioi sub (iy+127)               ; D3 FD 96 7F
 ioi sub (iy-128)               ; D3 FD 96 80
 ioi sub a', (hl)               ; D3 76 96
 ioi sub a', (ix)               ; D3 76 DD 96 00
 ioi sub a', (ix+127)           ; D3 76 DD 96 7F
 ioi sub a', (ix-128)           ; D3 76 DD 96 80
 ioi sub a', (iy)               ; D3 76 FD 96 00
 ioi sub a', (iy+127)           ; D3 76 FD 96 7F
 ioi sub a', (iy-128)           ; D3 76 FD 96 80
 ioi sub a, (hl)                ; D3 96
 ioi sub a, (ix)                ; D3 DD 96 00
 ioi sub a, (ix+127)            ; D3 DD 96 7F
 ioi sub a, (ix-128)            ; D3 DD 96 80
 ioi sub a, (iy)                ; D3 FD 96 00
 ioi sub a, (iy+127)            ; D3 FD 96 7F
 ioi sub a, (iy-128)            ; D3 FD 96 80
 ioi xor (hl)                   ; D3 AE
 ioi xor (ix)                   ; D3 DD AE 00
 ioi xor (ix+127)               ; D3 DD AE 7F
 ioi xor (ix-128)               ; D3 DD AE 80
 ioi xor (iy)                   ; D3 FD AE 00
 ioi xor (iy+127)               ; D3 FD AE 7F
 ioi xor (iy-128)               ; D3 FD AE 80
 ioi xor a', (hl)               ; D3 76 AE
 ioi xor a', (ix)               ; D3 76 DD AE 00
 ioi xor a', (ix+127)           ; D3 76 DD AE 7F
 ioi xor a', (ix-128)           ; D3 76 DD AE 80
 ioi xor a', (iy)               ; D3 76 FD AE 00
 ioi xor a', (iy+127)           ; D3 76 FD AE 7F
 ioi xor a', (iy-128)           ; D3 76 FD AE 80
 ioi xor a, (hl)                ; D3 AE
 ioi xor a, (ix)                ; D3 DD AE 00
 ioi xor a, (ix+127)            ; D3 DD AE 7F
 ioi xor a, (ix-128)            ; D3 DD AE 80
 ioi xor a, (iy)                ; D3 FD AE 00
 ioi xor a, (iy+127)            ; D3 FD AE 7F
 ioi xor a, (iy-128)            ; D3 FD AE 80
 ld (-32768), a                 ; 32 00 80
 ld (32767), a                  ; 32 FF 7F
 ld (65535), a                  ; 32 FF FF
 ld (bc), a                     ; 02
 ld (de), a                     ; 12
 ld (hl), -128                  ; 36 80
 ld (hl), 127                   ; 36 7F
 ld (hl), 255                   ; 36 FF
 ld (hl), a                     ; 77
 ld (hl), b                     ; 70
 ld (hl), c                     ; 71
 ld (hl), d                     ; 72
 ld (hl), e                     ; 73
 ld (hl), h                     ; 74
 ld (hl), l                     ; 75
 ld (ix), -128                  ; DD 36 00 80
 ld (ix), 127                   ; DD 36 00 7F
 ld (ix), 255                   ; DD 36 00 FF
 ld (ix), a                     ; DD 77 00
 ld (ix), b                     ; DD 70 00
 ld (ix), c                     ; DD 71 00
 ld (ix), d                     ; DD 72 00
 ld (ix), e                     ; DD 73 00
 ld (ix), h                     ; DD 74 00
 ld (ix), l                     ; DD 75 00
 ld (ix+127), -128              ; DD 36 7F 80
 ld (ix+127), 127               ; DD 36 7F 7F
 ld (ix+127), 255               ; DD 36 7F FF
 ld (ix+127), a                 ; DD 77 7F
 ld (ix+127), b                 ; DD 70 7F
 ld (ix+127), c                 ; DD 71 7F
 ld (ix+127), d                 ; DD 72 7F
 ld (ix+127), e                 ; DD 73 7F
 ld (ix+127), h                 ; DD 74 7F
 ld (ix+127), l                 ; DD 75 7F
 ld (ix-128), -128              ; DD 36 80 80
 ld (ix-128), 127               ; DD 36 80 7F
 ld (ix-128), 255               ; DD 36 80 FF
 ld (ix-128), a                 ; DD 77 80
 ld (ix-128), b                 ; DD 70 80
 ld (ix-128), c                 ; DD 71 80
 ld (ix-128), d                 ; DD 72 80
 ld (ix-128), e                 ; DD 73 80
 ld (ix-128), h                 ; DD 74 80
 ld (ix-128), l                 ; DD 75 80
 ld (iy), -128                  ; FD 36 00 80
 ld (iy), 127                   ; FD 36 00 7F
 ld (iy), 255                   ; FD 36 00 FF
 ld (iy), a                     ; FD 77 00
 ld (iy), b                     ; FD 70 00
 ld (iy), c                     ; FD 71 00
 ld (iy), d                     ; FD 72 00
 ld (iy), e                     ; FD 73 00
 ld (iy), h                     ; FD 74 00
 ld (iy), l                     ; FD 75 00
 ld (iy+127), -128              ; FD 36 7F 80
 ld (iy+127), 127               ; FD 36 7F 7F
 ld (iy+127), 255               ; FD 36 7F FF
 ld (iy+127), a                 ; FD 77 7F
 ld (iy+127), b                 ; FD 70 7F
 ld (iy+127), c                 ; FD 71 7F
 ld (iy+127), d                 ; FD 72 7F
 ld (iy+127), e                 ; FD 73 7F
 ld (iy+127), h                 ; FD 74 7F
 ld (iy+127), l                 ; FD 75 7F
 ld (iy-128), -128              ; FD 36 80 80
 ld (iy-128), 127               ; FD 36 80 7F
 ld (iy-128), 255               ; FD 36 80 FF
 ld (iy-128), a                 ; FD 77 80
 ld (iy-128), b                 ; FD 70 80
 ld (iy-128), c                 ; FD 71 80
 ld (iy-128), d                 ; FD 72 80
 ld (iy-128), e                 ; FD 73 80
 ld (iy-128), h                 ; FD 74 80
 ld (iy-128), l                 ; FD 75 80
 ld a', (-32768)                ; 76 3A 00 80
 ld a', (32767)                 ; 76 3A FF 7F
 ld a', (65535)                 ; 76 3A FF FF
 ld a', (bc)                    ; 76 0A
 ld a', (de)                    ; 76 1A
 ld a', (hl)                    ; 76 7E
 ld a', (ix)                    ; 76 DD 7E 00
 ld a', (ix+127)                ; 76 DD 7E 7F
 ld a', (ix-128)                ; 76 DD 7E 80
 ld a', (iy)                    ; 76 FD 7E 00
 ld a', (iy+127)                ; 76 FD 7E 7F
 ld a', (iy-128)                ; 76 FD 7E 80
 ld a', -128                    ; 76 3E 80
 ld a', 127                     ; 76 3E 7F
 ld a', 255                     ; 76 3E FF
 ld a', a                       ; 76 7F
 ld a', b                       ; 76 78
 ld a', c                       ; 76 79
 ld a', d                       ; 76 7A
 ld a', e                       ; 76 7B
 ld a', h                       ; 76 7C
 ld a', l                       ; 76 7D
 ld a, (-32768)                 ; 3A 00 80
 ld a, (32767)                  ; 3A FF 7F
 ld a, (65535)                  ; 3A FF FF
 ld a, (bc)                     ; 0A
 ld a, (de)                     ; 1A
 ld a, (hl)                     ; 7E
 ld a, (ix)                     ; DD 7E 00
 ld a, (ix+127)                 ; DD 7E 7F
 ld a, (ix-128)                 ; DD 7E 80
 ld a, (iy)                     ; FD 7E 00
 ld a, (iy+127)                 ; FD 7E 7F
 ld a, (iy-128)                 ; FD 7E 80
 ld a, -128                     ; 3E 80
 ld a, 127                      ; 3E 7F
 ld a, 255                      ; 3E FF
 ld a, a                        ; 7F
 ld a, b                        ; 78
 ld a, c                        ; 79
 ld a, d                        ; 7A
 ld a, e                        ; 7B
 ld a, h                        ; 7C
 ld a, l                        ; 7D
 ld b', (hl)                    ; 76 46
 ld b', (ix)                    ; 76 DD 46 00
 ld b', (ix+127)                ; 76 DD 46 7F
 ld b', (ix-128)                ; 76 DD 46 80
 ld b', (iy)                    ; 76 FD 46 00
 ld b', (iy+127)                ; 76 FD 46 7F
 ld b', (iy-128)                ; 76 FD 46 80
 ld b', -128                    ; 76 06 80
 ld b', 127                     ; 76 06 7F
 ld b', 255                     ; 76 06 FF
 ld b', a                       ; 76 47
 ld b', b                       ; 76 40
 ld b', c                       ; 76 41
 ld b', d                       ; 76 42
 ld b', e                       ; 76 43
 ld b', h                       ; 76 44
 ld b', l                       ; 76 45
 ld b, (hl)                     ; 46
 ld b, (ix)                     ; DD 46 00
 ld b, (ix+127)                 ; DD 46 7F
 ld b, (ix-128)                 ; DD 46 80
 ld b, (iy)                     ; FD 46 00
 ld b, (iy+127)                 ; FD 46 7F
 ld b, (iy-128)                 ; FD 46 80
 ld b, -128                     ; 06 80
 ld b, 127                      ; 06 7F
 ld b, 255                      ; 06 FF
 ld b, a                        ; 47
 ld b, b                        ; 40
 ld b, c                        ; 41
 ld b, d                        ; 42
 ld b, e                        ; 43
 ld b, h                        ; 44
 ld b, l                        ; 45
 ld c', (hl)                    ; 76 4E
 ld c', (ix)                    ; 76 DD 4E 00
 ld c', (ix+127)                ; 76 DD 4E 7F
 ld c', (ix-128)                ; 76 DD 4E 80
 ld c', (iy)                    ; 76 FD 4E 00
 ld c', (iy+127)                ; 76 FD 4E 7F
 ld c', (iy-128)                ; 76 FD 4E 80
 ld c', -128                    ; 76 0E 80
 ld c', 127                     ; 76 0E 7F
 ld c', 255                     ; 76 0E FF
 ld c', a                       ; 76 4F
 ld c', b                       ; 76 48
 ld c', c                       ; 76 49
 ld c', d                       ; 76 4A
 ld c', e                       ; 76 4B
 ld c', h                       ; 76 4C
 ld c', l                       ; 76 4D
 ld c, (hl)                     ; 4E
 ld c, (ix)                     ; DD 4E 00
 ld c, (ix+127)                 ; DD 4E 7F
 ld c, (ix-128)                 ; DD 4E 80
 ld c, (iy)                     ; FD 4E 00
 ld c, (iy+127)                 ; FD 4E 7F
 ld c, (iy-128)                 ; FD 4E 80
 ld c, -128                     ; 0E 80
 ld c, 127                      ; 0E 7F
 ld c, 255                      ; 0E FF
 ld c, a                        ; 4F
 ld c, b                        ; 48
 ld c, c                        ; 49
 ld c, d                        ; 4A
 ld c, e                        ; 4B
 ld c, h                        ; 4C
 ld c, l                        ; 4D
 ld d', (hl)                    ; 76 56
 ld d', (ix)                    ; 76 DD 56 00
 ld d', (ix+127)                ; 76 DD 56 7F
 ld d', (ix-128)                ; 76 DD 56 80
 ld d', (iy)                    ; 76 FD 56 00
 ld d', (iy+127)                ; 76 FD 56 7F
 ld d', (iy-128)                ; 76 FD 56 80
 ld d', -128                    ; 76 16 80
 ld d', 127                     ; 76 16 7F
 ld d', 255                     ; 76 16 FF
 ld d', a                       ; 76 57
 ld d', b                       ; 76 50
 ld d', c                       ; 76 51
 ld d', d                       ; 76 52
 ld d', e                       ; 76 53
 ld d', h                       ; 76 54
 ld d', l                       ; 76 55
 ld d, (hl)                     ; 56
 ld d, (ix)                     ; DD 56 00
 ld d, (ix+127)                 ; DD 56 7F
 ld d, (ix-128)                 ; DD 56 80
 ld d, (iy)                     ; FD 56 00
 ld d, (iy+127)                 ; FD 56 7F
 ld d, (iy-128)                 ; FD 56 80
 ld d, -128                     ; 16 80
 ld d, 127                      ; 16 7F
 ld d, 255                      ; 16 FF
 ld d, a                        ; 57
 ld d, b                        ; 50
 ld d, c                        ; 51
 ld d, d                        ; 52
 ld d, e                        ; 53
 ld d, h                        ; 54
 ld d, l                        ; 55
 ld e', (hl)                    ; 76 5E
 ld e', (ix)                    ; 76 DD 5E 00
 ld e', (ix+127)                ; 76 DD 5E 7F
 ld e', (ix-128)                ; 76 DD 5E 80
 ld e', (iy)                    ; 76 FD 5E 00
 ld e', (iy+127)                ; 76 FD 5E 7F
 ld e', (iy-128)                ; 76 FD 5E 80
 ld e', -128                    ; 76 1E 80
 ld e', 127                     ; 76 1E 7F
 ld e', 255                     ; 76 1E FF
 ld e', a                       ; 76 5F
 ld e', b                       ; 76 58
 ld e', c                       ; 76 59
 ld e', d                       ; 76 5A
 ld e', e                       ; 76 5B
 ld e', h                       ; 76 5C
 ld e', l                       ; 76 5D
 ld e, (hl)                     ; 5E
 ld e, (ix)                     ; DD 5E 00
 ld e, (ix+127)                 ; DD 5E 7F
 ld e, (ix-128)                 ; DD 5E 80
 ld e, (iy)                     ; FD 5E 00
 ld e, (iy+127)                 ; FD 5E 7F
 ld e, (iy-128)                 ; FD 5E 80
 ld e, -128                     ; 1E 80
 ld e, 127                      ; 1E 7F
 ld e, 255                      ; 1E FF
 ld e, a                        ; 5F
 ld e, b                        ; 58
 ld e, c                        ; 59
 ld e, d                        ; 5A
 ld e, e                        ; 5B
 ld e, h                        ; 5C
 ld e, l                        ; 5D
 ld h', (hl)                    ; 76 66
 ld h', (ix)                    ; 76 DD 66 00
 ld h', (ix+127)                ; 76 DD 66 7F
 ld h', (ix-128)                ; 76 DD 66 80
 ld h', (iy)                    ; 76 FD 66 00
 ld h', (iy+127)                ; 76 FD 66 7F
 ld h', (iy-128)                ; 76 FD 66 80
 ld h', -128                    ; 76 26 80
 ld h', 127                     ; 76 26 7F
 ld h', 255                     ; 76 26 FF
 ld h', a                       ; 76 67
 ld h', b                       ; 76 60
 ld h', c                       ; 76 61
 ld h', d                       ; 76 62
 ld h', e                       ; 76 63
 ld h', h                       ; 76 64
 ld h', l                       ; 76 65
 ld h, (hl)                     ; 66
 ld h, (ix)                     ; DD 66 00
 ld h, (ix+127)                 ; DD 66 7F
 ld h, (ix-128)                 ; DD 66 80
 ld h, (iy)                     ; FD 66 00
 ld h, (iy+127)                 ; FD 66 7F
 ld h, (iy-128)                 ; FD 66 80
 ld h, -128                     ; 26 80
 ld h, 127                      ; 26 7F
 ld h, 255                      ; 26 FF
 ld h, a                        ; 67
 ld h, b                        ; 60
 ld h, c                        ; 61
 ld h, d                        ; 62
 ld h, e                        ; 63
 ld h, h                        ; 64
 ld h, l                        ; 65
 ld l', (hl)                    ; 76 6E
 ld l', (ix)                    ; 76 DD 6E 00
 ld l', (ix+127)                ; 76 DD 6E 7F
 ld l', (ix-128)                ; 76 DD 6E 80
 ld l', (iy)                    ; 76 FD 6E 00
 ld l', (iy+127)                ; 76 FD 6E 7F
 ld l', (iy-128)                ; 76 FD 6E 80
 ld l', -128                    ; 76 2E 80
 ld l', 127                     ; 76 2E 7F
 ld l', 255                     ; 76 2E FF
 ld l', a                       ; 76 6F
 ld l', b                       ; 76 68
 ld l', c                       ; 76 69
 ld l', d                       ; 76 6A
 ld l', e                       ; 76 6B
 ld l', h                       ; 76 6C
 ld l', l                       ; 76 6D
 ld l, (hl)                     ; 6E
 ld l, (ix)                     ; DD 6E 00
 ld l, (ix+127)                 ; DD 6E 7F
 ld l, (ix-128)                 ; DD 6E 80
 ld l, (iy)                     ; FD 6E 00
 ld l, (iy+127)                 ; FD 6E 7F
 ld l, (iy-128)                 ; FD 6E 80
 ld l, -128                     ; 2E 80
 ld l, 127                      ; 2E 7F
 ld l, 255                      ; 2E FF
 ld l, a                        ; 6F
 ld l, b                        ; 68
 ld l, c                        ; 69
 ld l, d                        ; 6A
 ld l, e                        ; 6B
 ld l, h                        ; 6C
 ld l, l                        ; 6D
 or (hl)                        ; B6
 or (ix)                        ; DD B6 00
 or (ix+127)                    ; DD B6 7F
 or (ix-128)                    ; DD B6 80
 or (iy)                        ; FD B6 00
 or (iy+127)                    ; FD B6 7F
 or (iy-128)                    ; FD B6 80
 or -128                        ; F6 80
 or 127                         ; F6 7F
 or 255                         ; F6 FF
 or a                           ; B7
 or a', (hl)                    ; 76 B6
 or a', (ix)                    ; 76 DD B6 00
 or a', (ix+127)                ; 76 DD B6 7F
 or a', (ix-128)                ; 76 DD B6 80
 or a', (iy)                    ; 76 FD B6 00
 or a', (iy+127)                ; 76 FD B6 7F
 or a', (iy-128)                ; 76 FD B6 80
 or a', -128                    ; 76 F6 80
 or a', 127                     ; 76 F6 7F
 or a', 255                     ; 76 F6 FF
 or a', a                       ; 76 B7
 or a', b                       ; 76 B0
 or a', c                       ; 76 B1
 or a', d                       ; 76 B2
 or a', e                       ; 76 B3
 or a', h                       ; 76 B4
 or a', l                       ; 76 B5
 or a, (hl)                     ; B6
 or a, (ix)                     ; DD B6 00
 or a, (ix+127)                 ; DD B6 7F
 or a, (ix-128)                 ; DD B6 80
 or a, (iy)                     ; FD B6 00
 or a, (iy+127)                 ; FD B6 7F
 or a, (iy-128)                 ; FD B6 80
 or a, -128                     ; F6 80
 or a, 127                      ; F6 7F
 or a, 255                      ; F6 FF
 or a, a                        ; B7
 or a, b                        ; B0
 or a, c                        ; B1
 or a, d                        ; B2
 or a, e                        ; B3
 or a, h                        ; B4
 or a, l                        ; B5
 or b                           ; B0
 or c                           ; B1
 or d                           ; B2
 or e                           ; B3
 or h                           ; B4
 or l                           ; B5
 rld                            ; CD @__z80asm__rld
 rrd                            ; CD @__z80asm__rrd
 sbc (hl)                       ; 9E
 sbc (ix)                       ; DD 9E 00
 sbc (ix+127)                   ; DD 9E 7F
 sbc (ix-128)                   ; DD 9E 80
 sbc (iy)                       ; FD 9E 00
 sbc (iy+127)                   ; FD 9E 7F
 sbc (iy-128)                   ; FD 9E 80
 sbc -128                       ; DE 80
 sbc 127                        ; DE 7F
 sbc 255                        ; DE FF
 sbc a                          ; 9F
 sbc a', (hl)                   ; 76 9E
 sbc a', (ix)                   ; 76 DD 9E 00
 sbc a', (ix+127)               ; 76 DD 9E 7F
 sbc a', (ix-128)               ; 76 DD 9E 80
 sbc a', (iy)                   ; 76 FD 9E 00
 sbc a', (iy+127)               ; 76 FD 9E 7F
 sbc a', (iy-128)               ; 76 FD 9E 80
 sbc a', -128                   ; 76 DE 80
 sbc a', 127                    ; 76 DE 7F
 sbc a', 255                    ; 76 DE FF
 sbc a', a                      ; 76 9F
 sbc a', b                      ; 76 98
 sbc a', c                      ; 76 99
 sbc a', d                      ; 76 9A
 sbc a', e                      ; 76 9B
 sbc a', h                      ; 76 9C
 sbc a', l                      ; 76 9D
 sbc a, (hl)                    ; 9E
 sbc a, (ix)                    ; DD 9E 00
 sbc a, (ix+127)                ; DD 9E 7F
 sbc a, (ix-128)                ; DD 9E 80
 sbc a, (iy)                    ; FD 9E 00
 sbc a, (iy+127)                ; FD 9E 7F
 sbc a, (iy-128)                ; FD 9E 80
 sbc a, -128                    ; DE 80
 sbc a, 127                     ; DE 7F
 sbc a, 255                     ; DE FF
 sbc a, a                       ; 9F
 sbc a, b                       ; 98
 sbc a, c                       ; 99
 sbc a, d                       ; 9A
 sbc a, e                       ; 9B
 sbc a, h                       ; 9C
 sbc a, l                       ; 9D
 sbc b                          ; 98
 sbc c                          ; 99
 sbc d                          ; 9A
 sbc e                          ; 9B
 sbc h                          ; 9C
 sbc l                          ; 9D
 sub (hl)                       ; 96
 sub (ix)                       ; DD 96 00
 sub (ix+127)                   ; DD 96 7F
 sub (ix-128)                   ; DD 96 80
 sub (iy)                       ; FD 96 00
 sub (iy+127)                   ; FD 96 7F
 sub (iy-128)                   ; FD 96 80
 sub -128                       ; D6 80
 sub 127                        ; D6 7F
 sub 255                        ; D6 FF
 sub a                          ; 97
 sub a', (hl)                   ; 76 96
 sub a', (ix)                   ; 76 DD 96 00
 sub a', (ix+127)               ; 76 DD 96 7F
 sub a', (ix-128)               ; 76 DD 96 80
 sub a', (iy)                   ; 76 FD 96 00
 sub a', (iy+127)               ; 76 FD 96 7F
 sub a', (iy-128)               ; 76 FD 96 80
 sub a', -128                   ; 76 D6 80
 sub a', 127                    ; 76 D6 7F
 sub a', 255                    ; 76 D6 FF
 sub a', a                      ; 76 97
 sub a', b                      ; 76 90
 sub a', c                      ; 76 91
 sub a', d                      ; 76 92
 sub a', e                      ; 76 93
 sub a', h                      ; 76 94
 sub a', l                      ; 76 95
 sub a, (hl)                    ; 96
 sub a, (ix)                    ; DD 96 00
 sub a, (ix+127)                ; DD 96 7F
 sub a, (ix-128)                ; DD 96 80
 sub a, (iy)                    ; FD 96 00
 sub a, (iy+127)                ; FD 96 7F
 sub a, (iy-128)                ; FD 96 80
 sub a, -128                    ; D6 80
 sub a, 127                     ; D6 7F
 sub a, 255                     ; D6 FF
 sub a, a                       ; 97
 sub a, b                       ; 90
 sub a, c                       ; 91
 sub a, d                       ; 92
 sub a, e                       ; 93
 sub a, h                       ; 94
 sub a, l                       ; 95
 sub b                          ; 90
 sub c                          ; 91
 sub d                          ; 92
 sub e                          ; 93
 sub h                          ; 94
 sub l                          ; 95
 xor (hl)                       ; AE
 xor (ix)                       ; DD AE 00
 xor (ix+127)                   ; DD AE 7F
 xor (ix-128)                   ; DD AE 80
 xor (iy)                       ; FD AE 00
 xor (iy+127)                   ; FD AE 7F
 xor (iy-128)                   ; FD AE 80
 xor -128                       ; EE 80
 xor 127                        ; EE 7F
 xor 255                        ; EE FF
 xor a                          ; AF
 xor a', (hl)                   ; 76 AE
 xor a', (ix)                   ; 76 DD AE 00
 xor a', (ix+127)               ; 76 DD AE 7F
 xor a', (ix-128)               ; 76 DD AE 80
 xor a', (iy)                   ; 76 FD AE 00
 xor a', (iy+127)               ; 76 FD AE 7F
 xor a', (iy-128)               ; 76 FD AE 80
 xor a', -128                   ; 76 EE 80
 xor a', 127                    ; 76 EE 7F
 xor a', 255                    ; 76 EE FF
 xor a', a                      ; 76 AF
 xor a', b                      ; 76 A8
 xor a', c                      ; 76 A9
 xor a', d                      ; 76 AA
 xor a', e                      ; 76 AB
 xor a', h                      ; 76 AC
 xor a', l                      ; 76 AD
 xor a, (hl)                    ; AE
 xor a, (ix)                    ; DD AE 00
 xor a, (ix+127)                ; DD AE 7F
 xor a, (ix-128)                ; DD AE 80
 xor a, (iy)                    ; FD AE 00
 xor a, (iy+127)                ; FD AE 7F
 xor a, (iy-128)                ; FD AE 80
 xor a, -128                    ; EE 80
 xor a, 127                     ; EE 7F
 xor a, 255                     ; EE FF
 xor a, a                       ; AF
 xor a, b                       ; A8
 xor a, c                       ; A9
 xor a, d                       ; AA
 xor a, e                       ; AB
 xor a, h                       ; AC
 xor a, l                       ; AD
 xor b                          ; A8
 xor c                          ; A9
 xor d                          ; AA
 xor e                          ; AB
 xor h                          ; AC
 xor l                          ; AD
