/* Copyright (c) 2015-2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef SDE_ROTATOR_HWIO_H
#define SDE_ROTATOR_HWIO_H

#include <linux/bitops.h>

#define SDE_REG_HW_VERSION			0x0
#define SDE_REG_HW_INTR_STATUS			0x10

#define SDE_INTR_MDP				BIT(0)

#define SDE_MDP_OFFSET				0x1000

#define MMSS_MDP_PANIC_ROBUST_CTRL		0x00178
#define MMSS_MDP_PANIC_LUT0			0x0017C
#define MMSS_MDP_PANIC_LUT1			0x00180
#define MMSS_MDP_ROBUST_LUT			0x00184
#define MMSS_MDP_RT_NRT_VBIF_CLIENT_SEL	0x00190

/* following offsets are with respect to MDP VBIF base */
#define MMSS_VBIF_CLKON				0x4
#define MMSS_VBIF_RD_LIM_CONF			0x0B0
#define MMSS_VBIF_WR_LIM_CONF			0x0C0

#define MMSS_VBIF_XIN_HALT_CTRL0		0x200
#define MMSS_VBIF_XIN_HALT_CTRL1		0x204
#define MMSS_VBIF_AXI_HALT_CTRL0		0x208
#define MMSS_VBIF_AXI_HALT_CTRL1		0x20C
#define MMSS_VBIF_TEST_BUS_OUT_CTRL		0x210
#define MMSS_VBIF_TEST_BUS_OUT			0x230

#define SDE_VBIF_QOS_REMAP_BASE			0x020
#define SDE_VBIF_QOS_REMAP_ENTRIES		0x4

#define SDE_VBIF_FIXED_SORT_EN			0x30
#define SDE_VBIF_FIXED_SORT_SEL0		0x34

/* MMSS_VBIF_NRT - offset relative to base offset */
#define MMSS_VBIF_NRT_VBIF_CLK_FORCE_CTRL0		0x0008
#define MMSS_VBIF_NRT_VBIF_CLK_FORCE_CTRL0_XIN0		0
#define MMSS_VBIF_NRT_VBIF_CLK_FORCE_CTRL0_XIN1		1
#define MMSS_VBIF_NRT_VBIF_CLK_FORCE_CTRL1		0x000C
#define MMSS_VBIF_NRT_VBIF_QOS_REMAP_00			0x0020
#define MMSS_VBIF_NRT_VBIF_QOS_REMAP_01			0x0024
#define MMSS_VBIF_NRT_VBIF_QOS_REMAP_10			0x0028
#define MMSS_VBIF_NRT_VBIF_QOS_REMAP_11			0x002C
#define MMSS_VBIF_NRT_VBIF_WRITE_GATHTER_EN		0x00AC
#define MMSS_VBIF_NRT_VBIF_IN_RD_LIM_CONF0		0x00B0
#define MMSS_VBIF_NRT_VBIF_IN_RD_LIM_CONF1		0x00B4
#define MMSS_VBIF_NRT_VBIF_IN_RD_LIM_CONF2		0x00B8
#define MMSS_VBIF_NRT_VBIF_IN_WR_LIM_CONF0		0x00C0
#define MMSS_VBIF_NRT_VBIF_IN_WR_LIM_CONF1		0x00C4
#define MMSS_VBIF_NRT_VBIF_IN_WR_LIM_CONF2		0x00C8
#define MMSS_VBIF_NRT_VBIF_OUT_RD_LIM_CONF0		0x00D0
#define MMSS_VBIF_NRT_VBIF_OUT_WR_LIM_CONF0		0x00D4
#define MDSS_VBIF_QOS_RP_REMAP_BASE		0x550
#define MDSS_VBIF_QOS_LVL_REMAP_BASE		0x570

#define SDE_MDP_REG_TRAFFIC_SHAPER_EN			BIT(31)
#define SDE_MDP_REG_TRAFFIC_SHAPER_RD_CLIENT(num)	(0x030 + (num * 4))
#define SDE_MDP_REG_TRAFFIC_SHAPER_WR_CLIENT(num)	(0x060 + (num * 4))
#define SDE_MDP_REG_TRAFFIC_SHAPER_FIXPOINT_FACTOR	4

#endif
