/*
 *	Close a DOR
 *
 *	void sondor(int handle, char *type)
 *
 *	Returns son of current dor (old dor invalid)
 *
 *	djm 13/3/2000
 */

#include <z88.h>

int sondor(int handle, char *type)
{
#asm
	INCLUDE	"#dor.def"
	pop	de
	pop	ix
	push	ix
	push	de
	ld	a,DR_Son
	call_oz(os_dor)
	pop	de
	pop	hl
	ld	(hl),a	;store minor type
	push	hl
	push	de
	push	ix
	pop	hl	;return SON dor
#endasm
}

