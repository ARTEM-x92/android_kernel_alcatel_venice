
#ifndef TRUSTED_MEM_API_H
#define TRUSTED_MEM_API_H

enum TRUSTED_MEM_REQ_TYPE {
	TRUSTED_MEM_REQ_SVP = 0,
	TRUSTED_MEM_REQ_PROT = 1,
	TRUSTED_MEM_REQ_WFD = 2,
	TRUSTED_MEM_REQ_2D_FR = 3,
};

/**********************************************************/
/**** Trusted Memory Common APIs for ION kernel driver ****/
/**********************************************************/
#ifdef CONFIG_MTK_TRUSTED_MEMORY_SUBSYSTEM
int trusted_mem_api_alloc(enum TRUSTED_MEM_REQ_TYPE mem_type, u32 alignment,
			  u32 size, u32 *refcount, u32 *sec_handle,
			  uint8_t *owner, uint32_t id);
int trusted_mem_api_alloc_zero(enum TRUSTED_MEM_REQ_TYPE mem_type,
			       u32 alignment, u32 size, u32 *refcount,
			       u32 *sec_handle, uint8_t *owner, uint32_t id);
int trusted_mem_api_unref(enum TRUSTED_MEM_REQ_TYPE mem_type, u32 sec_handle,
			  uint8_t *owner, uint32_t id);
#endif

#endif /* end of TRUSTED_MEM_API_H */
