/*
     ZZZZZZZZZZZZZZZZZZZZ    8888888888888       00000000000
   ZZZZZZZZZZZZZZZZZZZZ    88888888888888888    0000000000000
                ZZZZZ      888           888  0000         0000
              ZZZZZ        88888888888888888  0000         0000
            ZZZZZ            8888888888888    0000         0000       AAAAAA         SSSSSSSSSSS   MMMM       MMMM
          ZZZZZ            88888888888888888  0000         0000      AAAAAAAA      SSSS            MMMMMM   MMMMMM
        ZZZZZ              8888         8888  0000         0000     AAAA  AAAA     SSSSSSSSSSS     MMMMMMMMMMMMMMM
      ZZZZZ                8888         8888  0000         0000    AAAAAAAAAAAA      SSSSSSSSSSS   MMMM MMMMM MMMM
    ZZZZZZZZZZZZZZZZZZZZZ  88888888888888888    0000000000000     AAAA      AAAA           SSSSS   MMMM       MMMM
  ZZZZZZZZZZZZZZZZZZZZZ      8888888888888       00000000000     AAAA        AAAA  SSSSSSSSSSS     MMMM       MMMM

Copyright (C) Gunther Strube, InterLogic 1993-99
Copyright (C) Paulo Custodio, 2011
*/

/* $Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/options.h,v 1.1 2011-07-11 15:40:46 pauloscustodio Exp $ */
/* $Log: options.h,v $
/* Revision 1.1  2011-07-11 15:40:46  pauloscustodio
/* Moved all option variables and option handling code to a separate module options.c
/*
/* */

#ifndef OPTIONS_H
#define OPTIONS_H

#include "symbol.h"

/* global option variables */
extern enum flag smallc_source;
extern enum flag ti83plus;
extern enum flag swapIXIY;
extern enum flag clinemode;
extern long clineno;
extern enum flag codesegment;
extern enum flag datestamp;
extern enum flag sdcc_hacks;
extern enum flag force_xlib;
extern enum flag listing;
extern enum flag listing_CPY;
extern enum flag symtable;
extern enum flag symfile;
extern enum flag z80bin;
extern enum flag mapref;
extern enum flag verbose;
extern enum flag globaldef;
extern enum flag autorelocate;
extern enum flag deforigin;
extern enum flag expl_binflnm;
extern char binfilename[];		/* -o explicit filename buffer */

/* reset default options */
extern void ResetOptions();

/* parse one command line option */
extern void SetAsmFlag (char *flagid);

#endif /* ndef OPTIONS_H */
