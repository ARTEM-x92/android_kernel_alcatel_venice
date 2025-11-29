
#ifndef PMEM_MOCK_H
#define PMEM_MOCK_H

#include "private/tmem_device.h"

#ifdef PMEM_MOCK_OBJECT_SUPPORT
void get_mocked_peer_ops(struct trusted_driver_operations **ops);
void get_mocked_ssmr_ops(struct ssmr_operations **ops);
#endif

#endif /* end of PMEM_MOCK_H */
