rem $Id: zcc83.bat,v 1.2 2001-04-17 09:48:30 stefano Exp $
zcc %1.c
del a.bin
copy a.bas %1.bin
echo g>devp83
echo q>>devp83
debug devpac83.com %1 < devp83
del %1.bin
