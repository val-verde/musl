#ifndef _SYS_CDEFS_H
#define _SYS_CDEFS_H

#ifndef __THROW
#define __THROW
#endif

#ifdef __cplusplus
#define __BEGIN_DECLS extern "C" {
#else
#define __BEGIN_DECLS
#endif

#ifdef __cplusplus
#define __END_DECLS }
#else
#define __END_DECLS
#endif

#endif
