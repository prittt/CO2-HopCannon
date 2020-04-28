#ifndef CO2_HOPCANNON_GUN_H_
#define CO2_HOPCANNON_GUN_H_

#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD

byte gun[3][8] = {
    { B00111, B01111, B01111, B00111, B01101, B11011, B11110, B11100 },
    { B11111, B11111, B11111, B10010, B11100, B00000, B00000, B00000 },
    { B11111, B11111, B11111, B00000, B00000, B00000, B00000, B00000 }
};

byte bullet1[2][8] = {
    { B00000, B00000, B10111, B11111, B10111, B00000, B00000, B00000 },
    { B00000, B00000, B10000, B11000, B10000, B00000, B00000, B00000 } 
};

byte bullet2[] = { B10110, B11111, B10110, B00000, B00000, B00000, B00000, B00000 };
byte bullet3[] = { B00000, B00000, B11100, B11110, B11100, B00000, B00000, B00000 };
byte bullet4[] = { B00000, B00000, B10110, B11111, B10110, B00000, B00000, B00000 };


void DrawGun(LiquidCrystal_I2C *lcd, int x = 0, int y = 0)
{
    uint8_t starting_id = 0; 
    for (uint8_t i = 0; i < 3; ++i) {
        lcd->createChar(starting_id + i, gun[i]);
        lcd->setCursor(x + i, y);
        lcd->write(starting_id + i);
    }
}

void DrawBullet1(LiquidCrystal_I2C *lcd, int x = 0, int y = 0)
{
    uint8_t starting_id = 3;
    for (uint8_t i = 0; i < 2; ++i) {
        lcd->createChar(starting_id + i, bullet1[i]);
        lcd->setCursor(x + i, y);
        lcd->write(starting_id + i);
    }
}

void DrawBullet2(LiquidCrystal_I2C *lcd, int x = 0, int y = 0)
{
    uint8_t starting_id = 5;
    lcd->createChar(starting_id, bullet2);
    lcd->setCursor(x, y);
    lcd->write(starting_id);
}

void DrawBullet3(LiquidCrystal_I2C *lcd, int x = 0, int y = 0)
{
    uint8_t starting_id = 6;
    lcd->createChar(starting_id, bullet3);
    lcd->setCursor(x, y);
    lcd->write(starting_id);
}

void DrawBullet4(LiquidCrystal_I2C *lcd, int x = 0, int y = 0)
{
    uint8_t starting_id = 7;
    lcd->createChar(starting_id, bullet3);
    lcd->setCursor(x, y);
    lcd->write(starting_id);
}

#endif // CO2_HOPCANNON_GUN_H_
