/****************************************************************
 *		rex.h						*
 *			Header for Rex addin program.		*
 *								*
 ****************************************************************/


#ifndef _REX_H_
#define _REX_H_

#include <rex/message.h>
#include <rex/struct.h>
#include <rex/syscall.h>
#include <rex/syscallEx.h>
#include <rex/register.h>
#include <rex/Database.h>
#include <rex/CalendarDB.h>
#include <rex/TaskDB.h>
#include <rex/MemoDB.h>
#include <rex/StatusDB.h>
#include <rex/TextInfDB.h>

extern int __LIB__ DsPrintf(int, int, int, char*);
extern int __LIB__ farcall(int,int);
extern int __LIB__ farret();
extern int __LIB__ farres();
extern int __LIB__ wrpar1(int);
extern int __LIB__ rdpar1();
extern int __LIB__ wrpar2(int);
extern int __LIB__ rdpar2();

#define DsDisplayBitmapDrawFar( arg1, arg2, arg3, arg4, arg5 ) \
					SYSCALL5( DS_DISPLAY_BITMAP_DRAW, arg1, arg2, arg3, arg4, arg5 )
					
#define FarCall( arg1, arg2 )			farcall( arg1, arg2 )
#define FarReturn()				farret()
#define FarRestore()				farres()

#define WritePar1( arg1 )			wrpar1( arg1 )
#define ReadPar1()				rdpar1()
#define WritePar2( arg1 )			wrpar2( arg1 )
#define ReadPar2()				rdpar2()

#endif /* _REX_H_ */
