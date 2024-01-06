#include "CanSat.h"

CanSat::CanSat(int cs_pin) {
    SD.begin(cs_pin);
}


void CanSat::saveData(const char* file_name, const char* text_to_save) {
    File dataFile = SD.open(file_name, FILE_WRITE);
    if (dataFile) {
        dataFile.println(text_to_save);
        dataFile.close();
    } else {
        Serial.println("Error opening file!");
    }
}
