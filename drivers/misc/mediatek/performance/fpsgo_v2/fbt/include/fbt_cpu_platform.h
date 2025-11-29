
#ifndef __FBT_CPU_PLATFORM_H__
#define __FBT_CPU_PLATFORM_H__

#include "fbt_cpu.h"

extern int capacity_min_write_for_perf_idx(int idx, int capacity_min);
extern void cm_mgr_perf_set_status(int enable);


void fbt_set_boost_value(unsigned int base_blc);
void fbt_clear_boost_value(void);
int fbt_is_mips_different(void);
int fbt_get_L_min_ceiling(void);
int fbt_get_L_cluster_num(void);
void fbt_notify_CM_limit(int reach_limit);

#endif
