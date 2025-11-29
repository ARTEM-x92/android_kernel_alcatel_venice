

#ifndef __KREE_H__
#define __KREE_H__

#if defined(CONFIG_MTK_IN_HOUSE_TEE_SUPPORT) || defined(CONFIG_TRUSTY)

#include <tz_cross/trustzone.h>

void KREE_SESSION_LOCK(int32_t handle);
void KREE_SESSION_UNLOCK(int32_t handle);

int gz_get_cpuinfo_thread(void *data);
struct _cpus_cluster_freq {
	unsigned int max_freq;
	unsigned int min_freq;
};

/* / KREE session handle type. */
typedef int32_t KREE_SESSION_HANDLE;


/* Session Management */
TZ_RESULT KREE_CreateSession(const char *ta_uuid, KREE_SESSION_HANDLE *pHandle);


/*fix mtee sync*/
TZ_RESULT KREE_CreateSessionWithTag(const char *ta_uuid, KREE_SESSION_HANDLE *pHandle, const char *tag);

TZ_RESULT KREE_CloseSession(KREE_SESSION_HANDLE handle);


TZ_RESULT KREE_TeeServiceCall(KREE_SESSION_HANDLE handle, uint32_t command,
			      uint32_t paramTypes, union MTEEC_PARAM param[4]);


/* System Hardware Counter */
u64 KREE_GetSystemCnt(void);


u32 KREE_GetSystemCntFrq(void);


#endif				/* CONFIG_MTK_IN_HOUSE_TEE_SUPPORT || CONFIG_TRUSTY */
#endif				/* __KREE_H__ */
