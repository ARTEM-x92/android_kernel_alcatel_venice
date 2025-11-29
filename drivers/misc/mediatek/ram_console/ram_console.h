
#ifndef __RAM_CONSOLE_H__
#define __RAM_CONSOLE_H__
#define RAM_CONSOLE_EXP_TYPE_MAGIC 0xaeedead0
#define RAM_CONSOLE_EXP_TYPE_DEC(exp_type) \
	((exp_type ^ RAM_CONSOLE_EXP_TYPE_MAGIC) < 16 ? exp_type ^ RAM_CONSOLE_EXP_TYPE_MAGIC : exp_type)
#ifdef CONFIG_MTPROF
extern int boot_finish;
#endif
#ifdef CONFIG_PSTORE
extern void pstore_bconsole_write(struct console *con, const char *s, unsigned c);
#endif
extern struct pstore_info *psinfo;
extern u32 scp_dump_pc(void);
extern u32 scp_dump_lr(void);
#endif
