#ifndef _GRAY_H
#define _GRAY_H

/*
 * Gray Library.  Originally written for TI calcs but
 * hopefully it will grow in the future...
 */

#pragma output GRAYlib

#define G_BLACK 0
#define G_DARK  1
#define G_GRAY 2
#define G_LIGHT 2
#define G_WHITE 3


/* Select actual gray page for the standard gfx funtions */
extern __LIB__ g_page(int page);
/* Plot a pixel to screen */
extern __LIB__ g_plot(int x, int y, int GrayLevel);
/* Draw a line */
extern __LIB__ g_draw(int x1, int y1, int x2, int y2, int GrayLevel);
/* Relative draw */
extern __LIB__ g_drawr(int px, int py, int GrayLevel);
/* Draw a box */
extern __LIB__ g_drawb(int tlx, int tly, int width, int height, int GrayLevel);
/* Draw a circle */
extern __LIB__ g_circle(int x, int y, int radius, int skip, int GrayLevel);
/* Clear map */
extern __LIB__ g_clg(void);


#endif
