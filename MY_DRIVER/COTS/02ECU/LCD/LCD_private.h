/*
 * LCD_private.h
 *
 *  Created on: May 4, 2023
 *      Author: Mohamed Dwedar
 */

#ifndef HAL_LCD_LCD_PRIVATE_H_
#define HAL_LCD_LCD_PRIVATE_H_



#define LCD_CLR                   0x01

#define LCD_RETURN                0x02

#define LCD_CURSER_INCREMENT      0x06
#define LCD_CURSER_DECREMENT      0x04

#define LCD_DISPLAT_ON            0x0C
#define LCD_DISPLAT_ON_C_BLINK    0x0E

#define LCD_DIS_SHIFT_RIGHT       0x1C
#define LCD_DIS_SHIFT_LEFT        0x18
#define LCD_CURS_SHIF_RIGHT       0x10
#define LCD_CURS_SHIF_LEFT		  0x14

#define LCD_SET_4MODE             0x28
#define LCD_SET_8MODE             0x38

#define LCD_SET_CURSER_L1         0x80
#define LCD_SET_CURSER_L2         0xC0

#endif /* HAL_LCD_LCD_PRIVATE_H_ */
