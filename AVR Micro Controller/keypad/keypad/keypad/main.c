/*
 * keypad.c
 *
 * Created: 11/09/2023 23:50:27
 * Author : EMMA
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	while(1){
		DDRF = 0b11111111; // FOR THE LIGHTS
		DDRH = 0b11111111; // FOR THE COUNTER 7 SEGMENT DISPLAY
		DDRK = 0b00000111; // FOR THE KEYPAD
		//char bits[10] = {0x3f,0x30,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f };
		char bits[8] = {0x30,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f};
		char lights[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
		/* Replace with your application code */
		DDRK = 0b00000001;
		if((PINK & 0b00000100) == 0){
			runLoop(2,bits,lights);
		}
		/*
		DDRK = 0b00000100;
		if((PINK & 0b00001000) != 0){
			runLoop(0,bits,lights);
		}
		*/
			
    }
	
}
void runLoop(int value, char bits[8], char lights[8]) {
	int count = value;
		while (count >= 0) 
		{
			PORTH = bits[count];
			PORTF = lights[count];
			_delay_ms(1000);
			count --;
			if(count < 0) {
				count = 7;
			}
		}
	
}

