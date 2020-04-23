#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD

#include "debug.h"
#include "buttons.h"
#include "nano_pins.h"

Buttons btns;
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

#define DEFAULT_FIRE_FREQ 120 // min

void DisplayLcd()
{
    lcd.setCursor(0, 0);
    lcd.print("Firing Frequency");

    lcd.setCursor(0, 1);
    lcd.print("min");
}

void setup() 
{
  // Setup serial port
#ifdef DEBUG
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  } 
#endif

  // CO2 VALVE
  pinMode(SOLENOID, OUTPUT);

  // BTNs
  // Already set by the constructor

  // LCDs
  lcd.init();
  lcd.backlight();

  // Display LCD's first values 
  DisplayLcd();
}

void loop() 
{
  digitalWrite(SOLENOID, HIGH);      //Switch Solenoid ON
  delay(1000);                          //Wait 1 Second
  digitalWrite(SOLENOID, LOW);       //Switch Solenoid OFF
  delay(1000);
}
