/*
 * tegra_asoc_utils.h - Definitions for Tegra DAS driver
 *
 * Author: Stephen Warren <swarren@nvidia.com>
 * Copyright (C) 2010 - NVIDIA, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef __TEGRA_ASOC_UTILS_H__
#define __TEGRA_ASOC_UTILS_H_

struct clk;
struct device;

struct tegra_asoc_utils_data {
	struct device *dev;
	struct clk *clk_pll_a;
	struct clk *clk_pll_a_out0;
	struct clk *clk_cdev1;
	int set_baseclock;
	int set_mclk;
};

extern bool clk_refcnt_positive(struct clk *c);

int tegra_asoc_utils_set_rate(struct tegra_asoc_utils_data *data, int srate,
			      int mclk);
int tegra_asoc_utils_init(struct tegra_asoc_utils_data *data,
			  struct device *dev);
void tegra_asoc_utils_fini(struct tegra_asoc_utils_data *data);

#endif

