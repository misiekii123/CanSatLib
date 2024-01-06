# CanSat
 Arduino library for **SpaceCoffee CanSat**

## Downloading
Download the zip with code and unpack it to libraries folder. In Windows: `Documents/Arduino/libraries`

## Configuration
```cpp
#include "CanSat.h"
```

In setup:
```cpp
CanSat myCanSat(sd_reader_cs_pin);
```

## Saving data on SD card
```cpp
myCanSat.saveData(file_name, text_to_save);
```
