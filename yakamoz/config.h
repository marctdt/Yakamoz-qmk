#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U


#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2
#define OLED_BRIGHTNESS 128


// #define AUDIO_PIN GP9
//#define AUDIO_PWM_DRIVER PWMD4
//#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
//#define AUDIO_INIT_DELAY
// #define AUDIO_CLICKY


//#ifdef AUDIO_ENABLE
//  #define STARTUP_SONG SONG(STAR_WARS_IMPERIAL_MARCH)
//#endif
