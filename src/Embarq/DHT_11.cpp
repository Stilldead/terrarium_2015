#include "DHT_11.h"
#include "mock.h"

int8_t chkdelay(uint8_t us, uint8_t status) {
    //pinMode(pin, INPUT);
    uint8_t pin = 1;
    unsigned long t = mock::myMock_micros();
    while(mock::myMock_DigitalRead(pin) == status) // wait for a status variation
        if ((mock::myMock_micros() - t) > us) return 1;  // or a timeout
    return 0;
}

int8_t read(uint8_t pin) {

}

uint8_t getHumidity() {

}

uint8_t getTemperature() {

}