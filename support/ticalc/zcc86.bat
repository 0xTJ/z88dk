rem $Id: zcc86.bat,v 1.2 2001-04-17 09:48:30 stefano Exp $
zcc %1.c
del %1
ren a.bas %1
prgm86 %1
