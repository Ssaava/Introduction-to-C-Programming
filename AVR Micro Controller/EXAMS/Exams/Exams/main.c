/*
 * Exams.c
 *
 * Created: 12/10/2023 10:31:43
 * Author : EMMA
 */ 

#include <avr/io.h>


int main(void)
{
	DDRF = 0xff;
	DDRH = 0b00000111;
	DDRJ = 0xFF;
	DDRG = 0xFF;
    while (1) 
    {
		PORTG |= (1<<PG0);
		PORTJ = 0b00011001;
		PORTH = 0b11111011;
		if((PINH & 0b00001000) == 0) {
			PORTF = 0b00000110;
		}
		if((PINH & 0b00010000) == 0) {
			PORTF = 0b00011001;
		}
		
		
		
    }
}

