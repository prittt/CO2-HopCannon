#ifndef CO2_HOPCANNON_SOLENOID_H_
#define CO2_HOPCANNON_SOLENOID_H_

#include "nano_pins.h"
#include "settings.h"

class Solenoid
{
    int shot_freq_minutes_ = DEFAULT_SHOT_FREQ; // minutes
    unsigned long shot_len_ = DEFAULT_SHOT_LEN; // milliseconds
  
    unsigned long shot_freq_; // milliseconds
    unsigned long timer;

public:
    Solenoid()
    {
        pinMode(SOLENOID, OUTPUT);
        digitalWrite(SOLENOID, LOW);
        shot_freq_ = shot_freq_minutes_ * 60 * 1000
        timer = millis()
    }
    
    void Shot() {
        if (millis() - timer >= shot_freq_) {
            // We have to fire a shot
            unsigned long start_shot = millis();
            while (millis() - start_shot < shot_len_) {
                digitalWrite(SOLENOID, HIGH);
            }

            // And reset the timer
            digitalWrite(SOLENOID, LOW);
            timer = millis();
        }
    }

    void UpdateShotLen(unsigned long shot_len)
    {
        shot_len_ = shot_len;
    }

    void UpdateShotFreq(int shot_freq_minutes)
    {
        shot_freq_minutes_ = shot_freq_minutes;
        shot_freq_ = shot_freq_minutes_ * 60 * 1000;
    }

};

#endif // CO2_HOPCANNON_SOLENOID_H_
