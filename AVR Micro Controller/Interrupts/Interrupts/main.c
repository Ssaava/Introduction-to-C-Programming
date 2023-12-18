/*
 * Interrupts.c
 *
 * Created: 28/09/2023 19:06:28
 * Author : EMMA
 */ 

#include <avr/io.h>


int main(void)
{
	DDRD = 0b11111111;
    /* Replace with your application code */
    while (1) 
    {
		PORTD |= (1<<1);
    }
}

