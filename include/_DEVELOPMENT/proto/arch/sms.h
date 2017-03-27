include(__link__.m4)

#ifndef _ARCH_SMS_H
#define _ARCH_SMS_H

#include <arch.h>

// IO MAPPED REGISTERS

#ifdef __SCCZ80

#define IO_MEMORY_ENABLES         __IO_MEMORY_ENABLES
#define IO_JOYSTICK_PORT_CONTROL  __IO_JOYSTICK_PORT_CONTROL
#define IO_GUN_SPOT_VERTICAL      __IO_GUN_SPOT_VERTICAL
#define IO_GUN_SPOT_HORIZONTAL    __IO_GUN_SPOT_HORIZONTAL
#define IO_PSG                    __IO_PSG
#define IO_VDP_DATA               __IO_VDP_DATA
#define IO_VDP_COMMAND            __IO_VDP_COMMAND
#define IO_VDP_STATUS             __IO_VDP_STATUS
#define IO_JOYSTICK_READ_DC       __IO_JOYSTICK_READ_DC
#define IO_JOYSTICK_READ_DD       __IO_JOYSTICK_READ_DD

#endif

#ifdef __SDCC

__sfr __at __IO_MEMORY_ENABLES         IO_MEMORY_ENABLES;
__sfr __at __IO_JOYSTICK_PORT_CONTROL  IO_JOYSTICK_PORT_CONTROL;
__sfr __at __IO_GUN_SPOT_VERTICAL      IO_GUN_SPOT_VERTICAL;
__sfr __at __IO_GUN_SPOT_HORIZONTAL    IO_GUN_SPOT_HORIZONTAL;
__sfr __at __IO_PSG                    IO_PSG;
__sfr __at __IO_VDP_DATA               IO_VDP_DATA;
__sfr __at __IO_VDP_COMMAND            IO_VDP_COMMAND;
__sfr __at __IO_VDP_STATUS             IO_VDP_STATUS;
__sfr __at __IO_JOYSTICK_READ_DC       IO_JOYSTICK_READ_DC;
__sfr __at __IO_JOYSTICK_READ_DD       IO_JOYSTICK_READ_DD;

#endif

#ifdef __CLANG

extern unsigned char IO_MEMORY_ENABLES;
extern unsigned char IO_JOYSTICK_PORT_CONTROL;
extern unsigned char IO_GUN_SPOT_VERTICAL;
extern unsigned char IO_GUN_SPOT_HORIZONTAL;
extern unsigned char IO_PSG;
extern unsigned char IO_VDP_DATA;
extern unsigned char IO_VDP_COMMAND;
extern unsigned char IO_VDP_STATUS;
extern unsigned char IO_JOYSTICK_READ_DC;
extern unsigned char IO_JOYSTICK_READ_DD;

#endif

// MEMORY MAPPED REGISTERS

extern unsigned char MM_FRAME2_CONTROL_REGISTER;
extern unsigned char MM_FRAME1_CONTROL_REGISTER;
extern unsigned char MM_FRAME0_CONTROL_REGISTER;
extern unsigned char MM_FRAME2_RAM_CONTROL_REGISTER;

#endif
