#include "mock.h"
#include <stdlib.h>     // srand, rand
#include <unistd.h>     // usleep
#include <sys/time.h>   // gettimeofday



double mock::myMock_micros() {
    struct timeval tv;
    gettimeofday(&tv,NULL);
    return tv.tv_usec;
}

uint8_t mock::myMock_DigitalRead(uint8_t pin) {
    int random = rand() % 100;
    usleep(random);
    if(random < 50)
        return 1;
    else
        return 0;
}