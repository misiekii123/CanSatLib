#include "CanSat.h"

CanSat::CanSat(int cs_pin) {
    SD.begin(cs_pin);
}


void CanSat::saveData(const char* file_name, char* text_to_save) {
    File dataFile = SD.open(file_name, FILE_WRITE);
    if (dataFile) {
        dataFile.println(text_to_save);
        dataFile.close();
    } else {
        Serial.println("Error opening file!");
    }
}

void CanSat::connectBMP(const unsigned char* adress = 0x76){
    if (!bmp280.begin(adress)) {  
        Serial.println("BMP280 connect ERROR!");
        while (1);
    }
    else {
        Serial.println("BMP280: OK");
    }
}

char* CanSat::readTemperature() {    
    float temperature = bmp280.readTemperature();
    
    // Convert float to char array (string)
    static char buffer[20]; // buffer size
    dtostrf(temperature, 6, 2, buffer); // value, width, precision, buffer
    
    return buffer;
}

char* CanSat::readPressure() {    
    float pressure = bmp280.readPressure()/100;
    
    // Convert float to char array (string)
    static char buffer[20]; // buffer size
    dtostrf(pressure, 6, 2, buffer); // value, width, precision, buffer
    
    return buffer;
}

char* CanSat::readAltitude() {    
    float altitude = bmp280.readAltitude();
    
    // Convert float to char array (string)
    static char buffer[20]; // buffer size
    dtostrf(altitude, 6, 2, buffer); // value, width, precision, buffer
    
    return buffer;
}