
#ifndef _LENS_LIST_H

#define _LENS_LIST_H

#if 0
#define AK7371AF_SetI2Cclient AK7371AF_SetI2Cclient_Main3
#define AK7371AF_Ioctl AK7371AF_Ioctl_Main3
#define AK7371AF_Release AK7371AF_Release_Main3
#define AK7371AF_PowerDown AK7371AF_PowerDown_Main3
extern int AK7371AF_SetI2Cclient(struct i2c_client *pstAF_I2Cclient, spinlock_t *pAF_SpinLock, int *pAF_Opened);
extern long AK7371AF_Ioctl(struct file *a_pstFile, unsigned int a_u4Command, unsigned long a_u4Param);
extern int AK7371AF_Release(struct inode *a_pstInode, struct file *a_pstFile);
extern int AK7371AF_PowerDown(void);
#endif

extern void AFRegulatorCtrl(int Stage);
#endif
