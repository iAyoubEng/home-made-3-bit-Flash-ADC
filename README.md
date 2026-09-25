# home-made-3-bit-Flash-ADC
A discrete 3-bit Flash ADC designed using seven analog
comparators and a resistor ladder. An Arduino Uno performs
the thermometer-code-to-binary encoding and drives an SSD1306 OLED display.

## Features

- 3-bit resolution
- 8 quantization levels
- 7 analog comparators
- Resistor reference ladder
- Thermometer-code output
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
