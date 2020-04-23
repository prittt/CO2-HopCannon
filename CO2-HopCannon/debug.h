#ifndef CO2_HOPCANNON_DEBUG_H_
#define CO2_HOPCANNON_DEBUG_H_

#define DEBUG // Comment to skip debug messages on the serial console

#include "Arduino.h"

// https://www.baldengineer.com/arduino-f-macro.html for the F() macro and explanation
void DebugSerialPrint(const __FlashStringHelper *message)
{
#ifdef DEBUG
    const char *p = (const char PROGMEM *)message;
    size_t n = 0;
    while (1) {
        char c = pgm_read_byte(p++);
        if (c == 0) break;
        Serial.print(c);
    }
#endif
}

void DebugSerialPrintln(const __FlashStringHelper *message)
{
#ifdef DEBUG
    DebugSerialPrint(message);
    Serial.println();
#endif 
}

void DebugSerialPrint(const String message)
{
#ifdef DEBUG
    Serial.print(message);
#endif
}

void DebugSerialPrintln(const String message)
{
#ifdef DEBUG
    Serial.println(message);
#endif 
}


#endif //CO2_HOPCANNON_DEBUG_H_