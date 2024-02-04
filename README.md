# CanSat
 Arduino library for **CanSat**. \
 *by SpaceCoffee*

## Downloading
Download the zip with code and unpack it to libraries folder.\
On Windows: `C:/Users/{username}/Documents/Arduino/libraries`\
On MacOS: `/Users/{username}/Documents/Arduino/libraries`\
On Linux: `/home/{username}/Arduino/libraries`

## Configuration
You have to install also these libraries: \
`Wire` \
`SPI` \
`SD` \
`Adafruit_BMP280`\
You can download them from libraries manager in Arduino IDE.
```cpp
#include <CanSat.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <Adafruit_BMP280.h>

#define sd_reader_cs_pin 4

CanSat myCanSat(sd_reader_cs_pin);
```

## Saving data on SD card
```cpp
myCanSat.saveData(char* file_name, char* text_to_save);
```

## Reading temperature, pressure and altitude from BMP280:
In setup:
```cpp
myCanSat.connectBMP(i2c_adress); //default adress = 0x76
```
Reading data:
```cpp
char* temp = myCanSat.readTemperature();
char* pres = myCanSat.readPressure();
char* alt = myCanSat.readAltitude();
```

## Changelog
### v1.1
<ul>
<li>Added BMP280 support
<li>Fixed known problems with saving data on SD card
</ul>

### v1.0
<ul>
<li>Added SD card support</li>
<li>Created Readme file</li>
</ul>