# Enable Oled
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_DRIVER_ENABLE= yes
OLED_TRANSPORT = i2c
OPT_DEFS += -DHAL_USE_I2C=TRUE

# Enable keyboard RGB underglow
RGBLIGHT_ENABLE = yes 

MOUSEKEY_ENABLE = yes

LTO_ENABLE = yes

EXTRAKEY_ENABLE = yes




