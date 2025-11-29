
#ifndef TEE_PRIVATE_H_
#define TEE_PRIVATE_H_

struct secmem_param {
	u64 alignment;  /* IN */
	u64 size;       /* IN */
	u32 refcount;   /* INOUT */
	u64 sec_handle; /* OUT */
};

void get_tee_peer_ops(struct trusted_driver_operations **ops);

#endif /* TEE_PRIVATE_H_ */
