
#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/uaccess.h>
#include <linux/unistd.h>
#include <linux/version.h>

#include "private/ut_entry.h"

int pmem_api_alloc(u32 alignment, u32 size, u32 *refcount, u32 *sec_handle,
		   u8 *owner, u32 id)
{
	return tmem_core_alloc_chunk(TRUSTED_MEM_PROT, alignment, size,
				     refcount, sec_handle, owner, id, 0);
}
EXPORT_SYMBOL(pmem_api_alloc);

int pmem_api_alloc_zero(u32 alignment, u32 size, u32 *refcount, u32 *sec_handle,
			u8 *owner, u32 id)
{
	return tmem_core_alloc_chunk(TRUSTED_MEM_PROT, alignment, size,
				     refcount, sec_handle, owner, id, 1);
}
EXPORT_SYMBOL(pmem_api_alloc_zero);

int pmem_api_unref(u32 sec_handle, u8 *owner, u32 id)
{
	return tmem_core_unref_chunk(TRUSTED_MEM_PROT, sec_handle, owner, id);
}
EXPORT_SYMBOL(pmem_api_unref);
