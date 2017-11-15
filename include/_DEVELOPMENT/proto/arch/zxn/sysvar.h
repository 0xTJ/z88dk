include(__link__.m4)

#ifndef __SYSVAR_H__
#define __SYSVAR_H__

#include <arch.h>

// Values Expected by Basic

#define SYS_IY   __SYS_IY
#define SYS_HLP  __SYS_HLP

// System Variables - Absolute Addresses
// See https://github.com/z88dk/techdocs/blob/master/targets/zx-next/nextos/

extern unsigned char SYSVAR_SWAP[16];
extern unsigned char SYSVAR_STOO[17];
extern unsigned char SYSVAR_YOUNGER[9];
extern unsigned char SYSVAR_REGNUOY[16];
extern unsigned char SYSVAR_ONERR[24];
extern unsigned int SYSVAR_OLDHL;
extern unsigned int SYSVAR_OLDBC;
extern unsigned int SYSVAR_OLDAF;
extern unsigned int SYSVAR_TARGET;
extern unsigned int SYSVAR_RETADDR;
extern unsigned char SYSVAR_BANKM;
extern unsigned char SYSVAR_RAMRST;
extern unsigned char SYSVAR_RAMERR;
extern unsigned int SYSVAR_BAUD;
extern unsigned char SYSVAR_SERFL[2];
extern unsigned char SYSVAR_COL;
extern unsigned char SYSVAR_WIDTH;
extern unsigned char SYSVAR_TVPARS;
extern unsigned char SYSVAR_FLAGS3;
extern unsigned char SYSVAR_BANK678;
extern unsigned char SYSVAR_FLAGN;
extern unsigned char SYSVAR_MAXBNK;
extern unsigned int SYSVAR_OLDSP;
extern unsigned int SYSVAR_SYNRET;
extern unsigned char SYSVAR_LASTV[5];
extern unsigned char SYSVAR_TILEBNKL;
extern unsigned char SYSVAR_TILEML;
extern unsigned char SYSVAR_TILEBNK2;
extern unsigned char SYSVAR_TILEM2;
extern unsigned char SYSVAR_NXTBNK;
extern unsigned char SYSVAR_DATABNK;
extern unsigned char SYSVAR_LODDRV;
extern unsigned char SYSVAR_SAVDRV;
extern unsigned char SYSVAR_L2SOFT;
extern unsigned int SYSVAR_TILEWL;
extern unsigned int SYSVAR_TILEW2;
extern unsigned int SYSVAR_TILEOFFL;
extern unsigned int SYSVAR_TILEOFF2;
extern unsigned char SYSVAR_COORDSL[2];
extern unsigned char SYSVAR_COORDS2[2];
extern unsigned char SYSVAR_COORDSULA[2];
extern unsigned char SYSVAR_COORDSHR[2];
extern unsigned char SYSVAR_COORDSHC[2];
extern unsigned char SYSVAR_INKL;
extern unsigned char SYSVAR_INK2;
extern unsigned char SYSVAR_ATTRULA;
extern unsigned char SYSVAR_ATTRHR;
extern unsigned char SYSVAR_ATTRHC;
extern unsigned char SYSVAR_INKMASK;
extern unsigned char SYSVAR_TMPVARS[];

extern unsigned char SYSVAR_TSTACK[];

extern unsigned char SYSVAR_KSTATE[8];
extern unsigned char SYSVAR_LASTK;
extern unsigned char SYSVAR_REPDEL;
extern unsigned char SYSVAR_REPPER;
extern unsigned int SYSVAR_DEFADD;
extern unsigned char SYSVAR_KDATA;
extern unsigned char SYSVAR_TVDATA;
extern unsigned char SYSVAR_STRMS[38];
extern unsigned int SYSVAR_CHARS;
extern unsigned char SYSVAR_RASP;
extern unsigned char SYSVAR_PIP;
extern unsigned char SYSVAR_ERRNR;
extern unsigned char SYSVAR_FLAGS;
extern unsigned char SYSVAR_TVFLAG;
extern unsigned int SYSVAR_ERRSP;
extern unsigned int SYSVAR_LISTSP;
extern unsigned char SYSVAR_MODE;
extern unsigned int SYSVAR_NEWPPC;
extern unsigned char SYSVAR_NSPPC;
extern unsigned int SYSVAR_PPC;
extern unsigned char SYSVAR_SUBPPC;
extern unsigned char SYSVAR_BORDCR;
extern unsigned int SYSVAR_EPPC;
extern unsigned int SYSVAR_VARS;
extern unsigned int SYSVAR_DEST;
extern unsigned int SYSVAR_CHANS;
extern unsigned int SYSVAR_CURCHL;
extern unsigned int SYSVAR_PROG;
extern unsigned int SYSVAR_NXTLIN;
extern unsigned int SYSVAR_DATADD;
extern unsigned int SYSVAR_ELINE;
extern unsigned int SYSVAR_KCUR;
extern unsigned int SYSVAR_CHADD;
extern unsigned int SYSVAR_XPTR;
extern unsigned int SYSVAR_WORKSP;
extern unsigned int SYSVAR_STKBOT;
extern unsigned int SYSVAR_STKEND;
extern unsigned char SYSVAR_BREG;
extern unsigned int SYSVAR_MEM;
extern unsigned char SYSVAR_FLAGS2;
extern unsigned char SYSVAR_DFSZ;
extern unsigned int SYSVAR_STOP;
extern unsigned int SYSVAR_OLDPPC;
extern unsigned char SYSVAR_OSPPC;
extern unsigned char SYSVAR_FLAGX;
extern unsigned int SYSVAR_STRLEN;
extern unsigned int SYSVAR_TADDR;
extern unsigned int SYSVAR_SEED;
extern unsigned char SYSVAR_FRAMES[3];
extern unsigned int SYSVAR_UDG;
extern unsigned char SYSVAR_COORDS[2];
extern unsigned char SYSVAR_GMODE;
extern unsigned int SYSVAR_PRCC;
extern unsigned char SYSVAR_ECHOE[2];
extern unsigned int SYSVAR_DFCC;
extern unsigned int SYSVAR_DFCCL;
extern unsigned char SYSVAR_SPOSN[2];
extern unsigned char SYSVAR_SPOSNL[2];
extern unsigned char SYSVAR_SCRCT;
extern unsigned char SYSVAR_ATTRP;
extern unsigned char SYSVAR_MASKP;
extern unsigned char SYSVAR_ATTRT;
extern unsigned char SYSVAR_MASKT;
extern unsigned char SYSVAR_PFLAG;
extern unsigned char SYSVAR_MEMBOT[30];
extern unsigned int SYSVAR_NMIADD;
extern unsigned int SYSVAR_RAMTOP;
extern unsigned int SYSVAR_PRAMT;

#endif
