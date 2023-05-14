/*
 * LCD_interface.h
 *
 *  Created on: May 4, 2023
 *      Author: Mohamed Dwedar
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

void LCD_void_8bitSendCommand(u8 Commmand_copy);
void LCD_void_8bitInit(void);
void LCD_void_8bitSendChar(u8 data);
void LCD_void_8bitSendString(const u8 data[]);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
