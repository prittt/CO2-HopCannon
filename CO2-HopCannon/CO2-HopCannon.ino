#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD

#include <SPI.h> // Required for the SD
#include <SD.h>  // Required for the SD

#include "debug.h"
#include "nano_pins.h"
#include "solenoid.h"
#include "utils.h"

// LCD screen
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

// Buttons
Buttons btns;

// Solenoid valve (it takes the address of the LCD screen to display messages)
Solenoid valve = Solenoid(&lcd, &btns);

void setup()
{
    // Serial port setup
#ifdef DEBUG
    Serial.begin(115200);
    while (!Serial) {
        ; // wait for serial port to connect. Needed for native USB port only
    }
#endif

    // LCD setup
    lcd.init();
    lcd.backlight();
    valve.DisplayLcd();

    DebugSerialPrintln(F("Setup completed!"));
}

void loop()
{
    valve.Update();
    delay(1000);
}
