#include "SSD1306.h"
#include "defines.h"

#define SDA_PIN 21
#define SCL_PIN 22
#define ADDR_I2C_DISPLAY 0x3C

SSD1306 display(ADDR_I2C_DISPLAY, SDA_PIN, SCL_PIN); // ADDRESS, SDA, SCL

void setup()
{
    Serial.begin(115200);
    Serial.println("Start!");

    display.init();
    display.clear();

    display.flipScreenVertically(); // inveter
}

void loop()
{
    display.setFont(ArialMT_Plain_16);
    display.drawString(10, 0, "IDRF V1.0");

    display.setFont(ArialMT_Plain_16);
    display.drawString(0, 25, "ESP32 OLED");

    display.setFont(ArialMT_Plain_16);
    display.drawString(10, 45, "BIANCA");

    display.display();
    delay(10);
}
