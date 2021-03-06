/***************************************************************************
 *   S3m/Mod player by Daniel Marks (dmarks@ais.net)
 *   GUS support by David Jeske (jeske@uiuc.edu)
 *
 * (C) 1994,1995 By Daniel Marks and David Jeske
 *
 * While we retain the copyright to this code, this source code is FREE.
 * You may use it in any way you wish, in any product you wish. You may 
 * NOT steal the copyright for this code from us.
 *
 * We respectfully ask that you email one of us, if possible, if you
 * produce something significant with this code, or if you have any bug 
 * fixes to contribute.  We also request that you give credit where
 * credit is due if you include part of this code in a program of your own.
 *                                                 
 * Email: s3mod@uiuc.edu
 *        jeske@uiuc.edu
 *
 * See the associated README file for Thanks
 ***************************************************************************
 *
 * dsp.h - defines for the DSP support
 *
 */

#ifndef _DSP_H
#define _DSP_H 1

#include "config.h"

#ifdef DSP
extern int                     audio_buffer_size;
extern uint8                  *audio_start_buffer;
extern uint8                  *audio_end_buffer;
extern uint8                  *audio_curptr;

int get_dsp_device(void);
void write_dsp_device(void *buf, int size);
void close_dsp_device(void);
#endif /* DSP */

#endif /* _DSP_H */
