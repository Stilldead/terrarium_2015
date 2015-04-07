#include "DHT_11.h"

int8_t chkdelay(uint8_t us, uint8_t status) {
    pinMode(pin, INPUT);
    unsigned long t = micros();
    while(digitalRead(pin) == status) // wait for a status variation
        if ((micros() - t) > us) return 1;  // or a timeout
    return 0;
}

int8_t read(uint8_t pin) {

}

uint8_t getHumidity() {

}

uint8_t getTemperature() {

}