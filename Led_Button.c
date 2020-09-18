#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif
# define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
int main(){
    DDRD |=(1<<DDD2); // Red, Pin 2 Arduino
    DDRD |=(1<<DDD3); // Yellow Pin 3 Arduino
    DDRD |=(1<<DDD4); // Green Pin 4 Arduino
    while (1)
    {
        if (bit_is_clear(PIND,PD5)){ //Detect the button on pin 5 of arduino
            PORTD &= (0<<PD2);
            PORTD |=(1<<PD4);
            _delay_ms(5000);
            PORTD &=(0<<PD4);
            PORTD |=(1<<PD3);
            _delay_ms(1000);
            PORTD &=(0<<PD3);
            PORTD |=(1<<PD2);
            _delay_ms(5000);
            PORTD &=(0<<PD2);
        }
        
    }
    
}
