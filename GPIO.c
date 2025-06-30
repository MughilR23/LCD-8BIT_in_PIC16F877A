#include "GPIO.h"

//DIGITAL WRITE
void digitalWrite(unsigned char portnum,unsigned char pinnum,unsigned char Write){

if(Write==LOW){ //CLR  
if(portnum==_PORTA){
PORTA=PORTA&(~(1<<pinnum));
}
if(portnum==_PORTB){
PORTB=PORTB&(~(1<<pinnum));
}
if(portnum==_PORTC){
PORTC=PORTC&(~(1<<pinnum));
}
if(portnum==_PORTD){
PORTD=PORTD&(~(1<<pinnum));
}
if(portnum==_PORTE){
PORTE=PORTE&(~(1<<pinnum));
}
}

if(Write==HIGH){ //SET
if(portnum==_PORTA){
PORTA=PORTA|(1<<pinnum);
}
if(portnum==_PORTB){
PORTB=PORTB|(1<<pinnum);
}
if(portnum==_PORTC){
PORTC=PORTC|(1<<pinnum);
}
if(portnum==_PORTD){
PORTD=PORTD|(1<<pinnum);
}
if(portnum==_PORTE){
PORTE=PORTE|(1<<pinnum);
}
}
}

//PINMODE
void pinMode(unsigned char portnum,unsigned char pinnum,unsigned char direction){

if(direction==OUTPUT){ //CLR
if(portnum==_PORTA){
TRISA=TRISA&(~(1<<pinnum));
}
if(portnum==_PORTB){
TRISB=TRISB&(~(1<<pinnum));
}
if(portnum==_PORTC){
TRISC=TRISC&(~(1<<pinnum));
}
if(portnum==_PORTD){
TRISD=TRISD&(~(1<<pinnum));
}
if(portnum==_PORTE){
TRISE=TRISE&(~(1<<pinnum));
}
}

if(direction==INPUT){ //SET
if(portnum==_PORTA){
TRISA=TRISA|(1<<pinnum);
}
if(portnum==_PORTB){
TRISB=TRISB|(1<<pinnum);
}
if(portnum==_PORTC){
TRISC=TRISC|(1<<pinnum);
}
if(portnum==_PORTD){
TRISD=TRISD|(1<<pinnum);
}
if(portnum==_PORTE){
TRISE=TRISE|(1<<pinnum);
}
}
}
//DIGITAL READ

int digitalRead(unsigned char portnum,unsigned char pinnum){
if(portnum==_PORTA){
return(PORTA&(1<<pinnum));
}
if(portnum==_PORTB){
return(PORTB&(1<<pinnum));
}
if(portnum==_PORTC){
return(PORTC&(1<<pinnum));
}
if(portnum==_PORTD){
return(PORTD&(1<<pinnum));
}
if(portnum==_PORTE){
return(PORTE&(1<<pinnum));
}
}
