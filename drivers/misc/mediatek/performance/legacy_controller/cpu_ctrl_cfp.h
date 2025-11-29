#ifndef CPU_CTRL_CFP_H
#define CPU_CTRL_CFP_H

extern int powerhal_tid;
extern void cpu_ctrl_cfp(struct ppm_limit_data *desired_freq);

extern int cpu_ctrl_cfp_init(struct proc_dir_entry *parent);
extern void cpu_ctrl_cfp_exit(void);
#endif

