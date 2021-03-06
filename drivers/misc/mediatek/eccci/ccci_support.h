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

#ifndef __CCCI_SUPPORT_H__
#define __CCCI_SUPPORT_H__

#include "ccci_core.h"
#include "ccci_debug.h"

struct ccci_setting {
	int sim_mode;
	int slot1_mode;		/* 0:CDMA 1:GSM 2:WCDMA 3:TDCDMA */
	int slot2_mode;		/* 0:CDMA 1:GSM 2:WCDMA 3:TDCDMA */
};

void ccci_config_modem(struct ccci_modem *md);
void ccci_reload_md_type(struct ccci_modem *md, int type);
int ccci_get_sim_switch_mode(void);
int ccci_store_sim_switch_mode(struct ccci_modem *md, int simmode);
struct ccci_setting *ccci_get_common_setting(int md_id);

#endif				/* __CCCI_SUPPORT_H__ */
