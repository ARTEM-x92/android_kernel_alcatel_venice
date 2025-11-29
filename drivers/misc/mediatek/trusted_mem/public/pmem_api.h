
#ifndef PMEM_API_H
#define PMEM_API_H

/**********************************************************/
/*********** PMEM APIs for ION kernel driver **************/
/**********************************************************/
#ifdef CONFIG_MTK_PROT_MEM_SUPPORT
int pmem_api_alloc(u32 alignment, u32 size, u32 *refcount, u32 *sec_handle,
		   u8 *owner, u32 id);
int pmem_api_alloc_zero(u32 alignment, u32 size, u32 *refcount, u32 *sec_handle,
			u8 *owner, u32 id);
int pmem_api_unref(u32 sec_handle, u8 *owner, u32 id);
#endif

#endif /* end of PMEM_API_H */
