#ifndef CO2_HOPCANNON_BUTTONS_H_
#define CO2_HOPCANNON_BUTTONS_H_

#include "nano_pins.h"
#include "settings.h"

class Buttons
{
public:

    Buttons()
    {
        pinMode(BTN_PLUS, INPUT);
        pinMode(BTN_MINUS, INPUT);
    }

    bool IsPressed(int button_pin, unsigned long press_duration = BUTTONS_PRESS_TIME_SHORT)
    {
        if (digitalRead(button_pin) == HIGH) {
            unsigned long start_press = millis();
            while (digitalRead(button_pin) == HIGH && (millis() - start_press < press_duration)) {}

            if (digitalRead(button_pin) == HIGH && (millis() - start_press >= press_duration)) {
                return true;
            }
        }
        return false;
    }

    bool IsPressedInstantly(int button_pin)
    {
        if (digitalRead(button_pin) == HIGH) {
            return true;
        }
        return false;
    }

};

#endif //CO2_HOPCANNON_BUTTONS_H_
