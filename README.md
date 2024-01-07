# CanSat
 Arduino library for **SpaceCoffee CanSat**.

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
You can download them from libraries manager in Arduino IDE.
```cpp
#include "CanSat.h"

#define sd_reader_cs_pin 4
```

In setup:
```cpp
CanSat myCanSat(sd_reader_cs_pin);
```

## Saving data on SD card
```cpp
myCanSat.saveData(file_name, text_to_save);
```
