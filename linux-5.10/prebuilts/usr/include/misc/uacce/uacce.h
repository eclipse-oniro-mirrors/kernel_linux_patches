/*
 * This header was generated from the Linux kernel headers by update_headers.py,
 * to provide necessary information from kernel to userspace, such as constants,
 * structures, and macros, and thus, contains no copyrightable information.
 */
#ifndef _UAPIUUACCE_H
#define _UAPIUUACCE_H
#include <linux/types.h>
#include <linux/ioctl.h>
#define UACCE_CMD_START_Q	_IO('W', 0)
#define UACCE_CMD_PUT_Q		_IO('W', 1)
#define UACCE_DEV_SVA		BIT(0)
enum uacce_qfrt {
	UACCE_QFRT_MMIO = 0,
	UACCE_QFRT_DUS = 1,
};
#endif
