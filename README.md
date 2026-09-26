# home-made-3-bit-Flash-ADC
A discrete 3-bit Flash ADC designed using seven analog
comparators and a resistor ladder. An Arduino Uno performs the logic for 8:3 Priorety Encoder
and drives an SSD1306 OLED display.

## Features

- 3-bit resolution
- 8 quantization levels
- 7 analog comparators
- Resistor reference ladder
- Digital priority encoding
- SSD1306 I2C OLED.

- The resistors network are 8 dummy identical 220 ohm

- # The Clock Module
- 555-timer IC
- 1K ohm resistor , 100K ohm resistor , 2.2 micro farad capacitor
- Pin 13 in the Arduino is acting as the clock


- # the comparator IC's
- LM393 with 2 comparators in each ic

# Wires decoding
The green wires are the outputs of the comparators going to Arduino Encoder inputs
the white wires are the inputs for the negative voltage that is being compared against the input analog voltage
the red wires are input analog voltage connected to the positive input for the comparators
the highest priority bit is pin number 9 in the aurduino while the least priority is naturally connected to ground


# seven thresholds:
7V highest priority
6V
5V
4V
3V
2V
1V

# The fundamental ADC equations
 For an ideal ADC:
# N=number of bits

# Number of quantization levels:
L=2^N for our implementation = 2^3 = 8 levels

# The ideal step size is:
LSB = Vref / 2^N
for our implementation LSB = 8V/2^3 = 1V

# Quantization error:
The ideal quantization error is approximately = +- 1/2*LSB.
