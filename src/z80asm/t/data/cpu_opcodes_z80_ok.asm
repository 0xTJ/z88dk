 ld (hl), a             ;; 77
 ld (hl), b             ;; 70
 ld (hl), c             ;; 71
 ld (hl), d             ;; 72
 ld (hl), e             ;; 73
 ld (hl), h             ;; 74
 ld (hl), l             ;; 75
 ld (ix), a             ;; DD 77 00
 ld (ix), b             ;; DD 70 00
 ld (ix), c             ;; DD 71 00
 ld (ix), d             ;; DD 72 00
 ld (ix), e             ;; DD 73 00
 ld (ix), h             ;; DD 74 00
 ld (ix), l             ;; DD 75 00
 ld (ix+42), a          ;; DD 77 2A
 ld (ix+42), b          ;; DD 70 2A
 ld (ix+42), c          ;; DD 71 2A
 ld (ix+42), d          ;; DD 72 2A
 ld (ix+42), e          ;; DD 73 2A
 ld (ix+42), h          ;; DD 74 2A
 ld (ix+42), l          ;; DD 75 2A
 ld (iy), a             ;; FD 77 00
 ld (iy), b             ;; FD 70 00
 ld (iy), c             ;; FD 71 00
 ld (iy), d             ;; FD 72 00
 ld (iy), e             ;; FD 73 00
 ld (iy), h             ;; FD 74 00
 ld (iy), l             ;; FD 75 00
 ld (iy+42), a          ;; FD 77 2A
 ld (iy+42), b          ;; FD 70 2A
 ld (iy+42), c          ;; FD 71 2A
 ld (iy+42), d          ;; FD 72 2A
 ld (iy+42), e          ;; FD 73 2A
 ld (iy+42), h          ;; FD 74 2A
 ld (iy+42), l          ;; FD 75 2A
 ld a, (4660)           ;; 3A 34 12
 ld a, (hl)             ;; 7E
 ld a, (ix)             ;; DD 7E 00
 ld a, (ix+42)          ;; DD 7E 2A
 ld a, (iy)             ;; FD 7E 00
 ld a, (iy+42)          ;; FD 7E 2A
 ld a, 42               ;; 3E 2A
 ld a, a                ;; 7F
 ld a, b                ;; 78
 ld a, c                ;; 79
 ld a, d                ;; 7A
 ld a, e                ;; 7B
 ld a, h                ;; 7C
 ld a, ixh              ;; DD 7C
 ld a, ixl              ;; DD 7D
 ld a, iyh              ;; FD 7C
 ld a, iyl              ;; FD 7D
 ld a, l                ;; 7D
 ld b, (hl)             ;; 46
 ld b, (ix)             ;; DD 46 00
 ld b, (ix+42)          ;; DD 46 2A
 ld b, (iy)             ;; FD 46 00
 ld b, (iy+42)          ;; FD 46 2A
 ld b, 42               ;; 06 2A
 ld b, a                ;; 47
 ld b, b                ;; 40
 ld b, c                ;; 41
 ld b, d                ;; 42
 ld b, e                ;; 43
 ld b, h                ;; 44
 ld b, ixh              ;; DD 44
 ld b, ixl              ;; DD 45
 ld b, iyh              ;; FD 44
 ld b, iyl              ;; FD 45
 ld b, l                ;; 45
 ld c, (hl)             ;; 4E
 ld c, (ix)             ;; DD 4E 00
 ld c, (ix+42)          ;; DD 4E 2A
 ld c, (iy)             ;; FD 4E 00
 ld c, (iy+42)          ;; FD 4E 2A
 ld c, 42               ;; 0E 2A
 ld c, a                ;; 4F
 ld c, b                ;; 48
 ld c, c                ;; 49
 ld c, d                ;; 4A
 ld c, e                ;; 4B
 ld c, h                ;; 4C
 ld c, ixh              ;; DD 4C
 ld c, ixl              ;; DD 4D
 ld c, iyh              ;; FD 4C
 ld c, iyl              ;; FD 4D
 ld c, l                ;; 4D
 ld d, (hl)             ;; 56
 ld d, (ix)             ;; DD 56 00
 ld d, (ix+42)          ;; DD 56 2A
 ld d, (iy)             ;; FD 56 00
 ld d, (iy+42)          ;; FD 56 2A
 ld d, 42               ;; 16 2A
 ld d, a                ;; 57
 ld d, b                ;; 50
 ld d, c                ;; 51
 ld d, d                ;; 52
 ld d, e                ;; 53
 ld d, h                ;; 54
 ld d, ixh              ;; DD 54
 ld d, ixl              ;; DD 55
 ld d, iyh              ;; FD 54
 ld d, iyl              ;; FD 55
 ld d, l                ;; 55
 ld e, (hl)             ;; 5E
 ld e, (ix)             ;; DD 5E 00
 ld e, (ix+42)          ;; DD 5E 2A
 ld e, (iy)             ;; FD 5E 00
 ld e, (iy+42)          ;; FD 5E 2A
 ld e, 42               ;; 1E 2A
 ld e, a                ;; 5F
 ld e, b                ;; 58
 ld e, c                ;; 59
 ld e, d                ;; 5A
 ld e, e                ;; 5B
 ld e, h                ;; 5C
 ld e, ixh              ;; DD 5C
 ld e, ixl              ;; DD 5D
 ld e, iyh              ;; FD 5C
 ld e, iyl              ;; FD 5D
 ld e, l                ;; 5D
 ld h, (hl)             ;; 66
 ld h, (ix)             ;; DD 66 00
 ld h, (ix+42)          ;; DD 66 2A
 ld h, (iy)             ;; FD 66 00
 ld h, (iy+42)          ;; FD 66 2A
 ld h, 42               ;; 26 2A
 ld h, a                ;; 67
 ld h, b                ;; 60
 ld h, c                ;; 61
 ld h, d                ;; 62
 ld h, e                ;; 63
 ld h, h                ;; 64
 ld h, l                ;; 65
 ld ixh, 42             ;; DD 26 2A
 ld ixh, a              ;; DD 67
 ld ixh, b              ;; DD 60
 ld ixh, c              ;; DD 61
 ld ixh, d              ;; DD 62
 ld ixh, e              ;; DD 63
 ld ixh, ixh            ;; DD 64
 ld ixh, ixl            ;; DD 65
 ld ixl, 42             ;; DD 2E 2A
 ld ixl, a              ;; DD 6F
 ld ixl, b              ;; DD 68
 ld ixl, c              ;; DD 69
 ld ixl, d              ;; DD 6A
 ld ixl, e              ;; DD 6B
 ld ixl, ixh            ;; DD 6C
 ld ixl, ixl            ;; DD 6D
 ld iyh, 42             ;; FD 26 2A
 ld iyh, a              ;; FD 67
 ld iyh, b              ;; FD 60
 ld iyh, c              ;; FD 61
 ld iyh, d              ;; FD 62
 ld iyh, e              ;; FD 63
 ld iyh, iyh            ;; FD 64
 ld iyh, iyl            ;; FD 65
 ld iyl, 42             ;; FD 2E 2A
 ld iyl, a              ;; FD 6F
 ld iyl, b              ;; FD 68
 ld iyl, c              ;; FD 69
 ld iyl, d              ;; FD 6A
 ld iyl, e              ;; FD 6B
 ld iyl, iyh            ;; FD 6C
 ld iyl, iyl            ;; FD 6D
 ld l, (hl)             ;; 6E
 ld l, (ix)             ;; DD 6E 00
 ld l, (ix+42)          ;; DD 6E 2A
 ld l, (iy)             ;; FD 6E 00
 ld l, (iy+42)          ;; FD 6E 2A
 ld l, 42               ;; 2E 2A
 ld l, a                ;; 6F
 ld l, b                ;; 68
 ld l, c                ;; 69
 ld l, d                ;; 6A
 ld l, e                ;; 6B
 ld l, h                ;; 6C
 ld l, l                ;; 6D
