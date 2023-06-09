/*****************************************************************************
 *   i2c.h:  Header file for NXP LPC11xx Family Microprocessors
 *
 *   Copyright(C) 2006, NXP Semiconductor
 *   All rights reserved.
 *
 *   History
 *   2006.07.19  ver 1.00    Preliminary version, first Release
 *
******************************************************************************/
#ifndef __I2C_H 
#define __I2C_H

#define FAST_MODE_PLUS	0

#define BUFSIZE			6
#define MAX_TIMEOUT	0x00FFFFFF

#define I2CMASTER		0x01
#define I2CSLAVE		0x02

#define AQM0802_ADDR	0x7c
#define READ_WRITE		0x01

#define RD_BIT			0x01

#define I2C_IDLE			0
#define I2C_STARTED		1
#define I2C_RESTARTED	2
#define I2C_REPEATED_START	3
#define DATA_ACK			4
#define DATA_NACK			5

#define I2DAT_I2C			  0x00000000  /* I2C Data Reg */
#define I2ADR_I2C			  0x00000000  /* I2C Slave Address Reg */
#define I2SCLH_SCLH			0x00000180  /* I2C SCL Duty Cycle High Reg */
#define I2SCLL_SCLL			0x00000180  /* I2C SCL Duty Cycle Low Reg */
#define I2SCLH_HS_SCLH	0x00000020  /* Fast Plus I2C SCL Duty Cycle High Reg */
#define I2SCLL_HS_SCLL	0x00000020  /* Fast Plus I2C SCL Duty Cycle Low Reg */

#endif /* end __I2C_H */
/****************************************************************************
**                            End Of File
*****************************************************************************/
