#include "mock.h"
#include <chrono>
#include <stdlib.h>     /* srand, rand */
#include <unistd.h>



double mock::myMock_micros() {
    auto start = std::chrono::high_resolution_clock::now();
    //usleep(2000);
    auto elapsed = std::chrono::high_resolution_clock::now() - start;

    long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
    return microseconds;
}

uint8_t mock::myMock_DigitalRead(uint8_t pin) {
    int random = rand() % 80;
    usleep(random);
    if(random % 2 == 0)
        return 1;
    else
        return 0;
}