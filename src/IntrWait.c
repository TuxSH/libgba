/*
	"$Id: IntrWait.c,v 1.3 2005-08-23 17:02:06 wntrmute Exp $"

	libgba bios interrupt wait routines

	Copyright 2003-2004 by Dave Murphy.

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Library General Public
	License as published by the Free Software Foundation; either
	version 2 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Library General Public License for more details.

	You should have received a copy of the GNU Library General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
	USA.

	Please report all bugs and problems through the bug tracker at
	"http://sourceforge.net/tracker/?group_id=114505&atid=668551".

	"$Header: /lvm/shared/ds/ds/cvs/devkitpro-cvsbackup/libgba/src/IntrWait.c,v 1.3 2005-08-23 17:02:06 wntrmute Exp $"

*/
#include "gba_interrupt.h"

//---------------------------------------------------------------------------------
void	IntrWait(u32 ReturnFlag, u32 IntFlag)
//---------------------------------------------------------------------------------
{
	SystemCall(4);
}

