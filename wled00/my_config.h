#pragma once

/*
 * Welcome!
 * You can use the file "my_config.h" to make changes to the way WLED is compiled!
 * It is possible to enable and disable certain features as well as set defaults for some runtime changeable settings.
 *
 * How to use:
 * PlatformIO: Just compile the unmodified code once! The file "my_config.h" will be generated automatically and now you can make your changes.
 *
 * ArduinoIDE: Make a copy of this file and name it "my_config.h". Go to wled.h and uncomment "#define WLED_USE_MY_CONFIG" in the top of the file.
 *
 * DO NOT make changes to the "my_config_sample.h" file directly! Your changes will not be applied.
 */

// uncomment to force the compiler to show a warning to confirm that this file is included
#warning **** my_config.h: Settings from this file are honored ****

//#define MAX_LEDS 1500       // Maximum total LEDs. More than 1500 might create a low memory situation on ESP8266.
#define USERMOD_AUDIOREACTIVE
#define WLED_AP_SSID_UNIQUE
#define WLED_AP_SSID "SymGlow"
#define WLED_AP_PASS "TooBright4U"
#define WLED_RELEASE_NAME "SymGlow"
#define SERVERNAME "SymGlow"
