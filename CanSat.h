#ifndef CanSat_h
#define CanSat_h

#include <Wire.h>
#include <SPI.h>
#include <SD.h>

class CanSat {
public:
    CanSat(int cs_pin);
    void saveData(const char* file_name, const char* text_to_save);
    
private:
    int _cs_pin;
};

#endif
