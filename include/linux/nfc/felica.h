/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _FELICA_H
#define _FELICA_H

#include <linux/module.h>
#include <linux/fs.h>
#include <linux/irq.h>
#include <linux/poll.h>
#include <linux/regulator/consumer.h>
#include <linux/ioctl.h>
#include <linux/module.h>
#include <linux/i2c.h>
#include <net/sock.h>
#include <linux/netlink.h>
#include <linux/skbuff.h>
#include <linux/tty.h>
#include <mach/sec_debug.h>

/* jmodel */
#if defined(CONFIG_ARCH_EXYNOS)
#include <mach/gpio-exynos.h>
#include <plat/gpio-cfg.h>
#elif defined(CONFIG_ARCH_APQ8064)
#include "../../arch/arm/mach-msm/board-8064.h"
#include <mach/apq8064-gpio.h>
#include <mach/gpiomux.h>
#include <linux/barcode_emul.h>
#elif defined(CONFIG_ARCH_MSM8974) || defined(CONFIG_ARCH_MSM8974PRO)
#include "../../arch/arm/mach-msm/board-8064.h"
#if defined(CONFIG_MACH_KLTE_KDI) || defined(CONFIG_MACH_KLTE_DCM) || defined(CONFIG_MACH_KLTE_SBM)
#include <mach/klte_felica_gpio.h>
#else
#include <mach/hlte_felica_gpio.h>
#endif
#include <mach/gpiomux.h>
#include <linux/barcode_emul.h>
#endif

/******************************************************************************
 * log
 ******************************************************************************/

#if defined(CONFIG_SEC_FACTORY)
/* shown at FACTORY */
#define FELICA_PR_ERR(A,...) pr_err("[FELICA]"A,##__VA_ARGS__)

/* NOT shown at FACTORY */
#define FELICA_PR_INFO(A,...) 
#define FELICA_PR_DBG(A,...) 
#else
extern unsigned int sec_dbg_level;

/* shown at HIGH/MID/LOW, user mode:default LOW, eng mode: default MID*/
#define FELICA_PR_ERR(A,...) pr_err("[FELICA]"A,##__VA_ARGS__)

/* shown at HIGH/MID, user mode:default LOW, eng mode: default MID*/
#define FELICA_PR_INFO(A,...) \
	do { \
		if (sec_dbg_level != KERNEL_SEC_DEBUG_LEVEL_LOW)	\
			pr_info("[FELICA]"A,##__VA_ARGS__);\
	} while(0)

/* shown at HIGH/MID under debug control, user mode:default LOW, eng mode: default MID*/
#define FELICA_PR_DBG(A,...) \
	do { \
		if (sec_dbg_level != KERNEL_SEC_DEBUG_LEVEL_LOW)	\
			pr_debug("[FELICA]"A,##__VA_ARGS__);\
	} while(0)
#endif

/******************************************************************************
 * config option
 ******************************************************************************/



/******************************************************************************
 * common
 ******************************************************************************/


/******************************************************************************
 * /dev/felica
 ******************************************************************************/
#define FELICA_HLOS_IMG_TAMPER_FUSE    0
#define FELICA_SCM_SVC_FUSE            0x08
#define FELICA_SCM_BLOW_SW_FUSE_ID     0x01
#define FELICA_SCM_IS_SW_FUSE_BLOWN_ID 0x02

static uint8_t felica_get_tamper_fuse_cmd(void);

/******************************************************************************
 * /dev/felica_pon
 ******************************************************************************/

#endif /* _FELICA_H */
