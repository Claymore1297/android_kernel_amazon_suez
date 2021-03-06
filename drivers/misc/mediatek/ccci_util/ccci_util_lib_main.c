/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <linux/module.h>
#include <linux/device.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/interrupt.h>
#include <linux/spinlock.h>
#include <linux/uaccess.h>
#include <linux/mm.h>
#include <linux/kfifo.h>

#include <linux/firmware.h>
#include <linux/syscalls.h>
#include <linux/uaccess.h>
#include <linux/platform_device.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/of.h>
#ifdef CONFIG_OF
#include <linux/of_fdt.h>
#endif
#include <asm/setup.h>
#include <linux/atomic.h>

#include "ccci_util_lib_main.h"

/*=================================================== */
/* Dummy function part */
/*=================================================== */
int ccci_parse_meta_md_setting(unsigned char args[])
{
	return 0;
}

static int __init ccci_util_init(void)
{
	ccci_util_fo_init();
	ccci_log_init();
	ccci_common_sysfs_init();
	ccci_timer_for_md_init();

	return 0;
}

subsys_initcall(ccci_util_init);
MODULE_DESCRIPTION("MTK CCCI UTIL Driver");
MODULE_LICENSE("GPL");
