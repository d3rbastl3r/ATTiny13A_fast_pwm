# ATTiny13A_fast_pwm
A minimal example how to implement a fast PWM on ATTiny13A

On 9.6 MHz MCU this should produce 37.5 kHz PWM signal with a 50% duty cycle. The signal output is configured on port B1. The ATTiny13A supports also hardware PWM on port B0, but for this the MCU must be configured a little bit different.
