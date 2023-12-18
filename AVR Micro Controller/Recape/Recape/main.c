/*
 * Recape.c
 *
 * Created: 01/12/2023 12:27:52
 * Author : EMMA
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRF = 0xFF;
	DDRG = 0b00;
    while (1) 
    {
		if((PING & 0b00000010) != 0) {
			PORTF |= (1 << 0);
		}else {
			PORTF &= ~(1<<0);
		}
		
    }
}

