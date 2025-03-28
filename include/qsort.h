/*
 * File:qsort.h
 * memory functions pseudo definition header
 */
/*
 * $PSLibId: Run-time Library Release 4.7$
 */

#ifndef _QSORT_H
#define _QSORT_H

#include <stddef.h>

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern "C" {
#endif
extern void qsort(void *, size_t, size_t, int (*)());
#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif  /* _QSORT_H */

