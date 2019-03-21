#include "GPIO.h"


int main(void)
{
	pinMode(GPIO_PORTD,LED_GREEN,1);
	pinMode(GPIO_PORTD,LED_ORANGE,HIGH);
	pinMode(GPIO_PORTD,LED_RED,1);
	pinMode(GPIO_PORTD,LED_BLUE,1);
	while(1){
	for (int i=0;i<10;i++){
	digitalWrite(GPIO_PORTD,LED_GREEN,HIGH);
	Delay(100);
	digitalWrite(GPIO_PORTD,LED_GREEN,LOW);
	Delay(100);
	}
	for (int i=0;i<10;i++){
	digitalWrite(GPIO_PORTD,LED_ORANGE,HIGH);
	Delay(100);
	digitalWrite(GPIO_PORTD,LED_ORANGE,LOW);
	Delay(100);
	}
	for (int i=0;i<10;i++){
	digitalWrite(GPIO_PORTD,LED_RED,HIGH);
	Delay(100);
	digitalWrite(GPIO_PORTD,LED_RED,LOW);
	Delay(100);
	}
	while(1){
		digitalWrite(GPIO_PORTD,LED_BLUE,HIGH);
		Delay(100);
		digitalWrite(GPIO_PORTD,LED_BLUE,LOW);
		Delay(100);
	}
	}
}
