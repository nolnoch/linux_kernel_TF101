/*
 * tegra_wm8903.h - Definitions for Tegra WM8903 driver
 *
 * Author: Wade Burch <dev@nolnoch.net>
 * Copyright (C) 2012 - Groza, Inc.
 *
 * Based on code copyright/by:
 * 
 * Copyright (C) 2010 - NVIDIA, Inc.
 * Stephen Warren <swarren@nvidia.com>
 *
 * Copyright (c) 2009-2010, NVIDIA Corporation.
 * Scott Peterson <speterson@nvidia.com>
 *
 * Copyright (C) 2010 Google, Inc.
 * Iliyan Malchev <malchev@google.com>
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

#ifndef __TEGRA_WM8903_H__
#define __TEGRA_WM8903_H__

#include <linux/platform_device.h>
#include "tegra_asoc_utils.h"

struct tegra_wm8903_platform_data {
	int gpio_spkr_en;
	int gpio_hp_det;
	int gpio_hp_mute;
	int gpio_int_mic_en;
	int gpio_ext_mic_en;
};

struct tegra_wm8903 {
	struct tegra_wm8903_platform_data pdata;
	struct platform_device *pcm_dev;
	struct tegra_asoc_utils_data util_data;
	int gpio_requested;
};

#endif