/*
 * LED_ONOFF.cpp
 *
 * Created: 2018-05-02 오후 3:02:28
 * Author : stc_153
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	
	DDRD = 0xff;
	PORTD = 0xff;

	int i;
	
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(300);
    }
}

