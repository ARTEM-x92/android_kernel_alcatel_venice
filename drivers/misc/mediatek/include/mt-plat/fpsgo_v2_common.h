
#ifndef _FPSGO_V2_COMMON_H_
#define _FPSGO_V2_COMMON_H_

#include "fpsgo_common.h"

#ifdef CONFIG_MTK_FPSGO

#define fpsgo_systrace_c_fbt(pid, val, fmt...) \
	fpsgo_systrace_c(FPSGO_DEBUG_MANDATORY, pid, val, fmt)

void fpsgo_switch_enable(int enable);
int fpsgo_is_enable(void);
void fpsgo_sched_nominate(pid_t *, int *);
int fpsgo_fstb_process_fps_range(char *proc_name, int nr_level, struct fps_level *level);
int fpsgo_fstb_thread_fps_range(pid_t pid, int nr_level, struct fps_level *level);

#else

static inline void fpsgo_switch_enable(int enable) { }
static inline int fpsgo_is_enable(void) { return 0; }
static inline void fpsgo_sched_nominate(pid_t *tid, int *util) { }
static inline int fpsgo_fstb_process_fps_range(char *proc_name,
		int nr_level, struct fps_level *level) { return 0; }
static inline int fpsgo_fstb_thread_fps_range(pid_t pid,
		int nr_level, struct fps_level *level) { return 0; }

#endif

#endif
