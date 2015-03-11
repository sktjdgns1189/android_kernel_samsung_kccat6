/*
 * battery_data.h
 * Samsung Mobile Battery data Header
 *
 *
 * Copyright (C) 2012 Samsung Electronics, Inc.
 *
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __SEC_BATTERY_DATA_H
#define __SEC_BATTERY_DATA_H __FILE__

#if defined(CONFIG_SEC_TRLTE_PROJECT)
static struct max77823_fuelgauge_battery_data_t max77823_battery_data[] = {
	/* SDI battery data (High voltage 4.4V) */
	{
		.Capacity = 0x187E, /* TR : 3220mAh */
		.low_battery_comp_voltage = 3500,
		.low_battery_table = {
			/* range, slope, offset */
			{-5000,	0,	0},	/* dummy for top limit */
			{-1250, 0,	3320},
			{-750, 97,	3451},
			{-100, 96,	3461},
			{0, 0,	3456},
		},
		.temp_adjust_table = {
			/* range, slope, offset */
			{47000, 122,	8950},
			{60000, 200,	51000},
			{100000, 0,	0},	/* dummy for top limit */
		},
		.type_str = "SDI",
	}
};
/* TBLTE_PROJECT */
#else
static struct max77823_fuelgauge_battery_data_t max77823_battery_data[] = {
	/* SDI battery data (High voltage 4.4V) */
	{
		.Capacity = 0x16A3, /* TB : 2970mAh */
		.low_battery_comp_voltage = 3500,
		.low_battery_table = {
			/* range, slope, offset */
			{-5000,	0,	0},	/* dummy for top limit */
			{-1250, 0,	3320},
			{-750, 97,	3451},
			{-100, 96,	3461},
			{0, 0,	3456},
		},
		.temp_adjust_table = {
			/* range, slope, offset */
			{47000, 122,	8950},
			{60000, 200,	51000},
			{100000, 0,	0},	/* dummy for top limit */
		},
		.type_str = "SDI",
	}
};
#endif

#define CAPACITY_MAX			990
#define CAPACITY_MAX_MARGIN	50
#define CAPACITY_MIN			-7

#if defined(CONFIG_SEC_TRLTE_PROJECT)
static sec_bat_adc_table_data_t temp_table[] = {
	{27133, 900},
	{27464, 850},
	{27848, 800},
	{28259, 750},
	{28683, 700},
	{29175, 650},
	{29708, 600},
	{30345, 550},
	{30959, 500},
	{31647, 450},
	{32211, 400},
	{32881, 350},
	{33493, 300},
	{34051, 250},
	{34566, 200},
	{35023, 150},
	{35420, 100},
	{35798, 50},
	{35866, 40},
	{35923, 30},
	{35976, 20},
	{36028, 10},
	{36031, 0},
	{36130, -10},
	{36170, -20},
	{36203, -30},
	{36215, -40},
	{36245, -50},
	{36463, -100},
	{36620, -150},
	{36746, -200},
	{36832, -250},
	{36884, -300},
};
/* TBLTE_PROJECT */
#else
static sec_bat_adc_table_data_t temp_table[] = {
	{27502, 900},
	{27514, 890},
	{27551, 880},
	{27576, 870},
	{27597, 860},
	{27617, 850},
	{27651, 840},
	{27693, 830},
	{27721, 820},
	{27763, 810},
	{27802, 800},
	{27867, 790},
	{27961, 780},
	{28030, 770},
	{28116, 760},
	{28254, 750},
	{28370, 740},
	{28377, 730},
	{28502, 720},
	{28589, 710},
	{28723, 700},
	{28849, 690},
	{28884, 680},
	{29044, 670},
	{29203, 660},
	{29267, 650},
	{29355, 640},
	{29451, 630},
	{29583, 620},
	{29729, 610},
	{29779, 600},
	{29922, 590},
	{30041, 580},
	{30113, 570},
	{30261, 560},
	{30357, 550},
	{30482, 540},
	{30610, 530},
	{30731, 520},
	{30858, 510},
	{31021, 500},
	{31121, 490},
	{31246, 480},
	{31388, 470},
	{31509, 460},
	{31633, 450},
	{31760, 440},
	{31872, 430},
	{32037, 420},
	{32150, 410},
	{32282, 400},
	{32401, 390},
	{32554, 380},
	{32685, 370},
	{32787, 360},
	{32919, 350},
	{33055, 340},
	{33164, 330},
	{33274, 320},
	{33413, 310},
	{33541, 300},
	{33647, 290},
	{33699, 280},
	{33838, 270},
	{33948, 260},
	{34060, 250},
	{34170, 240},
	{34273, 230},
	{34381, 220},
	{34480, 210},
	{34585, 200},
	{34687, 190},
	{34777, 180},
	{34865, 170},
	{34946, 160},
	{35044, 150},
	{35129, 140},
	{35214, 130},
	{35289, 120},
	{35372, 110},
	{35428, 100},
	{35527, 90},
	{35595, 80},
	{35672, 70},
	{35737, 60},
	{35801, 50},
	{35865, 40},
	{35928, 30},
	{35975, 20},
	{36030, 10},
	{36092, 0},
	{36148, -10},
	{36187, -20},
	{36243, -30},
	{36283, -40},
	{36328, -50},
	{36385, -60},
	{36430, -70},
	{36460, -80},
	{36500, -90},
	{36533, -100},
	{36558, -110},
	{36586, -120},
	{36627, -130},
	{36661, -140},
	{36683, -150},
	{36713, -160},
	{36726, -170},
	{36761, -180},
	{36786, -190},
	{36812, -200},
};
#endif

#if defined(CONFIG_MACH_TRLTE_ATT) || defined(CONFIG_MACH_TRLTE_SPR) || \
	defined(CONFIG_MACH_TRLTE_TMO) || defined(CONFIG_MACH_TRLTE_USC) || \
	defined(CONFIG_MACH_TRLTE_VZW) || defined(CONFIG_MACH_TRLTE_CAN)
#define TEMP_HIGH_THRESHOLD_EVENT	600
#define TEMP_HIGH_RECOVERY_EVENT		460
#define TEMP_LOW_THRESHOLD_EVENT		-20
#define TEMP_LOW_RECOVERY_EVENT		0
#define TEMP_HIGH_THRESHOLD_NORMAL	540
#define TEMP_HIGH_RECOVERY_NORMAL	470
#define TEMP_LOW_THRESHOLD_NORMAL	-20
#define TEMP_LOW_RECOVERY_NORMAL	0
#define TEMP_HIGH_THRESHOLD_LPM		540
#define TEMP_HIGH_RECOVERY_LPM		460
#define TEMP_LOW_THRESHOLD_LPM		0
#define TEMP_LOW_RECOVERY_LPM		30
#else
#define TEMP_HIGH_THRESHOLD_EVENT	600
#define TEMP_HIGH_RECOVERY_EVENT		460
#define TEMP_LOW_THRESHOLD_EVENT		-50
#define TEMP_LOW_RECOVERY_EVENT		0
#define TEMP_HIGH_THRESHOLD_NORMAL	600
#define TEMP_HIGH_RECOVERY_NORMAL	460
#define TEMP_LOW_THRESHOLD_NORMAL	-50
#define TEMP_LOW_RECOVERY_NORMAL	0
#define TEMP_HIGH_THRESHOLD_LPM		600
#define TEMP_HIGH_RECOVERY_LPM		460
#define TEMP_LOW_THRESHOLD_LPM		-50
#define TEMP_LOW_RECOVERY_LPM		0
#endif

#endif /* __SEC_BATTERY_DATA_H */
