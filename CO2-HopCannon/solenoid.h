#ifndef CO2_HOPCANNON_SOLENOID_H_
#define CO2_HOPCANNON_SOLENOID_H_

#include "buttons.h"
#include "debug.h"
#include "gun.h"
#include "nano_pins.h"
#include "settings.h"
#include "utils.h"

#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD

// This class serves both as solenoid handler and data/menu viewer
// a better design should split the two things.
class Solenoid
{
    unsigned long shot_freq_minutes_ = DEFAULT_SHOT_FREQ; // minutes
    unsigned long shot_leng_seconds_ = DEFAULT_SHOT_LENG; // seconds

    unsigned long shot_leng_; // milliseconds
    unsigned long shot_freq_; // milliseconds
    unsigned long timer_;

#define FLS 6 // First line free spaces
    String shot_freq_minutes_str_;
    String shot_freq_minutes_msg_;

#define SLS 6 // Second line free spaces
    String shot_leng_seconds_str_;
    String shot_leng_seconds_msg_;

    LiquidCrystal_I2C *lcd_;

    // This value is used to move the bullet on the LCD screen during the shooting process
    uint8_t shooting_index_;

    // This is the time of the last activity (last button pressed)
    unsigned long last_activity_;

    // This is the time of the last activity in setting mode
    unsigned long last_setting_mode_activity_;

    enum class Mode
    {
        SETTINGS_FREQ,
        SETTINGS_LENG,
        COUNTDOWN,
        SHOOTING,
    };

    Mode view_mode_ = Mode::COUNTDOWN;

    Buttons *btns_;
public:
    Solenoid(LiquidCrystal_I2C *lcd, Buttons *btns)
    {
        // Setup
        pinMode(SOLENOID, OUTPUT);
        digitalWrite(SOLENOID, LOW);

        // Init
        shot_freq_minutes_str_ = String(shot_freq_minutes_);
        shot_freq_minutes_msg_ = "Freq.: " + RepeatString(" ", FLS - shot_freq_minutes_str_.length()) + shot_freq_minutes_str_ + " m";
        DebugSerialPrintln(shot_freq_minutes_msg_);

        shot_leng_seconds_str_ = String(shot_leng_seconds_);
        shot_leng_seconds_msg_ = "Leng.: " + RepeatString(" ", SLS - shot_leng_seconds_str_.length()) + shot_leng_seconds_str_ + " s";
        DebugSerialPrintln(shot_leng_seconds_msg_);

        shot_freq_ = (unsigned long)shot_freq_minutes_ * 60 * 1000;
        shot_leng_ = (unsigned long)shot_leng_seconds_ * 1000;
        timer_ = millis();

        lcd_ = lcd;
        btns_ = btns;

        last_activity_ = millis();
        last_setting_mode_activity_ = millis();
    }

    void Shot()
    {
        DebugSerialPrintln(F("  -> START: Shooting"));
        if (millis() - timer_ >= shot_freq_) {
            // We have to fire a shot

            // Move LCD in shooting mode
            Mode view_mode_tmp = view_mode_;
            view_mode_ = Mode::SHOOTING;
            shooting_index_ = 0;
            DisplayLcd();
            unsigned long bullet_last_print = millis();

            // Shot
            unsigned long start_shot = millis();
            while (millis() - start_shot < shot_leng_) {
                digitalWrite(SOLENOID, HIGH);

                // Update LCD
                if (millis() - bullet_last_print > 500) {
                    bullet_last_print = millis();
                    shooting_index_ += 2;
                    DisplayLcd();
                };
            }

            // Bring LCD back in the previous mode
            view_mode_ = view_mode_tmp;
            DisplayLcd();

            // Close the valve
            digitalWrite(SOLENOID, LOW);

            // And reset the timer
            timer_ = millis();
        }
        DebugSerialPrintln(F("  -> END: Shooting"));
    }

    void UpdateShotLeng(int update_value)
    {
        shot_leng_seconds_ += update_value;
        shot_leng_ = shot_leng_seconds_ * 1000;

        // We have the same code in the constructor. A code refactor is required.
        shot_leng_seconds_str_ = String(shot_leng_seconds_);
        shot_leng_seconds_msg_ = "Leng.: " + RepeatString(" ", SLS - shot_leng_seconds_str_.length()) + shot_leng_seconds_str_ + " s";
        DebugSerialPrintln(shot_leng_seconds_msg_);
    }

    void UpdateShotFreq(int update_value)
    {
        shot_freq_minutes_ += update_value;
        shot_freq_ = shot_freq_minutes_ * 60 * 1000;

        // We have the same code in the constructor. A code refactor is required.
        shot_freq_minutes_str_ = String(shot_freq_minutes_);
        shot_freq_minutes_msg_ = "Freq.: " + RepeatString(" ", FLS - shot_freq_minutes_str_.length()) + shot_freq_minutes_str_ + " m";
        DebugSerialPrintln(shot_freq_minutes_msg_);
    }

    String TimeToShot()
    {
        unsigned long millis_to_shot = shot_freq_ > (millis() - timer_) ? shot_freq_ - (millis() - timer_) : 0;

        unsigned long hours = millis_to_shot / 3600000;
        millis_to_shot -= (hours * 3600000);

        unsigned long minutes = millis_to_shot / 60000;
        millis_to_shot -= (minutes * 60000);

        unsigned long seconds = millis_to_shot / 1000;

        String hours_str = String(hours);
        hours_str = RepeatString(" ", 2 - hours_str.length()) + hours_str + "h";

        String minutes_str = String(minutes);
        minutes_str = RepeatString("0", 2 - minutes_str.length()) + minutes_str + "m";

        String seconds_str = String(seconds);
        seconds_str = RepeatString("0", 2 - seconds_str.length()) + seconds_str + "s";

        return "  " + hours_str + ":" + minutes_str + ":" + seconds_str + "   ";
    }

    void DisplayLcd()
    {
        DebugSerialPrintln(F("  -> START: Updating Screen"));
        switch (view_mode_) {
        case Mode::SETTINGS_FREQ:
            lcd_->setCursor(0, 0);
            lcd_->write(126);
            lcd_->setCursor(1, 0);
            lcd_->print(shot_freq_minutes_msg_);

            lcd_->setCursor(0, 1);
            lcd_->print(" " + shot_leng_seconds_msg_);
            break;
        case Mode::SETTINGS_LENG:
            lcd_->setCursor(0, 0);
            lcd_->print(" " + shot_freq_minutes_msg_);

            lcd_->setCursor(0, 1);
            lcd_->write(126);
            lcd_->setCursor(1, 1);
            lcd_->print(shot_leng_seconds_msg_);
            break;
        case Mode::COUNTDOWN:
            lcd_->setCursor(0, 0);
            lcd_->print(" SHOT COUNTDOWN ");

            lcd_->setCursor(0, 1);
            lcd_->print(TimeToShot());
            break;
        case Mode::SHOOTING:
            // When shooting we want to see the backlight that will turn automatically off
            // later (POWER_SAVE_TIME time after the end of the shot)
            lcd_->backlight();
            last_activity_ = millis();

            lcd_->setCursor(0, 0);
            lcd_->print("    SHOOTING    ");
            DrawGun(lcd_, 0, 1);
            lcd_->setCursor(3, 1);
            lcd_->print("            ");
            DrawBullet2(lcd_, 4 + (shooting_index_ % 12), 1);
            break;
        }
        DebugSerialPrintln(F("  -> END: Updating Screen"));
    }

    void GetInput()
    {
        DebugSerialPrintln(F("  -> START: Get Input"));

        int pm_ids[] = { BTN_P, BTN_M };
        int pm_ids_size = sizeof(pm_ids) / sizeof(int);

        if (btns_->OneOfIsPressed()) {
            DebugSerialPrintln(F("     * LIGHT ON"));
            lcd_->backlight();
            last_activity_ = millis();
        }
        else if (millis() - last_activity_ >= (POWER_SAVE_TIMER * 1000)) {
            DebugSerialPrintln(F("     * LIGHT OFF"));
            lcd_->noBacklight();
        }

        if (btns_->ArePressed(pm_ids, pm_ids_size, BUTTONS_PRESS_TIME_SHORT)) {
            DebugSerialPrintln(F("     * SETTING MODE"));
            // Settings mode
            if (view_mode_ == Mode::SETTINGS_FREQ) {
                view_mode_ = Mode::SETTINGS_LENG;
            }
            else {
                view_mode_ = Mode::SETTINGS_FREQ;
            }
            last_setting_mode_activity_ = millis();
            last_activity_ = millis();
            DisplayLcd();
        }
        else if (millis() - last_setting_mode_activity_ >= (SETTING_MODE_TIMER * 1000)) {
            DebugSerialPrintln(F("     * COUNTDOWN MODE"));
            view_mode_ = Mode::COUNTDOWN;
            DisplayLcd();
        }

        unsigned long last_press_add_sub = millis();
        if ((btns_->IsPressed(BTN_P) || btns_->IsPressed(BTN_M)) &&
            (view_mode_ == Mode::SETTINGS_LENG || view_mode_ == Mode::SETTINGS_FREQ)) {
            DebugSerialPrintln(F("     * UPDATING VALUES"));

            while (millis() - last_press_add_sub < 3000) {
                DisplayLcd();

                if (btns_->IsPressed(BTN_P, BUTTONS_PRESS_TIME_INSTANT)) {
                    switch (view_mode_) {
                    case Mode::SETTINGS_FREQ:
                        UpdateShotFreq(FREQ_UPDATE_STEP);
                        break;
                    case Mode::SETTINGS_LENG:
                        UpdateShotLeng(LENG_UPDATE_STEP);
                        break;
                    default:
                        break;
                    }
                    last_setting_mode_activity_ = millis();
                    last_activity_ = millis();
                    last_press_add_sub = millis();
                    delay(350);
                }

                if (btns_->IsPressed(BTN_M, BUTTONS_PRESS_TIME_INSTANT)) {
                    switch (view_mode_) {
                    case Mode::SETTINGS_FREQ:
                        UpdateShotFreq(-FREQ_UPDATE_STEP);
                        break;
                    case Mode::SETTINGS_LENG:
                        UpdateShotLeng(-LENG_UPDATE_STEP);
                        break;
                    default:
                        break;
                    }
                    last_setting_mode_activity_ = millis();
                    last_activity_ = millis();
                    last_press_add_sub = millis();
                    delay(350);
                }
            }
        }

        DebugSerialPrintln(F("  -> END: Get Input"));
    }

    void Update()
    {
        DebugSerialPrintln(F("-> START: Update Cycle"));
        DisplayLcd();
        Shot();
        GetInput();
        DebugSerialPrintln(F("<- END: Update Cycle"));
    }

};

#endif // CO2_HOPCANNON_SOLENOID_H_