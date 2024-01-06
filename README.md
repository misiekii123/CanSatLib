# CanSat
 Arduino library for **SpaceCoffee CanSat**

## Configuration
```cpp
CanSat myCanSat(sd_reader_cs_pin);
```

## Saving data on SD card
```cpp
myCanSat.saveData(file_name, text_to_save);
```
