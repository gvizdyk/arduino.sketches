/*
==================================================================

 The circuit:

 * LCD GND -> Arduino GND
 * LCD VCC -> Arduino 5V
 * LCD SDA -> Arduino SDA 20
 * LCD SCL -> Arduino SCL 21

==================================================================
*/


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x26,16,2);  // set the LCD address to 0x20 for a 16 chars and 2 line display


void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.print("gvizdyk.org.ua!");
}

void loop()
{
  lcd.setCursor(0, 1);
  lcd.print(millis()/120);
}

