/*=========================================================================

Compatibility headers for Z88DK

GFX - a small graphics library 

Copyright (C) 2004  Rafael de Oliveira Jannone


Contact the author:
	by e-mail : rafael AT jannone DOT org
	homepage  : http://jannone.org/gfxlib
	ICQ UIN   : 10115284


$Id: line.h,v 1.1 2009-01-07 09:50:15 stefano Exp $


=========================================================================*/

/*! \file line.h
    \brief line drawing functions
*/
// LINE.H : line drawing functions (header)

/* === WARNING ==

	This is a work-in-progress, meaning that most of this code is unstable
	and it's subject to future changes.  Also, most of it is very hackish,
	not properly cleaned up nor tested.

   === WARNING == */

#ifndef LINE_H
#define LINE_H

#include "msx/gfx.h"


// Draw a line on a surface
#define surface_line(s,x1,y1,x2,y2) msx_surface_line(s,x1,y1,x2,y2)

// Draw a line on video
#define line(x1,y1,x2,y2) msx_line(x1,y1,x2,y2) 

// Draw a line on video (slow)
#define line_slow(x1,y1,x2,y2) msx_line_slow(x1,y1,x2,y2) 

// Calculate a triangle side
#define calculate_side(x1,y1,x2,y2,low,high) msx_calculate_side(x1,y1,x2,y2,low,high)

// Draw horizontal line on video. \a value can be a bit pattern. note: x1 <= x2
#define hline(x1,y1,x2,value) msx_hline(x1,y1,x2,value) 

// Draw horizontal line on surface. \a value can be a bit pattern. note: x1 <= x2
#define surface_hline(s,x1,y1,x2,value) msx_surface_hline(s,x1,y1,x2,value) 


#endif

