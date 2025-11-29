
#ifndef WFD_SMEM_API_H
#define WFD_SMEM_API_H

/**********************************************************/
/********* WFD SMEM APIs for ION kernel driver ************/
/**********************************************************/
#ifdef CONFIG_MTK_WFD_SMEM_SUPPORT
int wfd_smem_api_alloc(u32 alignment, u32 size, u32 *refcount, u32 *sec_handle,
		       uint8_t *owner, uint32_t id);
int wfd_smem_api_alloc_zero(u32 alignment, u32 size, u32 *refcount,
			    u32 *sec_handle, uint8_t *owner, uint32_t id);
int wfd_smem_api_unref(u32 sec_handle, uint8_t *owner, uint32_t id);
#endif

#endif /* end of WFD_SMEM_API_H */
