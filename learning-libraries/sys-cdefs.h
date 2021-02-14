// Empezando la definicion de _CDEFS_H_
#ifndef _CDEFS_H_
#define _CDEFS_H_

#if defined(__cplusplus)
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS }
#else
#define __BEGIN_DECLS
#define __END_DECLS
#endif

// Compability with compilers and environments that don´t support compiler
// feature checking function-like macros.
#ifndef __has_builtin
#define __has_builtin(x) 0
#endif
#ifndef __has_include
#define __has_inlude(x) 0
#endif

#endif // Terminando la definicion de _CDEFS_H_