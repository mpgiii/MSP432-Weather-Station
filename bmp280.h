/*
 * bmp280.h
 *
 *  Created on: May 26, 2020
 *      Author: Connor
 */
#include "msp.h"

#ifndef BMP280_H_
#define BMP280_H_

/* SPI pin definitions */
#define CS_PORT P3
#define CS_BIT  BIT6

#define SPI_PORT P1
#define CLK_BIT BIT5
#define MOSI_BIT BIT6
#define MISO_BIT BIT7

/* BMP Address definitions */
#define CTRL_ADDR 0xF4
#define PRESS_MSB_ADDR 0xF7
#define PRESS_LSB_ADDR 0xF8
#define PRESS_XLSB_ADDR 0xF9
#define TEMP_MSB_ADDR 0xFA
#define TEMP_LSB_ADDR 0xFB
#define TEMP_XLSB_ADDR 0xFC
#define CALIB_START_ADDR 0x88
#define CALIB_ADDR_WIDTH 24
#define CALIB_DATA_WIDTH 12

#define MASK_5BIT 0xF8
#define ULTRA_LOW_RES 0x27
#define LOW_RES 0x4B

#define PRESSURE_READ 1
#define TEMPERATURE_READ 0

/* Function Prototypes */
int32_t read_from_BMP(uint8_t mode);
void SPI_init();
void BMP_init();




#endif /* BMP280_H_ */
