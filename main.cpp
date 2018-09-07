/**
 * A minimal example how to implement a fast PWM on ATTiny13A
 *
 * @author Igor Martens
 * @since 07.09.2018
 */

#define F_CPU 9600000

#include <avr/io.h>
#include <avr/interrupt.h>

void setup() {
    DDRB |= (1 << DDB1); // Setup the Output for PWM

    // Set Timer 0 prescaler to clock/1.
    // At 9.6 MHz this is 9.6 MHz.
    TCCR0B |= (1 << CS00);

    // Set to 'Fast PWM' mode
    TCCR0A |= (1 << WGM01) | (1 << WGM00);

    // Clear OC0B output on compare match, upwards counting.
    TCCR0A |= (1 << COM0B1);

    // If the value '128' is reached, the PWM signal will set to LOW
    OCR0B=128; // 50% duty cycle
}

int main(void) {
    setup();

    while(1) {
    }

    return 0;
}
