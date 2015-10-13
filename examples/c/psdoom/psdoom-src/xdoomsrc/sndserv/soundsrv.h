// Emacs style mode select   -*- C++ -*- 
// vi:set tabstop=8:
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
// Copyright (C) 1997-1999 by Udo Munk
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
//
//
// $Log:$
//
//
// DESCRIPTION:
//	UNIX soundserver, separate process. 
//
//-----------------------------------------------------------------------------

#ifndef __SNDSERVER_H__
#define __SNDSERVER_H__

#define SAMPLECOUNT		512
#define MIXBUFFERSIZE		(SAMPLECOUNT*2*2)
#define SPEED			11025

void I_InitMusic(void);

void I_InitSound(int samplerate, int samplesound);

void I_SubmitOutputBuffer(void *samples, int samplecount);

void I_ShutdownSound(void);
void I_ShutdownMusic(void);

#endif