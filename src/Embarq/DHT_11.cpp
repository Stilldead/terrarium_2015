#include "DHT_11.h"
#include "mock.h"

DHT_11::DHT_11 () {}

int8_t DHT_11::chkdelay(uint8_t us, uint8_t status) {
    //pinMode(pin, INPUT);
    uint8_t pin = 1;
    double t = mock::myMock_micros();
    while(mock::myMock_DigitalRead(pin) == status) // wait for a status variation
        if ((mock::myMock_micros() - t) > us) return 1;  // or a timeout
    return 0;
}

int8_t DHT_11::read(uint8_t pin) {
    uint8_t bytes[5]; // input buffer
    uint8_t cnt = 7;
    uint8_t idx = 0;
    uint8_t chksum;
    unsigned long t;

    sensorPin = pin;

    // Initialize the buffer
    for (uint8_t i=0; i< 5; i++) bytes[i] = 0;

    // Verify if the data line is busy
    if (!chkdelay(100, HIGH)) return -3; // data line busy

    // Send Start signal
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
    delay(18);
    digitalWrite(pin, HIGH);
    delayMicroseconds(40);

    // Wait the Acknowledge signal
    if (chkdelay(100, LOW)) return -2;  // Timeout
    if (chkdelay(100, HIGH)) return -2; // Timeout

    // Read data output from the sensor
    for (int i=0; i<40; i++)
    {
        if (chkdelay(60, LOW)) return -2;  // Timeout
        t = micros();
        if (chkdelay(80, HIGH)) return -2; // Timeout

    if ((micros() - t) > 40) bytes[idx] += (1 << cnt); // bit 1 received

    if (cnt == 0)   // end of the byte
    {
        cnt = 7;    // reset at MSB
        idx++;      // point to next byte
    }
    else cnt--;
    }

    // Update variables
    // bytes[1] and bytes[3] are allways zero
    humidity    = bytes[0];
    temperature = bytes[2];

    // Verify the Checksum value
    chksum = bytes[0] + bytes[2];
    if (chksum != bytes[4]) return -1; // checksum error

    return 0; // OK
}

uint8_t DHT_11::getHumidity() {

}

uint8_t DHT_11::getTemperature() {

}