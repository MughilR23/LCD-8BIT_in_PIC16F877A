#include"GPIO.h"
#include"LCD8.h"
#define _XTAL_FREQ 8000000
void main()
{

LCD_init();
LCD_clear();
while(1){
LCD_setcursor(0,5);  //Oth ROW 5th COLOUMN
LCD_print("Hello");
LCD_setcursor(1,5);  //1st ROW 5th COLOUMN 
LCD_print("There!");
__delay_ms(20000);
LCD_clear();
}
}
