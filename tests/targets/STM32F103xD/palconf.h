/*
 * Copyright (c) 2013, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 * Author: Wojciech Bober
 *
 */

/**
 * @file    palconf.h
 * @brief   Port and pin name definitions
 *
 * This file provides mapping between pin names used in board independent code
 * to ports and pins in the board.
 *
 * @addtogroup st-node2
 * @{
 */
#ifndef _PAL_DEFS_H_
#define _PAL_DEFS_H_

#include "board.h"
#include "ch.h"
#include "hal.h"

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 *
 * The digits have the following meaning:
 *   0 - Analog input.
 *   1 - Push Pull output 10MHz.
 *   2 - Push Pull output 2MHz.
 *   3 - Push Pull output 50MHz.
 *   4 - Digital input (floating).
 *   5 - Open Drain output 10MHz.
 *   6 - Open Drain output 2MHz.
 *   7 - Open Drain output 50MHz.
 *   8 - Digital input with PullUp or PullDown resistor depending on ODR.
 *   9 - Alternate Push Pull output 10MHz.
 *   A - Alternate Push Pull output 2MHz.
 *   B - Alternate Push Pull output 50MHz.
 *   C - Reserved.
 *   D - Alternate Open Drain output 10MHz.
 *   E - Alternate Open Drain output 2MHz.
 *   F - Alternate Open Drain output 50MHz.
 * Please refer to the STM32 Reference Manual for details.
 */

/*
 * Port A setup.
 */

#define   WKUP_PIN     0  // 8 - digital input with pull down
#define   P1_2_ID      1  // 0 - analog input
#define   P1_6_UART_TX 2  // B - output alt @50Mhz
#define   P1_7_UART_RX 3  // 8 - digital input with pull down
#define   P1_4_ADC     4  // 4 - nc (shield dependent)
#define   P1_5_ADC     5  // 4 - nc (shield dependent)
#define   P2_2_ID      6  // 0 - analog input
#define   P2_2_ADC     7  // 4 - nc (shield dependent)
#define   NC_PA8       8  // 4 - nc
#define   USB_P        9    // 4 - digital input
#define   USB_DISC     10   // 2 - pp output @2Mhz
#define   USBDM        11   // 4 - nc
#define   USBDP        12   // 4 - nc
#define   JTMS         13   // 4 - JTAG
#define   JTCK         14   // 4 - JTAG
#define   NC_PA15      15   // 4 - JTAG

#define VAL_GPIOACRL            0x40448B08      /*  PA7...PA0 */
#define VAL_GPIOACRH            0x44444244      /* PA15...PA8 */
#define VAL_GPIOAODR            0x00000000

/*
 * Port B setup.
 */

#define   P2_5_ADC        0  // 4 - analog input
#define   P3_3_ID         1  // 0 - analog input
#define   NC_PB2          2  // 4 - nc
#define   SD_CLK          3  // B - alternate output @50Mhz
#define   SD_MISO         4  // 4 - input
#define   SD_MOSI         5  // B - alternate output @50Mhz
#define   P3_6_UART2_TX   6  // 9 - output alt @10Mhz
#define   P3_7_UART2_RX   7  // 8 - digital input with pull down
#define   P3A_3_CAN_RX    8  // 4 - nc
#define   P3A_3_CAN_TX    9  // 4 - nc
#define   I2C_SCL         10 // 9 - output alt @10Mhz
#define   I2C_SDA         11 // 4 - floating input
#define   I2C_TEMP_ALERT  12 // 8 - digital input
#define   SHIELD_CLK      13 // B - alternate output @50Mhz
#define   SHIELD_MISO     14 // 4 - input
#define   SHIELD_MOSI     15 // B - alternate output @50Mhz

#define VAL_GPIOBCRL            0x89b4b400      /*  PB7...PB0 */
#define VAL_GPIOBCRH            0xB4B8DD44      /* PB15...PB8 */
#define VAL_GPIOBODR            0x00000000

/*
 * Port C setup.
 */

#define   IBATCHARGE2UP_DSMPS     0  // 4 - analog input
#define   IBATDISCHARGE2UP_DSMPS  1  // 4 - analog input
#define   VBAT2UP_DSMPS           2  // 4 - analog input
#define   VDC2UP                  3  // 4 - analog input
#define   TBAT2UP_DSMPS           4  // 4 - analog input
#define   VBAT_UP_RTC             5  // 4 - nc
#define   UP_PWM_DSMPS            6  // B - output alt @50Mhz
#define   BAT_FORCE_ON            7  // 6 - output od @2Mhz
#define   SIM900_PWR              8  // 2 - output pp @2Mhz
#define   SIM900_DTR              9  // 2 - output pp @2Mhz
#define   P2_6_UART1_TX           10 // B - output alt @50Mhz
#define   P2_7_UART1_RX           11 // 8 - digital input with pull down
#define   P3_4_UART1_TX           12 // B - output alt @50Mhz
#define   NC_PC13                 13 // 4 - nc
#define   CMR200T_1               14 // 4 - nc
#define   CMR200T_2               15 // 4 - nc

#define VAL_GPIOCCRL            0x2B444444     /*  PC7...PC0 */
#define VAL_GPIOCCRH            0x444B8B22      /* PC15...PC8 */
#define VAL_GPIOCODR            0x00000280      /* 0000 0010 1000 0000 */

/*
 * Port D setup.
 */

#define   MEM_RST        0   // 2 - output pp @2Mhz
#define   MEM_CS         1   // 2 - output pp @2Mhz
#define   P3_5_UART1_RX  2   // 8 - digital input
#define   AIC_PWR_ON     3   // 2 - output pp @2Mhz
#define   NC_PD4         4   // 4 - nc
#define   SD_PWR_ON      5   // 2 - output pp @2Mhz
#define   SD_CD          6   // 4 - input
#define   SD_CS          7   // 2 - output pp @2Mhz
#define   SIM900_RXD     8   // B - output alt @50Mhz
#define   SIM900_TXD     9   // 4 - input
#define   SIM900_STATUS  10  // 4 - input
#define   SIM900_CTS     11  // 4 - input
#define   SIM900_RTS     12  // 2 - output pp @2Mhz
#define   SIM900_ONOFF   13  // 2 - output pp @2Mhz
#define   SIM900_SIM_SEL 14  // 2 - output pp @2Mhz
#define   SIM900_NRESET  15  // 2 - output pp @2Mhz

#define VAL_GPIODCRL            0x24242822      /*  PD7...PD0 */
#define VAL_GPIODCRH            0x2222444B      /* PD15...PD8 */
#define VAL_GPIODODR            0x00000083      /* 1000 000 1000 0001 */

/*
 * Port E setup.
 */

#define   NC_PE0           0    // 4 - nc
#define   NC_PE1           1    // 4 - nc
#define   IR_DIODE         2    // 2 - output pp @2Mhz
#define   NC_PE3           3    // 4 - nc
#define   IR_DETECTOR_OUT  4    // 4 - input
#define   DC_PRESENT       5    // 4 - input
#define   NC_PE6           6    // 4 - nc
#define   NC_PE7           7    // 4 - nc
#define   NC_PE8           8    // 4 - nc
#define   NC_PE9           9    // 4 - nc
#define   NC_PE10          10   // 4 - nc
#define   NC_PE11          11	// 4 - nc
#define   NC_PE12          12	// 4 - nc
#define   LED_04           13	// 2 - output pp @2Mhz
#define   LED_05           14	// 2 - output pp @2Mhz
#define   LED_06           15	// 2 - output pp @2Mhz

#define VAL_GPIOECRL            0x44444244      /*  PE7...PE0 */
#define VAL_GPIOECRH            0x22244444      /* PE15...PE8 */
#define VAL_GPIOEODR            0x00000000

/* Drivers */
#define LOG_SD                SD1       // USART1 REMAP
#define LOG_USD               SDU1

//#define palSwitchPad(port, pin, state) do { if (state) palSetPad(port, pin); else palClearPad(port, pin); } while (0)

/*
 * USB bus activation macro, required by the USB driver.
 */
//#define usb_lld_connect_bus(usbp) palClearPad(IOPORT1, USB_DISC)

/*
 * USB bus de-activation macro, required by the USB driver.
 */
//#define usb_lld_disconnect_bus(usbp) palSetPad(IOPORT1, USB_DISC)

#endif

/** @} */
