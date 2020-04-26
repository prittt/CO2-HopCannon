#ifndef CO2_HOPCANNON_BUTTONS_H_
#define CO2_HOPCANNON_BUTTONS_H_

#include "nano_pins.h"
#include "settings.h"

class Buttons
{
public:

    int ids_[2] = { BTN_P, BTN_M };
    uint8_t size_ = sizeof(ids_)/sizeof(int);

    Buttons()
    {
        for (uint8_t i = 0; i < size_; ++i) {
            pinMode(ids_[i], INPUT);
        }
    }

    // Returns true if at least one of the buttons in the vector is pressed for the press_duration time
    bool OneOfIsPressed(int *button_pins, int n, unsigned long press_duration = BUTTONS_PRESS_TIME_INSTANT) {
        for (uint8_t i = 0; i < n; ++i) {
            if (IsPressed(button_pins[i], press_duration)) {
                return true;
            }
        }
        return false;
    }

    // Returns true if at least one of the available buttons is pressed for the press_duration time
    bool OneOfIsPressed(unsigned long press_duration = BUTTONS_PRESS_TIME_INSTANT)
    {
        return OneOfIsPressed(ids_, size_);
    }

    // Returns true if all the buttons in the vector have HIGH state value
    bool AreAllHigh(int *button_pins, int n)
    {
        for (int i = 0; i < n; ++i) {
            if (digitalRead(button_pins[i]) != HIGH) {
                return false;
            }
        }
        return true;
    }

    // Returns true if all the buttons in the vector have been pressed for press_duration time
    bool ArePressed(int *button_pins, int n, unsigned long press_duration = BUTTONS_PRESS_TIME_INSTANT)
    {
        if (AreAllHigh(button_pins, n)) {
            unsigned long start_press = millis();
            while (AreAllHigh(button_pins, n) && (millis() - start_press < press_duration)) {}

            if (AreAllHigh(button_pins, n) && (millis() - start_press >= press_duration)) {
                return true;
            }
        }
        return false;
    }

    // Returns true if the button has been pressed for press_duration time
    bool IsPressed(int button_pin, unsigned long press_duration = BUTTONS_PRESS_TIME_INSTANT)
    {
        return ArePressed(&button_pin, 1, press_duration);
    }

};

#endif //CO2_HOPCANNON_BUTTONS_H_
