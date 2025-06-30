#include<htc.h>
#define OUTPUT 0
#define INPUT 1
#define LOW 0
#define HIGH 1
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define _PORTA 1
#define _PORTB 2
#define _PORTC 3
#define _PORTD 4
#define _PORTE 5

void digitalWrite(unsigned char portnum,unsigned char pinnum,unsigned char Write);
void pinMode(unsigned char portnum,unsigned char pinnum,unsigned char direction); 
int digitalRead(unsigned char portnum,unsigned char pinnum);