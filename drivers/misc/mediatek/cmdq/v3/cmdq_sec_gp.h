
#ifndef __CMDQ_SEC_GP_H__
#define __CMDQ_SEC_GP_H__

#include <linux/delay.h>
#include <linux/types.h>

#include "tee_client_api.h"
#if defined(CONFIG_TRUSTONIC_TEE_SUPPORT)
#include "mobicore_driver_api.h"
#endif
#if defined(CONFIG_MICROTRUST_TEE_SUPPORT)
#include "isee_kernel_api.h"
#endif

/* context for tee vendor */
struct cmdq_sec_tee_context {
#if defined(CONFIG_TRUSTONIC_TEE_SUPPORT) || defined(CONFIG_MICROTRUST_TEE_SUPPORT)
	struct TEEC_UUID uuid;	/* Universally Unique Identifier of secure tl/dr */
#else
	TEEC_UUID uuid; /* Universally Unique Identifier of secure tl/dr */
#endif
	struct TEEC_Context gp_context; /* basic context */
	struct TEEC_Session session; /* session handle */
	struct TEEC_SharedMemory shared_mem; /* shared memory */
};

#endif	/* __CMDQ_SEC_GP_H__ */
