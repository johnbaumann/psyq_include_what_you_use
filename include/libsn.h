/*
 * $PSLibId: Run-time Library Release 4.7$
 */
#ifndef _LIBSN_H_
#define _LIBSN_H_

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern "C" {
#endif


/*
** LIBSN.H	declare libary functions provided by LIBSN.LIB
**
** 05/02/94 ADB
** 21/03/94 ADB added user notes as comments
** 18/09/94 ADB	added PCcreat() - it was missing before
** 31/05/95 ADB	added PSYQpause() for new debug stub 4.04
** 20/09/95 ADB added SNFlushCache - but removed after email from Tom Boyd
** 27/03/97 GJ  v2.00
                C++ linkage
                Call to global destructors in snmain.s        
** 12.2.98  GJ  v2.01
                C++ structor functions added in ctors.c
                snmain.s shuffled - __do_global_dtors removed
                Compiler support functions moved to libsngcc.lib
** 18.2.98	GJ  v2.02
                C++ structor functions trimmed down because of assumptions about group names
** 24.3.98      GJ v2.03
                Initialise GP from __SN_GP_BASE linker symbol
*/

#define	pollhost()	__asm__ volatile ("break 1024")	/* inline to keep variable scope */
#define	PSYQpause()	__asm__ volatile ("break 1031")	/* inline to keep variable scope */

/*
** C++ static class object functions
** These are here for when you can't use __SN_ENTRY_POINT (eg a final build)
** or when you need to instantiate static class objects from an overlay.
** Static class objects are those declared with non-function scope which
** have constructors. How do these get called? In the startup code, normally!
** But in final builds you can't link with our startup code, and the Sony
** startup objects don't have hooks for C++ initialisation. So:
** Call __sn_cpp_structors to initialise your standard static class
** objects, or to destroy them. Memory has already
** been allocated for these objects in the image; these functions just call
** the constructors to populate that memory appropriately.
** Call __sn_cpp_structors(section_obj, section_objend),
** supplying the obj and objend variables for a ctors section, to initialise
** the class objects referenced in that section. Or supply the obj and
** objend variables for a dtors section to call the corresponding
** destructors.
*/

extern void __sn_cpp_structors (long, long);

// Forward declarations removed, see re-implementation in nugget's "common/kernel/pcdrv.h"


#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif /* _LIBSN_H_ */
