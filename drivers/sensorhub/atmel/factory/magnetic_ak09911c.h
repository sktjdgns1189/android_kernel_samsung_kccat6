/*
 *  Copyright (C) 2012, Samsung Electronics Co. Ltd. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */
#if defined(CONFIG_SEC_TRLTE_PROJECT)
#define PDC_MATRIX	{75, 87, 29, 243, 222, 58, 0, 231, 207, 53,\
			96, 37, 31, 228, 1, 215, 245, 134, 101, 107,\
			188, 255, 132, 238, 11, 231, 117}
#elif defined(CONFIG_SEC_TBLTE_PROJECT)
#define PDC_MATRIX	{166, 87, 166, 170, 218, 165, 255, 227, 221, 54,\
			66, 111, 255, 63, 9, 87, 244, 190, 168, 184,\
			183, 2, 147, 173, 11, 175, 15}
#else
#define PDC_MATRIX	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0,\
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0,\
			0, 0, 0, 0, 0, 0, 0}
#endif
