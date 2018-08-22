
/*=============================================================================
  Maxilla, an OpenGL-based 3D program for viewing dentistry-related VRML & STL.
  Copyright (C) 2008-2010 by Zack T Smith and Ortho Cast Inc.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License version 2 
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  The author may be reached at fbui@comcast.net.
 *============================================================================*/

#ifndef _PDF_H
#define _PDF_H

#include "BMP.h"

enum { TOPLEFT=1, BOTTOM=2 };

extern int pdf_start ();
extern int pdf_end (char *pdf_path, char **text, int n_lines, int fontsize,
		int where);
extern void pdf_draw_big_image (BMP *bmp);
extern void pdf_draw_image (BMP *bmp, float x, float y, float w, float h,
		int pixel_width, int pixel_height);

#endif
