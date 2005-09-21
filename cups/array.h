/*
 * "$Id$"
 *
 *   Sorted array definitions for the Common UNIX Printing System (CUPS).
 *
 *   Copyright 1997-2005 by Easy Software Products.
 *
 *   These coded instructions, statements, and computer programs are the
 *   property of Easy Software Products and are protected by Federal
 *   copyright law.  Distribution and use rights are outlined in the file
 *   "LICENSE.txt" which should have been included with this file.  If this
 *   file is missing or damaged please contact Easy Software Products
 *   at:
 *
 *       Attn: CUPS Licensing Information
 *       Easy Software Products
 *       44141 Airport View Drive, Suite 204
 *       Hollywood, Maryland 20636 USA
 *
 *       Voice: (301) 373-9600
 *       EMail: cups-info@cups.org
 *         WWW: http://www.cups.org
 *
 *   This file is subject to the Apple OS-Developed Software exception.
 */

#ifndef _CUPS__H_
#  define _CUPS__H_

/*
 * Include necessary headers...
 */

#  include <stdlib.h>


/*
 * C++ magic...
 */

#  ifdef __cplusplus
extern "C" {
#  endif /* __cplusplus */


/*
 * Types and structures...
 */

struct cups_array_s;			/**** CUPS array structure @private ****/
typedef struct cups_array_s cups_array_t;
					/**** CUPS array type ****/
typedef int (*cups_array_func_t)(const void *first, const void *second,
                                 void *data);
					/**** Comparison function ****/

/*
 * Functions...
 */

extern int		cupsArrayAdd(cups_array_t *a, void *e);
extern void		cupsArrayClear(cups_array_t *a);
extern int		cupsArrayCount(cups_array_t *a);
extern void		*cupsArrayCurrent(cups_array_t *a);
extern void		cupsArrayDelete(cups_array_t *a);
extern cups_array_t	*cupsArrayDup(cups_array_t *a);
extern void		*cupsArrayFind(cups_array_t *a, void *e);
extern void		*cupsArrayFirst(cups_array_t *a);
extern void		*cupsArrayLast(cups_array_t *a);
extern cups_array_t	*cupsArrayNew(cups_array_func_t f, void *d);
extern void		*cupsArrayNext(cups_array_t *a);
extern void		*cupsArrayPrev(cups_array_t *a);
extern int		cupsArrayRemove(cups_array_t *a, void *e);


#  ifdef __cplusplus
}
#  endif /* __cplusplus */
#endif /* !_CUPS__H_ */

/*
 * End of "$Id$".
 */
