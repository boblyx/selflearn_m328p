#include <avr/io.h>
#include <util/delay.h>

/*
 * Adapted from Johannes 4GNU_Linux's youtube video
 * on using avrdude with Arduino Bootloader
 */

int main() {
    int state = 0;
    /*DDRB = Data Direction Register for Port-B*/
    DDRB = (1<<5);

    while(1){
        /* Use XOR operator ^= to switch LED on if it's off
         and off if it's on*/
        PORTB ^= (1<<5);
        /* Wait for 500 ms*/
        _delay_ms(1000);
    }
    return 0;
}

