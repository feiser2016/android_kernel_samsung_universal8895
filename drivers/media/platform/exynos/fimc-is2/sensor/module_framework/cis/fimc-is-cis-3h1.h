/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_3H1_H
#define FIMC_IS_CIS_3H1_H

#include "fimc-is-cis.h"

#define EXT_CLK_Mhz (26)

/* FIXME */
#define SENSOR_3H1_MAX_WIDTH		(3264 + 0)
#define SENSOR_3H1_MAX_HEIGHT		(2448 + 0)

#define SENSOR_3H1_FINE_INTEGRATION_TIME_MIN                0x100
#define SENSOR_3H1_FINE_INTEGRATION_TIME_MAX                0x100
#define SENSOR_3H1_COARSE_INTEGRATION_TIME_MIN              0x05
#define SENSOR_3H1_COARSE_INTEGRATION_TIME_MAX_MARGIN       0x1C

#define USE_GROUP_PARAM_HOLD	(0)

enum sensor_3h1_mode_enum {
	SENSOR_3H1_3280X2464_30FPS = 0,
	SENSOR_3H1_3280X1232_60FPS,
	SENSOR_3H1_1640X1232_30FPS,
	SENSOR_3H1_1640X1232_60FPS,
	SENSOR_3H1_820X616_120FPS,
};
#endif

