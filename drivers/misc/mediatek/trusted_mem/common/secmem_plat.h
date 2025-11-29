
#ifndef SECMEM_PLAT_H
#define SECMEM_PLAT_H

#include "private/tmem_utils.h"

/**********************************************************/
/**********************************************************/
/**********************************************************/
#define SECMEM_TEE_SESSION_KEEP_ALIVE_SUPPORT (0)
#if SECMEM_TEE_SESSION_KEEP_ALIVE_SUPPORT
#define SECMEM_TEE_SESSION_KEEP_ALIVE
#endif

#define SECMEM_ALIGNMENT_CHECK_ON_CLIENT_SIDE (1)
#if SECMEM_ALIGNMENT_CHECK_ON_CLIENT_SIDE
#define SECMEM_ALIGNMENT_CHECK
#endif

#define SECMEM_MINIMAL_SIZE_CHECK_ON_CLIENT_SIDE (0)
#if SECMEM_MINIMAL_SIZE_CHECK_ON_CLIENT_SIDE
#define SECMEM_MIN_SIZE_CHECK
#endif

/* for TEE secure memory */
#define SECMEM_MIN_ALLOC_CHUNK_SIZE SIZE_64K

#define SECMEM_64BIT_PHYS_SHIFT (6)
#define SECMEM_PHYS_LIMIT_MIN_ALLOC_SIZE (1 << SECMEM_64BIT_PHYS_SHIFT)

#endif /* end of SECMEM_PLAT_H */
