#include"LCD8.h"
 
void LCD_init()
{
pinMode(4,0,OUTPUT);	//
pinMode(4,1,OUTPUT);	//
pinMode(4,2,OUTPUT);	//
pinMode(4,3,OUTPUT);	//
pinMode(4,4,OUTPUT);	//D PORT
pinMode(4,5,OUTPUT);	//
pinMode(4,6,OUTPUT);	//
pinMode(4,7,OUTPUT);	//

pinMode(3,0,OUTPUT);	//
pinMode(3,1,OUTPUT);	//C PORT
pinMode(3,2,OUTPUT);	//

LCD_cmd(0x30);	//
__delay_ms(25);	//
LCD_cmd(0x30);	//LCD RESET CMDS
__delay_ms(5);	//
LCD_cmd(0x30);	//
__delay_ms(15);
LCD_cmd(0x38);	//
LCD_cmd(0x06);	//LCD CMDS
LCD_cmd(0x0C);	//
LCD_cmd(0x01);	//
}

void LCD_cmd(unsigned char cmd)
{
PORTD=cmd;
digitalWrite(3,RS,LOW);	//RS=0 FOR CMD
digitalWrite(3,RW,LOW);	//RW=0 FOR WRITE, 1 FOR READ
digitalWrite(3,EN,HIGH);
__delay_ms(5);
digitalWrite(3,EN,LOW);__delay_ms(5);
}

void LCD_data(unsigned char data)
{
PORTD=data;
digitalWrite(3,RS,HIGH); //RS=1 FOR DATA	
digitalWrite(3,RW,LOW);	 //RW=0 FOR WRITE, 1 FOR READ
digitalWrite(3,EN,HIGH);
__delay_ms(5);
digitalWrite(3,EN,LOW);__delay_ms(5);
}

void LCD_print(char *str)
{
int i=0;
while(str[i]!='\0'){
LCD_data(str[i]);
i++;
}
}

void LCD_clear()
{
LCD_cmd(0x01);
}

void LCD_setcursor(unsigned char row,unsigned char column)
{
if(row==0)
{
LCD_cmd(0x80+column);
}
if(row==1)
{
LCD_cmd(0xC0+column);
}
}

