#include<htc.h>
#include"GPIO.h"
#define _XTAL_FREQ 8000000
#define RS 2
#define RW 1
#define EN 0

void LCD_init();
void LCD_cmd(unsigned char cmd);
void LCD_data(unsigned char data);
void LCD_print(char *str);
void LCD_setcursor(unsigned char row,unsigned char column);
void LCD_clear();