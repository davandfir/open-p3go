/*  usb.h - USB constant definitions

Copyright (C) 2010  Hector Martin "marcan" <hector@marcansoft.com>

This code is licensed to you under the terms of the GNU GPL, version 2;
see file COPYING or http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt
*/

#ifndef USB_H
#define USB_H

enum {
	DEVICE = 1,
	CONFIGURATION,
	STRING,
	INTERFACE,
	ENDPOINT,
	HID = 0x21,
	HUB = 0x29,
};

enum {
	GET_STATUS,
	CLEAR_FEATURE,
	SET_FEATURE = 3,
	SET_ADDRESS = 5,
	GET_DESCRIPTOR,
	SET_DESCRIPTOR,
	GET_CONFIGURATION,
	SET_CONFIGURATION,
	GET_INTERFACE,
	SET_INTERFACE,
	SYNCH_FRAME
};

enum {
	CLEAR_TT_BUFFER = 8,
	RESET_TT,
	GET_TT_STATE,
	STOP_TT,
};

enum {
	PORT_CONNECTION,
	PORT_ENABLE,
	PORT_SUSPEND,
	PORT_OVER_CURRENT,
	PORT_RESET,
	PORT_POWER = 8,
	PORT_LOW_SPEED,
	C_PORT_CONNECTION = 16,
	C_PORT_ENABLE,
	C_PORT_SUSPEND,
	C_PORT_OVER_CURRENT,
	C_PORT_RESET,
	PORT_TEST,
	PORT_INDICATOR
};

enum {
	P_CONNECTION = 0x0001,
	P_ENABLE = 0x0002,
	P_SUSPEND = 0x0004,
	P_OVER_CURRENT = 0x0008,
	P_RESET = 0x0010,
	P_POWER = 0x0100,
	P_LOW_SPEED = 0x0200,
	P_HIGH_SPEED = 0x0400,
	P_TEST = 0x0800,
	P_INDICATOR = 0x1000,
};

#endif
