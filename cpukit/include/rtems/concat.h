/*
 *  The license and distribution terms for this file may be
 *  found in found in the file LICENSE in this distribution or at
 *  http://www.rtems.com/license/LICENSE.
 *
 *  $Id$
 */

#ifndef _RTEMS_CONCAT_H
#define _RTEMS_CONCAT_H

/* ANSI concatenation macros.  */

#define CONCAT1(a, b) CONCAT2(a, b)
#define CONCAT2(a, b) a ## b

#define EXPAND0(x) x

#endif
