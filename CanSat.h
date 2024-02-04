#ifndef CanSat_h
#define CanSat_h

#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <Adafruit_BMP280.h>

class CanSat {
public:
    Adafruit_BMP280 bmp280;
    CanSat(int cs_pin);
    void saveData(const char* file_name, char* text_to_save);
    void connectBMP(const unsigned char* adress);
    char* readTemperature();
    char* readPressure();
    char* readAltitude();
private:
    int _cs_pin;
};

#endif
