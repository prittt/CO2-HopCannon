#ifndef CO2_HOPCANNON_SETTINGS_H_
#define CO2_HOPCANNON_SETTINGS_H_

#define DEBUG // comment/uncomment this line to skip/view serial console debug messages

#define DEFAULT_SHOT_FREQ  10 // minutes
#define DEFAULT_SHOT_LENG   5 // seconds

#define POWER_SAVE_TIMER    60 // seconds  
#define SETTING_MODE_TIMER  10 // seconds  

#define BUTTONS_PRESS_TIME_INSTANT  400 // milliseconds
#define BUTTONS_PRESS_TIME_SHORT   1000 // milliseconds
#define BUTTONS_PRESS_TIME_LONG    3000 // milliseconds

#define FREQ_UPDATE_STEP  10 // minutes
#define LENG_UPDATE_STEP   1 // seconds

#define FORCE_SETTINGS 0 // 0 -> false, 1 -> true. It applyies only 
                         // for DEFAULT_SHOT_FREQ and DEFAULT_SHOT_LEN
                         // if true the previously set values (stored 
                         // in the EEPROM memory) will be ignored and 
                         // the configurations values specified in this
                         // file will be used. 
                            

#endif // CO2_HOPCANNON_SETTINGS_H_
