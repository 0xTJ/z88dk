/*
 *	Open a file DOR to enable getting of stats
 *
 *	djm 13/3/2000 - Hacked from fopen
 */

#include <z88.h>

int opendor(char *filename)
{
#asm
	INCLUDE	"#fileio.def"
;Create some room on the stack for the filename to be expanded into..
	pop	bc
	pop	de	;filename
	push	de
	push	bc
        ld      hl,-10
        add     hl,sp
        ld      sp,hl
        ex      de,hl 	;de=buffer, hl=filename
        ld      c,8     ;max chars to expand..
        ld      a,OP_DOR	;Open as DOR
        ld      b,0     ;absolute page
        call_oz(gn_opf)
        ex      af,af  ;keep our flags!
        ld      hl,10
        add     hl,sp
        ld      sp,hl   ;restore our stack (we did nothing to it!)
	push	ix
	pop	hl
        ex      af,af	;exit we carry set for failure
	ret	nc
	ld	hl,0
#endasm
}

