#include <stdint.h>

#ifndef __DHT_11__H
#define __DHT_11__H

class DHT_11 {
    private:
        uint8_t pin;                                    // default sensor pin
        uint8_t temperature;                            // temperature value
        uint8_t Humidity;                               // humidity value

        int8_t chkdelay(uint8_t us, uint8_t status);    // check level duration
    public:
        int8_t read(uint8_t pin);                       // read sensor data
        uint8_t getHumidity();                            // get the humidity value (unit8)
        uint8_t getTemperature();                         // get the temperature value (unit8)
};

#endif