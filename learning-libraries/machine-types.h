#ifndef _BSD_MACHINE_TYPES_H_
#define _BSD_MACHINE_TYPES_H_

#if defined (__i386__) || defined (__x86_64__)
#include "i386/types.h"
#else
#error architecture not supported
#endif

#endif // _BSD_MACHINE_TYPES_H_