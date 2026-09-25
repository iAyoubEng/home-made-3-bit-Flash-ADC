//Encoder set up
#define i_LSB 2
#define i_MSB 9
#define clk 13

//Oled Screen set up
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


void setup()
{
    Serial.begin(9600);

    for (int pin = i_LSB; pin <= i_MSB; pin++)
    {
        pinMode(pin, INPUT);
    }

pinMode(clk,INPUT);

    if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS))
    {
        Serial.println("OLED not found!");
        while (1);
    }

  

    display.setTextSize(3);
    display.setTextColor(SSD1306_WHITE);
    

}

void loop()
{
  if(digitalRead(clk)== HIGH){
    if (digitalRead(i_MSB) == HIGH)
    {
        // I7 = 1 → 111

          display.clearDisplay();
    display.setCursor(35, 25);
    display.println("7V");
    display.display();
    delay(1000);
      display.clearDisplay();
          display.display();
    }
    else if (digitalRead(8) == HIGH)
    {
        // I6 = 1 → 110
         
    display.setCursor(35, 25);
    display.println("6V");
    display.display();
    delay(1000);
      display.clearDisplay();
         
    }
    else if (digitalRead(7) == HIGH)
    {
        // I5 = 1 → 101
 
        
    display.setCursor(35, 25);
    display.println("5V");
    display.display();
    delay(1000);
      display.clearDisplay();
    }
    else if (digitalRead(6) == HIGH)
    {
        // I4 = 1 → 100
        
 display.setCursor(35, 25);
    display.println("4V");
    display.display();
    delay(1000);
      display.clearDisplay();
    }
    else if (digitalRead(5) == HIGH)
    {
        // I3 = 1 → 011
 display.setCursor(35, 25);
    display.println("3V");
    display.display();
    delay(1000);
      display.clearDisplay();
    }
    else if (digitalRead(4) == HIGH)
    {
        // I2 = 1 → 010
        display.setCursor(35, 25);
    display.println("2V");
    display.display();
    delay(1000);
      display.clearDisplay();
    }
    else if (digitalRead(3) == HIGH)
    {
        // I1 = 1 → 001
 display.setCursor(35, 25);
    display.println("1V");
    display.display();
    delay(1000);
      display.clearDisplay();
    }
    else if (digitalRead(2) == HIGH || digitalRead(2) == LOW)
    {
        // I0 = 1 → 000
  
 display.setCursor(35, 25);
    display.println("0V");
    display.display();
    delay(1000);
      display.clearDisplay();
    }
  }
}
